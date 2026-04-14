/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:21:55 by vpildaer          #+#    #+#             */
/*   Updated: 2026/03/15 12:00:54 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = (char *)s;
	while (*res)
		res++;
	while (res >= s)
	{
		if (*res == (char)c)
			return (res);
		res--;
	}
	return (NULL);
}
