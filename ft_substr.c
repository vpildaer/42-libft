/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:27:05 by vpildaer          #+#    #+#             */
/*   Updated: 2026/04/14 12:22:44 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	size_t			strlen;
	char			*res;

	strlen = ft_strlen(s);
	if (start > strlen)
		start = strlen;
	if (start + len > strlen)
		len = strlen - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = 0;
	return (res);
}
