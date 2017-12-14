/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	my_put_nbr(va_list arguments)
{
	int	nb = va_arg(arguments, int);
	my_put_nbr_process(nb);
}
