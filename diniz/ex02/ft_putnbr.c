/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gide-oli <gide-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:47:00 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/21 15:34:24 by gide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char e)
{
	write(1, &e, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else
		ft_putchar(nb + 48);
}

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	write(1, "-1: ", 4);
	ft_putnbr(-1);
	write(1, "\n1: ", 4);
	ft_putnbr(1);
	write(1, "\n-10: ", 6);
	ft_putnbr(-10);
	write(1, "\n10: ", 5);
	ft_putnbr(10);
	write(1, "\nINT_MAX: ", 10);
	ft_putnbr(INT_MAX);
	write(1, "\nINT_MIN: ", 10);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	return (0);
}
