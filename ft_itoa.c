/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:13:11 by vpildaer          #+#    #+#             */
/*   Updated: 2026/03/15 11:35:49 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	to_allocate(long n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*res_fill(long nb, size_t strlen, char *res)
{
	size_t	i;

	i = 0;
	while (nb > 0 && i < strlen)
	{
		res[strlen - i - 1] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	strlen;
	char	*res;

	nb = n;
	strlen = to_allocate(nb);
	res = (char *)malloc(sizeof(char) * (strlen + 1));
	if (res == NULL)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		res[0] = '-';
	}
	res[strlen] = 0;
	if (nb == 0)
	{
		res[0] = '0';
		return (res);
	}
	res = res_fill(nb, strlen, res);
	return (res);
}
