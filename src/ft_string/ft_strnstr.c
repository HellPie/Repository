/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:26:12 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 15:39:56 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_string.h"

char	*ft_strnstr(const char *h, const char *f, size_t n)
{
	size_t	start;
	size_t	curr;

	start = 0;
	curr = 0;
	if (!*f)
		return ((char *)h);
	while (h[start] && n > start)
	{
		if (h[start + curr] == f[curr] && start + curr < n)
			curr++;
		else
		{
			curr = 0;
			start++;
		}
		if (!f[curr])
			return ((char *)(h + start));
	}
	return (NULL);
}
