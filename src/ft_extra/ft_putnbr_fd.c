/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:01:52 by drossi            #+#    #+#             */
/*   Updated: 2022/02/08 16:11:58 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_extra.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < -9 || n > 9)
		ft_putnbr_fd(ft_abs(n / 10), fd);
	ft_putchar_fd(ft_abs(n % 10) + '0', fd);
}
