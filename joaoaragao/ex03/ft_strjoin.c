/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaragao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:02:31 by jaragao-          #+#    #+#             */
/*   Updated: 2022/07/20 20:54:52 by jaragao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*fill_str(char *joint, char **src, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -1;
	k = 0;
	while (src[++i])
	{
		j = -1;
		while (src[i][++j])
			joint[k++] = src[i][j];
		l = -1;
		while (src[i + 1] && sep[++l])
			joint[k++] = sep[l];
	}
	return (joint);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joint;
	int		len;
	int		i;

	i = -1;
	len = 0;
	while (strs[++i])
	{
		if (!strs[i + 1])
			len += ft_strlen(strs[i]);
		else
			len += (ft_strlen(strs[i]) + ft_strlen(sep));
	}
	joint = malloc((len + 1) * sizeof(char));
	if (joint == NULL)
		return (0);
	if (!size)
		return (joint);
	joint = fill_str(joint, strs, sep);
	joint[len] = '\0';
	return (joint);
}
