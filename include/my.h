/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** By Camilleri Nathan
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct coordinates_s
{
	int	x;
	int	y;
	int	size;
}coordinates_t;

void	algo(char **map);
void	algo_2(char **map, int test);
int	main(int ac, char *av[]);
int	get_width(char *str);
void	first_cols_and_line(char **map, int coordinate_x, int coordinate_y);
void	other_cols_and_line(char **map, int coordinate_x, int coordinate_y);
void	other_cols_and_line_2(char **map, int coordinate_x, int coordinate_y);
void	find_the_tallest_number(char **map);
coordinates_t	*find_the_tallest_number_2_1(char **map);
void	find_the_tallest_number_2_2_1(char **map, int coordinate_x,
				      int coordinate_y, coordinates_t *coord);
void	find_the_tallest_number_2_2_2(char **map, coordinates_t *coord, int x, int y);
void	find_the_tallest_number_3(char **map, coordinates_t *coord);
int	my_getnbr(char *str);
void	my_getnbr_2(char *str);
int	my_strlen_line(char *str);
char	*my_strcpy(char *dest, char *src, int *coordinate_x);

#endif
