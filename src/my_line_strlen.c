/*
** EPITECH PROJECT, 2017
** my_line_strlen.c
** File description:
** By Camilleri Nathan
*/

#include "my.h"

int	my_strlen_line(char *str)
{
	int	index = 0;

	while (str[index] != '\0' && str[index] != '\n')
		index++;
	return (index + 1);
}
