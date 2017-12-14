/*
** EPITECH PROJECT, 2017
** my_put_nbr_octal_unsigned_process.c
** File description:
** By Camilleri Nathan
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/printf.h"

void	my_put_nbr_octal_unsigned_process(unsigned int nb)
{
	int	modi;

	if (nb > 0) {
		if (nb >= 7) {
			modi = (nb % 8);
			nb = (nb - modi) / 8;
			my_put_nbr_octal_unsigned_process(nb);
			my_putchar_process(48 + modi);
		} else {
			my_putchar_process(48 + nb % 8);
		}
	}
}
