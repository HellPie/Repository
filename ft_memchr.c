/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:34:58 by drossi            #+#    #+#             */
/*   Updated: 2021/11/18 23:44:48 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"

/**
 * WARN: GNU(-like) implementations have quirks which BSD(-like) lacks.
 */

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*copy;

	copy = src;
	while (n && *copy != (unsigned char)c)
	{
		copy++;
		n--;
	}
	if (n)
		return ((void *)copy);
	return (NULL);
}
