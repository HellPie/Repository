/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_span_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:31:09 by drossi            #+#    #+#             */
/*   Updated: 2022/03/23 14:38:27 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_span.h"

size_t	ft_span_new(t_span *out, size_t c_item, size_t s_item)
{
	if (!out || c_item == 0 || s_item == 0)
		return (0);
	out->s_item = s_item;
	out->s_data = c_item * s_item;
	out->len = 0;
	out->data = malloc(out->s_data);
	if (!out->data)
		ft_span_del(out);
	return (out->s_data);
}
