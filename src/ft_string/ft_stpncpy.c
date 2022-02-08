/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 00:14:32 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 00:18:55 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_string.h"

char	*ft_stpncpy(char *dest, const char *src, size_t n)
{
	while (n)
	{
		*dest = *src;
		if (!*dest)
			break ;
		n--;
		dest++;
		src++;
	}
	ft_memset(dest, 0, n);
	return (dest);
}
