/*
** EPITECH PROJECT, 2017
** my_put_nbr_octal_unsigned.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	my_put_nbr_octal_unsigned(va_list arguments)
{
	unsigned int	nb = va_arg(arguments, unsigned int);
	my_put_nbr_octal_unsigned_process(nb);
}
