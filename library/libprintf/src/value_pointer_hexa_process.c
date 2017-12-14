/*
** EPITECH PROJECT, 2017
** value_pointer_hexa_process.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	value_pointer_hexa_process(unsigned long nb)
{
	my_putstr_process("0x");
	my_put_nbr_hexa_min_unsigned_long_process(nb);
}
