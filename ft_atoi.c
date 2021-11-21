/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:43:04 by drossi            #+#    #+#             */
/*   Updated: 2021/11/08 14:20:43 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_ctype.h"

int	ft_atoi(const char *s)
{
	int		number;
	t_bool	is_negative;

	number = 0;
	is_negative = FALSE;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
		is_negative = *s++ == '-';
	while (ft_isdigit(*s))
		number = 10 * number - (*s++ - '0');
	if (is_negative)
		return (number);
	return (-number);
}
