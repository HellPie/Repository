/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_span.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:51:33 by drossi            #+#    #+#             */
/*   Updated: 2022/03/23 14:37:49 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPAN_H
# define FT_SPAN_H

# include "ft_defs.h"

typedef struct s_span
{
	void	*data;
	size_t	s_data;
	size_t	s_item;
	size_t	len;
}	t_span;

size_t	ft_span_new(t_span *out, size_t c_item, size_t s_item);
void	ft_span_del(t_span *span);

size_t	ft_span_res(t_span *span, size_t s_new);

#endif
