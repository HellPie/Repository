/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:01:52 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 22:08:14 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_extra.h"

static unsigned int	_abs(int i)
{
	if (i > 0)
		return (i);
	return (-i);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < -9 || n > 9)
		ft_putnbr_fd(_abs(n / 10), fd);
	ft_putchar_fd(_abs(n % 10) + '0', fd);
}
