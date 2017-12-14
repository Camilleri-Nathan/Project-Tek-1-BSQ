/*
** EPITECH PROJECT, 2017
** my_compute_power_rec.c
** File description:
** By Camilleri Nathan
*/

int	my_compute_power_rec(int nb, int p)
{
	int resultpower = 1;

	if (p == 0)
		return (1);
	else if (p == 1)
		return (nb);
	else {
		resultpower = nb * my_compute_power_rec(nb, p - 1);
	return (resultpower);
	}
}
