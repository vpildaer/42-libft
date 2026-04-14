/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:25:00 by vpildaer          #+#    #+#             */
/*   Updated: 2026/03/15 12:20:47 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	to_allocate(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (ft_strchr(set, s1[end]) != NULL)
		return (0);
	return (end - start + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		j;
	size_t	reslen;
	char	*res;

	reslen = to_allocate(s1, set);
	res = (char *)malloc(sizeof(char) * (reslen + 1));
	if (res == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	j = 0;
	while (start <= end)
	{
		res[j] = s1[start];
		start++;
		j++;
	}
	res[j] = 0;
	return (res);
}
