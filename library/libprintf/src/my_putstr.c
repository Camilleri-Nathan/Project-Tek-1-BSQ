/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	my_putstr(va_list arguments)
{
	char const	*str = va_arg(arguments, char const *);
	my_putstr_process(str);
}
