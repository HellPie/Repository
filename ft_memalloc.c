/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:26:22 by drossi            #+#    #+#             */
/*   Updated: 2022/01/27 01:44:33 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;

	if (size <= 0)
		return (NULL);
	result = malloc(size);
	if (!result)
		return (NULL);
	ft_bzero(result, size);
	return (result);
}
