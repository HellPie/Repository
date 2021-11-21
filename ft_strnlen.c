/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:59:42 by drossi            #+#    #+#             */
/*   Updated: 2021/11/21 17:52:06 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strnlen(const char *s, size_t n)
{
	const char	*result;

	result = ft_memchr(s, 0, n);
	if (result)
		return ((size_t)(result - s));
	return (n);
}
