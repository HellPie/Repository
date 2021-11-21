/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:11:43 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 23:08:00 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"

static t_bool	_memset_opt(unsigned char *dest, int c, size_t n)
{
	if (!n)
		return (TRUE);
	dest[0] = c;
	dest[n - 1] = c;
	if (n <= 2)
		return (TRUE);
	dest[1] = c;
	dest[2] = c;
	dest[n - 2] = c;
	dest[n - 3] = c;
	if (n <= 6)
		return (TRUE);
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
