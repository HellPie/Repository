/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:04:33 by drossi            #+#    #+#             */
/*   Updated: 2022/01/29 18:02:23 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	char	*dest;

	if (s == NULL)
		return (0);
	if (d == NULL || !n--)
		return (ft_strlen(s));
	dest = d;
	while (n)
	{
		*d = *s;
		if (!*d)
			break ;
		n--;
		s++;
		d++;
	}
	*d = 0;
	return ((size_t)(d - dest) + ft_strlen(s));
}
