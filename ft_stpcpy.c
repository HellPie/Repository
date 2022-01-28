/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 00:07:55 by drossi            #+#    #+#             */
/*   Updated: 2022/01/29 01:16:34 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stpcpy(char *dest, const char *src)
{
	while (1)
	{
		*dest = *src;
		if (!*dest)
			break ;
		dest++;
		src++;
	}
	return (dest);
}
