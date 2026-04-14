/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpildaer <vpildaer@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:56:15 by vpildaer          #+#    #+#             */
/*   Updated: 2026/03/15 01:59:43 by vpildaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	old_i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		old_i = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > old_i)
			count++;
	}
	return (count);
}

static char	*str_sub(char const *s, char c, size_t *i, size_t strlen)
{
	size_t	old_i;
	int		j;
	char	*res;

	while (s[*i] == c)
		*i = *i + 1;
	old_i = *i;
	while (*i < strlen && s[*i] != c)
		*i = *i + 1;
	if (*i == old_i)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (*i - old_i + 1));
	if (res == NULL)
		return (NULL);
	*i = old_i;
	j = 0;
	while (*i < strlen && s[*i] != c)
	{
		res[j] = s[*i];
		*i = *i + 1;
		j++;
	}
	res[j] = 0;
	return (res);
}

static char	**ft_free(char **res, int str_i)
{
	int	i;

	i = 0;
	while (i <= str_i)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	**res_fill(char const *s, char c, char **res, size_t strlen)
{
	size_t	i;
	int		str_i;
	char	*substr;

	i = 0;
	str_i = 0;
	while (i < strlen)
	{
		substr = str_sub(s, c, &i, strlen);
		if (substr != NULL)
		{
			res[str_i] = ft_strdup((const char *) substr);
			free(substr);
			if (res[str_i] == NULL)
				return (ft_free(res, str_i));
			str_i++;
		}
	}
	res[str_i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	strlen;
	int		word_count;
	char	**res;

	strlen = ft_strlen(s);
	word_count = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (res == NULL)
		return (NULL);
	res = res_fill(s, c, res, strlen);
	if (res == NULL)
		return (NULL);
	return (res);
}
