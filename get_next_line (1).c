#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// Note: a buffer is used to collect data from the stream e.g files, socket, device.
// Note again when the buffer becomes full the consumer of the stream consume
// data from the buffer till it depletes for it to be use again
#define BUFFER_SIZE 42

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
char *ft_strjoin(char *str1, char *str2)
{
	// type name for storing the two calculated length
	char *container;
	// checking the string position
	size_t i;
	// checking the position of the string in the container
	size_t j;
	// checking for the presence of two string
	if (!str1 || !str2)
		return (NULL);
	// calculating the length of the string
	container = (char *)malloc(sizeof(char *) * ft_strlen(str1) + ft_strlen(str2) + 1);
	// returning a null container
	if (!container)
		return (NULL);
	// checking the position of the first position
	i = 0;
	// checking the position of the container
	j = 0;
	while (str1[i])
	{
		container[j++] = str1[i];
		i++;
	}
	i = 0;
	// checking the position of the first string
	while (str2[i])
	{
	// checking the position of the container
		container[j++] = str2[i];
		i++;
	}
	// terminating the container
	container[j] = '\0';
	return (container);
}
char	*ft_get_line(char *save)
{
	// type name for position of the string
	int		i;
	// container for the length calculated
	char	*s;

	i = 0;
	// checking for the presence of the string
	if (!save[i])
		return (NULL);
	// checking the first line of the string and the second line
	while (save[i] && save[i] != '\n')
	// incrementing the position of the string
		i++;
	// storage container after calculating the length
	s = (char *)malloc(sizeof(char) * (i + 2));
	// checking for the presence of the string
	if (!s)
		return (NULL);
	i = 0;
	// checking two string at a time and storing it in the container
	while (save[i] && save[i] != '\n')
	{
		// checking the first string in the container
		s[i] = save[i];
		i++;
	}
	// checking the second condition of the string
	if (save[i] == '\n')
	{
		// storing the second string in the same container
		s[i] = save[i];
		// incrementing
		i++;
	}
	// terminating both string in the container
	s[i] = '\0';
	// returning the container
	return (s);
}

char	*ft_save(char *save)
{
	// the type name is used to check the position of the string
	int		i;

	int		c;
	// the type name for getting the string length
	char	*s;

	i = 0;
	// we provide two string; checking the first and second string 'cause, we'll be reading the next line
	while (save[i] && save[i] != '\n')
	// incrementing the string position
		i++;
	// checking the first string if present or not
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	// calculating string length and store it in the declared type name
	s = (char *)malloc(sizeof(char) * (ft_strlen(save) - i + 1));
	// checking if it is present or not
	if (!s)
		return (NULL);
	// increment the second string position
	i++;
	// giving the container its position number
	c = 0;
	while (save[i])
	// store the first string in the container
		s[c++] = save[i++];
	// terminating the first string
	s[c] = '\0';
	// free the first string;
	free(save);
	// returning the container
	return (s);
}

char	*ft_read_and_save(int fd, char *save)
{
	// needed data type for the allocation
	char	*buff;
	// storage device for storing the number of byte in the fd
	int		read_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	//check the  function ft_strchr and the position of the index
	while (!ft_strchr(save, '\n') && read_bytes != 0)
	{
		// getting the number of the byte in index
		read_bytes = read(fd, buff, BUFFER_SIZE);
		// checking the file descriptor with the function read
		if (read_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		// terminating the container
		buff[read_bytes] = '\0';
		// joining the string to save and saving it
		save = ft_strjoin(save, buff);
	}
	// free the size of the buffer
	free(buff);
	// return the joined string
	return (save);
}

char	*get_next_line(int fd)
{
	// the data type line is used to get the string line
	char		*line;
	// this data type save is used to save each line of the string
	static char	*save;
// return null file descriptor and return also null buffer
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
// reading and saving each string in the file descriptor
	save = ft_read_and_save(fd, save);
// return a null string
	if (!save)
		return (NULL);
// getting the string line and saving it in the type name line
	line = ft_get_line(save);
// getting the string and saving it in the type name save
	save = ft_save(save);
	return (line);
}
int main()
{
	get_next_line(1);
	return (0);
}