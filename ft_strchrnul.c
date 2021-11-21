/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrnul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:11:15 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 13:16:32 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * NOTE: This is a GNU function. Standard BSD does not offer this function.
 * The strchrnul() function is like strchr() but if c is not found in s, then
 * it returns a pointer to the null byte at the end of s, rather than NULL.
 */

char	*ft_strchrnul(const char *s, int c)
{
	c = (unsigned char)c;
	if (!c)
		return ((char *)(s + ft_strlen(s)));
	while (*s && *(unsigned char *)s != c)
		s++;
	return ((char *)s);
}
