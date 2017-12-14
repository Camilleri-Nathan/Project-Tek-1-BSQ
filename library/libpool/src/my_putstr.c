/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** By Camilleri Nathan
*/

#include "../include/pool.h"

void	my_putstr(char const *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}
