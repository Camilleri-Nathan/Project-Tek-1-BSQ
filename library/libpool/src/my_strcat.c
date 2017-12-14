/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** By Camilleri Nathan
*/

char	*my_strcat(char *dest, char const *src)
{
	int	i = 0;

	while (dest[i] != '\0') {
		i = i + 1;
	}
	while (*src != '\0') {
		dest[i] = *src++;
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
