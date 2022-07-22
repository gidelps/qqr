/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 20:58:10 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/20 15:17:39 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	comprimento;
	int	i;
	int	*array;

	if (min >= max)
	{
		return (0);
	}
	comprimento = max - min;
	array = malloc(comprimento * sizeof(int));
	if (array == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < comprimento)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
