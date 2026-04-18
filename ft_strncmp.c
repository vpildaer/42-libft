/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 14:36:38 by vpildaer          #+#    #+#             */
/*   Updated: 2026/04/18 12:52:48 by vpildaer         ###   ########.fr       */
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
