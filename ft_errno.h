/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errno.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:33:42 by drossi            #+#    #+#             */
/*   Updated: 2021/11/06 12:05:10 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERRNO_H
# define FT_ERRNO_H

# ifndef __APPLE__
#  error "This library currently only supports Apple ERRNO.H values."
# endif

# define FT_EPERM			1		/* Operation not permitted */
# define FT_ENOENT			2		/* No such file or directory */
# define FT_ESRCH			3		/* No such process */
# define FT_EINTR			4		/* Interrupted system call */
# define FT_EIO				5		/* Input/Output error */
# define FT_ENXIO			6		/* Device not configured */
# define FT_E2BIG			7		/* Argument list too long */
# define FT_ENOEXEC			8		/* Exec format error */
# define FT_EBADF			9		/* Bad file descriptor */
# define FT_ECHILD			10		/* No child processes */
# define FT_EDEADLK			11		/* Resource deadlock avoided */
# define FT_ENOMEM			12		/* Cannot allocate memory */
# define FT_EACCES			13		/* Permission denied */
# define FT_EFAULT			14		/* Bad address */
# define FT_ENOTBLK			15		/* Block device required */
# define FT_EBUSY			16		/* Device/Resource busy */
# define FT_EEXIST			17		/* File exists */
# define FT_EXDEV			18		/* Cross-device link */
# define FT_ENODEV			19		/* Operation not supported by device */
# define FT_ENOTDIR			20		/* Not a directory */
# define FT_EISDIR			21		/* Is a directory */
# define FT_EINVAL			22		/* Invalid argument */
# define FT_ENFILE			23		/* Too many open files in system */
# define FT_EMFILE			24		/* Too many open files */
# define FT_ENOTTY			25		/* Inappropriate IOCTL for device */
# define FT_ETXTBSY			26		/* Text file busy */
# define FT_EFBIG			27		/* File too large */
# define FT_ENOSPC			28		/* No space left on device */
# define FT_ESPIPE			29		/* Illegal seek */
# define FT_EROFS			30		/* Read only file system */
# define FT_EMLINK			31		/* Too many links */
# define FT_EPIPE			32		/* Broken pipe */
# define FT_EDOM			33		/* Numeric argument out of domain */
# define FT_ERANGE			34		/* Result too large */
# define FT_EAGAIN			35		/* Resource temporarily unavailable */
# define FT_EWOULDBLOCK		FT_EAGAIN	/* Operation would block */
# define FT_EINPROGRESS		36		/* Operation now in progress */
# define FT_EALREADY		37		/* Operation already in progress */
# define FT_ENOTSOCK		38		/* Socket operation on non-socket */
# define FT_EDESTADDRREQ	39		/* Destination address required */
# define FT_EMSGSIZE		40		/* Message too long */
# define FT_EPROTOTYPE		41		/* Protocol wrong type for socket */
# define FT_ENOPROTOOPT		42		/* Protocol not available */
# define FT_EPROTONOSUPPORT	43		/* Protocol not supported */
# define FT_ESOCKTNOSUPPORT	44		/* Socket type not supported */
# define FT_ENOTSUP			45		/* Operation not supported */
# define FT_EPFNOSUPPORT	46		/* Protocol family not supported */
# define FT_EAFNOSUPPORT	47		/* Address not supported by protocol */
# define FT_EADDRINUSE		48		/* Address already in use */
# define FT_EADDRNOTAVAIL	49		/* Cannot assign requested address */
# define FT_ENETDOWN		50		/* Network down */
# define FT_ENETUNREACH		51		/* Network unreachable */
# define FT_ENETRESET		52		/* Network dropped connection on reset */
# define FT_ECONNABORTED	53		/* Software caused connection abort */
# define FT_ECONNRESET		54		/* Connection reset by peer */
# define FT_ENOBUFS			55		/* No buffer space available */
# define FT_EISCONN			56		/* Socket already connected */
# define FT_ENOTCONN		57		/* Socket not connected */
# define FT_ESHUTDOWN		58		/* Cannot send after socket shutdown */
# define FT_ETOOMANYREFS	59		/* Too many references: cannot splice */
# define FT_ETIMEDOUT		60		/* Operation timed out */
# define FT_ECONNREFUSED	61		/* Connection refused */
# define FT_ELOOP			62		/* Too many levels of symbolic links */
# define FT_ENAMETOOLONG	63		/* File name too long */
# define FT_EHOSTDOWN		64		/* Host down */
# define FT_EHOSTUNREACH	65		/* No route to host */
# define FT_ENOTEMPTY		66		/* Directory not empty */
# define FT_EPROCLIM		67		/* Too many processes */
# define FT_EUSERS			68		/* Too many users */
# define FT_EDQUOT			69		/* Disc quota exceeded */
# define FT_ESTALE			70		/* Stale NFS file handle */
# define FT_EREMOTE			71		/* Too many levels of remote in path */
# define FT_EBADRPC			72		/* RPC bad structure */
# define FT_ERPCMISMATCH	73		/* RPC version wrong */
# define FT_EPROGUNAVAIL	74		/* RPC program not available */
# define FT_EPROGMISMATCH	75		/* Program version wrong */
# define FT_EPROCUNAVAIL	76		/* Bad procedure for program */
# define FT_ENOLCK			77		/* No locks available */
# define FT_ENOSYS			78		/* Function not implemented */
# define FT_EFTYPE			79		/* Inappropriate file type or format */
# define FT_EAUTH			80		/* Authentication error */
# define FT_ENEEDAUTH		81		/* Need authentication */
# define FT_EPWROFF			82		/* Device powered off */
# define FT_EDEVERR			83		/* Device error */
# define FT_EOVERFLOW		84		/* Value too large for storage */
# define FT_EBADEXEC		85		/* Bad executable */
# define FT_EBADARCH		86		/* Bad CPU type in executable */
# define FT_ESHLIBVERS		87		/* Shared library version mismatch */
# define FT_EBADMACHO		88		/* Malformed Mach-O file */
# define FT_ECANCELED		89		/* Operation canceled */
# define FT_EIDRM			90		/* Identifier removed */
# define FT_ENOMSG			91		/* No message of desired type */
# define FT_EILSEQ			92		/* Illegal byte sequence */
# define FT_ENOATTR			93		/* Attribute not found */
# define FT_EBADMSG			94		/* Bad message */
# define FT_EMULTIHOP		95		/* Reserved */
# define FT_ENODATA			96		/* No message available on stream */
# define FT_ENOLINK			97		/* Reserved */
# define FT_ENOSR			98		/* No stream resources */
# define FT_ENOSTR			99		/* Not a stream */
# define FT_EPROTO			100		/* Protocol error */
# define FT_ETIME			101		/* Stream IOCTL timeout */
# define FT_EOPNOTSUPP		102		/* Operation not supported on socket */
# define FT_ENOPOLICY		103		/* No such policy registered */
# define FT_ENOTRECOVERABLE	104		/* State not recoverable */
# define FT_EOWNERDEAD		105		/* Previous owner died */
# define FT_EQFULL			106		/* Interface output queue full */
# define FT_ELAST			106		/* Must be equal largest FT_ERRNO */

#endif
