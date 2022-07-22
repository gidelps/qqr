/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gide-oli <gide-oli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:20:53 by dimarque          #+#    #+#             */
/*   Updated: 2022/07/21 15:36:01 by gide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	numb;
	int	i;

	sign = 0;
	numb = 0;
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	while ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
	{
		numb = numb * 10 + str[i] - 48;
		i++;
	}
	if (sign % 2 != 0)
		return (numb * -1);
	return (numb);
}

int main()
{
	char str[] = "  -+--1";

	int val = ft_atoi(str);
	printf("%d", val);
	return 0;
}

//120