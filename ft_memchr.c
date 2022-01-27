/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:34:58 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 01:41:09 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
