/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanilo <ddanilo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:34:45 by ddanilo           #+#    #+#             */
/*   Updated: 2022/07/19 17:44:45 by ddanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	putc(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	while (str[0] != '\0')
	{
		putc(str[0]);
		str++;
	}
}

void	putn(int n)
{
	if (n == 0)
		return ;
	putn(n / 10);
	putc(n % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		putstr(par->str);
		write(1, &"\n", 1);
		if (par->size == 0)
			putc('0');
		else
			putn(par->size);
		write(1, &"\n", 1);
		putstr(par->copy);
		write(1, &"\n", 1);
		par++;
	}
}
