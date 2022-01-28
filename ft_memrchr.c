/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:34:30 by drossi            #+#    #+#             */
/*   Updated: 2022/01/29 01:11:47 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * TODO: Figure out why the test suite fails. This happens on libc memrchr too.
 */

void	*ft_memrchr(const void *m, int c, size_t n)
{
	const unsigned char	*str;

	if (!n)
		return (NULL);
	str = (unsigned char *)m + n;
	while (n--)
		if (*--str == (unsigned char)c)
			return ((void *)str);
	return (NULL);
}