/*
** EPITECH PROJECT, 2017
** printf.h
** File description:
** By Camilleri Nathan
*/

#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void	my_printf(char *str, ...);

void	my_put_nbr_bin_unsigned_process(unsigned int nb);
void	my_put_nbr_bin_unsigned(va_list arguments);

void	my_put_nbr_hexa_maj_unsigned_process(unsigned int nb);
void	my_put_nbr_hexa_maj_unsigned(va_list arguments);

void	my_put_nbr_hexa_min_unsigned_process(unsigned int nb);
void	my_put_nbr_hexa_min_unsigned(va_list arguments);

void	my_put_nbr_octal_unsigned_process(unsigned int nb);
void	my_put_nbr_octal_unsigned(va_list arguments);

void	my_put_nbr_unsigned_process(unsigned int nb);
void	my_put_nbr_unsigned(va_list arguments);

void	my_putstr_thing_process(const char *str);
void	my_putstr_thing(va_list arguments);

void	my_put_nbr_process(int nb);
void	my_put_nbr(va_list arguments);

void	my_putstr_process(char const *str);
void	my_putstr(va_list arguments);

void	my_putchar_process(char c);
void	my_putchar(va_list arguments);

void	value_pointer_hexa_process(unsigned long nb);
void	value_pointer_hexa(va_list arguments);

void	my_put_nbr_hexa_min_unsigned_long_process(unsigned long nb);

int	flag_handler(char flag, va_list arguments);
int	my_strlen(char *str);

#endif
