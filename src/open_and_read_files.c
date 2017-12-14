/*
** EPITECH PROJECT, 2017
** open_and_read_files.c
** File description:
** By Camilleri Nathan
*/


#include "my.h"
#include "printf.h"

int	my_line_strlen(char *c)
{
	int	i = 0;

	while (c[i] != '\n') {
		i++;
	}
	return (i);
}

int	open_and_read_files(char *pathname)
{
	int	fd = open(pathname, O_RDONLY);
	char	*buffer = NULL;
	char	buffertmp[10];
	struct stat sb;
	int	recup_i = 0;

	if (fd == -1) {
		my_printf("FAILURE\n");
		exit(84);
	}
	stat(pathname, &sb);
	read(fd, buffertmp, 10);
	recup_i = my_line_strlen(buffertmp);
	close(fd);
	fd = open(pathname, O_RDONLY);
	read(fd, buffertmp, recup_i + 1);
	buffer = malloc(sizeof(char) * sb.st_size );
	read(fd, buffer, sb.st_size);
	my_printf("%s\n", buffer);
	return (0);
}
