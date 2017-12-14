/*
** EPITECH PROJECT, 2017
** my_put_nbr_hexa_maj_unsignedpr.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	my_put_nbr_hexa_maj_unsigned_process(unsigned int nb)
{
	unsigned int	power = 1;

	while (power < nb)
		power *= 16;
	power /= 16;

	while (nb > 0) {
		if (nb / power > 9)
			my_putchar_process(nb / power + 55);
		else
			my_put_nbr_unsigned_process(nb / power);
		nb = nb % power;
		power = power / 16;
	}
	if (nb == 0)
		my_put_nbr_process(0);
}
