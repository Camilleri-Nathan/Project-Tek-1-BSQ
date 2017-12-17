/*
** EPITECH PROJECT, 2017
** algoritm.c
** File description:
** By Camilleri Nathan
*/

#include "my.h"

void	algo(char **map)
{
	int	coordinate_x = 0;

	while (map[0][coordinate_x] != '\0')
		first_cols_and_line(map, coordinate_x++, 0);
	coordinate_x = 0;
	while (map[coordinate_x] != NULL)
	first_cols_and_line(map, 0, coordinate_x++);
}

void	first_cols_and_line(char **map, int coordinate_x, int coordinate_y)
{
	if (map[coordinate_y][coordinate_x] == '.')
		map[coordinate_y][coordinate_x] = '1';
	else if (map[coordinate_y][coordinate_x] == 'o')
		map[coordinate_y][coordinate_x] = '0';
}


void	algo_2(char **map, int test)
{
	int	coordinate_x = test;

	while (map[test][coordinate_x] != '\0')
		other_cols_and_line(map, coordinate_x++, test);
	coordinate_x = test;
	while (map[coordinate_x] != NULL)
		other_cols_and_line(map, test, coordinate_x++);
}

void	other_cols_and_line(char **map, int coordinate_x, int coordinate_y)
{

	if (map[coordinate_y][coordinate_x] == '.')
	{
		other_cols_and_line_2(map, coordinate_x, coordinate_y);
	}
	else if (map[coordinate_y][coordinate_x] == 'o')
		map[coordinate_y][coordinate_x] = '0';
}


void	other_cols_and_line_2(char **map, int coordinate_x, int coordinate_y)
{
	int	number = -1;
	int	temporary = 0;

	number = map[coordinate_y][coordinate_x - 1] - 48;
	if (number > 0)
		temporary = number;
	number = map[coordinate_y - 1][coordinate_x - 1] - 48;
	if (number < temporary && number >= 0)
		temporary = number;
	number = map[coordinate_y - 1][coordinate_x] - 48;
	if (number < temporary && number >= 0)
		temporary = number;
	map[coordinate_y][coordinate_x] = (temporary + 1) + 48;
}
