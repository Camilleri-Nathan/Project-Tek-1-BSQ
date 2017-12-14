/*
** EPITECH PROJECT, 2017
** my_putstr_process.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	my_putstr_process(char const *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		my_putchar_process(str[i]);
		i++;
	}
}
