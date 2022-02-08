/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:24:46 by drossi            #+#    #+#             */
/*   Updated: 2022/02/08 16:11:40 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_extra.h"

char	*ft_itoa(int n)
{
	char			*str;
	int				length;
	unsigned int	value;

	value = ft_abs(n);
	length = n <= 0;
	while (value)
	{
		length++;
		value /= 10;
	}
	str = ft_strnew(length);
	if (!str)
		return (NULL);
	value = ft_abs(n);
	while (--length >= 0)
	{
		str[length] = value % 10 + '0';
		value /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
