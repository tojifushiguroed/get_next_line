#include "get_next_line.h"
#include <stdio.h>

// int main()
// {
// 	int fd;
// 	fd = open("a.txt", O_RDONLY);
// 	int len;
// 	char str[10000];
// 	len = read(fd,str,10000);
// 	while(len >= 0)
// 	{
// 		printf("%c",str[len]);
// 		len--;
// 	}
// 	return (0);
// }

// int main()
// {
// 	int fd = open("a.txt", O_RDONLY);
// 	char *line =  "hello";
// 	while (line != NULL)
// 	{
// 		line = get_next_line(fd);
// 		printf("%s", line);
// 		free(line);
// 	}
// 	return (0);
// }

// int main()
// {
// 	char *line;
// 	line = get_next_line(0);
// 	printf("%s", line);
// 	free(line);
// 	system("leaks a.out");
// 	return (0);
// }

// int main()
// {
// 	int fd;
// 	char *line;
// 	fd = open("get_next_line.c", O_RDONLY);
// 	while (line != NULL)
// 	{
// 		line = get_next_line(fd);
// 		printf("%s", line);
// 		free(line);
// 	}
// 	return (0);
// }

// int main()
// {
// 	int fd = open("b.txt", O_RDONLY);
// 	int fd1 = open("a.txt", O_RDONLY);

// 	char *line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);

// 	line = get_next_line(fd);
// 	printf("%s\n", line);
// 	free(line);

// 	line = get_next_line(fd1);
// 	printf("%s\n", line);
// 	free(line);
// 	//system("leaks a.out");
// 	return (0);
// }

// bana tek seferde bir satır ilk dosyadan bir satır ikinci
//dosyadan olucak şekilde yazdır ve leak bırakma.

//bir dosyanında sadece son satırını yazdır.

// int main()
// {
// 	int fd;
// 	int fd2;
// 	fd = open("get_next_line.h", O_RDONLY);
// 	fd2 = open("get_next_line_bonus.h", O_RDONLY);
// 	char *line;
// 	char *line2;
// 	line = get_next_line(fd);
// 	line2 = get_next_line(fd2);
// 	while(line || line2)
// 	{
// 		if(line)
// 		{
// 			printf("%s", line);
// 			free(line);
// 			line = get_next_line(fd);
// 		}
// 		if(line2)
// 		{
// 			printf("%s", line2);
// 			free(line2);
// 			line2 = get_next_line(fd2);
// 		}
// 	}
// }

// int main()
// {
//     char *line;
//     int fd = open("b.txt", O_RDONLY);

//     while ((line = get_next_line(fd)) != NULL)
//         free(line);

//     line = get_next_line(fd);
//     if (line != NULL)
//     {
//         printf("%s", line);
//         free(line);
//     }

//     close(fd);
//     return (0);
// }?
