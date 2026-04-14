/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:35:02 by vpildaer          #+#    #+#             */
/*   Updated: 2026/03/11 14:43:21 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	int				res;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	res = 0;
	while (n > 0 && res == 0)
	{
		res = *s1_ptr - *s2_ptr;
		s1_ptr++;
		s2_ptr++;
		n--;
	}
	return (res);
}
