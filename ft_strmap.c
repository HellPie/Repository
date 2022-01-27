/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:39:11 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 01:42:59 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	length;
	size_t	index;

	if (!f || !s)
		return (NULL);
	length = ft_strlen(s);
	str = ft_strnew(length);
	if (!str)
		return (NULL);
	str[length] = 0;
	index = -1;
	while (++index < length)
		str[index] = f(s[index]);
	return (str);
}
