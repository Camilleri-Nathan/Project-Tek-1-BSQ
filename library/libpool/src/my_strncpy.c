/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** By Camilleri Nathan
*/

char	*my_strncpy ( char *dest , char const *src, int n)
{
	int	i = 0;

	while (dest[i] != '\0'|| i == n) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
