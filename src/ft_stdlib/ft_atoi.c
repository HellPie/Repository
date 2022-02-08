/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:43:04 by drossi            #+#    #+#             */
/*   Updated: 2022/02/08 15:40:46 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_ctype.h"

int	ft_atoi(const char *s)
{
	long	number;
	t_bool	is_negative;

	number = 0;
	is_negative = FALSE;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
		is_negative = *s++ == '-';
	while (ft_isdigit(*s))
	{
		number = 10 * number - (*s++ - '0');
		if (number > 2147483647 && !is_negative)
			return (-1);
		else if (number < -2147483648L && is_negative)
			return (0);
	}
	if (is_negative)
		return ((int)number);
	return ((int) -number);
}
