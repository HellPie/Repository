/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_span.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:51:33 by drossi            #+#    #+#             */
/*   Updated: 2022/03/22 15:31:36 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPAN_H
# define FT_SPAN_H

# include "ft_defs.h"

typedef struct s_span
{
	void	*data;
	size_t	s_item;
	size_t	s_data;
	size_t	len;
}	t_span;

t_span	*ft_span_new(size_t s_data, size_t s_item);
void	ft_span_del(t_span *span);

t_span	*ft_span_init(void *from, size_t s_item, size_t len);
t_span	*ft_span_cpy(t_span *span);
t_span	*ft_span_res(t_span *span, size_t s_data_new);

#endif
