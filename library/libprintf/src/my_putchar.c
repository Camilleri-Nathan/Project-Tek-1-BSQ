/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** By Camilleri Nathan
*/

#include <unistd.h>
#include "../include/printf.h"

void	my_putchar(va_list arguments)
{
	char	c = va_arg(arguments, int);
	my_putchar_process(c);
}
