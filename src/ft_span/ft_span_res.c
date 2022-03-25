/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_span_res.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:42:40 by drossi            #+#    #+#             */
/*   Updated: 2022/03/25 23:03:17 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"
#include "ft_span.h"

size_t	ft_span_res(t_span *span, size_t s_new)
{
	void	*res;
	size_t	s_used;

	if (!span || s_new == 0)
		return (0);
	res = malloc(s_new);
	if (!res)
		return (0);
	s_used = span->s_item * span->len;
	if (s_new < s_used)
	{
		s_used = s_new;
		span->len = (size_t)(s_used / span->s_item);
	}
	ft_memcpy(span->data, res, s_used);
	free(span->data);
	span->data = res;
	span->s_data = s_new;
	return (s_new);
}
