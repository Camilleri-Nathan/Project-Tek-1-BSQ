/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** By Camilleri Nathan
*/

void	my_putchar(char c);

int	my_getnbr(char *str)
{
	long	nombre = 0;
	int	index = 0;
	char	sign = 1;

	while (str[index] == '-' || str[index] == '+') {
		if (str[index] == '-') {
			sign = sign * -1;
		}
		index = index + 1;
	}
	while ('0' <= str[index] && str[index] <= '9') {
		nombre = nombre * 10 + (str[index] - 48);
		index = index + 1;
	}
	if (-2147483648 <= nombre && nombre <= 2147483647)
		return (nombre * sign);
	return (0);
}
