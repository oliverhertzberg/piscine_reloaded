#include <unistd.h>
#include <fcntl.h>

void	readf(char *file)
{
	int	fd;
	char	buffer[1024];
	ssize_t bytes_read;
       	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Failed to read file", 21); 
	}
	bytes_read = read(fd, buffer, 1024);
	if (bytes_read > 0)
		write(1, buffer, bytes_read);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name is missing.\n", 22);
		return (-1);
	}
	else if (argc > 2)
	{
		write (1, "Too many arguments.\n", 21);
		return (-1);
	}	
	readf(argv[1]);
	return (0);
}
