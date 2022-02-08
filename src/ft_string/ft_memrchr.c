/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:34:30 by drossi            #+#    #+#             */
/*   Updated: 2022/02/08 15:44:22 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"

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
