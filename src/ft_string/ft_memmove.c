/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:04:06 by drossi            #+#    #+#             */
/*   Updated: 2022/02/08 15:44:22 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_string.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*from;
	unsigned char		*to;

	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	if (n <= 0)
		return (dest);
	if (from == to)
		return (dest);
	if ((t_uintptr)from - (t_uintptr)to - n <= -2 * n)
		return (ft_memcpy(to, from, n));
	if (to < from)
		while (n--)
			*to++ = *from++;
	else
		while (n--)
			to[n] = from[n];
	return (dest);
}
