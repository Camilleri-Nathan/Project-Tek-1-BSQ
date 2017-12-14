/*
** EPITECH PROJECT, 2017
** my_putchar_process.c
** File description:
** By Camilleri Nathan
*/

#include <unistd.h>
#include "../include/printf.h"

void	my_putchar_process(char c)
{
	write(1, &c, 1);
}
