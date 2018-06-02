/*
** EPITECH PROJECT, 2017
** find_tallest_number.c
** File description:
** By Camilleri Nathan
*/

#include "my.h"

void	find_the_tallest_number(char **map)
{
	coordinates_t *coord;
	int	coordinate_x_temporary = -1;
	int	coordinate_y_temporary = -1;

	coord = find_the_tallest_number_2_1(map);
	coordinate_x_temporary = coord->x - (coord->size - 1);
	if (coordinate_x_temporary < 0)
		coordinate_x_temporary = 0;
	coordinate_y_temporary = coord->y - (coord->size - 1);
	if (coordinate_y_temporary < 0)
		coordinate_y_temporary = 0;
	find_the_tallest_number_3(map, coord);
}

coordinates_t	*find_the_tallest_number_2_1(char **map)
{
	coordinates_t	*coord;
	int	coordinate_x = 0;
	int	coordinate_y = 0;

	coord = malloc(sizeof(coordinates_t));
	if (coord == NULL)
		return (NULL);
	coord->x = -1;
	coord->y = -1;
	coord->size = -1;
	while (map[coordinate_y] != NULL) {
		coordinate_x = 0;
		while (map[coordinate_y][coordinate_x] != '\0') {
			find_the_tallest_number_2_2_1(map,
				coordinate_x, coordinate_y, coord);
			coordinate_x++;
		}
		coordinate_y++;
	}
	return (coord);
}

void	find_the_tallest_number_2_2_1(char **map, int coordinate_x,
				      int coordinate_y, coordinates_t *coord)
{
	if (map[coordinate_y][coordinate_x] - 48 > coord->size &&
	map[coordinate_y][coordinate_x] - 48 != 0 &&
	coord->x == -1 && coord->y == -1)
		find_the_tallest_number_2_2_2(map, coord, coordinate_x, coordinate_y);
	else if (map[coordinate_y][coordinate_x] - 48 == coord->size &&
	map[coordinate_y][coordinate_x] - 48 != 0 && coordinate_x <
	coord->x && coordinate_y < coord->y)
		find_the_tallest_number_2_2_2(map, coord, coordinate_x, coordinate_y);
	else if (map[coordinate_y][coordinate_x] - 48 > coord->size &&
	map[coordinate_y][coordinate_x] - 48 != 0)
		find_the_tallest_number_2_2_2(map, coord, coordinate_x, coordinate_y);
}

void	find_the_tallest_number_2_2_2(char **map, coordinates_t *coord, int x,
										int y)
{
	coord->size = map[y][x] - 48;
	coord->x = x;
	coord->y = y;
}

void	find_the_tallest_number_3(char **map, coordinates_t *coord)
{
	int	coordinate_x = 0;
	int	coordinate_y = coord->y - (coord->size - 1);

	while (coordinate_y <= coord->y)
	{
		coordinate_x = coord->x - (coord->size - 1);
		if (coordinate_x < 0)
			coordinate_x = 0;
		while (coordinate_x <= coord->x)
		{
			map[coordinate_y][coordinate_x] = 'x';
			coordinate_x++;
		}
		coordinate_y++;
	}
}
