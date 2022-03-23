/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_span_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:40:54 by drossi            #+#    #+#             */
/*   Updated: 2022/03/22 17:50:59 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_span.h"

void	ft_span_del(t_span *span)
{
	if (!span)
		return ;
	if (span->data)
		free(span->data);
	span->data = NULL;
	span->s_data = 0;
	span->s_item = 0;
	span->len = 0;
}
