/*
** EPITECH PROJECT, 2017
** my_str_isnum.c
** File description:
** By Camilleri Nathan
*/

int	my_str_isnum(char const *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] > 47 && str[i] < 58) || str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}
