/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** By Camilleri Nathan
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void percent(char *str, int i)
{
	if (str[i + 1] == '%') {
		my_putchar_process('%');
		i++;
	}
}

void	my_printf(char *str, ...)
{
	int	i = 0;

	va_list arguments;
	va_start(arguments, str);
	while (str[i] != '\0') {
		if (str[i] == '%' && str[i + 1] != '\0') {
			percent(str, i);
			i += flag_handler(str[i + 1], arguments);
			i += 1;
		}
		else
			my_putchar_process(str[i]);
		i++;
	}
	va_end(arguments);
}

int	flag_handler(char flag, va_list arguments)
{
	char	*str = "sciduoxXbSp\0";
	int	i = 0;
	void	(*arr[12])(va_list);

	while (str[i] != flag)
		i++;
	if (i == my_strlen(str))
		return (my_putchar_process('%'), 0);
	arr[0] = &my_putstr;
	arr[1] = &my_putchar;
	arr[2] = arr[3] = &my_put_nbr;
	arr[4] = &my_put_nbr_unsigned;
	arr[5] = &my_put_nbr_octal_unsigned;
	arr[6] = &my_put_nbr_hexa_min_unsigned;
	arr[7] = &my_put_nbr_hexa_maj_unsigned;
	arr[8] = &my_put_nbr_bin_unsigned;
	arr[9] = &my_putstr_thing;
	arr[10] = &value_pointer_hexa;
	(*arr[i])(arguments);
	return (0);
}
