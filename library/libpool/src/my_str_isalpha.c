/*
** EPITECH PROJECT, 2017
** my_str_isalpha.c
** File description:
** By Camilleri Nathan
*/

int	my_str_isalpha(char const *str)
{
	int	i = 0;

	while (str[i] != '\0')	{
		if ((str[i] > 64 && str[i] < 91) || str[i] == ' ')
			i++;
		else if ((str[i] > 96 && str[i] < 123) || str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}
