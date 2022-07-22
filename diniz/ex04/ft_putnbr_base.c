/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimarque <dimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:23:59 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/21 12:52:26 by dimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	repetido(char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	mais_e_menos(char *str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nb;
	}
	nb = nbr;
	len = 0;
	while (base[len] != 0)
		len++;
	if (len > 1 && repetido(base, len) == 1 && mais_e_menos(base, len) == 1
		&& nbr != 0)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putchar(base[nbr % len]);
	}
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

void	ft_putnbr_base(int nb, char *base);

int	main(int argc, char **argv)
{
	int a;
	int nbr;
	char *base;

	a = argc;
	nbr = atoi(argv[1]);
	base = argv[2];
	ft_putnbr_base(nbr, base);

}
