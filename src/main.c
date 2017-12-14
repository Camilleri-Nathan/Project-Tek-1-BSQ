/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** By Camilleri Nathan
*/

#include "my.h"
#include "printf.h"


int main(int ac, char **av)
{
	int	fd = 0;

	if (ac == 2) {
		fd = open_and_read_files(av[1]);
		close(fd);
		return (0);
	}
	else {
		return (84);
		my_printf("Wrong_nb_arguments\n");
	}
}
