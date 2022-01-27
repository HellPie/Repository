/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:55:34 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 01:42:59 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = ft_strnlen(dest, n);
	if (len == n)
		return (len + ft_strlen(src));
	return (len + ft_strlcpy((char *)(dest + len), src, n - len));
}
