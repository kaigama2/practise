#include "libft.h"
void ft_read(int fd)
{
	char store[buff];
	// writing into the file descriptor
	fd = open ("text.txt", O_CREAT | O_WRONLY, 0600);
	if (fd == - 1)
	{
		printf("print nothing if fail to write into the created file\n");
		exit (1);
	}
	write (fd, "Fire on fire is the only music I love to play with\n", 51);
	close (fd);
	// reading from the file descriptor
	fd = open ("text.txt", O_RDONLY);
	if (fd == - 1)
	{
		printf("please don't print anything if it fails\n");
		exit (1);
	}
	read(fd, store, 51);
	store[50] = '\0';
	close (fd);
	printf ("%s\n", store);
}
