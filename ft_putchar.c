/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:56:46 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 22:12:17 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_extra.h"

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}
