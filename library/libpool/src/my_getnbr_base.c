/*
** EPITECH PROJECT, 2017
** my_getnbr_base.c
** File description:
** By Camilleri Nathan
*/

int	condition(char *str, char *base, int i);

static int	my_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int	my_getnbr_base(char *str, char *base, int i)
{
	int	nbr = 0;
	int	sy = 1;

	if (str[0] == '-') {
		sy *= -1;
		str = &str[1];
	}
	i = my_strlen(str) - 1;
	condition(str, base, i);
	return (nbr * sy);
}

int	condition(char *str, char *base, int i)
{
	int	j;
	int	nbr = 0;
	int	m = 1;

	while (i >= 0) {
		j = 0;
		while (str[i] != base[j])
			j++;
		nbr = nbr + j * m;
		m = m * my_strlen(base);
		i--;
	}
	return (0);
}
