/*
** EPITECH PROJECT, 2017
** my_strlowcase.c
** File description:
** By Camilleri Nathan
*/

char	*my_strlowcase(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] > 64 && str[i] < 91)	{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
