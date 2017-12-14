/*
** EPITECH PROJECT, 2017
** my_putstr_thing_process.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	condition(const char *str)
{
	int	i = 0;

	if (str[i] < 32 || str[i] >= 127)
		my_put_nbr_octal_unsigned_process(str[i]);
	else
		my_putchar_process(str[i]);
}

void	my_putstr_thing_process(const char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] < 10){
			my_putchar_process('\\');
			my_putstr_process("00");
		}
		if (str[i] > 9 && str[i] < 99) {
			my_putchar_process('\\');
			my_putstr_process("0");
		}
		condition(str);
		i++;
	}
}
