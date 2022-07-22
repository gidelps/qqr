/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gide-oli <gide-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:49:09 by nhenriqu          #+#    #+#             */
/*   Updated: 2022/07/21 00:11:51 by gide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;

	n = 0;
	while (n < (size / 2))
	{
		ft_swap(&tab[n], &tab[size - n -1]);
		n++;
	}
}

int	main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int size = 6;

	printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
