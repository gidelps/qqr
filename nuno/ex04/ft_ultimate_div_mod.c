/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:19:45 by nhenriqu          #+#    #+#             */
/*   Updated: 2022/07/20 17:17:25 by nhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	printf("%d %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}*/
