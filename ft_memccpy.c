/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 23:54:55 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 01:41:09 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*from;
	unsigned char		*to;

	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	while (n)
	{
		*to = *from;
		if (*to == (unsigned char)c)
			break ;
		n--;
		from++;
		to++;
	}
	if (n)
		return ((void *)(to + 1));
	return (NULL);
}
