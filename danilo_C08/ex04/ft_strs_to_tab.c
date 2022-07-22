/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanilo <ddanilo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:22:10 by ddanilo           #+#    #+#             */
/*   Updated: 2022/07/19 17:33:35 by ddanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

#include <string.h>

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*my_strclone(char *str, int size)
{
	char	*out;
	int		i;

	out = malloc(size);
	i = 0;
	while (i < size)
	{
		out[i] = str[i];
		i++;
	}
	return (out);
}

struct s_stock_str	*str_to_stock(char *str)
{
	t_stock_str	*out;
	int			size;

	out = malloc(24);
	out->str = str;
	size = my_strlen(str);
	out->copy = my_strclone(str, size);
	out->size = size;
	return (out);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*out_tab;
	t_stock_str	*out;
	int			i;

	out_tab = malloc(24 * ac + 1);
	i = 0;
	while (i < ac)
	{
		out = str_to_stock(av[i]);
		out_tab[i] = *out;
		free(out);
		i++;
	}
	out_tab[i] = *str_to_stock("");
	return (out_tab);
}
