/*
** EPITECH PROJECT, 2017
** value_pointer_hexa.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	value_pointer_hexa(va_list arguments)
{
	unsigned long	nb = va_arg(arguments, unsigned long);
	value_pointer_hexa_process(nb);
}
