/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** By Camilleri Nathan
*/

#include "my.h"

char	*my_strcpy(char *dest, char *src, int *coordinate_x)
{
	int	coordinate_y = 0;

	while(src[*coordinate_x] != '\0' && src[*coordinate_x] != '\n')
	{
		dest[coordinate_y] = src[*coordinate_x];
		coordinate_y++;
		(*coordinate_x)++;
	}
	(*coordinate_x)++;
	dest[coordinate_y] = '\0';
	return (dest);
}
