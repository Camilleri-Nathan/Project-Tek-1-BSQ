/*
** EPITECH PROJECT, 2017
** get_width.c
** File description:
** By Camilleri Nathan
*/

#include "my.h"

int	get_width(char *str)
{
	int	index = 0;

	index = my_strlen_line(str);
	while (str[index] != '\0' && str[index] != '\n')
		index++;
	return (index);
}
