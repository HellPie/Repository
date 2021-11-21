/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 00:44:03 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 00:47:39 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"

int	ft_strncmp(const char *l, const char *r, size_t n)
{
	if (!n--)
		return (0);
	while (n && *l == *r && *l)
	{
		r++;
		l++;
		n--;
	}
	return (*(unsigned char *)l - *(unsigned char *)r);
}
