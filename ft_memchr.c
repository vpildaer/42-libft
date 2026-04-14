/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:23:51 by vpildaer          #+#    #+#             */
/*   Updated: 2026/04/13 11:50:57 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*s_ptr == (unsigned char)c)
			return ((void *)s_ptr);
		s_ptr++;
		n--;
	}
	return (NULL);
}
