/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_defs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 03:09:18 by drossi            #+#    #+#             */
/*   Updated: 2022/03/18 14:08:53 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEFS_H
# define FT_DEFS_H

/**
 * Needed for NULL, size_t, wchar_t. It's a core C Standard header which makes
 * it ideal compared to string.h as it does not include all of the extra cruft
 * string.h brings with it since most of it can't be used as per project rules.
 */

# include <stddef.h>

/**
 * This is a Norme-compliant version of stdbool.h. As per project rules, it is
 * not possible to include the official stdbool.h so an alternative is provied.
 */

# define TRUE (1)
# define FALSE (0)

typedef int					t_bool;

/**
 * Slim down often used types and normalize the concept of "long" to match an
 * int64 like in the vast majority of programming languages.
 */

typedef char				t_int8;
typedef short				t_int16;
typedef int					t_int32;
typedef long long			t_int64;

typedef unsigned char		t_uint8;
typedef unsigned short		t_uint16;
typedef unsigned int		t_uint32;
typedef unsigned long long	t_uint64;

typedef unsigned char		t_uchar;
typedef unsigned short		t_ushort;
typedef unsigned int		t_uint;
typedef unsigned long		t_ulong;
typedef unsigned long long	t_ullong;

# if __SIZEOF_POINTER__ == 8

typedef t_uint64			t_uintptr;

# elif __SIZEOF_POINTER == 4

typedef t_uint32			t_uintptr;

# else
#  error "__SIZEOF_POINTER undefined or using an invalid value (not 8 or 4)"
# endif

#endif
