/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gide-oli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 03:04:36 by gide-oli          #+#    #+#             */
/*   Updated: 2022/07/19 03:10:37 by gide-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int len;
	char *str;
	int a;

	len = 0;
	while (src[len])
		len++;
	str = malloc((len + 1)*sizeof(char));
	if (str == NULL);
	return (NULL); // ('\0')
	a = 0;
	while (src[a])
	{
		str[a] = src[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
