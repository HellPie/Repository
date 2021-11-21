/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 00:24:34 by drossi            #+#    #+#             */
/*   Updated: 2021/11/21 17:51:52 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*to;

	to = dest;
	dest += ft_strlen(dest);
	while (n && *src)
	{
		n--;
		*dest++ = *src++;
	}
	*dest++ = 0;
	return (to);
}
