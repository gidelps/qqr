/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:07:18 by nhenriqu          #+#    #+#             */
/*   Updated: 2022/07/20 15:56:47 by nhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("%d%d\n", a, b);
	ft_swap(&a, &b);
	printf("%d%d\n", a, b);
	return (0);
}*/
