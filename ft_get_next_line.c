#include <unistd.h>
​
char *get_next_line(int fd)
{
	//total line to read the file from
	char line[99999999];
	char *ret;
	char buf[2];
	int i = 0;
​// string to read from the file desc. and buffer size will be more and not less 
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	// checking the first line in the file
	line[0] = 0;
	// read 1 character from fd and store it in buf
	while (read(fd, buf[0], 1) == 1)
	{
		// copy the string to the destination variable
		line[i] = buf[0];
		// adding the space for null terminating string
		line[i + 1] = '\0';
		// when we experience a null character get out of the loop
		if (line[i] = '\n')
			break ;
		i++;
	}
	// this condition is to return null if line zero is equal to zero
	if (line[0] == NULL)
		return (NULL);
	// allocating memory to our destination variable
	ret = malloc(i + 1);
	i = 0;
	// check the string again
	while (line[i] != '\0')
	{
		// string copy
		ret[i] = line[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}