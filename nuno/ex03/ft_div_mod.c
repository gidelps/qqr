/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:16:11 by nhenriqu          #+#    #+#             */
/*   Updated: 2022/07/20 17:16:10 by nhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 2;
	div = 0;
	mod = 0;
	printf("%d %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d\n", div,mod);
	return (0);
}*/
