/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:45:49 by vpildaer          #+#    #+#             */
/*   Updated: 2026/04/13 10:40:31 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*h;
	char	*n;
	size_t	templen;

	if (*little == 0)
		return ((char *)big);
	while (*big && len > 0)
	{
		h = (char *)big;
		n = (char *)little;
		templen = len;
		while (*n && *h && *h == *n && templen > 0)
		{
			h++;
			n++;
			templen--;
		}
		if (*n == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
