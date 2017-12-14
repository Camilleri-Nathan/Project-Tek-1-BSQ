/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** By Camilleri Nathan
*/

char	*my_strupcase (char *str) {

	int	i = 0;

	while (str[i] > 96 && str[i] < 123)
		str[i] = str[i] - 32;
	i++;
	return (str);
}
