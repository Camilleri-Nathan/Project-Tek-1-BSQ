/*
** EPITECH PROJECT, 2017
** my_strstr.c
** File description:
** By Camilleri Nathan
*/

char const	*my_strstr(char const *str, char const *to_find)
{
	int	i = 0;
	int	j = 0;

	while (str[i] != '\0') {
		if (to_find[j] == str[i])
			j++;
		else {
			if (j > 0)
				i++;
			j = 0;
			i--;
		}
		if (to_find[j] == '\0')	{
			i++;
			return (str + i - j);
		}
		i++;
	}
	return (0);
}
