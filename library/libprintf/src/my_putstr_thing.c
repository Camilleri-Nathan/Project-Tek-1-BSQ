/*
** EPITECH PROJECT, 2017
** my_putstr_thing.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	my_putstr_thing(va_list arguments)
{
	const char	*str = va_arg(arguments, const char *);
	my_putstr_thing_process(str);
}
