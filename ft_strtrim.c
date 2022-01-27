/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:10:48 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 01:42:59 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	left;

	if (!s)
		return (NULL);
	while (*s && ft_strchr(" \t\n", *s))
		s++;
	left = ft_strlen(s);
	while (left && ft_strchr(" \t\n", s[left - 1]))
		left--;
	return (ft_strsub(s, 0, left));
}
