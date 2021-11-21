/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:33:34 by drossi            #+#    #+#             */
/*   Updated: 2021/11/17 18:25:16 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

typedef struct s_div
{
	int	quot;
	int	rem;
}	t_div;

typedef struct s_ldiv
{
	long	quot;
	long	rem;
}	t_ldiv;

typedef struct s_lldiv
{
	long long	quot;
	long long	rem;
}	t_lldiv;

int					ft_atoi(const char *s);
// long				ft_atol(const char *s);
// long long			ft_atoll(const char *s);
// double				ft_atof(const char *s);

// long				ft_strtol(const char *s, char **end, int base);
// unsigned long		ft_strtoul(const char *s, char **end, int base);
// long long			ft_strtoll(const char *s, char **end, int base);
// unsigned long long	ft_strtoull(const char *s, char **end, int base);

// float				ft_strtof(const char *s, char **end);
// double				ft_strtod(const char *s, char **end);
// long double			ft_strtold(const char *s, char **end);

t_div				ft_div(int num, int den);
t_ldiv				ft_ldiv(long num, long den);
t_lldiv				ft_lldiv(long long num, long long den);

int					ft_abs(int a);
long				ft_labs(long a);
long long			ft_llabs(long long a);

#endif
