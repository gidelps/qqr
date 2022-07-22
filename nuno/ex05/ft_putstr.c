/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gide-oli <gide-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:21:03 by nhenriqu          #+#    #+#             */
/*   Updated: 2022/07/21 00:09:32 by gide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}
void	ft_putstr(char *str);

int	main(void)
{
	char *str = "alow galera\n";

	ft_putstr(str);
	return (0);
}
