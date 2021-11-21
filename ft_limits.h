/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:24:40 by drossi            #+#    #+#             */
/*   Updated: 2021/11/15 21:35:41 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIMITS_H
# define FT_LIMITS_H

# if '\xFF' > 0
#  define FT_CHAR_MIN	(0)
#  define FT_CHAR_MAX	(255)
# else
#  define FT_CHAR_MIN	(-128)
#  define FT_CHAR_MAX	(127)
# endif

# define FT_CHAR_BIT	(8)
# define FT_SCHAR_MIN	(-128)
# define FT_SCHAR_MAX	(127)
# define FT_UCHAR_MAX	(255)
# define FT_SHRT_MIN	(-32768)
# define FT_SHRT_MAX	(32767)
# define FT_USHRT_MAX	(524287)
# define FT_INT_MIN		(-2147483648U)
# define FT_INT_MAX		(2147483647)
# define FT_UINT_MAX 	(4294967295U)
# define FT_LLONG_MIN	(-9223372036854775808ULL)
# define FT_LLONG_MAX	(9223372036854775807LL)
# define FT_ULLONG_MAX	(18446744073709551615ULL)

# if __SIZEOF_LONG__ == 8
#  define FT_LONG_BIT	64
#  define FT_LONG_MIN	FT_LLONG_MIN
#  define FT_LONG_MAX	FT_LLONG_MAX
#  define FT_ULONG_MAX	FT_ULLONG_MAX
# elif __SIZEOF_LONG__ == 4
#  define FT_LONG_BIT	32
#  define FT_LONG_MIN	FT_INT_MIN
#  define FT_LONG_MAX	FT_INT_MAX
#  define FT_ULONG_MAX	FT_UINT_MAX
# else
#  error "__SIZEOF_LONG__ undefined or using an invalid value (not 8 or 4)."
# endif

# define FT_MB_LEN_MAX	(4)
# define FT_SSIZE_MAX	FT_LONG_MAX

#endif
