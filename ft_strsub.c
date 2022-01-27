/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:54:34 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 01:49:30 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	index;

	if (!s)
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	s += (unsigned long long)start;
	index = -1;
	while (++index < len)
		str[index] = s[index];
	return (str);
}
