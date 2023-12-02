#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * handle_error - prints an error message and exits
 * @message: the error message format
 * @file_name: the file name to include in the message
 * @exit_code: the exit code to use
 */
void handle_error(const char *message, const char *file_name, int exit_code)
{
	dprintf(2, message, file_name);
	exit(exit_code);
}

/**
 * close_file_descriptors - closes file descriptors and exits on failure
 * @fd_from: file descriptor to close
 * @fd_to: file descriptor to close
 */
void close_file_descriptors(int fd_from, int fd_to)
{
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}
}

/**
 * copy_file - copies content from one file to another
 * @file_from: source file
 * @file_to: destination file
 */
void copy_file(const char *file_from, const char *file_to)
{
	/*Implementation of file copying logic here*/
}

/**
 * process_arguments - validates the number of command-line arguments
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 */
void process_arguments(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
}

/**
 * open_source_file - opens the source file for reading
 * @source_file: name of the source file
 * @return: file descriptor of the source file
 */
int open_source_file(const char *source_file)
{
	int fd_from = open(source_file, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}
	return fd_from;
}

/**
 * open_destination_file - opens the destination file for writing
 * @dest_file: name of the destination file
 * @return: file descriptor of the destination file
 */
int open_destination_file(const char *dest_file)
{
	int fd_to = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	return fd_to;
}

/**
 * copy_file_content - copies content from source file to destination file
 * @fd_from: file descriptor of the source file
 * @fd_to: file descriptor of the destination file
 */
void copy_file_content(int fd_from, int fd_to)
{
	int bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to destination file\n");
			close_file_descriptors(fd_from, fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from source file\n");
		close_file_descriptors(fd_from, fd_to);
		exit(98);
	}
}

int main(int argc, char *argv[])
{
	process_arguments(argc, argv);

	int fd_from = open_source_file(argv[1]);
	int fd_to = open_destination_file(argv[2]);

	copy_file_content(fd_from, fd_to);

	close_file_descriptors(fd_from, fd_to);

	return (0);
}
