/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 11:40:13 by vpildaer          #+#    #+#             */
/*   Updated: 2026/04/07 12:07:39 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*res_fill(char *res, int *i, const char *s)
{
	int	j;

	j = 0;
	while (s[j])
	{
		res[*i] = s[j];
		*i = *i + 1;
		j++;
	}
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		reslen;
	char	*res;

	reslen = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (reslen + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	res = res_fill(res, &i, s1);
	res = res_fill(res, &i, s2);
	res[i] = 0;
	return (res);
}
