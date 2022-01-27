/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:11:43 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 01:44:52 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_memset_opt(unsigned char *dest, int c, size_t n)
{
	if (!n)
		return (1);
	dest[0] = c;
	dest[n - 1] = c;
	if (n <= 2)
		return (1);
	dest[1] = c;
	dest[2] = c;
	dest[n - 2] = c;
	dest[n - 3] = c;
	if (n <= 6)
		return (1);
	dest[3] = c;
	dest[n - 4] = c;
	return (n <= 8);
}

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*copy;
	size_t			index;

	copy = (unsigned char *)dest;
	if (_memset_opt(copy, c, n))
		return (dest);
	index = -(unsigned long)copy & 3;
	copy += index;
	n = (n - index) & -4;
	while (n--)
		*copy++ = c;
	return (dest);
}
