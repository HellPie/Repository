/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:16:17 by drossi            #+#    #+#             */
/*   Updated: 2021/11/18 20:53:44 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"

int	ft_memcmp(const void *v1, const void *v2, size_t n)
{
	const unsigned char	*right;
	const unsigned char	*left;

	right = (unsigned char *)v1;
	left = (unsigned char *)v2;
	while (n && *right == *left)
	{
		n--;
		right++;
		left++;
	}
	if (n)
		return (*right - *left);
	return (0);
}
