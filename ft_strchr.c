/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:06:26 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 13:19:59 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = ft_strchrnul(s, c);
	if (*(unsigned char *)result == (unsigned char)c)
		return (result);
	return (0);
}
