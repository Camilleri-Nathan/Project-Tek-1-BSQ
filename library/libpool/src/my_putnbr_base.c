/*
** EPITECH PROJECT, 2017
** my_putnbr_base.c
** File description:
** By Camilleri Nathan
*/

void	my_putchar(char);

static int	my_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int	my_putnbr_base(int nbr, char *base)
{
	int	len;

	len = my_strlen(base);
	if (nbr < 0) {
		nbr = nbr * -1;
		my_putchar('-');
	}
	if (nbr == 0)
		return (0);
	else
		my_putnbr_base(nbr / len, base);
	my_putchar(base[nbr % len]);
	return (0);
}
