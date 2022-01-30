/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:17:13 by drossi            #+#    #+#             */
/*   Updated: 2022/01/31 00:33:17 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * TODO: Slim strsplit down to 2 functions or ideally a single one.
 */

static size_t	_wlen(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	return (length);
}

static size_t	_wcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			s += _wlen(s, c);
		}
	}
	return (count);
}

static void	*_mfree(char **m, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		free(m[i]);
	free(m);
	return (NULL);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	words;
	char	**map;
	size_t	index;
	size_t	length;

	if (!s)
		return (NULL);
	words = _wcount(s, c);
	map = (char **)malloc(sizeof(char *) * (words + 1));
	if (!map)
		return (NULL);
	map[words] = 0;
	index = -1;
	while (++index < words)
	{
		while (*s == c)
			s++;
		length = _wlen(s, c);
		map[index] = ft_strsub(s, 0, length);
		if (!map[index])
			return (_mfree(map, index));
		s += length;
	}
	return (map);
}
