#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int fd;
	fd = open("a.txt", O_RDONLY);
	int len;
	char str[10000];
	len = read(fd,str,10000);
	while(len >= 0)
	{
		printf("%c",str[len]);
		len--;
	}
	return (0);
}

int main()
{
	int fd = open("a.txt", O_RDONLY);
	char *line =  "hello";
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}
	return (0);
}

int main()
{
	char *line;
	line = get_next_line(0);
	printf("%s", line);
	free(line);
	system("leaks a.out");
	return (0);
}

int main()
{
	int fd;
	char *line;
	fd = open("get_next_line.c", O_RDONLY);
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}
	return (0);
}
