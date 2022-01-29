/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:43:04 by drossi            #+#    #+#             */
/*   Updated: 2022/01/29 18:10:19 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_atoi(const char *s)
{
	long	number;
	int		is_negative;

	number = 0;
	is_negative = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
		is_negative = *s++ == '-';
	while (ft_isdigit(*s))
	{
		number = 10 * number - (*s++ - '0');
		if (number > 2147483647 && !is_negative)
			return (2147483647);
		else if (number < -2147483648L && is_negative)
			return (-2147483648U);
	}
	if (is_negative)
		return ((int)number);
	return ((int) -number);
}
