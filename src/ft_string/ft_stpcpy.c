/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 00:07:55 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 00:12:59 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"

char	*ft_stpcpy(char *dest, const char *src)
{
	while (TRUE)
	{
		*dest = *src;
		if (!*dest)
			break ;
		dest++;
		src++;
	}
	return (dest);
}
