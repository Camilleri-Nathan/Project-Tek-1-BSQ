/*
** EPITECH PROJECT, 2017
** my_put_nbr_unsigned_process.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	my_put_nbr_unsigned_process(unsigned int nb)
{
	int	modi;

	if (nb > 0) {
		if (nb >= 10) {
			modi = (nb % 10);
			nb = (nb - modi) / 10;
			my_put_nbr_unsigned_process(nb);
			my_putchar_process(48 + modi);
		} else {
			my_putchar_process(48 + nb % 10);
		}
	}
}
