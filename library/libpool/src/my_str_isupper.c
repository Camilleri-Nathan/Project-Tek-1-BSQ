/*
** EPITECH PROJECT, 2017
** my_str_isupper.c
** File description:
** By Camilleri Nathan
*/

int	my_str_isupper(char const *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if ((str[i] > 64 && str[i] < 91) || str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}
