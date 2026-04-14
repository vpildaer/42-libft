/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:29:35 by vpildaer          #+#    #+#             */
/*   Updated: 2026/04/14 15:25:47 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest_ptr == src_ptr || n == 0)
		return (dest);
	if (dest_ptr > src_ptr)
		i = n - 1;
	while (n > 0)
	{
		dest_ptr[i] = src_ptr[i];
		n--;
		if (dest_ptr < src_ptr)
			i++;
		else if (dest_ptr > src_ptr)
			i--;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	dest = src + 1;

	char	*res;
	res = ft_memmove(dest, "consectetur", 5);
	printf("%s", res);
	return (0);
}*/
