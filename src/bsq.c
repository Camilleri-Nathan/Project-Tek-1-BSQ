/*
** EPITECH PROJECT, 2017
** bsq.c
** File description:
** By Camilleri Nathan
*/

#include "my.h"

char	**create_map(char *buffer, int height, int width)
{
	char	**map;
	int	count = 0;
	int	i = 0;
	
	map = malloc(sizeof(char *) * (height + 1));
	if (map == NULL)
		return (NULL);
	while (count < height) {
		map[count] = malloc(sizeof(char) * (width + 1));
		if (map[count] == NULL)
			return (NULL);
		count++;
	}
	map[count] = NULL;
	count = my_strlen_line(buffer);
	while(i < height) {
		my_strcpy(map[i], buffer, &count);
		i++;
	}
	return (map);
}

void	print_board(char **map)
{
	int	x = 0;
	int	y = 0;
	
	while (map[y] != NULL)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] > '0' && map[y][x] <= '9')
				write(1, ".", 1);
			else if (map[y][x] == '0')
				write(1, "o", 1);
			else
				write(1, "x", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

int	bsq(char *buffer)
{
	char	**map;
	int	height = my_getnbr(buffer);
	int	width = get_width(buffer);
	int	count = 0;

	map = create_map(buffer, height, width);
	if (map == NULL)
		return (84);	
	algo(map);
	if (map[1] != NULL)
	{
		while (count < height)
		{
			algo_2(map, count);
			count++;
		}
	}
	find_the_tallest_number(map);
	print_board(map);
	return (0);
}

int	main(int ac, char *av[])
{
	int	fd;
	int	ret_read;
	char	*buffer;
	struct stat sb;

	if (ac != 2)
		return (84);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (84);
	if (stat(av[1], &sb) == -1)
		return (84);
	buffer = malloc(sizeof(char) * (sb.st_size + 1));
	if (buffer == NULL)
		return (84);
	ret_read = read(fd, buffer, sb.st_size);
	if (ret_read == -1)
		return (84);
	buffer[ret_read] = '\0';
	bsq(buffer);
}
