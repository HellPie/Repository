/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:12:53 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 01:42:59 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	int	h_index;
	int	n_index;

	h_index = 0;
	n_index = 0;
	if (!*n)
		return ((char *)h);
	while (h[h_index])
	{
		if (h[h_index + n_index] == n[n_index])
			n_index++;
		else
		{
			n_index = 0;
			h_index++;
		}
		if (!n[n_index])
			return ((char *)h + h_index);
	}
	return (NULL);
}
