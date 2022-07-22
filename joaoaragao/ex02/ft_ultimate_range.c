/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:11:51 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/20 16:01:35 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	comprimento;
	int	*array;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	comprimento = max - min;
	array = malloc(comprimento * sizeof(int));
	if (array == NULL)
	{
		return (-1);
	}
	*range = array;
	i = 0;
	while (i < comprimento)
	{
		array[i] = min + i;
		i++;
	}
	return (comprimento);
}
