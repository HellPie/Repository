/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:43:59 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 22:52:42 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_string.h"
#include "ft_extra.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		str[index] = f((unsigned int)index, s[index]);
	return (str);
}
