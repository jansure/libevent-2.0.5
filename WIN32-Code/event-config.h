/* event-config.h
 *
 * This file was generated by autoconf when libevent was built, and post-
 * processed by Libevent so that its macros would have a uniform prefix.
 *
 * DO NOT EDIT THIS FILE.
 *
 * Do not rely on macros in this file existing in later versions.
 */
#ifndef _EVENT_CONFIG_H_
#define _EVENT_CONFIG_H_
/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Define if libevent should not allow replacing the mm functions */
/* #undef _EVENT_DISABLE_MM_REPLACEMENT */

/* Define if libevent should not be compiled with thread support */
/* #undef _EVENT_DISABLE_THREAD_SUPPORT */

/* Define if clock_gettime is available in libc */
/* #undef _EVENT_DNS_USE_CPU_CLOCK_FOR_ID */

/* Define is no secure id variant is available */
/* #define _EVENT_DNS_USE_GETTIMEOFDAY_FOR_ID 1 */
#define _EVENT_DNS_USE_FTIME_FOR_ID 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
/* #undef _EVENT_HAVE_ARPA_INET_H */

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef _EVENT_HAVE_CLOCK_GETTIME */

/* Define if /dev/poll is available */
/* #undef _EVENT_HAVE_DEVPOLL */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef _EVENT_HAVE_DLFCN_H */

/* Define if your system supports the epoll system calls */
/* #undef _EVENT_HAVE_EPOLL */

/* Define to 1 if you have the `epoll_ctl' function. */
/* #undef _EVENT_HAVE_EPOLL_CTL */

/* Define to 1 if you have the `eventfd' function. */
/* #undef _EVENT_HAVE_EVENTFD */

/* Define if your system supports event ports */
/* #undef _EVENT_HAVE_EVENT_PORTS */

/* Define to 1 if you have the `fcntl' function. */
/* #undef _EVENT_HAVE_FCNTL */

/* Define to 1 if you have the <fcntl.h> header file. */
#define _EVENT_HAVE_FCNTL_H 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define _EVENT_HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getnameinfo' function. */
#define _EVENT_HAVE_GETNAMEINFO 1

/* Define to 1 if you have the `getprotobynumber' function. */
#define _EVENT_HAVE_GETPROTOBYNUMBER 1

/* Define to 1 if you have the `getservbyname' function. */
#define _EVENT_HAVE_GETSERVBYNAME 1

/* Define to 1 if you have the `gettimeofday' function. */
/* #define _EVENT_HAVE_GETTIMEOFDAY 1 */

/* Define to 1 if you have the `inet_aton' function. */
/* #undef _EVENT_HAVE_INET_ATON */

/* Define to 1 if you have the `inet_ntop' function. */
/* #undef _EVENT_HAVE_INET_NTOP */

/* Define to 1 if you have the `inet_pton' function. */
/* #undef _EVENT_HAVE_INET_PTON */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #define _EVENT_HAVE_INTTYPES_H 1 */

/* Define to 1 if you have the `kqueue' function. */
/* #undef _EVENT_HAVE_KQUEUE */

/* Define if the system has zlib */
/* #undef _EVENT_HAVE_LIBZ */

/* Define to 1 if you have the <memory.h> header file. */
#define _EVENT_HAVE_MEMORY_H 1

/* Define to 1 if you have the `mmap' function. */
/* #undef _EVENT_HAVE_MMAP */

/* Define to 1 if you have the <netinet/in6.h> header file. */
/* #undef _EVENT_HAVE_NETINET_IN6_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
/* #undef _EVENT_HAVE_NETINET_IN_H */

/* Define to 1 if you have the `pipe' function. */
/* #undef _EVENT_HAVE_PIPE */

/* Define to 1 if you have the `poll' function. */
/* #undef _EVENT_HAVE_POLL */

/* Define to 1 if you have the <poll.h> header file. */
/* #undef _EVENT_HAVE_POLL_H */

/* Define to 1 if you have the `port_create' function. */
/* #undef _EVENT_HAVE_PORT_CREATE */

/* Define to 1 if you have the <port.h> header file. */
/* #undef _EVENT_HAVE_PORT_H */

/* Define if you have POSIX threads libraries and header files. */
/* #undef _EVENT_HAVE_PTHREAD */

/* Define if we have pthreads on this system */
/* #undef _EVENT_HAVE_PTHREADS */

/* Define to 1 if the system has the type `sa_family_t'. */
/* #undef _EVENT_HAVE_SA_FAMILY_T */

/* Define to 1 if you have the `select' function. */
/* #undef _EVENT_HAVE_SELECT */

/* Define to 1 if you have the `sendfile' function. */
/* #undef _EVENT_HAVE_SENDFILE */

/* Define if F_SETFD is defined in <fcntl.h> */
/* #undef _EVENT_HAVE_SETFD */

/* Define to 1 if you have the `sigaction' function. */
/* #undef _EVENT_HAVE_SIGACTION */

/* Define to 1 if you have the `signal' function. */
#define _EVENT_HAVE_SIGNAL 1

/* Define to 1 if you have the `splice' function. */
/* #undef _EVENT_HAVE_SPLICE */

/* Define to 1 if you have the <stdarg.h> header file. */
#define _EVENT_HAVE_STDARG_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define _EVENT_HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
/* #define _EVENT_HAVE_STDINT_H 1 */

/* Define to 1 if you have the <stdlib.h> header file. */
#define _EVENT_HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define _EVENT_HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define _EVENT_HAVE_STRING_H 1

/* Define to 1 if you have the `strlcpy' function. */
/* #undef _EVENT_HAVE_STRLCPY */

/* Define to 1 if you have the `strsep' function. */
/* #undef _EVENT_HAVE_STRSEP */

/* Define to 1 if you have the `strtok_r' function. */
/* #undef _EVENT_HAVE_STRTOK_R */

/* Define to 1 if you have the `strtoll' function. */
/* #define _EVENT_HAVE_STRTOLL 1 */

#define _EVENT_HAVE_STRUCT_ADDRINFO 1

/* Define to 1 if the system has the type `struct in6_addr'. */
#define _EVENT_HAVE_STRUCT_IN6_ADDR 1

/* Define to 1 if `s6_addr16' is member of `struct in6_addr'. */
#define _EVENT_HAVE_STRUCT_IN6_ADDR_S6_ADDR16 1

/* Define to 1 if `s6_addr32' is member of `struct in6_addr'. */
#define _EVENT_HAVE_STRUCT_IN6_ADDR_S6_ADDR32 1

/* Define to 1 if the system has the type `struct sockaddr_in6'. */
#define _EVENT_HAVE_STRUCT_SOCKADDR_IN6 1

/* Define to 1 if `sin6_len' is member of `struct sockaddr_in6'. */
/* #undef _EVENT_HAVE_STRUCT_SOCKADDR_IN6_SIN6_LEN */

/* Define to 1 if `sin_len' is member of `struct sockaddr_in'. */
/* #undef _EVENT_HAVE_STRUCT_SOCKADDR_IN_SIN_LEN */

/* Define to 1 if you have the <sys/devpoll.h> header file. */
/* #undef _EVENT_HAVE_SYS_DEVPOLL_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
/* #undef _EVENT_HAVE_SYS_EPOLL_H */

/* Define to 1 if you have the <sys/eventfd.h> header file. */
/* #undef _EVENT_HAVE_SYS_EVENTFD_H */

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef _EVENT_HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef _EVENT_HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef _EVENT_HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #define _EVENT_HAVE_SYS_PARAM_H 1 */

/* Define to 1 if you have the <sys/queue.h> header file. */
/* #undef _EVENT_HAVE_SYS_QUEUE_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef _EVENT_HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/sendfile.h> header file. */
/* #undef _EVENT_HAVE_SYS_SENDFILE_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef _EVENT_HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define _EVENT_HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
/* #define _EVENT_HAVE_SYS_TIME_H 1 */

/* Define to 1 if you have the <sys/types.h> header file. */
#define _EVENT_HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef _EVENT_HAVE_SYS_UIO_H */

/* Define if TAILQ_FOREACH is defined in <sys/queue.h> */
/* #undef _EVENT_HAVE_TAILQFOREACH */

/* Define if timeradd is defined in <sys/time.h> */
/* #undef _EVENT_HAVE_TIMERADD */

/* Define if timerclear is defined in <sys/time.h> */
#define _EVENT_HAVE_TIMERCLEAR 1

/* Define if timercmp is defined in <sys/time.h> */
#define _EVENT_HAVE_TIMERCMP 1

/* Define if timerisset is defined in <sys/time.h> */
#define _EVENT_HAVE_TIMERISSET 1

/* Define to 1 if the system has the type `uint16_t'. */
/* #define _EVENT_HAVE_UINT16_T 1 */

/* Define to 1 if the system has the type `uint32_t'. */
/* #define _EVENT_HAVE_UINT32_T 1 */

/* Define to 1 if the system has the type `uint64_t'. */
/* #define _EVENT_HAVE_UINT64_T 1 */

/* Define to 1 if the system has the type `uint8_t'. */
/* #define _EVENT_HAVE_UINT8_T 1 */

/* Define to 1 if you have the <unistd.h> header file. */
/* #define _EVENT_HAVE_UNISTD_H 1 */

/* Define to 1 if you have the `vasprintf' function. */
/* #undef _EVENT_HAVE_VASPRINTF */

/* Define if kqueue works correctly with pipes */
/* #undef _EVENT_HAVE_WORKING_KQUEUE */

/* Numeric representation of the version */
#define _EVENT_NUMERIC_VERSION 0x02000500

/* Name of package */
#define _EVENT_PACKAGE "libevent"

/* Define to the address where bug reports for this package should be sent. */
#define _EVENT_PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define _EVENT_PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define _EVENT_PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define _EVENT_PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define _EVENT_PACKAGE_VERSION ""

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef _EVENT_PTHREAD_CREATE_JOINABLE */

/* The size of a `int', as computed by sizeof. */
#define _EVENT_SIZEOF_INT 4

/* The size of a `long', as computed by sizeof. */
#define _EVENT_SIZEOF_LONG 4

/* The size of a `long long', as computed by sizeof. */
#define _EVENT_SIZEOF_LONG_LONG 8

/* The size of a `short', as computed by sizeof. */
#define _EVENT_SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#ifdef _WIN64
#define _EVENT_SIZEOF_SIZE_T 8
#else
#define _EVENT_SIZEOF_SIZE_T 4
#endif

/* Define to 1 if you have the ANSI C header files. */
#define _EVENT_STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define _EVENT_TIME_WITH_SYS_TIME 1

/* Version number of package */
#define _EVENT_VERSION "2.0.5-beta"

/* Define to appropriate substitue if compiler doesnt have __func__ */
#define _EVENT___func__ __FUNCTION__

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef _EVENT_const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef _EVENT___cplusplus
#define _EVENT_inline __inline
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef _EVENT_pid_t */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef _EVENT_size_t */

/* Define to unsigned int if you dont have it */
#define _EVENT_socklen_t unsigned int

/* Define to `int' if <sys/types.h> does not define. */
#define _EVENT_ssize_t SSIZE_T

#endif
