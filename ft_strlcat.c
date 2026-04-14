/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:23:16 by vpildaer          #+#    #+#             */
/*   Updated: 2026/04/13 12:41:37 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	tofill;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	tofill = size - dstlen - 1;
	if (dstlen >= size)
		return (size + srclen);
	while (src[i] && tofill > 0)
	{
		dst[dstlen + i] = src[i];
		i++;
		tofill--;
	}
	dst[dstlen + i] = 0;
	return (dstlen + srclen);
}
