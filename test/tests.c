/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:45:47 by drossi            #+#    #+#             */
/*   Updated: 2021/11/18 17:34:14 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <errno.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>

#include "cheat.h"
#include "cheats.h"

#pragma region TESTS_ERRNO

CHEAT_TEST(errno_shared_cross_platform_generic,
	cheat_assert_int(EPERM, FT_EPERM);
	cheat_assert_int(ENOENT, FT_ENOENT);
	cheat_assert_int(ESRCH, FT_ESRCH);
	cheat_assert_int(EINTR, FT_EINTR);
	cheat_assert_int(EIO, FT_EIO);
	cheat_assert_int(ENXIO, FT_ENXIO);
	cheat_assert_int(E2BIG, FT_E2BIG);
	cheat_assert_int(ENOEXEC, FT_ENOEXEC);
	cheat_assert_int(EBADF, FT_EBADF);
	cheat_assert_int(ECHILD, FT_ECHILD);
	cheat_assert_int(ENOMEM, FT_ENOMEM);
	cheat_assert_int(EACCES, FT_EACCES);
	cheat_assert_int(EFAULT, FT_EFAULT);
	cheat_assert_int(EBUSY, FT_EBUSY);
	cheat_assert_int(EEXIST, FT_EEXIST);
	cheat_assert_int(EXDEV, FT_EXDEV);
	cheat_assert_int(ENODEV, FT_ENODEV);
	cheat_assert_int(ENOTDIR, FT_ENOTDIR);
	cheat_assert_int(EISDIR, FT_EISDIR);
	cheat_assert_int(EINVAL, FT_EINVAL);
	cheat_assert_int(ENFILE, FT_ENFILE);
	cheat_assert_int(EMFILE, FT_EMFILE);
	cheat_assert_int(ENOTTY, FT_ENOTTY);
	cheat_assert_int(ETXTBSY, FT_ETXTBSY);
	cheat_assert_int(EFBIG, FT_EFBIG);
	cheat_assert_int(ENOSPC, FT_ENOSPC);
	cheat_assert_int(ESPIPE, FT_ESPIPE);
	cheat_assert_int(EROFS, FT_EROFS);
	cheat_assert_int(EMLINK, FT_EMLINK);
	cheat_assert_int(EPIPE, FT_EPIPE);
	cheat_assert_int(EDOM, FT_EDOM);
	cheat_assert_int(ERANGE, FT_ERANGE);
)

CHEAT_TEST(errno_darwin_exclusive,
	cheat_assert_int(ENOTSUP, FT_ENOTSUP);
	cheat_assert_int(ENOPOLICY, FT_ENOPOLICY);
)

CHEAT_TEST(errno_darwin_specific,
	cheat_assert_int(EDEADLK, FT_EDEADLK);
	cheat_assert_int(EAGAIN, FT_EAGAIN);
	cheat_assert_int(EWOULDBLOCK, FT_EWOULDBLOCK);
	cheat_assert_int(EINPROGRESS, FT_EINPROGRESS);
	cheat_assert_int(EALREADY, FT_EALREADY);
	cheat_assert_int(ENOTSOCK, FT_ENOTSOCK);
	cheat_assert_int(EDESTADDRREQ, FT_EDESTADDRREQ);
	cheat_assert_int(EMSGSIZE, FT_EMSGSIZE);
	cheat_assert_int(EPROTOTYPE, FT_EPROTOTYPE);
	cheat_assert_int(ENOPROTOOPT, FT_ENOPROTOOPT);
	cheat_assert_int(EPROTONOSUPPORT, FT_EPROTONOSUPPORT);
	cheat_assert_int(EAFNOSUPPORT, FT_EAFNOSUPPORT);
	cheat_assert_int(EADDRINUSE, FT_EADDRINUSE);
	cheat_assert_int(EADDRNOTAVAIL, FT_EADDRNOTAVAIL);
	cheat_assert_int(ENETDOWN, FT_ENETDOWN);
	cheat_assert_int(ENETUNREACH, FT_ENETUNREACH);
	cheat_assert_int(ENETRESET, FT_ENETRESET);
	cheat_assert_int(ECONNABORTED, FT_ECONNABORTED);
	cheat_assert_int(ECONNRESET, FT_ECONNRESET);
	cheat_assert_int(ENOBUFS, FT_ENOBUFS);
	cheat_assert_int(EISCONN, FT_EISCONN);
	cheat_assert_int(ENOTCONN, FT_ENOTCONN);
	cheat_assert_int(ETIMEDOUT, FT_ETIMEDOUT);
	cheat_assert_int(ECONNREFUSED, FT_ECONNREFUSED);
	cheat_assert_int(ELOOP, FT_ELOOP);
	cheat_assert_int(ENAMETOOLONG, FT_ENAMETOOLONG);
	cheat_assert_int(EHOSTDOWN, FT_EHOSTDOWN);
	cheat_assert_int(ENOTEMPTY, FT_ENOTEMPTY);
	cheat_assert_int(EDQUOT, FT_EDQUOT);
	cheat_assert_int(ESTALE, FT_ESTALE);
	cheat_assert_int(ENOLCK, FT_ENOLCK);
	cheat_assert_int(ENOSYS, FT_ENOSYS);
	cheat_assert_int(EOVERFLOW, FT_EOVERFLOW);
	cheat_assert_int(ECANCELED, FT_ECANCELED);
	cheat_assert_int(EIDRM, FT_EIDRM);
	cheat_assert_int(ENOMSG, FT_ENOMSG);
	cheat_assert_int(EILSEQ, FT_EILSEQ);
	cheat_assert_int(EBADMSG, FT_EBADMSG);
	cheat_assert_int(EMULTIHOP, FT_EMULTIHOP);
	cheat_assert_int(ENODATA, FT_ENODATA);
	cheat_assert_int(ENOLINK, FT_ENOLINK);
	cheat_assert_int(ENOSR, FT_ENOSR);
	cheat_assert_int(ENOSTR, FT_ENOSTR);
	cheat_assert_int(EPROTO, FT_EPROTO);
	cheat_assert_int(ETIME, FT_ETIME);
)

#if __DARWIN_C_LEVEL >= __DARWIN_C_FULL
CHEAT_TEST(errno_darwin_c_level_full,
	cheat_assert_int(ENOTBLK, FT_ENOTBLK);
	cheat_assert_int(ESOCKTNOSUPPORT, FT_ESOCKTNOSUPPORT);
	cheat_assert_int(EPFNOSUPPORT, FT_EPFNOSUPPORT);
	cheat_assert_int(ESHUTDOWN, FT_ESHUTDOWN);
	cheat_assert_int(ETOOMANYREFS, FT_ETOOMANYREFS);
	cheat_assert_int(EHOSTDOWN, FT_EHOSTDOWN);
	cheat_assert_int(EPROCLIM, FT_EPROCLIM);
	cheat_assert_int(EUSERS, FT_EUSERS);
	cheat_assert_int(EREMOTE, FT_EREMOTE);
	cheat_assert_int(EBADRPC, FT_EBADRPC);
	cheat_assert_int(ERPCMISMATCH, FT_ERPCMISMATCH);
	cheat_assert_int(EPROCUNAVAIL, FT_EPROCUNAVAIL);
	cheat_assert_int(EPROGMISMATCH, FT_EPROGMISMATCH);
	cheat_assert_int(EPROCUNAVAIL, FT_EPROCUNAVAIL);
	cheat_assert_int(EFTYPE, FT_EFTYPE);
	cheat_assert_int(EAUTH, FT_EAUTH);
	cheat_assert_int(ENEEDAUTH, FT_ENEEDAUTH);
	cheat_assert_int(EPWROFF, FT_EPWROFF);
	cheat_assert_int(EDEVERR, FT_EDEVERR);
	cheat_assert_int(EBADEXEC, FT_EBADEXEC);
	cheat_assert_int(EBADARCH, FT_EBADARCH);
	cheat_assert_int(ESHLIBVERS, FT_ESHLIBVERS);
	cheat_assert_int(EBADMACHO, FT_EBADMACHO);
	cheat_assert_int(ENOATTR, FT_ENOATTR);
	cheat_assert_int(EQFULL, FT_EQFULL);
	cheat_assert_int(ELAST, FT_ELAST);
)
#endif

#if __DARWIN_C_LEVEL >= 200809L
CHEAT_TEST(errno_darwin_c_level_200809,
	cheat_assert_int(ENOTRECOVERABLE, FT_ENOTRECOVERABLE);
	cheat_assert_int(EOWNERDEAD, FT_EOWNERDEAD);
)
#endif

#if !__DARWIN_UNIX03 && !defined(KERNEL)
CHEAT_TEST(errno_darwin_unix03_compatibility_not_kernel,
	cheat_assert_int(EOPNOTSUPP, FT_ENOTSUP);
	cheat_assert_not_int(EOPNOTSUPP, FT_EOPNOTSUPP);
)
#endif

#if __DARWIN_UNIX03 || defined(KERNEL)
CHEAT_TEST(errno_darwin_unix03_compatibility_kernel,
	cheat_assert_int(EOPNOTSUPP, FT_EOPNOTSUPP);
	cheat_assert_not_int(ENOTSUP, FT_EOPNOTSUPP);
	cheat_assert_not_int(EOPNOTSUPP, FT_ENOTSUP);
)
#endif

#pragma endregion // TESTS_ERRNO

#pragma region TESTS_CTYPE

CHEAT_TEST(ctype_isalnum,
	cheat_assert(isalnum(0) == ft_isalnum(0));
	cheat_assert(isalnum('a') == ft_isalnum('a'));
	cheat_assert(isalnum('A') == ft_isalnum('A'));
	cheat_assert(isalnum('z') == ft_isalnum('z'));
	cheat_assert(isalnum('Z') == ft_isalnum('Z'));
	cheat_assert(isalnum('0') == ft_isalnum('0'));
	cheat_assert(isalnum('!') == ft_isalnum('!'));
	cheat_assert(isalnum('\t') == ft_isalnum('\t'));
	cheat_assert(isalnum(127) == ft_isalnum(127));
	cheat_assert(isalnum(CHAR_MAX) == ft_isalnum(CHAR_MAX));
	cheat_assert(isalnum(CHAR_MIN) == ft_isalnum(CHAR_MIN));
)

CHEAT_TEST(ctype_isalpha,
	cheat_assert(isalpha(0) == ft_isalpha(0));
	cheat_assert(isalpha('a') == ft_isalpha('a'));
	cheat_assert(isalpha('A') == ft_isalpha('A'));
	cheat_assert(isalpha('z') == ft_isalpha('z'));
	cheat_assert(isalpha('Z') == ft_isalpha('Z'));
	cheat_assert(isalpha('0') == ft_isalpha('0'));
	cheat_assert(isalpha('!') == ft_isalpha('!'));
	cheat_assert(isalpha('\t') == ft_isalpha('\t'));
	cheat_assert(isalpha(127) == ft_isalpha(127));
	cheat_assert(isalpha(CHAR_MAX) == ft_isalpha(CHAR_MAX));
	cheat_assert(isalpha(CHAR_MIN) == ft_isalpha(CHAR_MIN));
)

CHEAT_TEST(ctype_isascii,
	cheat_assert(isascii(0) == ft_isascii(0));
	cheat_assert(isascii('a') == ft_isascii('a'));
	cheat_assert(isascii('A') == ft_isascii('A'));
	cheat_assert(isascii('z') == ft_isascii('z'));
	cheat_assert(isascii('Z') == ft_isascii('Z'));
	cheat_assert(isascii('0') == ft_isascii('0'));
	cheat_assert(isascii('!') == ft_isascii('!'));
	cheat_assert(isascii('\t') == ft_isascii('\t'));
	cheat_assert(isascii(127) == ft_isascii(127));
	cheat_assert(isascii(CHAR_MAX) == ft_isascii(CHAR_MAX));
	cheat_assert(isascii(CHAR_MIN) == ft_isascii(CHAR_MIN));
)

CHEAT_TEST(ctype_isblank,
	cheat_assert(isblank(0) == ft_isblank(0));
	cheat_assert(isblank('a') == ft_isblank('a'));
	cheat_assert(isblank('A') == ft_isblank('A'));
	cheat_assert(isblank('z') == ft_isblank('z'));
	cheat_assert(isblank('Z') == ft_isblank('Z'));
	cheat_assert(isblank('0') == ft_isblank('0'));
	cheat_assert(isblank('!') == ft_isblank('!'));
	cheat_assert(isblank('\t') == ft_isblank('\t'));
	cheat_assert(isblank(127) == ft_isblank(127));
	cheat_assert(isblank(CHAR_MAX) == ft_isblank(CHAR_MAX));
	cheat_assert(isblank(CHAR_MIN) == ft_isblank(CHAR_MIN));
)

CHEAT_TEST(ctype_iscntrl,
	cheat_assert(iscntrl(0) == ft_iscntrl(0));
	cheat_assert(iscntrl('a') == ft_iscntrl('a'));
	cheat_assert(iscntrl('A') == ft_iscntrl('A'));
	cheat_assert(iscntrl('z') == ft_iscntrl('z'));
	cheat_assert(iscntrl('Z') == ft_iscntrl('Z'));
	cheat_assert(iscntrl('0') == ft_iscntrl('0'));
	cheat_assert(iscntrl('!') == ft_iscntrl('!'));
	cheat_assert(iscntrl('\t') == ft_iscntrl('\t'));
	cheat_assert(iscntrl(127) == ft_iscntrl(127));
	cheat_assert(iscntrl(CHAR_MAX) == ft_iscntrl(CHAR_MAX));
	cheat_assert(iscntrl(CHAR_MIN) == ft_iscntrl(CHAR_MIN));
)

CHEAT_TEST(ctype_isdigit,
	cheat_assert(isdigit(0) == ft_isdigit(0));
	cheat_assert(isdigit('a') == ft_isdigit('a'));
	cheat_assert(isdigit('A') == ft_isdigit('A'));
	cheat_assert(isdigit('z') == ft_isdigit('z'));
	cheat_assert(isdigit('Z') == ft_isdigit('Z'));
	cheat_assert(isdigit('0') == ft_isdigit('0'));
	cheat_assert(isdigit('!') == ft_isdigit('!'));
	cheat_assert(isdigit('\t') == ft_isdigit('\t'));
	cheat_assert(isdigit(127) == ft_isdigit(127));
	cheat_assert(isdigit(CHAR_MAX) == ft_isdigit(CHAR_MAX));
	cheat_assert(isdigit(CHAR_MIN) == ft_isdigit(CHAR_MIN));
)

CHEAT_TEST(ctype_isgraph,
	cheat_assert(isgraph(0) == ft_isgraph(0));
	cheat_assert(isgraph('a') == ft_isgraph('a'));
	cheat_assert(isgraph('A') == ft_isgraph('A'));
	cheat_assert(isgraph('z') == ft_isgraph('z'));
	cheat_assert(isgraph('Z') == ft_isgraph('Z'));
	cheat_assert(isgraph('0') == ft_isgraph('0'));
	cheat_assert(isgraph('!') == ft_isgraph('!'));
	cheat_assert(isgraph('\t') == ft_isgraph('\t'));
	cheat_assert(isgraph(127) == ft_isgraph(127));
	cheat_assert(isgraph(CHAR_MAX) == ft_isgraph(CHAR_MAX));
	cheat_assert(isgraph(CHAR_MIN) == ft_isgraph(CHAR_MIN));
)

CHEAT_TEST(ctype_islower,
	cheat_assert(islower(0) == ft_islower(0));
	cheat_assert(islower('a') == ft_islower('a'));
	cheat_assert(islower('A') == ft_islower('A'));
	cheat_assert(islower('z') == ft_islower('z'));
	cheat_assert(islower('Z') == ft_islower('Z'));
	cheat_assert(islower('0') == ft_islower('0'));
	cheat_assert(islower('!') == ft_islower('!'));
	cheat_assert(islower('\t') == ft_islower('\t'));
	cheat_assert(islower(127) == ft_islower(127));
	cheat_assert(islower(CHAR_MAX) == ft_islower(CHAR_MAX));
	cheat_assert(islower(CHAR_MIN) == ft_islower(CHAR_MIN));
)

CHEAT_TEST(ctype_isprint,
	cheat_assert(isprint(0) == ft_isprint(0));
	cheat_assert(isprint('a') == ft_isprint('a'));
	cheat_assert(isprint('A') == ft_isprint('A'));
	cheat_assert(isprint('z') == ft_isprint('z'));
	cheat_assert(isprint('Z') == ft_isprint('Z'));
	cheat_assert(isprint('0') == ft_isprint('0'));
	cheat_assert(isprint('!') == ft_isprint('!'));
	cheat_assert(isprint('\t') == ft_isprint('\t'));
	cheat_assert(isprint(127) == ft_isprint(127));
	cheat_assert(isprint(CHAR_MAX) == ft_isprint(CHAR_MAX));
	cheat_assert(isprint(CHAR_MIN) == ft_isprint(CHAR_MIN));
)

CHEAT_TEST(ctype_ispunct,
	cheat_assert(ispunct(0) == ft_ispunct(0));
	cheat_assert(ispunct('a') == ft_ispunct('a'));
	cheat_assert(ispunct('A') == ft_ispunct('A'));
	cheat_assert(ispunct('z') == ft_ispunct('z'));
	cheat_assert(ispunct('Z') == ft_ispunct('Z'));
	cheat_assert(ispunct('0') == ft_ispunct('0'));
	cheat_assert(ispunct('!') == ft_ispunct('!'));
	cheat_assert(ispunct('\t') == ft_ispunct('\t'));
	cheat_assert(ispunct(127) == ft_ispunct(127));
	cheat_assert(ispunct(CHAR_MAX) == ft_ispunct(CHAR_MAX));
	cheat_assert(ispunct(CHAR_MIN) == ft_ispunct(CHAR_MIN));
)

CHEAT_TEST(ctype_isspace,
	cheat_assert(isspace(0) == ft_isspace(0));
	cheat_assert(isspace('a') == ft_isspace('a'));
	cheat_assert(isspace('A') == ft_isspace('A'));
	cheat_assert(isspace('z') == ft_isspace('z'));
	cheat_assert(isspace('Z') == ft_isspace('Z'));
	cheat_assert(isspace('0') == ft_isspace('0'));
	cheat_assert(isspace('!') == ft_isspace('!'));
	cheat_assert(isspace('\t') == ft_isspace('\t'));
	cheat_assert(isspace(127) == ft_isspace(127));
	cheat_assert(isspace(CHAR_MAX) == ft_isspace(CHAR_MAX));
	cheat_assert(isspace(CHAR_MIN) == ft_isspace(CHAR_MIN));
)

CHEAT_TEST(ctype_isupper,
	cheat_assert(isupper(0) == ft_isupper(0));
	cheat_assert(isupper('a') == ft_isupper('a'));
	cheat_assert(isupper('A') == ft_isupper('A'));
	cheat_assert(isupper('z') == ft_isupper('z'));
	cheat_assert(isupper('Z') == ft_isupper('Z'));
	cheat_assert(isupper('0') == ft_isupper('0'));
	cheat_assert(isupper('!') == ft_isupper('!'));
	cheat_assert(isupper('\t') == ft_isupper('\t'));
	cheat_assert(isupper(127) == ft_isupper(127));
	cheat_assert(isupper(CHAR_MAX) == ft_isupper(CHAR_MAX));
	cheat_assert(isupper(CHAR_MIN) == ft_isupper(CHAR_MIN));
)

CHEAT_TEST(ctype_isxdigit,
	cheat_assert(isxdigit(0) == ft_isxdigit(0));
	cheat_assert(isxdigit('a') == ft_isxdigit('a'));
	cheat_assert(isxdigit('A') == ft_isxdigit('A'));
	cheat_assert(isxdigit('z') == ft_isxdigit('z'));
	cheat_assert(isxdigit('Z') == ft_isxdigit('Z'));
	cheat_assert(isxdigit('0') == ft_isxdigit('0'));
	cheat_assert(isxdigit('!') == ft_isxdigit('!'));
	cheat_assert(isxdigit('\t') == ft_isxdigit('\t'));
	cheat_assert(isxdigit(127) == ft_isxdigit(127));
	cheat_assert(isxdigit(CHAR_MAX) == ft_isxdigit(CHAR_MAX));
	cheat_assert(isxdigit(CHAR_MIN) == ft_isxdigit(CHAR_MIN));
)

CHEAT_TEST(ctype_toascii,
	cheat_assert(toascii(0) == ft_toascii(0));
	cheat_assert(toascii('a') == ft_toascii('a'));
	cheat_assert(toascii('A') == ft_toascii('A'));
	cheat_assert(toascii('z') == ft_toascii('z'));
	cheat_assert(toascii('Z') == ft_toascii('Z'));
	cheat_assert(toascii('0') == ft_toascii('0'));
	cheat_assert(toascii('!') == ft_toascii('!'));
	cheat_assert(toascii('\t') == ft_toascii('\t'));
	cheat_assert(toascii(127) == ft_toascii(127));
	cheat_assert(toascii(CHAR_MAX) == ft_toascii(CHAR_MAX));
	cheat_assert(toascii(CHAR_MIN) == ft_toascii(CHAR_MIN));
)

CHEAT_TEST(ctype_tolower,
	cheat_assert(tolower(0) == ft_tolower(0));
	cheat_assert(tolower('a') == ft_tolower('a'));
	cheat_assert(tolower('A') == ft_tolower('A'));
	cheat_assert(tolower('z') == ft_tolower('z'));
	cheat_assert(tolower('Z') == ft_tolower('Z'));
	cheat_assert(tolower('0') == ft_tolower('0'));
	cheat_assert(tolower('!') == ft_tolower('!'));
	cheat_assert(tolower('\t') == ft_tolower('\t'));
	cheat_assert(tolower(127) == ft_tolower(127));
	cheat_assert(tolower(CHAR_MAX) == ft_tolower(CHAR_MAX));
	cheat_assert(tolower(CHAR_MIN) == ft_tolower(CHAR_MIN));
)

CHEAT_TEST(ctype_toupper,
	cheat_assert(toupper(0) == ft_toupper(0));
	cheat_assert(toupper('a') == ft_toupper('a'));
	cheat_assert(toupper('A') == ft_toupper('A'));
	cheat_assert(toupper('z') == ft_toupper('z'));
	cheat_assert(toupper('Z') == ft_toupper('Z'));
	cheat_assert(toupper('0') == ft_toupper('0'));
	cheat_assert(toupper('!') == ft_toupper('!'));
	cheat_assert(toupper('\t') == ft_toupper('\t'));
	cheat_assert(toupper(127) == ft_toupper(127));
	cheat_assert(toupper(CHAR_MAX) == ft_toupper(CHAR_MAX));
	cheat_assert(toupper(CHAR_MIN) == ft_toupper(CHAR_MIN));
)

#pragma endregion // TESTS_CTYPE

#pragma region TESTS_STDLIB

CHEAT_TEST(stdlib_abs_int,
	cheat_assert_int(abs(0), ft_abs(0));
	cheat_assert_int(abs(-0), ft_abs(-0));
	cheat_assert_int(abs(10), ft_abs(10));
	cheat_assert_int(abs(-10), ft_abs(-10));
	cheat_assert_int(abs(INT_MAX), ft_abs(INT_MAX));
	cheat_assert_int(abs(INT_MIN), ft_abs(INT_MIN));
)

CHEAT_TEST(stdlib_abs_long,
	cheat_assert_long_int(labs(0L), ft_labs(0L));
	cheat_assert_long_int(labs(-0L), ft_labs(-0L));
	cheat_assert_long_int(labs(10L), ft_labs(10L));
	cheat_assert_long_int(labs(-10L), ft_labs(-10L));
	cheat_assert_long_int(labs(INT_MAX), ft_labs(INT_MAX));
	cheat_assert_long_int(labs(INT_MIN), ft_labs(INT_MIN));
	cheat_assert_long_int(labs(LONG_MAX), ft_labs(LONG_MAX));
	cheat_assert_long_int(labs(LONG_MIN), ft_labs(LONG_MIN));
)

CHEAT_TEST(stdlib_abs_long_long,
	cheat_assert(llabs(0LL) == ft_llabs(0L));
	cheat_assert(llabs(-0LL) == ft_llabs(-0LL));
	cheat_assert(llabs(10LL) == ft_llabs(10LL));
	cheat_assert(llabs(-10LL) == ft_llabs(-10LL));
	cheat_assert(llabs(INT_MAX) == ft_llabs(INT_MAX));
	cheat_assert(llabs(INT_MIN) == ft_llabs(INT_MIN));
	cheat_assert(llabs(LONG_MAX) == ft_llabs(LONG_MAX));
	cheat_assert(llabs(LONG_MIN) == ft_llabs(LONG_MIN));
	cheat_assert(llabs(LLONG_MAX) == ft_llabs(LLONG_MAX));
	cheat_assert(llabs(LLONG_MIN) == ft_llabs(LLONG_MIN));
)

CHEAT_TEST(stdlib_ato_int,
	cheat_assert_int(atoi("0"), ft_atoi("0"));
	cheat_assert_int(atoi("+0"), ft_atoi("+0"));
	cheat_assert_int(atoi("-0"), ft_atoi("-0"));
	cheat_assert_int(atoi("-+0"), ft_atoi("-+0"));
	cheat_assert_int(atoi("=0"), ft_atoi("=0"));
	cheat_assert_int(atoi("987654321"), ft_atoi("987654321"));
	cheat_assert_int(atoi("+987654321"), ft_atoi("+987654321"));
	cheat_assert_int(atoi("-987654321"), ft_atoi("-987654321"));
	cheat_assert_int(atoi("-+987654321"), ft_atoi("-+987654321"));
	cheat_assert_int(atoi("=987654321"), ft_atoi("=987654321"));
	cheat_assert_int(atoi("string"), ft_atoi("string"));
	cheat_assert_int(atoi("123string"), ft_atoi("123string"));
	cheat_assert_int(atoi("-123string"), ft_atoi("-123string"));
	cheat_assert_int(atoi("123string321"), ft_atoi("123string321"));
	cheat_assert_int(atoi("\t\t   \t-987654321"), ft_atoi("\t\t   \t-987654321"));
	cheat_assert_int(atoi("+2147483647"), ft_atoi("+2147483647"));
	cheat_assert_int(atoi("2147483647"), ft_atoi("2147483647"));
	cheat_assert_int(atoi("-2147483648"), ft_atoi("-2147483648"));
	cheat_assert_int(atoi("2147483648"), ft_atoi("2147483648"));
	cheat_assert_int(atoi("9999999999"), ft_atoi("9999999999"));
)

// CHEAT_TEST(stdlib_ato_long,
// 	cheat_assert_long_int(atol("0"), ft_atol("0"));
// 	cheat_assert_long_int(atol("+0"), ft_atol("+0"));
// 	cheat_assert_long_int(atol("-0"), ft_atol("-0"));
// 	cheat_assert_long_int(atol("-+0"), ft_atol("-+0"));
// 	cheat_assert_long_int(atol("=0"), ft_atol("=0"));
// 	cheat_assert_long_int(atol("987654321"), ft_atol("987654321"));
// 	cheat_assert_long_int(atol("+987654321"), ft_atol("+987654321"));
// 	cheat_assert_long_int(atol("-987654321"), ft_atol("-987654321"));
// 	cheat_assert_long_int(atol("-+987654321"), ft_atol("-+987654321"));
// 	cheat_assert_long_int(atol("=987654321"), ft_atol("=987654321"));
// 	cheat_assert_long_int(atol("string"), ft_atol("string"));
// 	cheat_assert_long_int(atol("123string"), ft_atol("123string"));
// 	cheat_assert_long_int(atol("-123string"), ft_atol("-123string"));
// 	cheat_assert_long_int(atol("123string321"), ft_atol("123string321"));
// 	cheat_assert_long_int(atol("\t\t   \t-987654321"), ft_atol("\t\t   \t-987654321"));
// 	cheat_assert_long_int(atol("+2147483647"), ft_atol("+2147483647"));
// 	cheat_assert_long_int(atol("2147483647"), ft_atol("2147483647"));
// 	cheat_assert_long_int(atol("-2147483648"), ft_atol("-2147483648"));
// 	cheat_assert_long_int(atol("2147483648"), ft_atol("2147483648"));
// 	cheat_assert_long_int(atol("+9223372036854775807"), ft_atol("+9223372036854775807"));
// 	cheat_assert_long_int(atol("9223372036854775807"), ft_atol("9223372036854775807"));
// 	cheat_assert_long_int(atol("-9223372036854775808"), ft_atol("-9223372036854775808"));
// 	cheat_assert_long_int(atol("9223372036854775808"), ft_atol("9223372036854775808"));
// 	cheat_assert_long_int(atol("9999999999999999999"), ft_atol("9999999999999999999"));
// )

// #if !__DARWIN_NO_LONG_LONG
// CHEAT_TEST(stdlib_ato_long_long,
// 	cheat_assert(atoll("0") == ft_atoll("0"));
// 	cheat_assert(atoll("+0") == ft_atoll("+0"));
// 	cheat_assert(atoll("-0") == ft_atoll("-0"));
// 	cheat_assert(atoll("-+0") == ft_atoll("-+0"));
// 	cheat_assert(atoll("=0") == ft_atoll("=0"));
// 	cheat_assert(atoll("987654321") == ft_atoll("987654321"));
// 	cheat_assert(atoll("+987654321") == ft_atoll("+987654321"));
// 	cheat_assert(atoll("-987654321") == ft_atoll("-987654321"));
// 	cheat_assert(atoll("-+987654321") == ft_atoll("-+987654321"));
// 	cheat_assert(atoll("=987654321") == ft_atoll("=987654321"));
// 	cheat_assert(atoll("string") == ft_atoll("string"));
// 	cheat_assert(atoll("123string") == ft_atoll("123string"));
// 	cheat_assert(atoll("-123string") == ft_atoll("-123string"));
// 	cheat_assert(atoll("123string321") == ft_atoll("123string321"));
// 	cheat_assert(atoll("\t\t   \t-987654321") == ft_atoll("\t\t   \t-987654321"));
// 	cheat_assert(atoll("+2147483647") == ft_atoll("+2147483647"));
// 	cheat_assert(atoll("2147483647") == ft_atoll("2147483647"));
// 	cheat_assert(atoll("-2147483648") == ft_atoll("-2147483648"));
// 	cheat_assert(atoll("2147483648") == ft_atoll("2147483648"));
// 	cheat_assert(atoll("+9223372036854775807") == ft_atoll("+9223372036854775807"));
// 	cheat_assert(atoll("9223372036854775807") == ft_atoll("9223372036854775807"));
// 	cheat_assert(atoll("-9223372036854775808") == ft_atoll("-9223372036854775808"));
// 	cheat_assert(atoll("9223372036854775808") == ft_atoll("9223372036854775808"));
// 	cheat_assert(atoll("9999999999999999999") == ft_atoll("9999999999999999999"));
// )
// #endif

CHEAT_DECLARE(
	static int cmp_div_int(div_t a, t_div b) {
		return a.quot == b.quot && a.rem == b.rem;
	}

	static int cmp_div_long(ldiv_t a, t_ldiv b) {
		return a.quot == b.quot && a.rem == b.rem;
	}
)

CHEAT_TEST(stdlib_div_int,
	cheat_assert(sizeof(div_t) == sizeof(t_div));
	cheat_assert(cmp_div_int(div(0, 0), ft_div(0, 0)));
	cheat_assert(cmp_div_int(div(10, 0), ft_div(10, 0)));
	cheat_assert(cmp_div_int(div(-10, 0), ft_div(-10, 0)));
	cheat_assert(cmp_div_int(div(10, 2), ft_div(10, 2)));
	cheat_assert(cmp_div_int(div(-10, 2), ft_div(-10, 2)));
	cheat_assert(cmp_div_int(div(10, -2), ft_div(10, -2)));
	cheat_assert(cmp_div_int(div(10, 3), ft_div(10, 3)));
	cheat_assert(cmp_div_int(div(INT_MAX, 1), ft_div(INT_MAX, 1)));
	cheat_assert(cmp_div_int(div(INT_MIN, 1), ft_div(INT_MIN, 1)));
	cheat_assert(cmp_div_int(div(INT_MAX, INT_MAX), ft_div(INT_MAX, INT_MAX)));
	cheat_assert(cmp_div_int(div(INT_MAX, INT_MIN), ft_div(INT_MAX, INT_MIN)));
	cheat_assert(cmp_div_int(div(INT_MIN, INT_MIN), ft_div(INT_MIN, INT_MIN)));
	cheat_assert(cmp_div_int(div(INT_MIN, INT_MAX), ft_div(INT_MIN, INT_MAX)));
)

CHEAT_TEST(stdlib_div_long,
	cheat_assert(sizeof(ldiv_t) == sizeof(t_ldiv));
	cheat_assert(cmp_div_long(ldiv(0, 0), ft_ldiv(0, 0)));
	cheat_assert(cmp_div_long(ldiv(10, 0), ft_ldiv(10, 0)));
	cheat_assert(cmp_div_long(ldiv(-10, 0), ft_ldiv(-10, 0)));
	cheat_assert(cmp_div_long(ldiv(10, 2), ft_ldiv(10, 2)));
	cheat_assert(cmp_div_long(ldiv(-10, 2), ft_ldiv(-10, 2)));
	cheat_assert(cmp_div_long(ldiv(10, -2), ft_ldiv(10, -2)));
	cheat_assert(cmp_div_long(ldiv(10, 3), ft_ldiv(10, 3)));
	cheat_assert(cmp_div_long(ldiv(INT_MAX, 1), ft_ldiv(INT_MAX, 1)));
	cheat_assert(cmp_div_long(ldiv(INT_MIN, 1), ft_ldiv(INT_MIN, 1)));
	cheat_assert(cmp_div_long(ldiv(INT_MAX, INT_MAX), ft_ldiv(INT_MAX, INT_MAX)));
	cheat_assert(cmp_div_long(ldiv(INT_MAX, INT_MIN), ft_ldiv(INT_MAX, INT_MIN)));
	cheat_assert(cmp_div_long(ldiv(INT_MIN, INT_MIN), ft_ldiv(INT_MIN, INT_MIN)));
	cheat_assert(cmp_div_long(ldiv(INT_MIN, INT_MAX), ft_ldiv(INT_MIN, INT_MAX)));
	cheat_assert(cmp_div_long(ldiv(LONG_MAX, 1), ft_ldiv(LONG_MAX, 1)));
	cheat_assert(cmp_div_long(ldiv(LONG_MIN, 1), ft_ldiv(LONG_MIN, 1)));
	cheat_assert(cmp_div_long(ldiv(LONG_MAX, LONG_MAX), ft_ldiv(LONG_MAX, LONG_MAX)));
	cheat_assert(cmp_div_long(ldiv(LONG_MAX, LONG_MIN), ft_ldiv(LONG_MAX, LONG_MIN)));
	cheat_assert(cmp_div_long(ldiv(LONG_MIN, LONG_MIN), ft_ldiv(LONG_MIN, LONG_MIN)));
	cheat_assert(cmp_div_long(ldiv(LONG_MIN, LONG_MAX), ft_ldiv(LONG_MIN, LONG_MAX)));
)

#if !__DARWIN_NO_LONG_LONG
CHEAT_DECLARE(
	static int cmp_div_long_long(lldiv_t a, t_lldiv b) {
		return a.quot == b.quot && a.rem == b.rem;
	}
)

CHEAT_TEST(stdlib_div_long_long,
	cheat_assert(sizeof(ldiv_t) == sizeof(t_ldiv));
	cheat_assert(cmp_div_long_long(lldiv(0, 0), ft_lldiv(0, 0)));
	cheat_assert(cmp_div_long_long(lldiv(10, 0), ft_lldiv(10, 0)));
	cheat_assert(cmp_div_long_long(lldiv(-10, 0), ft_lldiv(-10, 0)));
	cheat_assert(cmp_div_long_long(lldiv(10, 2), ft_lldiv(10, 2)));
	cheat_assert(cmp_div_long_long(lldiv(-10, 2), ft_lldiv(-10, 2)));
	cheat_assert(cmp_div_long_long(lldiv(10, -2), ft_lldiv(10, -2)));
	cheat_assert(cmp_div_long_long(lldiv(10, 3), ft_lldiv(10, 3)));
	cheat_assert(cmp_div_long_long(lldiv(INT_MAX, 1), ft_lldiv(INT_MAX, 1)));
	cheat_assert(cmp_div_long_long(lldiv(INT_MIN, 1), ft_lldiv(INT_MIN, 1)));
	cheat_assert(cmp_div_long_long(lldiv(INT_MAX, INT_MAX), ft_lldiv(INT_MAX, INT_MAX)));
	cheat_assert(cmp_div_long_long(lldiv(INT_MAX, INT_MIN), ft_lldiv(INT_MAX, INT_MIN)));
	cheat_assert(cmp_div_long_long(lldiv(INT_MIN, INT_MIN), ft_lldiv(INT_MIN, INT_MIN)));
	cheat_assert(cmp_div_long_long(lldiv(INT_MIN, INT_MAX), ft_lldiv(INT_MIN, INT_MAX)));
	cheat_assert(cmp_div_long_long(lldiv(LONG_MAX, 1), ft_lldiv(LONG_MAX, 1)));
	cheat_assert(cmp_div_long_long(lldiv(LONG_MIN, 1), ft_lldiv(LONG_MIN, 1)));
	cheat_assert(cmp_div_long_long(lldiv(LONG_MAX, LONG_MAX), ft_lldiv(LONG_MAX, LONG_MAX)));
	cheat_assert(cmp_div_long_long(lldiv(LONG_MAX, LONG_MIN), ft_lldiv(LONG_MAX, LONG_MIN)));
	cheat_assert(cmp_div_long_long(lldiv(LONG_MIN, LONG_MIN), ft_lldiv(LONG_MIN, LONG_MIN)));
	cheat_assert(cmp_div_long_long(lldiv(LONG_MIN, LONG_MAX), ft_lldiv(LONG_MIN, LONG_MAX)));
	cheat_assert(cmp_div_long_long(lldiv(LLONG_MAX, 1), ft_lldiv(LLONG_MAX, 1)));
	cheat_assert(cmp_div_long_long(lldiv(LLONG_MIN, 1), ft_lldiv(LLONG_MIN, 1)));
	cheat_assert(cmp_div_long_long(lldiv(LLONG_MAX, LLONG_MAX), ft_lldiv(LLONG_MAX, LLONG_MAX)));
	cheat_assert(cmp_div_long_long(lldiv(LLONG_MAX, LLONG_MIN), ft_lldiv(LLONG_MAX, LLONG_MIN)));
	cheat_assert(cmp_div_long_long(lldiv(LLONG_MIN, LLONG_MIN), ft_lldiv(LLONG_MIN, LLONG_MIN)));
	cheat_assert(cmp_div_long_long(lldiv(LLONG_MIN, LLONG_MAX), ft_lldiv(LLONG_MIN, LLONG_MAX)));
)
#endif

#pragma endregion // TESTS_STDLIB

#pragma region TESTS_STRING

#pragma endregion // TESTS_STRING
