/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:36:38 by vpildaer          #+#    #+#             */
/*   Updated: 2026/04/14 15:19:40 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while ((s1[i] || s2[i]) && res == 0 && n > 0)
	{
		res = (unsigned char)s1[i] - (unsigned char) s2[i];
		i++;
		n--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	res = ft_strncmp("test", "testss", 7);
	printf("%d\n", res);
	res = ft_strncmp("", "test", 4);
	printf("%d\n", res);
	return (0);
}*/
