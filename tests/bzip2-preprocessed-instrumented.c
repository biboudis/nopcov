
typedef unsigned int size_t;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;
__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;
__extension__ typedef int __clockid_t;
__extension__ typedef void * __timer_t;
__extension__ typedef long int __blksize_t;
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
__extension__ typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
__extension__ typedef int __intptr_t;
__extension__ typedef unsigned int __socklen_t;
struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef struct _IO_FILE __FILE;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t ;
typedef int _G_int32_t ;
typedef unsigned int _G_uint16_t ;
typedef unsigned int _G_uint32_t ;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;
  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);
typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;
extern int _IO_peekc_locked (_IO_FILE *__fp);
extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area (_IO_FILE *) ;

typedef _G_fpos_t fpos_t;

extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;

extern int remove (__const char *__filename) ;
extern int rename (__const char *__old, __const char *__new) ;


extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) ;


extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);


extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;
extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;


extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) ;
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) ;


extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);
extern int printf (__const char *__restrict __format, ...);
extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) ;
extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);
extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) ;


extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;
extern int scanf (__const char *__restrict __format, ...) ;
extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) ;


extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);


extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);


extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
extern char *gets (char *__s) ;


extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);
extern int puts (__const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);


extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);


extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
extern int fsetpos (FILE *__stream, __const fpos_t *__pos);


extern void clearerr (FILE *__stream) ;
extern int feof (FILE *__stream) ;
extern int ferror (FILE *__stream) ;


extern void perror (__const char *__s);



extern int *__errno_location (void) ;



extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     ;
extern void *memmove (void *__dest, __const void *__src, size_t __n)
     ;


extern void *memset (void *__s, int __c, size_t __n) ;
extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     ;
extern void *memchr (__const void *__s, int __c, size_t __n)
      ;


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     ;
extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     ;
extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     ;
extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) ;
extern int strcmp (__const char *__s1, __const char *__s2)
     ;
extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     ;
extern int strcoll (__const char *__s1, __const char *__s2)
     ;
extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     ;


extern char *strchr (__const char *__s, int __c)
     ;
extern char *strrchr (__const char *__s, int __c)
     ;


extern size_t strcspn (__const char *__s, __const char *__reject)
     ;
extern size_t strspn (__const char *__s, __const char *__accept)
     ;
extern char *strpbrk (__const char *__s, __const char *__accept)
     ;
extern char *strstr (__const char *__haystack, __const char *__needle)
     ;
extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     ;

extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     ;

extern size_t strlen (__const char *__s)
     ;


extern char *strerror (int __errnum) ;

extern void __bzero (void *__s, size_t __n) ;

typedef __off_t off_t;
typedef __mode_t mode_t;

extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) ;
extern int munmap (void *__addr, size_t __len) ;
extern int mprotect (void *__addr, size_t __len, int __prot) ;
extern int msync (void *__addr, size_t __len, int __flags);
extern int mlock (__const void *__addr, size_t __len) ;
extern int munlock (__const void *__addr, size_t __len) ;
extern int mlockall (int __flags) ;
extern int munlockall (void) ;
extern int shm_open (__const char *__name, int __oflag, mode_t __mode);
extern int shm_unlink (__const char *__name);


typedef int __sig_atomic_t;
typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
extern int __sigismember (__const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);

typedef __sig_atomic_t sig_atomic_t;

typedef void (*__sighandler_t) (int);
extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     ;

extern __sighandler_t signal (int __sig, __sighandler_t __handler) __asm__ ("" "__sysv_signal") ;


extern int raise (int __sig) ;

extern int __sigpause (int __sig_or_mask, int __is_sig);
extern int __libc_current_sigrtmin (void) ;
extern int __libc_current_sigrtmax (void) ;

typedef int wchar_t;


typedef struct
  {
    int quot;
    int rem;
  } div_t;
typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;

extern size_t __ctype_get_mb_cur_max (void) ;

extern double atof (__const char *__nptr)
     ;
extern int atoi (__const char *__nptr)
     ;
extern long int atol (__const char *__nptr)
     ;


extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     ;


extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     ;
extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     ;


extern int rand (void) ;
extern void srand (unsigned int __seed) ;


extern void *malloc (size_t __size) ;
extern void *calloc (size_t __nmemb, size_t __size)
     ;


extern void *realloc (void *__ptr, size_t __size)
     ;
extern void free (void *__ptr) ;


extern void abort (void) ;
extern int atexit (void (*__func) (void)) ;


extern void exit (int __status) ;


extern char *getenv (__const char *__name) ;

extern char *__secure_getenv (__const char *__name)
     ;

extern int system (__const char *__command) ;

typedef int (*__compar_fn_t) (__const void *, __const void *);

extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;
extern int abs (int __x) ;
extern long int labs (long int __x) ;


extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;


extern int mblen (__const char *__s, size_t __n) ;
extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) ;
extern int wctomb (char *__s, wchar_t __wchar) ;
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) ;
extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     ;



typedef __ssize_t ssize_t;
extern int access (__const char *__name, int __type) ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
extern int close (int __fd);
extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;
extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
extern int pipe (int __pipedes[2]) ;
extern unsigned int alarm (unsigned int __seconds) ;
extern unsigned int sleep (unsigned int __seconds);
extern int pause (void);
extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     ;
extern int chdir (__const char *__path) ;
extern char *getcwd (char *__buf, size_t __size) ;
extern int dup (int __fd) ;
extern int dup2 (int __fd, int __fd2) ;
extern char **__environ;
extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) ;
extern int execv (__const char *__path, char *__const __argv[])
     ;
extern int execle (__const char *__path, __const char *__arg, ...)
     ;
extern int execl (__const char *__path, __const char *__arg, ...)
     ;
extern int execvp (__const char *__file, char *__const __argv[])
     ;
extern int execlp (__const char *__file, __const char *__arg, ...)
     ;
extern void _exit (int __status) ;
enum
  {
    _PC_LINK_MAX,
    _PC_MAX_CANON,
    _PC_MAX_INPUT,
    _PC_NAME_MAX,
    _PC_PATH_MAX,
    _PC_PIPE_BUF,
    _PC_CHOWN_RESTRICTED,
    _PC_NO_TRUNC,
    _PC_VDISABLE,
    _PC_SYNC_IO,
    _PC_ASYNC_IO,
    _PC_PRIO_IO,
    _PC_SOCK_MAXBUF,
    _PC_FILESIZEBITS,
    _PC_REC_INCR_XFER_SIZE,
    _PC_REC_MAX_XFER_SIZE,
    _PC_REC_MIN_XFER_SIZE,
    _PC_REC_XFER_ALIGN,
    _PC_ALLOC_SIZE_MIN,
    _PC_SYMLINK_MAX,
    _PC_2_SYMLINKS
  };
enum
  {
    _SC_ARG_MAX,
    _SC_CHILD_MAX,
    _SC_CLK_TCK,
    _SC_NGROUPS_MAX,
    _SC_OPEN_MAX,
    _SC_STREAM_MAX,
    _SC_TZNAME_MAX,
    _SC_JOB_CONTROL,
    _SC_SAVED_IDS,
    _SC_REALTIME_SIGNALS,
    _SC_PRIORITY_SCHEDULING,
    _SC_TIMERS,
    _SC_ASYNCHRONOUS_IO,
    _SC_PRIORITIZED_IO,
    _SC_SYNCHRONIZED_IO,
    _SC_FSYNC,
    _SC_MAPPED_FILES,
    _SC_MEMLOCK,
    _SC_MEMLOCK_RANGE,
    _SC_MEMORY_PROTECTION,
    _SC_MESSAGE_PASSING,
    _SC_SEMAPHORES,
    _SC_SHARED_MEMORY_OBJECTS,
    _SC_AIO_LISTIO_MAX,
    _SC_AIO_MAX,
    _SC_AIO_PRIO_DELTA_MAX,
    _SC_DELAYTIMER_MAX,
    _SC_MQ_OPEN_MAX,
    _SC_MQ_PRIO_MAX,
    _SC_VERSION,
    _SC_PAGESIZE,
    _SC_RTSIG_MAX,
    _SC_SEM_NSEMS_MAX,
    _SC_SEM_VALUE_MAX,
    _SC_SIGQUEUE_MAX,
    _SC_TIMER_MAX,
    _SC_BC_BASE_MAX,
    _SC_BC_DIM_MAX,
    _SC_BC_SCALE_MAX,
    _SC_BC_STRING_MAX,
    _SC_COLL_WEIGHTS_MAX,
    _SC_EQUIV_CLASS_MAX,
    _SC_EXPR_NEST_MAX,
    _SC_LINE_MAX,
    _SC_RE_DUP_MAX,
    _SC_CHARCLASS_NAME_MAX,
    _SC_2_VERSION,
    _SC_2_C_BIND,
    _SC_2_C_DEV,
    _SC_2_FORT_DEV,
    _SC_2_FORT_RUN,
    _SC_2_SW_DEV,
    _SC_2_LOCALEDEF,
    _SC_PII,
    _SC_PII_XTI,
    _SC_PII_SOCKET,
    _SC_PII_INTERNET,
    _SC_PII_OSI,
    _SC_POLL,
    _SC_SELECT,
    _SC_UIO_MAXIOV,
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
    _SC_PII_INTERNET_STREAM,
    _SC_PII_INTERNET_DGRAM,
    _SC_PII_OSI_COTS,
    _SC_PII_OSI_CLTS,
    _SC_PII_OSI_M,
    _SC_T_IOV_MAX,
    _SC_THREADS,
    _SC_THREAD_SAFE_FUNCTIONS,
    _SC_GETGR_R_SIZE_MAX,
    _SC_GETPW_R_SIZE_MAX,
    _SC_LOGIN_NAME_MAX,
    _SC_TTY_NAME_MAX,
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
    _SC_THREAD_KEYS_MAX,
    _SC_THREAD_STACK_MIN,
    _SC_THREAD_THREADS_MAX,
    _SC_THREAD_ATTR_STACKADDR,
    _SC_THREAD_ATTR_STACKSIZE,
    _SC_THREAD_PRIORITY_SCHEDULING,
    _SC_THREAD_PRIO_INHERIT,
    _SC_THREAD_PRIO_PROTECT,
    _SC_THREAD_PROCESS_SHARED,
    _SC_NPROCESSORS_CONF,
    _SC_NPROCESSORS_ONLN,
    _SC_PHYS_PAGES,
    _SC_AVPHYS_PAGES,
    _SC_ATEXIT_MAX,
    _SC_PASS_MAX,
    _SC_XOPEN_VERSION,
    _SC_XOPEN_XCU_VERSION,
    _SC_XOPEN_UNIX,
    _SC_XOPEN_CRYPT,
    _SC_XOPEN_ENH_I18N,
    _SC_XOPEN_SHM,
    _SC_2_CHAR_TERM,
    _SC_2_C_VERSION,
    _SC_2_UPE,
    _SC_XOPEN_XPG2,
    _SC_XOPEN_XPG3,
    _SC_XOPEN_XPG4,
    _SC_CHAR_BIT,
    _SC_CHAR_MAX,
    _SC_CHAR_MIN,
    _SC_INT_MAX,
    _SC_INT_MIN,
    _SC_LONG_BIT,
    _SC_WORD_BIT,
    _SC_MB_LEN_MAX,
    _SC_NZERO,
    _SC_SSIZE_MAX,
    _SC_SCHAR_MAX,
    _SC_SCHAR_MIN,
    _SC_SHRT_MAX,
    _SC_SHRT_MIN,
    _SC_UCHAR_MAX,
    _SC_UINT_MAX,
    _SC_ULONG_MAX,
    _SC_USHRT_MAX,
    _SC_NL_ARGMAX,
    _SC_NL_LANGMAX,
    _SC_NL_MSGMAX,
    _SC_NL_NMAX,
    _SC_NL_SETMAX,
    _SC_NL_TEXTMAX,
    _SC_XBS5_ILP32_OFF32,
    _SC_XBS5_ILP32_OFFBIG,
    _SC_XBS5_LP64_OFF64,
    _SC_XBS5_LPBIG_OFFBIG,
    _SC_XOPEN_LEGACY,
    _SC_XOPEN_REALTIME,
    _SC_XOPEN_REALTIME_THREADS,
    _SC_ADVISORY_INFO,
    _SC_BARRIERS,
    _SC_BASE,
    _SC_C_LANG_SUPPORT,
    _SC_C_LANG_SUPPORT_R,
    _SC_CLOCK_SELECTION,
    _SC_CPUTIME,
    _SC_THREAD_CPUTIME,
    _SC_DEVICE_IO,
    _SC_DEVICE_SPECIFIC,
    _SC_DEVICE_SPECIFIC_R,
    _SC_FD_MGMT,
    _SC_FIFO,
    _SC_PIPE,
    _SC_FILE_ATTRIBUTES,
    _SC_FILE_LOCKING,
    _SC_FILE_SYSTEM,
    _SC_MONOTONIC_CLOCK,
    _SC_MULTI_PROCESS,
    _SC_SINGLE_PROCESS,
    _SC_NETWORKING,
    _SC_READER_WRITER_LOCKS,
    _SC_SPIN_LOCKS,
    _SC_REGEXP,
    _SC_REGEX_VERSION,
    _SC_SHELL,
    _SC_SIGNALS,
    _SC_SPAWN,
    _SC_SPORADIC_SERVER,
    _SC_THREAD_SPORADIC_SERVER,
    _SC_SYSTEM_DATABASE,
    _SC_SYSTEM_DATABASE_R,
    _SC_TIMEOUTS,
    _SC_TYPED_MEMORY_OBJECTS,
    _SC_USER_GROUPS,
    _SC_USER_GROUPS_R,
    _SC_2_PBS,
    _SC_2_PBS_ACCOUNTING,
    _SC_2_PBS_LOCATE,
    _SC_2_PBS_MESSAGE,
    _SC_2_PBS_TRACK,
    _SC_SYMLOOP_MAX,
    _SC_STREAMS,
    _SC_2_PBS_CHECKPOINT,
    _SC_V6_ILP32_OFF32,
    _SC_V6_ILP32_OFFBIG,
    _SC_V6_LP64_OFF64,
    _SC_V6_LPBIG_OFFBIG,
    _SC_HOST_NAME_MAX,
    _SC_TRACE,
    _SC_TRACE_EVENT_FILTER,
    _SC_TRACE_INHERIT,
    _SC_TRACE_LOG,
    _SC_LEVEL1_ICACHE_SIZE,
    _SC_LEVEL1_ICACHE_ASSOC,
    _SC_LEVEL1_ICACHE_LINESIZE,
    _SC_LEVEL1_DCACHE_SIZE,
    _SC_LEVEL1_DCACHE_ASSOC,
    _SC_LEVEL1_DCACHE_LINESIZE,
    _SC_LEVEL2_CACHE_SIZE,
    _SC_LEVEL2_CACHE_ASSOC,
    _SC_LEVEL2_CACHE_LINESIZE,
    _SC_LEVEL3_CACHE_SIZE,
    _SC_LEVEL3_CACHE_ASSOC,
    _SC_LEVEL3_CACHE_LINESIZE,
    _SC_LEVEL4_CACHE_SIZE,
    _SC_LEVEL4_CACHE_ASSOC,
    _SC_LEVEL4_CACHE_LINESIZE,
    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,
    _SC_RAW_SOCKETS,
    _SC_V7_ILP32_OFF32,
    _SC_V7_ILP32_OFFBIG,
    _SC_V7_LP64_OFF64,
    _SC_V7_LPBIG_OFFBIG,
    _SC_SS_REPL_MAX,
    _SC_TRACE_EVENT_NAME_MAX,
    _SC_TRACE_NAME_MAX,
    _SC_TRACE_SYS_MAX,
    _SC_TRACE_USER_EVENT_MAX,
    _SC_XOPEN_STREAMS,
    _SC_THREAD_ROBUST_PRIO_INHERIT,
    _SC_THREAD_ROBUST_PRIO_PROTECT
  };
enum
  {
    _CS_PATH,
    _CS_V6_WIDTH_RESTRICTED_ENVS,
    _CS_GNU_LIBC_VERSION,
    _CS_GNU_LIBPTHREAD_VERSION,
    _CS_V5_WIDTH_RESTRICTED_ENVS,
    _CS_V7_WIDTH_RESTRICTED_ENVS,
    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS,
    _CS_LFS_LIBS,
    _CS_LFS_LINTFLAGS,
    _CS_LFS64_CFLAGS,
    _CS_LFS64_LDFLAGS,
    _CS_LFS64_LIBS,
    _CS_LFS64_LINTFLAGS,
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS,
    _CS_XBS5_ILP32_OFF32_LIBS,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LIBS,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
    _CS_XBS5_LP64_OFF64_CFLAGS,
    _CS_XBS5_LP64_OFF64_LDFLAGS,
    _CS_XBS5_LP64_OFF64_LIBS,
    _CS_XBS5_LP64_OFF64_LINTFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LIBS,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LIBS,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LIBS,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LIBS,
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V7_LP64_OFF64_CFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LIBS,
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
    _CS_V6_ENV,
    _CS_V7_ENV
  };
extern long int pathconf (__const char *__path, int __name)
     ;
extern long int fpathconf (int __fd, int __name) ;
extern long int sysconf (int __name) ;
extern __pid_t getpid (void) ;
extern __pid_t getppid (void) ;
extern __pid_t getpgrp (void) ;
extern __pid_t __getpgid (__pid_t __pid) ;
extern int setpgid (__pid_t __pid, __pid_t __pgid) ;
extern __pid_t setsid (void) ;
extern __uid_t getuid (void) ;
extern __uid_t geteuid (void) ;
extern __gid_t getgid (void) ;
extern __gid_t getegid (void) ;
extern int getgroups (int __size, __gid_t __list[]) ;
extern int setuid (__uid_t __uid) ;
extern int setgid (__gid_t __gid) ;
extern __pid_t fork (void) ;
extern char *ttyname (int __fd) ;
extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     ;
extern int isatty (int __fd) ;

extern int link (__const char *__from, __const char *__to)
     ;
extern int unlink (__const char *__name) ;
extern int rmdir (__const char *__path) ;
extern __pid_t tcgetpgrp (int __fd) ;
extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;
extern char *getlogin (void);

//Statistics data structure
typedef struct
{
  int count;
} coverage_t;
//Unprotect CS and initialize variables
void init();
//Report Statistics in the end
void report();
//Tracking block
void track(void* start, void* end);
//Declare a coverage var
coverage_t coverage;
//Text segment addresses
extern char etext, __executable_start;
typedef
   struct {
      char *next_in;
      unsigned int avail_in;
      unsigned int total_in_lo32;
      unsigned int total_in_hi32;
      char *next_out;
      unsigned int avail_out;
      unsigned int total_out_lo32;
      unsigned int total_out_hi32;
      void *state;
      void *(*bzalloc)(void *,int,int);
      void (*bzfree)(void *,void *);
      void *opaque;
   }
   bz_stream;
extern int BZ2_bzCompressInit (
      bz_stream* strm,
      int blockSize100k,
      int verbosity,
      int workFactor
   );
extern int BZ2_bzCompress (
      bz_stream* strm,
      int action
   );
extern int BZ2_bzCompressEnd (
      bz_stream* strm
   );
extern int BZ2_bzDecompressInit (
      bz_stream *strm,
      int verbosity,
      int small
   );
extern int BZ2_bzDecompress (
      bz_stream* strm
   );
extern int BZ2_bzDecompressEnd (
      bz_stream *strm
   );
typedef void BZFILE;
extern BZFILE* BZ2_bzReadOpen (
      int* bzerror,
      FILE* f,
      int verbosity,
      int small,
      void* unused,
      int nUnused
   );
extern void BZ2_bzReadClose (
      int* bzerror,
      BZFILE* b
   );
extern void BZ2_bzReadGetUnused (
      int* bzerror,
      BZFILE* b,
      void** unused,
      int* nUnused
   );
extern int BZ2_bzRead (
      int* bzerror,
      BZFILE* b,
      void* buf,
      int len
   );
extern BZFILE* BZ2_bzWriteOpen (
      int* bzerror,
      FILE* f,
      int blockSize100k,
      int verbosity,
      int workFactor
   );
extern void BZ2_bzWrite (
      int* bzerror,
      BZFILE* b,
      void* buf,
      int len
   );
extern void BZ2_bzWriteClose (
      int* bzerror,
      BZFILE* b,
      int abandon,
      unsigned int* nbytes_in,
      unsigned int* nbytes_out
   );
extern void BZ2_bzWriteClose64 (
      int* bzerror,
      BZFILE* b,
      int abandon,
      unsigned int* nbytes_in_lo32,
      unsigned int* nbytes_in_hi32,
      unsigned int* nbytes_out_lo32,
      unsigned int* nbytes_out_hi32
   );
extern int BZ2_bzBuffToBuffCompress (
      char* dest,
      unsigned int* destLen,
      char* source,
      unsigned int sourceLen,
      int blockSize100k,
      int verbosity,
      int workFactor
   );
extern int BZ2_bzBuffToBuffDecompress (
      char* dest,
      unsigned int* destLen,
      char* source,
      unsigned int sourceLen,
      int small,
      int verbosity
   );
extern const char * BZ2_bzlibVersion (
      void
   );
extern BZFILE * BZ2_bzopen (
      const char *path,
      const char *mode
   );
extern BZFILE * BZ2_bzdopen (
      int fd,
      const char *mode
   );
extern int BZ2_bzread (
      BZFILE* b,
      void* buf,
      int len
   );
extern int BZ2_bzwrite (
      BZFILE* b,
      void* buf,
      int len
   );
extern int BZ2_bzflush (
      BZFILE* b
   );
extern void BZ2_bzclose (
      BZFILE* b
   );
extern const char * BZ2_bzerror (
      BZFILE *b,
      int *errnum
   );

enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern __const unsigned short int **__ctype_b_loc (void)
     ;
extern __const __int32_t **__ctype_tolower_loc (void)
     ;
extern __const __int32_t **__ctype_toupper_loc (void)
     ;

extern int isalnum (int) ;
extern int isalpha (int) ;
extern int iscntrl (int) ;
extern int isdigit (int) ;
extern int islower (int) ;
extern int isgraph (int) ;
extern int isprint (int) ;
extern int ispunct (int) ;
extern int isspace (int) ;
extern int isupper (int) ;
extern int isxdigit (int) ;
extern int tolower (int __c) ;
extern int toupper (int __c) ;


typedef char Char;
typedef unsigned char Bool;
typedef unsigned char UChar;
typedef int Int32;
typedef unsigned int UInt32;
typedef short Int16;
typedef unsigned short UInt16;
extern void BZ2_bz__AssertH__fail ( int errcode );
extern Int32 BZ2_rNums[512];
extern UInt32 BZ2_crc32Table[256];
typedef
   struct {
      bz_stream* strm;
      Int32 mode;
      Int32 state;
      UInt32 avail_in_expect;
      UInt32* arr1;
      UInt32* arr2;
      UInt32* ftab;
      Int32 origPtr;
      UInt32* ptr;
      UChar* block;
      UInt16* mtfv;
      UChar* zbits;
      Int32 workFactor;
      UInt32 state_in_ch;
      Int32 state_in_len;
      Int32 rNToGo; Int32 rTPos;
      Int32 nblock;
      Int32 nblockMAX;
      Int32 numZ;
      Int32 state_out_pos;
      Int32 nInUse;
      Bool inUse[256];
      UChar unseqToSeq[256];
      UInt32 bsBuff;
      Int32 bsLive;
      UInt32 blockCRC;
      UInt32 combinedCRC;
      Int32 verbosity;
      Int32 blockNo;
      Int32 blockSize100k;
      Int32 nMTF;
      Int32 mtfFreq [258];
      UChar selector [(2 + (900000 / 50))];
      UChar selectorMtf[(2 + (900000 / 50))];
      UChar len [6][258];
      Int32 code [6][258];
      Int32 rfreq [6][258];
      UInt32 len_pack[258][4];
   }
   EState;
extern void
BZ2_blockSort ( EState* );
extern void
BZ2_compressBlock ( EState*, Bool );
extern void
BZ2_bsInitWrite ( EState* );
extern void
BZ2_hbAssignCodes ( Int32*, UChar*, Int32, Int32, Int32 );
extern void
BZ2_hbMakeCodeLengths ( UChar*, Int32*, Int32, Int32 );
typedef
   struct {
      bz_stream* strm;
      Int32 state;
      UChar state_out_ch;
      Int32 state_out_len;
      Bool blockRandomised;
      Int32 rNToGo; Int32 rTPos;
      UInt32 bsBuff;
      Int32 bsLive;
      Int32 blockSize100k;
      Bool smallDecompress;
      Int32 currBlockNo;
      Int32 verbosity;
      Int32 origPtr;
      UInt32 tPos;
      Int32 k0;
      Int32 unzftab[256];
      Int32 nblock_used;
      Int32 cftab[257];
      Int32 cftabCopy[257];
      UInt32 *tt;
      UInt16 *ll16;
      UChar *ll4;
      UInt32 storedBlockCRC;
      UInt32 storedCombinedCRC;
      UInt32 calculatedBlockCRC;
      UInt32 calculatedCombinedCRC;
      Int32 nInUse;
      Bool inUse[256];
      Bool inUse16[16];
      UChar seqToUnseq[256];
      UChar mtfa [4096];
      Int32 mtfbase[256 / 16];
      UChar selector [(2 + (900000 / 50))];
      UChar selectorMtf[(2 + (900000 / 50))];
      UChar len [6][258];
      Int32 limit [6][258];
      Int32 base [6][258];
      Int32 perm [6][258];
      Int32 minLens[6];
      Int32 save_i;
      Int32 save_j;
      Int32 save_t;
      Int32 save_alphaSize;
      Int32 save_nGroups;
      Int32 save_nSelectors;
      Int32 save_EOB;
      Int32 save_groupNo;
      Int32 save_groupPos;
      Int32 save_nextSym;
      Int32 save_nblockMAX;
      Int32 save_nblock;
      Int32 save_es;
      Int32 save_N;
      Int32 save_curr;
      Int32 save_zt;
      Int32 save_zn;
      Int32 save_zvec;
      Int32 save_zj;
      Int32 save_gSel;
      Int32 save_gMinlen;
      Int32* save_gLimit;
      Int32* save_gBase;
      Int32* save_gPerm;
   }
   DState;
extern Int32
BZ2_indexIntoF ( Int32, Int32* );
extern Int32
BZ2_decompress ( DState* );
extern void
BZ2_hbCreateDecodeTables ( Int32*, Int32*, Int32*, UChar*,
                           Int32, Int32, Int32 );
static

void fallbackSimpleSort ( UInt32* fmap,
                          UInt32* eclass,
                          Int32 lo,
                          Int32 hi )
{
   Int32 i, j, tmp;
   UInt32 ec_tmp;
   if (lo == hi)  {
						   __asm__ __volatile__ ("nop;");
TRACK1_BEGIN: track(&&TRACK1_BEGIN, &&TRACK1_END);
TRACK1_END:   __asm__ __volatile__ ("nop;");
return;
}
   if (hi - lo > 3) {
  						   __asm__ __volatile__ ("nop;");
  TRACK4_BEGIN: track(&&TRACK4_BEGIN, &&TRACK4_END);
  TRACK4_END:   __asm__ __volatile__ ("nop;");
  for ( i = hi-4; i >= lo; i-- ) {
    						   __asm__ __volatile__ ("nop;");
    TRACK3_BEGIN: track(&&TRACK3_BEGIN, &&TRACK3_END);
    TRACK3_END:   __asm__ __volatile__ ("nop;");
    tmp = fmap[i];
             ec_tmp = eclass[tmp];
             for ( j = i+4; j <= hi && ec_tmp > eclass[fmap[j]]; j += 4 )
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK2_BEGIN: track(&&TRACK2_BEGIN, &&TRACK2_END);
    TRACK2_END:   __asm__ __volatile__ ("nop;");
    fmap[j-4] = fmap[j];
    }
             fmap[j-4] = tmp;
  }
}
   for ( i = hi-1; i >= lo; i-- ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK6_BEGIN: track(&&TRACK6_BEGIN, &&TRACK6_END);
  TRACK6_END:   __asm__ __volatile__ ("nop;");
  tmp = fmap[i];
        ec_tmp = eclass[tmp];
        for ( j = i+1; j <= hi && ec_tmp > eclass[fmap[j]]; j++ )
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK5_BEGIN: track(&&TRACK5_BEGIN, &&TRACK5_END);
  TRACK5_END:   __asm__ __volatile__ ("nop;");
  fmap[j-1] = fmap[j];
  }
        fmap[j-1] = tmp;
}
}
static
void fallbackQSort3 ( UInt32* fmap,
                      UInt32* eclass,
                      Int32 loSt,
                      Int32 hiSt )
{
   Int32 unLo, unHi, ltLo, gtHi, n, m;
   Int32 sp, lo, hi;
   UInt32 med, r, r3;
   Int32 stackLo[100];
   Int32 stackHi[100];
   r = 0;
   sp = 0;
   { stackLo[sp] = loSt; stackHi[sp] = hiSt; sp++; };
   while (sp > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK28_BEGIN: track(&&TRACK28_BEGIN, &&TRACK28_END);
  TRACK28_END:   __asm__ __volatile__ ("nop;");
  { if (!(sp < 100))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK7_BEGIN: track(&&TRACK7_BEGIN, &&TRACK7_END);
  TRACK7_END:   __asm__ __volatile__ ("nop;");
  BZ2_bz__AssertH__fail ( 1004 );
  } };
        { sp--; lo = stackLo[sp]; hi = stackHi[sp]; };
        if (hi - lo < 10) {
    						   __asm__ __volatile__ ("nop;");
    TRACK8_BEGIN: track(&&TRACK8_BEGIN, &&TRACK8_END);
    TRACK8_END:   __asm__ __volatile__ ("nop;");
    fallbackSimpleSort ( fmap, eclass, lo, hi );
             continue;
  }
        r = ((r * 7621) + 1) % 32768;
        r3 = r % 3;
        if (r3 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK9_BEGIN: track(&&TRACK9_BEGIN, &&TRACK9_END);
  TRACK9_END:   __asm__ __volatile__ ("nop;");
  med = eclass[fmap[lo]];
  } else
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK12_BEGIN: track(&&TRACK12_BEGIN, &&TRACK12_END);
  TRACK12_END:   __asm__ __volatile__ ("nop;");
  if (r3 == 1)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK10_BEGIN: track(&&TRACK10_BEGIN, &&TRACK10_END);
  TRACK10_END:   __asm__ __volatile__ ("nop;");
  med = eclass[fmap[(lo+hi)>>1]];
  } else
                      {
  						   __asm__ __volatile__ ("nop;");
  TRACK11_BEGIN: track(&&TRACK11_BEGIN, &&TRACK11_END);
  TRACK11_END:   __asm__ __volatile__ ("nop;");
  med = eclass[fmap[hi]];
  }
  }
        unLo = ltLo = lo;
        unHi = gtHi = hi;
        while (1) {
    						   __asm__ __volatile__ ("nop;");
    TRACK22_BEGIN: track(&&TRACK22_BEGIN, &&TRACK22_END);
    TRACK22_END:   __asm__ __volatile__ ("nop;");
    while (1) {
      						   __asm__ __volatile__ ("nop;");
      TRACK16_BEGIN: track(&&TRACK16_BEGIN, &&TRACK16_END);
      TRACK16_END:   __asm__ __volatile__ ("nop;");
      if (unLo > unHi)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK13_BEGIN: track(&&TRACK13_BEGIN, &&TRACK13_END);
      TRACK13_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  n = (Int32)eclass[fmap[unLo]] - (Int32)med;
                  if (n == 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK14_BEGIN: track(&&TRACK14_BEGIN, &&TRACK14_END);
        TRACK14_END:   __asm__ __volatile__ ("nop;");
        { Int32 zztmp = fmap[unLo]; fmap[unLo] = fmap[ltLo]; fmap[ltLo] = zztmp; };
                       ltLo++; unLo++;
                       continue;
      };
                  if (n > 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK15_BEGIN: track(&&TRACK15_BEGIN, &&TRACK15_END);
      TRACK15_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  unLo++;
    }
             while (1) {
      						   __asm__ __volatile__ ("nop;");
      TRACK20_BEGIN: track(&&TRACK20_BEGIN, &&TRACK20_END);
      TRACK20_END:   __asm__ __volatile__ ("nop;");
      if (unLo > unHi)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK17_BEGIN: track(&&TRACK17_BEGIN, &&TRACK17_END);
      TRACK17_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  n = (Int32)eclass[fmap[unHi]] - (Int32)med;
                  if (n == 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK18_BEGIN: track(&&TRACK18_BEGIN, &&TRACK18_END);
        TRACK18_END:   __asm__ __volatile__ ("nop;");
        { Int32 zztmp = fmap[unHi]; fmap[unHi] = fmap[gtHi]; fmap[gtHi] = zztmp; };
                       gtHi--; unHi--;
                       continue;
      };
                  if (n < 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK19_BEGIN: track(&&TRACK19_BEGIN, &&TRACK19_END);
      TRACK19_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  unHi--;
    }
             if (unLo > unHi)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK21_BEGIN: track(&&TRACK21_BEGIN, &&TRACK21_END);
    TRACK21_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             { Int32 zztmp = fmap[unLo]; fmap[unLo] = fmap[unHi]; fmap[unHi] = zztmp; }; unLo++; unHi--;
  }
        ;
        if (gtHi < ltLo)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK23_BEGIN: track(&&TRACK23_BEGIN, &&TRACK23_END);
  TRACK23_END:   __asm__ __volatile__ ("nop;");
  continue;
  }
        n = ((ltLo-lo) < (unLo-ltLo)) ? (ltLo-lo) : (unLo-ltLo); { Int32 yyp1 = (lo); Int32 yyp2 = (unLo-n); Int32 yyn = (n); while (yyn > 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK24_BEGIN: track(&&TRACK24_BEGIN, &&TRACK24_END);
    TRACK24_END:   __asm__ __volatile__ ("nop;");
    { Int32 zztmp = fmap[yyp1]; fmap[yyp1] = fmap[yyp2]; fmap[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--;
  } };
        m = ((hi-gtHi) < (gtHi-unHi)) ? (hi-gtHi) : (gtHi-unHi); { Int32 yyp1 = (unLo); Int32 yyp2 = (hi-m+1); Int32 yyn = (m); while (yyn > 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK25_BEGIN: track(&&TRACK25_BEGIN, &&TRACK25_END);
    TRACK25_END:   __asm__ __volatile__ ("nop;");
    { Int32 zztmp = fmap[yyp1]; fmap[yyp1] = fmap[yyp2]; fmap[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--;
  } };
        n = lo + unLo - ltLo - 1;
        m = hi - (gtHi - unHi) + 1;
        if (n - lo > hi - m) {
    						   __asm__ __volatile__ ("nop;");
    TRACK26_BEGIN: track(&&TRACK26_BEGIN, &&TRACK26_END);
    TRACK26_END:   __asm__ __volatile__ ("nop;");
    { stackLo[sp] = lo; stackHi[sp] = n; sp++; };
             { stackLo[sp] = m; stackHi[sp] = hi; sp++; };
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK27_BEGIN: track(&&TRACK27_BEGIN, &&TRACK27_END);
    TRACK27_END:   __asm__ __volatile__ ("nop;");
    { stackLo[sp] = m; stackHi[sp] = hi; sp++; };
             { stackLo[sp] = lo; stackHi[sp] = n; sp++; };
  }
}
}
static
void fallbackSort ( UInt32* fmap,
                    UInt32* eclass,
                    UInt32* bhtab,
                    Int32 nblock,
                    Int32 verb )
{
   Int32 ftab[257];
   Int32 ftabCopy[256];
   Int32 H, i, j, k, l, r, cc, cc1;
   Int32 nNotDone;
   Int32 nBhtab;
   UChar* eclass8 = (UChar*)eclass;
   if (verb >= 4)
       {
						   __asm__ __volatile__ ("nop;");
TRACK29_BEGIN: track(&&TRACK29_BEGIN, &&TRACK29_END);
TRACK29_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"        bucket sorting ...\n");
}
   for (i = 0; i < 257; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK30_BEGIN: track(&&TRACK30_BEGIN, &&TRACK30_END);
TRACK30_END:   __asm__ __volatile__ ("nop;");
ftab[i] = 0;
}
   for (i = 0; i < nblock; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK31_BEGIN: track(&&TRACK31_BEGIN, &&TRACK31_END);
TRACK31_END:   __asm__ __volatile__ ("nop;");
ftab[eclass8[i]]++;
}
   for (i = 0; i < 256; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK32_BEGIN: track(&&TRACK32_BEGIN, &&TRACK32_END);
TRACK32_END:   __asm__ __volatile__ ("nop;");
ftabCopy[i] = ftab[i];
}
   for (i = 1; i < 257; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK33_BEGIN: track(&&TRACK33_BEGIN, &&TRACK33_END);
TRACK33_END:   __asm__ __volatile__ ("nop;");
ftab[i] += ftab[i-1];
}
   for (i = 0; i < nblock; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK34_BEGIN: track(&&TRACK34_BEGIN, &&TRACK34_END);
  TRACK34_END:   __asm__ __volatile__ ("nop;");
  j = eclass8[i];
        k = ftab[j] - 1;
        ftab[j] = k;
        fmap[k] = i;
}
   nBhtab = 2 + (nblock / 32);
   for (i = 0; i < nBhtab; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK35_BEGIN: track(&&TRACK35_BEGIN, &&TRACK35_END);
TRACK35_END:   __asm__ __volatile__ ("nop;");
bhtab[i] = 0;
}
   for (i = 0; i < 256; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK36_BEGIN: track(&&TRACK36_BEGIN, &&TRACK36_END);
TRACK36_END:   __asm__ __volatile__ ("nop;");
bhtab[(ftab[i]) >> 5] |= (1 << ((ftab[i]) & 31));
}
   for (i = 0; i < 32; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK37_BEGIN: track(&&TRACK37_BEGIN, &&TRACK37_END);
  TRACK37_END:   __asm__ __volatile__ ("nop;");
  bhtab[(nblock + 2*i) >> 5] |= (1 << ((nblock + 2*i) & 31));
        bhtab[(nblock + 2*i + 1) >> 5] &= ~(1 << ((nblock + 2*i + 1) & 31));
}
   H = 1;
   while (1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK58_BEGIN: track(&&TRACK58_BEGIN, &&TRACK58_END);
  TRACK58_END:   __asm__ __volatile__ ("nop;");
  if (verb >= 4)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK38_BEGIN: track(&&TRACK38_BEGIN, &&TRACK38_END);
  TRACK38_END:   __asm__ __volatile__ ("nop;");
  fprintf(stderr,"        depth %6d has ",H);
  }
        j = 0;
        for (i = 0; i < nblock; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK41_BEGIN: track(&&TRACK41_BEGIN, &&TRACK41_END);
    TRACK41_END:   __asm__ __volatile__ ("nop;");
    if ((bhtab[(i) >> 5] & (1 << ((i) & 31))))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK39_BEGIN: track(&&TRACK39_BEGIN, &&TRACK39_END);
    TRACK39_END:   __asm__ __volatile__ ("nop;");
    j = i;
    }
             k = fmap[i] - H; if (k < 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK40_BEGIN: track(&&TRACK40_BEGIN, &&TRACK40_END);
    TRACK40_END:   __asm__ __volatile__ ("nop;");
    k += nblock;
    }
             eclass[k] = j;
  }
        nNotDone = 0;
        r = -1;
        while (1) {
    						   __asm__ __volatile__ ("nop;");
    TRACK55_BEGIN: track(&&TRACK55_BEGIN, &&TRACK55_END);
    TRACK55_END:   __asm__ __volatile__ ("nop;");
    k = r + 1;
             while ((bhtab[(k) >> 5] & (1 << ((k) & 31))) && ((k) & 0x01f))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK42_BEGIN: track(&&TRACK42_BEGIN, &&TRACK42_END);
    TRACK42_END:   __asm__ __volatile__ ("nop;");
    k++;
    }
             if ((bhtab[(k) >> 5] & (1 << ((k) & 31)))) {
      						   __asm__ __volatile__ ("nop;");
      TRACK45_BEGIN: track(&&TRACK45_BEGIN, &&TRACK45_END);
      TRACK45_END:   __asm__ __volatile__ ("nop;");
      while (bhtab[(k) >> 5] == 0xffffffff)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK43_BEGIN: track(&&TRACK43_BEGIN, &&TRACK43_END);
      TRACK43_END:   __asm__ __volatile__ ("nop;");
      k += 32;
      }
                  while ((bhtab[(k) >> 5] & (1 << ((k) & 31))))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK44_BEGIN: track(&&TRACK44_BEGIN, &&TRACK44_END);
      TRACK44_END:   __asm__ __volatile__ ("nop;");
      k++;
      }
    }
             l = k - 1;
             if (l >= nblock)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK46_BEGIN: track(&&TRACK46_BEGIN, &&TRACK46_END);
    TRACK46_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             while (!(bhtab[(k) >> 5] & (1 << ((k) & 31))) && ((k) & 0x01f))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK47_BEGIN: track(&&TRACK47_BEGIN, &&TRACK47_END);
    TRACK47_END:   __asm__ __volatile__ ("nop;");
    k++;
    }
             if (!(bhtab[(k) >> 5] & (1 << ((k) & 31)))) {
      						   __asm__ __volatile__ ("nop;");
      TRACK50_BEGIN: track(&&TRACK50_BEGIN, &&TRACK50_END);
      TRACK50_END:   __asm__ __volatile__ ("nop;");
      while (bhtab[(k) >> 5] == 0x00000000)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK48_BEGIN: track(&&TRACK48_BEGIN, &&TRACK48_END);
      TRACK48_END:   __asm__ __volatile__ ("nop;");
      k += 32;
      }
                  while (!(bhtab[(k) >> 5] & (1 << ((k) & 31))))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK49_BEGIN: track(&&TRACK49_BEGIN, &&TRACK49_END);
      TRACK49_END:   __asm__ __volatile__ ("nop;");
      k++;
      }
    }
             r = k - 1;
             if (r >= nblock)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK51_BEGIN: track(&&TRACK51_BEGIN, &&TRACK51_END);
    TRACK51_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             if (r > l) {
      						   __asm__ __volatile__ ("nop;");
      TRACK54_BEGIN: track(&&TRACK54_BEGIN, &&TRACK54_END);
      TRACK54_END:   __asm__ __volatile__ ("nop;");
      nNotDone += (r - l + 1);
                  fallbackQSort3 ( fmap, eclass, l, r );
                  cc = -1;
                  for (i = l; i <= r; i++) {
        						   __asm__ __volatile__ ("nop;");
        TRACK53_BEGIN: track(&&TRACK53_BEGIN, &&TRACK53_END);
        TRACK53_END:   __asm__ __volatile__ ("nop;");
        cc1 = eclass[fmap[i]];
                       if (cc != cc1) {
          						   __asm__ __volatile__ ("nop;");
          TRACK52_BEGIN: track(&&TRACK52_BEGIN, &&TRACK52_END);
          TRACK52_END:   __asm__ __volatile__ ("nop;");
          bhtab[(i) >> 5] |= (1 << ((i) & 31)); cc = cc1;
        };
      }
    }
  }
        if (verb >= 4)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK56_BEGIN: track(&&TRACK56_BEGIN, &&TRACK56_END);
  TRACK56_END:   __asm__ __volatile__ ("nop;");
  fprintf(stderr,"%6d unresolved strings\n",nNotDone);
  }
        H *= 2;
        if (H > nblock || nNotDone == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK57_BEGIN: track(&&TRACK57_BEGIN, &&TRACK57_END);
  TRACK57_END:   __asm__ __volatile__ ("nop;");
  break;
  }
}
   if (verb >= 4)
       {
						   __asm__ __volatile__ ("nop;");
TRACK59_BEGIN: track(&&TRACK59_BEGIN, &&TRACK59_END);
TRACK59_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"        reconstructing block ...\n");
}
   j = 0;
   for (i = 0; i < nblock; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK61_BEGIN: track(&&TRACK61_BEGIN, &&TRACK61_END);
  TRACK61_END:   __asm__ __volatile__ ("nop;");
  while (ftabCopy[j] == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK60_BEGIN: track(&&TRACK60_BEGIN, &&TRACK60_END);
  TRACK60_END:   __asm__ __volatile__ ("nop;");
  j++;
  }
        ftabCopy[j]--;
        eclass8[fmap[i]] = (UChar)j;
}
   { if (!(j < 256))  {
						   __asm__ __volatile__ ("nop;");
TRACK62_BEGIN: track(&&TRACK62_BEGIN, &&TRACK62_END);
TRACK62_END:   __asm__ __volatile__ ("nop;");
BZ2_bz__AssertH__fail ( 1005 );
} };
}
static

Bool mainGtU ( UInt32 i1,
               UInt32 i2,
               UChar* block,
               UInt16* quadrant,
               UInt32 nblock,
               Int32* budget )
{
   Int32 k;
   UChar c1, c2;
   UInt16 s1, s2;
   ;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK63_BEGIN: track(&&TRACK63_BEGIN, &&TRACK63_END);
TRACK63_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK64_BEGIN: track(&&TRACK64_BEGIN, &&TRACK64_END);
TRACK64_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK65_BEGIN: track(&&TRACK65_BEGIN, &&TRACK65_END);
TRACK65_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK66_BEGIN: track(&&TRACK66_BEGIN, &&TRACK66_END);
TRACK66_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK67_BEGIN: track(&&TRACK67_BEGIN, &&TRACK67_END);
TRACK67_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK68_BEGIN: track(&&TRACK68_BEGIN, &&TRACK68_END);
TRACK68_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK69_BEGIN: track(&&TRACK69_BEGIN, &&TRACK69_END);
TRACK69_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK70_BEGIN: track(&&TRACK70_BEGIN, &&TRACK70_END);
TRACK70_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK71_BEGIN: track(&&TRACK71_BEGIN, &&TRACK71_END);
TRACK71_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK72_BEGIN: track(&&TRACK72_BEGIN, &&TRACK72_END);
TRACK72_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK73_BEGIN: track(&&TRACK73_BEGIN, &&TRACK73_END);
TRACK73_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2)  {
						   __asm__ __volatile__ ("nop;");
TRACK74_BEGIN: track(&&TRACK74_BEGIN, &&TRACK74_END);
TRACK74_END:   __asm__ __volatile__ ("nop;");
return (c1 > c2);
}
   i1++; i2++;
   k = nblock + 8;
   do {
  						   __asm__ __volatile__ ("nop;");
  TRACK93_BEGIN: track(&&TRACK93_BEGIN, &&TRACK93_END);
  TRACK93_END:   __asm__ __volatile__ ("nop;");
  c1 = block[i1]; c2 = block[i2];
        if (c1 != c2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK75_BEGIN: track(&&TRACK75_BEGIN, &&TRACK75_END);
  TRACK75_END:   __asm__ __volatile__ ("nop;");
  return (c1 > c2);
  }
        s1 = quadrant[i1]; s2 = quadrant[i2];
        if (s1 != s2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK76_BEGIN: track(&&TRACK76_BEGIN, &&TRACK76_END);
  TRACK76_END:   __asm__ __volatile__ ("nop;");
  return (s1 > s2);
  }
        i1++; i2++;
        c1 = block[i1]; c2 = block[i2];
        if (c1 != c2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK77_BEGIN: track(&&TRACK77_BEGIN, &&TRACK77_END);
  TRACK77_END:   __asm__ __volatile__ ("nop;");
  return (c1 > c2);
  }
        s1 = quadrant[i1]; s2 = quadrant[i2];
        if (s1 != s2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK78_BEGIN: track(&&TRACK78_BEGIN, &&TRACK78_END);
  TRACK78_END:   __asm__ __volatile__ ("nop;");
  return (s1 > s2);
  }
        i1++; i2++;
        c1 = block[i1]; c2 = block[i2];
        if (c1 != c2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK79_BEGIN: track(&&TRACK79_BEGIN, &&TRACK79_END);
  TRACK79_END:   __asm__ __volatile__ ("nop;");
  return (c1 > c2);
  }
        s1 = quadrant[i1]; s2 = quadrant[i2];
        if (s1 != s2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK80_BEGIN: track(&&TRACK80_BEGIN, &&TRACK80_END);
  TRACK80_END:   __asm__ __volatile__ ("nop;");
  return (s1 > s2);
  }
        i1++; i2++;
        c1 = block[i1]; c2 = block[i2];
        if (c1 != c2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK81_BEGIN: track(&&TRACK81_BEGIN, &&TRACK81_END);
  TRACK81_END:   __asm__ __volatile__ ("nop;");
  return (c1 > c2);
  }
        s1 = quadrant[i1]; s2 = quadrant[i2];
        if (s1 != s2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK82_BEGIN: track(&&TRACK82_BEGIN, &&TRACK82_END);
  TRACK82_END:   __asm__ __volatile__ ("nop;");
  return (s1 > s2);
  }
        i1++; i2++;
        c1 = block[i1]; c2 = block[i2];
        if (c1 != c2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK83_BEGIN: track(&&TRACK83_BEGIN, &&TRACK83_END);
  TRACK83_END:   __asm__ __volatile__ ("nop;");
  return (c1 > c2);
  }
        s1 = quadrant[i1]; s2 = quadrant[i2];
        if (s1 != s2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK84_BEGIN: track(&&TRACK84_BEGIN, &&TRACK84_END);
  TRACK84_END:   __asm__ __volatile__ ("nop;");
  return (s1 > s2);
  }
        i1++; i2++;
        c1 = block[i1]; c2 = block[i2];
        if (c1 != c2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK85_BEGIN: track(&&TRACK85_BEGIN, &&TRACK85_END);
  TRACK85_END:   __asm__ __volatile__ ("nop;");
  return (c1 > c2);
  }
        s1 = quadrant[i1]; s2 = quadrant[i2];
        if (s1 != s2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK86_BEGIN: track(&&TRACK86_BEGIN, &&TRACK86_END);
  TRACK86_END:   __asm__ __volatile__ ("nop;");
  return (s1 > s2);
  }
        i1++; i2++;
        c1 = block[i1]; c2 = block[i2];
        if (c1 != c2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK87_BEGIN: track(&&TRACK87_BEGIN, &&TRACK87_END);
  TRACK87_END:   __asm__ __volatile__ ("nop;");
  return (c1 > c2);
  }
        s1 = quadrant[i1]; s2 = quadrant[i2];
        if (s1 != s2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK88_BEGIN: track(&&TRACK88_BEGIN, &&TRACK88_END);
  TRACK88_END:   __asm__ __volatile__ ("nop;");
  return (s1 > s2);
  }
        i1++; i2++;
        c1 = block[i1]; c2 = block[i2];
        if (c1 != c2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK89_BEGIN: track(&&TRACK89_BEGIN, &&TRACK89_END);
  TRACK89_END:   __asm__ __volatile__ ("nop;");
  return (c1 > c2);
  }
        s1 = quadrant[i1]; s2 = quadrant[i2];
        if (s1 != s2)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK90_BEGIN: track(&&TRACK90_BEGIN, &&TRACK90_END);
  TRACK90_END:   __asm__ __volatile__ ("nop;");
  return (s1 > s2);
  }
        i1++; i2++;
        if (i1 >= nblock)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK91_BEGIN: track(&&TRACK91_BEGIN, &&TRACK91_END);
  TRACK91_END:   __asm__ __volatile__ ("nop;");
  i1 -= nblock;
  }
        if (i2 >= nblock)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK92_BEGIN: track(&&TRACK92_BEGIN, &&TRACK92_END);
  TRACK92_END:   __asm__ __volatile__ ("nop;");
  i2 -= nblock;
  }
        k -= 8;
        (*budget)--;
}
      while (k >= 0);
   return ((Bool)0);
}
static
Int32 incs[14] = { 1, 4, 13, 40, 121, 364, 1093, 3280,
                   9841, 29524, 88573, 265720,
                   797161, 2391484 };
static
void mainSimpleSort ( UInt32* ptr,
                      UChar* block,
                      UInt16* quadrant,
                      Int32 nblock,
                      Int32 lo,
                      Int32 hi,
                      Int32 d,
                      Int32* budget )
{
   Int32 i, j, h, bigN, hp;
   UInt32 v;
   bigN = hi - lo + 1;
   if (bigN < 2)  {
						   __asm__ __volatile__ ("nop;");
TRACK94_BEGIN: track(&&TRACK94_BEGIN, &&TRACK94_END);
TRACK94_END:   __asm__ __volatile__ ("nop;");
return;
}
   hp = 0;
   while (incs[hp] < bigN)  {
						   __asm__ __volatile__ ("nop;");
TRACK95_BEGIN: track(&&TRACK95_BEGIN, &&TRACK95_END);
TRACK95_END:   __asm__ __volatile__ ("nop;");
hp++;
}
   hp--;
   for (; hp >= 0; hp--) {
  						   __asm__ __volatile__ ("nop;");
  TRACK107_BEGIN: track(&&TRACK107_BEGIN, &&TRACK107_END);
  TRACK107_END:   __asm__ __volatile__ ("nop;");
  h = incs[hp];
        i = lo + h;
        while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK106_BEGIN: track(&&TRACK106_BEGIN, &&TRACK106_END);
    TRACK106_END:   __asm__ __volatile__ ("nop;");
    if (i > hi)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK96_BEGIN: track(&&TRACK96_BEGIN, &&TRACK96_END);
    TRACK96_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             v = ptr[i];
             j = i;
             while ( mainGtU (
                        ptr[j-h]+d, v+d, block, quadrant, nblock, budget
                     ) ) {
      						   __asm__ __volatile__ ("nop;");
      TRACK98_BEGIN: track(&&TRACK98_BEGIN, &&TRACK98_END);
      TRACK98_END:   __asm__ __volatile__ ("nop;");
      ptr[j] = ptr[j-h];
                  j = j - h;
                  if (j <= (lo + h - 1))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK97_BEGIN: track(&&TRACK97_BEGIN, &&TRACK97_END);
      TRACK97_END:   __asm__ __volatile__ ("nop;");
      break;
      }
    }
             ptr[j] = v;
             i++;
             if (i > hi)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK99_BEGIN: track(&&TRACK99_BEGIN, &&TRACK99_END);
    TRACK99_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             v = ptr[i];
             j = i;
             while ( mainGtU (
                        ptr[j-h]+d, v+d, block, quadrant, nblock, budget
                     ) ) {
      						   __asm__ __volatile__ ("nop;");
      TRACK101_BEGIN: track(&&TRACK101_BEGIN, &&TRACK101_END);
      TRACK101_END:   __asm__ __volatile__ ("nop;");
      ptr[j] = ptr[j-h];
                  j = j - h;
                  if (j <= (lo + h - 1))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK100_BEGIN: track(&&TRACK100_BEGIN, &&TRACK100_END);
      TRACK100_END:   __asm__ __volatile__ ("nop;");
      break;
      }
    }
             ptr[j] = v;
             i++;
             if (i > hi)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK102_BEGIN: track(&&TRACK102_BEGIN, &&TRACK102_END);
    TRACK102_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             v = ptr[i];
             j = i;
             while ( mainGtU (
                        ptr[j-h]+d, v+d, block, quadrant, nblock, budget
                     ) ) {
      						   __asm__ __volatile__ ("nop;");
      TRACK104_BEGIN: track(&&TRACK104_BEGIN, &&TRACK104_END);
      TRACK104_END:   __asm__ __volatile__ ("nop;");
      ptr[j] = ptr[j-h];
                  j = j - h;
                  if (j <= (lo + h - 1))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK103_BEGIN: track(&&TRACK103_BEGIN, &&TRACK103_END);
      TRACK103_END:   __asm__ __volatile__ ("nop;");
      break;
      }
    }
             ptr[j] = v;
             i++;
             if (*budget < 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK105_BEGIN: track(&&TRACK105_BEGIN, &&TRACK105_END);
    TRACK105_END:   __asm__ __volatile__ ("nop;");
    return;
    }
  }
}
}
static

UChar mmed3 ( UChar a, UChar b, UChar c )
{
   UChar t;
   if (a > b) {
  						   __asm__ __volatile__ ("nop;");
  TRACK108_BEGIN: track(&&TRACK108_BEGIN, &&TRACK108_END);
  TRACK108_END:   __asm__ __volatile__ ("nop;");
  t = a; a = b; b = t;
};
   if (b > c) {
  						   __asm__ __volatile__ ("nop;");
  TRACK110_BEGIN: track(&&TRACK110_BEGIN, &&TRACK110_END);
  TRACK110_END:   __asm__ __volatile__ ("nop;");
  b = c;
        if (a > b)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK109_BEGIN: track(&&TRACK109_BEGIN, &&TRACK109_END);
  TRACK109_END:   __asm__ __volatile__ ("nop;");
  b = a;
  }
}
   return b;
}
static
void mainQSort3 ( UInt32* ptr,
                  UChar* block,
                  UInt16* quadrant,
                  Int32 nblock,
                  Int32 loSt,
                  Int32 hiSt,
                  Int32 dSt,
                  Int32* budget )
{
   Int32 unLo, unHi, ltLo, gtHi, n, m, med;
   Int32 sp, lo, hi, d;
   Int32 stackLo[100];
   Int32 stackHi[100];
   Int32 stackD [100];
   Int32 nextLo[3];
   Int32 nextHi[3];
   Int32 nextD [3];
   sp = 0;
   { stackLo[sp] = loSt; stackHi[sp] = hiSt; stackD [sp] = dSt; sp++; };
   while (sp > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK130_BEGIN: track(&&TRACK130_BEGIN, &&TRACK130_END);
  TRACK130_END:   __asm__ __volatile__ ("nop;");
  { if (!(sp < 100))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK111_BEGIN: track(&&TRACK111_BEGIN, &&TRACK111_END);
  TRACK111_END:   __asm__ __volatile__ ("nop;");
  BZ2_bz__AssertH__fail ( 1001 );
  } };
        { sp--; lo = stackLo[sp]; hi = stackHi[sp]; d = stackD [sp]; };
        if (hi - lo < 20 ||
            d > (2 + 12)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK113_BEGIN: track(&&TRACK113_BEGIN, &&TRACK113_END);
    TRACK113_END:   __asm__ __volatile__ ("nop;");
    mainSimpleSort ( ptr, block, quadrant, nblock, lo, hi, d, budget );
             if (*budget < 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK112_BEGIN: track(&&TRACK112_BEGIN, &&TRACK112_END);
    TRACK112_END:   __asm__ __volatile__ ("nop;");
    return;
    }
             continue;
  }
        med = (Int32)
              mmed3 ( block[ptr[ lo ]+d],
                      block[ptr[ hi ]+d],
                      block[ptr[ (lo+hi)>>1 ]+d] );
        unLo = ltLo = lo;
        unHi = gtHi = hi;
        while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK123_BEGIN: track(&&TRACK123_BEGIN, &&TRACK123_END);
    TRACK123_END:   __asm__ __volatile__ ("nop;");
    while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK117_BEGIN: track(&&TRACK117_BEGIN, &&TRACK117_END);
      TRACK117_END:   __asm__ __volatile__ ("nop;");
      if (unLo > unHi)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK114_BEGIN: track(&&TRACK114_BEGIN, &&TRACK114_END);
      TRACK114_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  n = ((Int32)block[ptr[unLo]+d]) - med;
                  if (n == 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK115_BEGIN: track(&&TRACK115_BEGIN, &&TRACK115_END);
        TRACK115_END:   __asm__ __volatile__ ("nop;");
        { Int32 zztmp = ptr[unLo]; ptr[unLo] = ptr[ltLo]; ptr[ltLo] = zztmp; };
                       ltLo++; unLo++; continue;
      };
                  if (n > 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK116_BEGIN: track(&&TRACK116_BEGIN, &&TRACK116_END);
      TRACK116_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  unLo++;
    }
             while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK121_BEGIN: track(&&TRACK121_BEGIN, &&TRACK121_END);
      TRACK121_END:   __asm__ __volatile__ ("nop;");
      if (unLo > unHi)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK118_BEGIN: track(&&TRACK118_BEGIN, &&TRACK118_END);
      TRACK118_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  n = ((Int32)block[ptr[unHi]+d]) - med;
                  if (n == 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK119_BEGIN: track(&&TRACK119_BEGIN, &&TRACK119_END);
        TRACK119_END:   __asm__ __volatile__ ("nop;");
        { Int32 zztmp = ptr[unHi]; ptr[unHi] = ptr[gtHi]; ptr[gtHi] = zztmp; };
                       gtHi--; unHi--; continue;
      };
                  if (n < 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK120_BEGIN: track(&&TRACK120_BEGIN, &&TRACK120_END);
      TRACK120_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  unHi--;
    }
             if (unLo > unHi)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK122_BEGIN: track(&&TRACK122_BEGIN, &&TRACK122_END);
    TRACK122_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             { Int32 zztmp = ptr[unLo]; ptr[unLo] = ptr[unHi]; ptr[unHi] = zztmp; }; unLo++; unHi--;
  }
        ;
        if (gtHi < ltLo) {
    						   __asm__ __volatile__ ("nop;");
    TRACK124_BEGIN: track(&&TRACK124_BEGIN, &&TRACK124_END);
    TRACK124_END:   __asm__ __volatile__ ("nop;");
    { stackLo[sp] = lo; stackHi[sp] = hi; stackD [sp] = d+1; sp++; };
             continue;
  }
        n = ((ltLo-lo) < (unLo-ltLo)) ? (ltLo-lo) : (unLo-ltLo); { Int32 yyp1 = (lo); Int32 yyp2 = (unLo-n); Int32 yyn = (n); while (yyn > 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK125_BEGIN: track(&&TRACK125_BEGIN, &&TRACK125_END);
    TRACK125_END:   __asm__ __volatile__ ("nop;");
    { Int32 zztmp = ptr[yyp1]; ptr[yyp1] = ptr[yyp2]; ptr[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--;
  } };
        m = ((hi-gtHi) < (gtHi-unHi)) ? (hi-gtHi) : (gtHi-unHi); { Int32 yyp1 = (unLo); Int32 yyp2 = (hi-m+1); Int32 yyn = (m); while (yyn > 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK126_BEGIN: track(&&TRACK126_BEGIN, &&TRACK126_END);
    TRACK126_END:   __asm__ __volatile__ ("nop;");
    { Int32 zztmp = ptr[yyp1]; ptr[yyp1] = ptr[yyp2]; ptr[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--;
  } };
        n = lo + unLo - ltLo - 1;
        m = hi - (gtHi - unHi) + 1;
        nextLo[0] = lo; nextHi[0] = n; nextD[0] = d;
        nextLo[1] = m; nextHi[1] = hi; nextD[1] = d;
        nextLo[2] = n+1; nextHi[2] = m-1; nextD[2] = d+1;
        if ((nextHi[0]-nextLo[0]) < (nextHi[1]-nextLo[1])) {
    Int32 tz;
    						   __asm__ __volatile__ ("nop;");
    TRACK127_BEGIN: track(&&TRACK127_BEGIN, &&TRACK127_END);
    TRACK127_END:   __asm__ __volatile__ ("nop;");
    tz = nextLo[0]; nextLo[0] = nextLo[1]; nextLo[1] = tz; tz = nextHi[0]; nextHi[0] = nextHi[1]; nextHi[1] = tz; tz = nextD [0]; nextD [0] = nextD [1]; nextD [1] = tz;
  };
        if ((nextHi[1]-nextLo[1]) < (nextHi[2]-nextLo[2])) {
    Int32 tz;
    						   __asm__ __volatile__ ("nop;");
    TRACK128_BEGIN: track(&&TRACK128_BEGIN, &&TRACK128_END);
    TRACK128_END:   __asm__ __volatile__ ("nop;");
    tz = nextLo[1]; nextLo[1] = nextLo[2]; nextLo[2] = tz; tz = nextHi[1]; nextHi[1] = nextHi[2]; nextHi[2] = tz; tz = nextD [1]; nextD [1] = nextD [2]; nextD [2] = tz;
  };
        if ((nextHi[0]-nextLo[0]) < (nextHi[1]-nextLo[1])) {
    Int32 tz;
    						   __asm__ __volatile__ ("nop;");
    TRACK129_BEGIN: track(&&TRACK129_BEGIN, &&TRACK129_END);
    TRACK129_END:   __asm__ __volatile__ ("nop;");
    tz = nextLo[0]; nextLo[0] = nextLo[1]; nextLo[1] = tz; tz = nextHi[0]; nextHi[0] = nextHi[1]; nextHi[1] = tz; tz = nextD [0]; nextD [0] = nextD [1]; nextD [1] = tz;
  };
        ;
        ;
        { stackLo[sp] = nextLo[0]; stackHi[sp] = nextHi[0]; stackD [sp] = nextD[0]; sp++; };
        { stackLo[sp] = nextLo[1]; stackHi[sp] = nextHi[1]; stackD [sp] = nextD[1]; sp++; };
        { stackLo[sp] = nextLo[2]; stackHi[sp] = nextHi[2]; stackD [sp] = nextD[2]; sp++; };
}
}
static
void mainSort ( UInt32* ptr,
                UChar* block,
                UInt16* quadrant,
                UInt32* ftab,
                Int32 nblock,
                Int32 verb,
                Int32* budget )
{
   Int32 i, j, k, ss, sb;
   Int32 runningOrder[256];
   Bool bigDone[256];
   Int32 copyStart[256];
   Int32 copyEnd [256];
   UChar c1;
   Int32 numQSorted;
   UInt16 s;
   if (verb >= 4)  {
						   __asm__ __volatile__ ("nop;");
TRACK131_BEGIN: track(&&TRACK131_BEGIN, &&TRACK131_END);
TRACK131_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"        main sort initialise ...\n");
}
   for (i = 65536; i >= 0; i--)  {
						   __asm__ __volatile__ ("nop;");
TRACK132_BEGIN: track(&&TRACK132_BEGIN, &&TRACK132_END);
TRACK132_END:   __asm__ __volatile__ ("nop;");
ftab[i] = 0;
}
   j = block[0] << 8;
   i = nblock-1;
   for (; i >= 3; i -= 4) {
  						   __asm__ __volatile__ ("nop;");
  TRACK133_BEGIN: track(&&TRACK133_BEGIN, &&TRACK133_END);
  TRACK133_END:   __asm__ __volatile__ ("nop;");
  quadrant[i] = 0;
        j = (j >> 8) | ( ((UInt16)block[i]) << 8);
        ftab[j]++;
        quadrant[i-1] = 0;
        j = (j >> 8) | ( ((UInt16)block[i-1]) << 8);
        ftab[j]++;
        quadrant[i-2] = 0;
        j = (j >> 8) | ( ((UInt16)block[i-2]) << 8);
        ftab[j]++;
        quadrant[i-3] = 0;
        j = (j >> 8) | ( ((UInt16)block[i-3]) << 8);
        ftab[j]++;
}
   for (; i >= 0; i--) {
  						   __asm__ __volatile__ ("nop;");
  TRACK134_BEGIN: track(&&TRACK134_BEGIN, &&TRACK134_END);
  TRACK134_END:   __asm__ __volatile__ ("nop;");
  quadrant[i] = 0;
        j = (j >> 8) | ( ((UInt16)block[i]) << 8);
        ftab[j]++;
}
   for (i = 0; i < (2 + 12 + 18 + 2); i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK135_BEGIN: track(&&TRACK135_BEGIN, &&TRACK135_END);
  TRACK135_END:   __asm__ __volatile__ ("nop;");
  block [nblock+i] = block[i];
        quadrant[nblock+i] = 0;
}
   if (verb >= 4)  {
						   __asm__ __volatile__ ("nop;");
TRACK136_BEGIN: track(&&TRACK136_BEGIN, &&TRACK136_END);
TRACK136_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"        bucket sorting ...\n");
}
   for (i = 1; i <= 65536; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK137_BEGIN: track(&&TRACK137_BEGIN, &&TRACK137_END);
TRACK137_END:   __asm__ __volatile__ ("nop;");
ftab[i] += ftab[i-1];
}
   s = block[0] << 8;
   i = nblock-1;
   for (; i >= 3; i -= 4) {
  						   __asm__ __volatile__ ("nop;");
  TRACK138_BEGIN: track(&&TRACK138_BEGIN, &&TRACK138_END);
  TRACK138_END:   __asm__ __volatile__ ("nop;");
  s = (s >> 8) | (block[i] << 8);
        j = ftab[s] -1;
        ftab[s] = j;
        ptr[j] = i;
        s = (s >> 8) | (block[i-1] << 8);
        j = ftab[s] -1;
        ftab[s] = j;
        ptr[j] = i-1;
        s = (s >> 8) | (block[i-2] << 8);
        j = ftab[s] -1;
        ftab[s] = j;
        ptr[j] = i-2;
        s = (s >> 8) | (block[i-3] << 8);
        j = ftab[s] -1;
        ftab[s] = j;
        ptr[j] = i-3;
}
   for (; i >= 0; i--) {
  						   __asm__ __volatile__ ("nop;");
  TRACK139_BEGIN: track(&&TRACK139_BEGIN, &&TRACK139_END);
  TRACK139_END:   __asm__ __volatile__ ("nop;");
  s = (s >> 8) | (block[i] << 8);
        j = ftab[s] -1;
        ftab[s] = j;
        ptr[j] = i;
}
   for (i = 0; i <= 255; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK140_BEGIN: track(&&TRACK140_BEGIN, &&TRACK140_END);
  TRACK140_END:   __asm__ __volatile__ ("nop;");
  bigDone [i] = ((Bool)0);
        runningOrder[i] = i;
}
   {
      Int32 vv;
      Int32 h = 1;
      do  {
						   __asm__ __volatile__ ("nop;");
TRACK141_BEGIN: track(&&TRACK141_BEGIN, &&TRACK141_END);
TRACK141_END:   __asm__ __volatile__ ("nop;");
h = 3 * h + 1;
} while (h <= 256);
      do {
  						   __asm__ __volatile__ ("nop;");
  TRACK146_BEGIN: track(&&TRACK146_BEGIN, &&TRACK146_END);
  TRACK146_END:   __asm__ __volatile__ ("nop;");
  h = h / 3;
           for (i = h; i <= 255; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK145_BEGIN: track(&&TRACK145_BEGIN, &&TRACK145_END);
    TRACK145_END:   __asm__ __volatile__ ("nop;");
    vv = runningOrder[i];
                j = i;
                while ( (ftab[((runningOrder[j-h])+1) << 8] - ftab[(runningOrder[j-h]) << 8]) > (ftab[((vv)+1) << 8] - ftab[(vv) << 8]) ) {
      						   __asm__ __volatile__ ("nop;");
      TRACK143_BEGIN: track(&&TRACK143_BEGIN, &&TRACK143_END);
      TRACK143_END:   __asm__ __volatile__ ("nop;");
      runningOrder[j] = runningOrder[j-h];
                     j = j - h;
                     if (j <= (h - 1))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK142_BEGIN: track(&&TRACK142_BEGIN, &&TRACK142_END);
      TRACK142_END:   __asm__ __volatile__ ("nop;");
      goto zero;
      }
    }
                zero:
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK144_BEGIN: track(&&TRACK144_BEGIN, &&TRACK144_END);
    TRACK144_END:   __asm__ __volatile__ ("nop;");
    runningOrder[j] = vv;
    }
  }
} while (h != 1);
   }
   numQSorted = 0;
   for (i = 0; i <= 255; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK168_BEGIN: track(&&TRACK168_BEGIN, &&TRACK168_END);
  TRACK168_END:   __asm__ __volatile__ ("nop;");
  ss = runningOrder[i];
        for (j = 0; j <= 255; j++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK152_BEGIN: track(&&TRACK152_BEGIN, &&TRACK152_END);
    TRACK152_END:   __asm__ __volatile__ ("nop;");
    if (j != ss) {
      						   __asm__ __volatile__ ("nop;");
      TRACK151_BEGIN: track(&&TRACK151_BEGIN, &&TRACK151_END);
      TRACK151_END:   __asm__ __volatile__ ("nop;");
      sb = (ss << 8) + j;
                  if ( ! (ftab[sb] & (1 << 21)) ) {
        Int32 lo = ftab[sb] & (~((1 << 21)));
                       Int32 hi = (ftab[sb+1] & (~((1 << 21)))) - 1;
        						   __asm__ __volatile__ ("nop;");
        TRACK150_BEGIN: track(&&TRACK150_BEGIN, &&TRACK150_END);
        TRACK150_END:   __asm__ __volatile__ ("nop;");
        if (hi > lo) {
          						   __asm__ __volatile__ ("nop;");
          TRACK149_BEGIN: track(&&TRACK149_BEGIN, &&TRACK149_END);
          TRACK149_END:   __asm__ __volatile__ ("nop;");
          if (verb >= 4)
                                {
          						   __asm__ __volatile__ ("nop;");
          TRACK147_BEGIN: track(&&TRACK147_BEGIN, &&TRACK147_END);
          TRACK147_END:   __asm__ __volatile__ ("nop;");
          fprintf(stderr,"        qsort [0x%x, 0x%x]   " "done %d   this %d\n",ss,j,numQSorted,hi - lo + 1);
          }
                            mainQSort3 (
                               ptr, block, quadrant, nblock,
                               lo, hi, 2, budget
                            );
                            numQSorted += (hi - lo + 1);
                            if (*budget < 0)  {
          						   __asm__ __volatile__ ("nop;");
          TRACK148_BEGIN: track(&&TRACK148_BEGIN, &&TRACK148_END);
          TRACK148_END:   __asm__ __volatile__ ("nop;");
          return;
          }
        }
      }
                  ftab[sb] |= (1 << 21);
    }
  }
        { if (!(!bigDone[ss]))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK153_BEGIN: track(&&TRACK153_BEGIN, &&TRACK153_END);
  TRACK153_END:   __asm__ __volatile__ ("nop;");
  BZ2_bz__AssertH__fail ( 1006 );
  } };
        {
           for (j = 0; j <= 255; j++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK154_BEGIN: track(&&TRACK154_BEGIN, &&TRACK154_END);
    TRACK154_END:   __asm__ __volatile__ ("nop;");
    copyStart[j] = ftab[(j << 8) + ss] & (~((1 << 21)));
                copyEnd [j] = (ftab[(j << 8) + ss + 1] & (~((1 << 21)))) - 1;
  }
           for (j = ftab[ss << 8] & (~((1 << 21))); j < copyStart[ss]; j++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK157_BEGIN: track(&&TRACK157_BEGIN, &&TRACK157_END);
    TRACK157_END:   __asm__ __volatile__ ("nop;");
    k = ptr[j]-1; if (k < 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK155_BEGIN: track(&&TRACK155_BEGIN, &&TRACK155_END);
    TRACK155_END:   __asm__ __volatile__ ("nop;");
    k += nblock;
    }
                c1 = block[k];
                if (!bigDone[c1])
                    {
    						   __asm__ __volatile__ ("nop;");
    TRACK156_BEGIN: track(&&TRACK156_BEGIN, &&TRACK156_END);
    TRACK156_END:   __asm__ __volatile__ ("nop;");
    ptr[ copyStart[c1]++ ] = k;
    }
  }
           for (j = (ftab[(ss+1) << 8] & (~((1 << 21)))) - 1; j > copyEnd[ss]; j--) {
    						   __asm__ __volatile__ ("nop;");
    TRACK160_BEGIN: track(&&TRACK160_BEGIN, &&TRACK160_END);
    TRACK160_END:   __asm__ __volatile__ ("nop;");
    k = ptr[j]-1; if (k < 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK158_BEGIN: track(&&TRACK158_BEGIN, &&TRACK158_END);
    TRACK158_END:   __asm__ __volatile__ ("nop;");
    k += nblock;
    }
                c1 = block[k];
                if (!bigDone[c1])
                    {
    						   __asm__ __volatile__ ("nop;");
    TRACK159_BEGIN: track(&&TRACK159_BEGIN, &&TRACK159_END);
    TRACK159_END:   __asm__ __volatile__ ("nop;");
    ptr[ copyEnd[c1]-- ] = k;
    }
  }
        }
        { if (!((copyStart[ss]-1 == copyEnd[ss]) || (copyStart[ss] == 0 && copyEnd[ss] == nblock-1)))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK161_BEGIN: track(&&TRACK161_BEGIN, &&TRACK161_END);
  TRACK161_END:   __asm__ __volatile__ ("nop;");
  BZ2_bz__AssertH__fail ( 1007 );
  } }

        for (j = 0; j <= 255; j++)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK162_BEGIN: track(&&TRACK162_BEGIN, &&TRACK162_END);
  TRACK162_END:   __asm__ __volatile__ ("nop;");
  ftab[(j << 8) + ss] |= (1 << 21);
  }
        bigDone[ss] = ((Bool)1);
        if (i < 255) {
    Int32 bbStart = ftab[ss << 8] & (~((1 << 21)));
             Int32 bbSize = (ftab[(ss+1) << 8] & (~((1 << 21)))) - bbStart;
             Int32 shifts = 0;
    						   __asm__ __volatile__ ("nop;");
    TRACK167_BEGIN: track(&&TRACK167_BEGIN, &&TRACK167_END);
    TRACK167_END:   __asm__ __volatile__ ("nop;");
    while ((bbSize >> shifts) > 65534)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK163_BEGIN: track(&&TRACK163_BEGIN, &&TRACK163_END);
    TRACK163_END:   __asm__ __volatile__ ("nop;");
    shifts++;
    }
             for (j = bbSize-1; j >= 0; j--) {
      Int32 a2update = ptr[bbStart + j];
                  UInt16 qVal = (UInt16)(j >> shifts);
      						   __asm__ __volatile__ ("nop;");
      TRACK165_BEGIN: track(&&TRACK165_BEGIN, &&TRACK165_END);
      TRACK165_END:   __asm__ __volatile__ ("nop;");
      quadrant[a2update] = qVal;
                  if (a2update < (2 + 12 + 18 + 2))
                      {
      						   __asm__ __volatile__ ("nop;");
      TRACK164_BEGIN: track(&&TRACK164_BEGIN, &&TRACK164_END);
      TRACK164_END:   __asm__ __volatile__ ("nop;");
      quadrant[a2update + nblock] = qVal;
      }
    }
             { if (!(((bbSize-1) >> shifts) <= 65535))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK166_BEGIN: track(&&TRACK166_BEGIN, &&TRACK166_END);
    TRACK166_END:   __asm__ __volatile__ ("nop;");
    BZ2_bz__AssertH__fail ( 1002 );
    } };
  }
}
   if (verb >= 4)
       {
						   __asm__ __volatile__ ("nop;");
TRACK169_BEGIN: track(&&TRACK169_BEGIN, &&TRACK169_END);
TRACK169_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"        %d pointers, %d sorted, %d scanned\n",nblock,numQSorted,nblock - numQSorted);
}
}
void BZ2_blockSort ( EState* s )
{
   UInt32* ptr = s->ptr;
   UChar* block = s->block;
   UInt32* ftab = s->ftab;
   Int32 nblock = s->nblock;
   Int32 verb = s->verbosity;
   Int32 wfact = s->workFactor;
   UInt16* quadrant;
   Int32 budget;
   Int32 budgetInit;
   Int32 i;
   if (nblock < 10000) {
  						   __asm__ __volatile__ ("nop;");
  TRACK170_BEGIN: track(&&TRACK170_BEGIN, &&TRACK170_END);
  TRACK170_END:   __asm__ __volatile__ ("nop;");
  fallbackSort ( s->arr1, s->arr2, ftab, nblock, verb );
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK177_BEGIN: track(&&TRACK177_BEGIN, &&TRACK177_END);
  TRACK177_END:   __asm__ __volatile__ ("nop;");
  i = nblock+(2 + 12 + 18 + 2);
        if (i & 1)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK171_BEGIN: track(&&TRACK171_BEGIN, &&TRACK171_END);
  TRACK171_END:   __asm__ __volatile__ ("nop;");
  i++;
  }
        quadrant = (UInt16*)(&(block[i]));
        if (wfact < 1 )  {
  						   __asm__ __volatile__ ("nop;");
  TRACK172_BEGIN: track(&&TRACK172_BEGIN, &&TRACK172_END);
  TRACK172_END:   __asm__ __volatile__ ("nop;");
  wfact = 1;
  }
        if (wfact > 100)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK173_BEGIN: track(&&TRACK173_BEGIN, &&TRACK173_END);
  TRACK173_END:   __asm__ __volatile__ ("nop;");
  wfact = 100;
  }
        budgetInit = nblock * ((wfact-1) / 3);
        budget = budgetInit;
        mainSort ( ptr, block, quadrant, ftab, nblock, verb, &budget );
        if (verb >= 3)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK174_BEGIN: track(&&TRACK174_BEGIN, &&TRACK174_END);
  TRACK174_END:   __asm__ __volatile__ ("nop;");
  fprintf(stderr,"      %d work, %d block, ratio %5.2f\n",budgetInit - budget,nblock,(float)(budgetInit - budget) / (float)(nblock==0 ? 1 : nblock));
  }
        if (budget < 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK176_BEGIN: track(&&TRACK176_BEGIN, &&TRACK176_END);
    TRACK176_END:   __asm__ __volatile__ ("nop;");
    if (verb >= 2)
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK175_BEGIN: track(&&TRACK175_BEGIN, &&TRACK175_END);
    TRACK175_END:   __asm__ __volatile__ ("nop;");
    fprintf(stderr,"    too repetitive; using fallback" " sorting algorithm\n");
    }
             fallbackSort ( s->arr1, s->arr2, ftab, nblock, verb );
  }
}
   s->origPtr = -1;
   for (i = 0; i < s->nblock; i++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK179_BEGIN: track(&&TRACK179_BEGIN, &&TRACK179_END);
TRACK179_END:   __asm__ __volatile__ ("nop;");
if (ptr[i] == 0)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK178_BEGIN: track(&&TRACK178_BEGIN, &&TRACK178_END);
  TRACK178_END:   __asm__ __volatile__ ("nop;");
  s->origPtr = i; break;
}
};
   { if (!(s->origPtr != -1))  {
						   __asm__ __volatile__ ("nop;");
TRACK180_BEGIN: track(&&TRACK180_BEGIN, &&TRACK180_END);
TRACK180_END:   __asm__ __volatile__ ("nop;");
BZ2_bz__AssertH__fail ( 1003 );
} };
}
void BZ2_hbMakeCodeLengths ( UChar *len,
                             Int32 *freq,
                             Int32 alphaSize,
                             Int32 maxLen )
{
   Int32 nNodes, nHeap, n1, n2, i, j, k;
   Bool tooLong;
   Int32 heap [ 258 + 2 ];
   Int32 weight [ 258 * 2 ];
   Int32 parent [ 258 * 2 ];
   for (i = 0; i < alphaSize; i++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK181_BEGIN: track(&&TRACK181_BEGIN, &&TRACK181_END);
TRACK181_END:   __asm__ __volatile__ ("nop;");
weight[i+1] = (freq[i] == 0 ? 1 : freq[i]) << 8;
}
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK201_BEGIN: track(&&TRACK201_BEGIN, &&TRACK201_END);
  TRACK201_END:   __asm__ __volatile__ ("nop;");
  nNodes = alphaSize;
        nHeap = 0;
        heap[0] = 0;
        weight[0] = 0;
        parent[0] = -2;
        for (i = 1; i <= alphaSize; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK183_BEGIN: track(&&TRACK183_BEGIN, &&TRACK183_END);
    TRACK183_END:   __asm__ __volatile__ ("nop;");
    parent[i] = -1;
             nHeap++;
             heap[nHeap] = i;
             { Int32 zz, tmp; zz = nHeap; tmp = heap[zz]; while (weight[tmp] < weight[heap[zz >> 1]]) {
      						   __asm__ __volatile__ ("nop;");
      TRACK182_BEGIN: track(&&TRACK182_BEGIN, &&TRACK182_END);
      TRACK182_END:   __asm__ __volatile__ ("nop;");
      heap[zz] = heap[zz >> 1]; zz >>= 1;
    } heap[zz] = tmp; };
  }
        { if (!(nHeap < (258 +2)))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK184_BEGIN: track(&&TRACK184_BEGIN, &&TRACK184_END);
  TRACK184_END:   __asm__ __volatile__ ("nop;");
  BZ2_bz__AssertH__fail ( 2001 );
  } };
        while (nHeap > 1) {
    						   __asm__ __volatile__ ("nop;");
    TRACK194_BEGIN: track(&&TRACK194_BEGIN, &&TRACK194_END);
    TRACK194_END:   __asm__ __volatile__ ("nop;");
    n1 = heap[1]; heap[1] = heap[nHeap]; nHeap--; { Int32 zz, yy, tmp; zz = 1; tmp = heap[zz]; while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK188_BEGIN: track(&&TRACK188_BEGIN, &&TRACK188_END);
      TRACK188_END:   __asm__ __volatile__ ("nop;");
      yy = zz << 1; if (yy > nHeap)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK185_BEGIN: track(&&TRACK185_BEGIN, &&TRACK185_END);
      TRACK185_END:   __asm__ __volatile__ ("nop;");
      break;
      } if (yy < nHeap && weight[heap[yy+1]] < weight[heap[yy]])  {
      						   __asm__ __volatile__ ("nop;");
      TRACK186_BEGIN: track(&&TRACK186_BEGIN, &&TRACK186_END);
      TRACK186_END:   __asm__ __volatile__ ("nop;");
      yy++;
      } if (weight[tmp] < weight[heap[yy]])  {
      						   __asm__ __volatile__ ("nop;");
      TRACK187_BEGIN: track(&&TRACK187_BEGIN, &&TRACK187_END);
      TRACK187_END:   __asm__ __volatile__ ("nop;");
      break;
      } heap[zz] = heap[yy]; zz = yy;
    } heap[zz] = tmp; };
             n2 = heap[1]; heap[1] = heap[nHeap]; nHeap--; { Int32 zz, yy, tmp; zz = 1; tmp = heap[zz]; while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK192_BEGIN: track(&&TRACK192_BEGIN, &&TRACK192_END);
      TRACK192_END:   __asm__ __volatile__ ("nop;");
      yy = zz << 1; if (yy > nHeap)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK189_BEGIN: track(&&TRACK189_BEGIN, &&TRACK189_END);
      TRACK189_END:   __asm__ __volatile__ ("nop;");
      break;
      } if (yy < nHeap && weight[heap[yy+1]] < weight[heap[yy]])  {
      						   __asm__ __volatile__ ("nop;");
      TRACK190_BEGIN: track(&&TRACK190_BEGIN, &&TRACK190_END);
      TRACK190_END:   __asm__ __volatile__ ("nop;");
      yy++;
      } if (weight[tmp] < weight[heap[yy]])  {
      						   __asm__ __volatile__ ("nop;");
      TRACK191_BEGIN: track(&&TRACK191_BEGIN, &&TRACK191_END);
      TRACK191_END:   __asm__ __volatile__ ("nop;");
      break;
      } heap[zz] = heap[yy]; zz = yy;
    } heap[zz] = tmp; };
             nNodes++;
             parent[n1] = parent[n2] = nNodes;
             weight[nNodes] = (((weight[n1]) & 0xffffff00)+((weight[n2]) & 0xffffff00)) | (1 + ((((weight[n1]) & 0x000000ff)) > (((weight[n2]) & 0x000000ff)) ? (((weight[n1]) & 0x000000ff)) : (((weight[n2]) & 0x000000ff))));
             parent[nNodes] = -1;
             nHeap++;
             heap[nHeap] = nNodes;
             { Int32 zz, tmp; zz = nHeap; tmp = heap[zz]; while (weight[tmp] < weight[heap[zz >> 1]]) {
      						   __asm__ __volatile__ ("nop;");
      TRACK193_BEGIN: track(&&TRACK193_BEGIN, &&TRACK193_END);
      TRACK193_END:   __asm__ __volatile__ ("nop;");
      heap[zz] = heap[zz >> 1]; zz >>= 1;
    } heap[zz] = tmp; };
  }
        { if (!(nNodes < (258 * 2)))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK195_BEGIN: track(&&TRACK195_BEGIN, &&TRACK195_END);
  TRACK195_END:   __asm__ __volatile__ ("nop;");
  BZ2_bz__AssertH__fail ( 2002 );
  } };
        tooLong = ((Bool)0);
        for (i = 1; i <= alphaSize; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK198_BEGIN: track(&&TRACK198_BEGIN, &&TRACK198_END);
    TRACK198_END:   __asm__ __volatile__ ("nop;");
    j = 0;
             k = i;
             while (parent[k] >= 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK196_BEGIN: track(&&TRACK196_BEGIN, &&TRACK196_END);
      TRACK196_END:   __asm__ __volatile__ ("nop;");
      k = parent[k]; j++;
    }
             len[i-1] = j;
             if (j > maxLen)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK197_BEGIN: track(&&TRACK197_BEGIN, &&TRACK197_END);
    TRACK197_END:   __asm__ __volatile__ ("nop;");
    tooLong = ((Bool)1);
    }
  }
        if (! tooLong)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK199_BEGIN: track(&&TRACK199_BEGIN, &&TRACK199_END);
  TRACK199_END:   __asm__ __volatile__ ("nop;");
  break;
  }
        for (i = 1; i < alphaSize; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK200_BEGIN: track(&&TRACK200_BEGIN, &&TRACK200_END);
    TRACK200_END:   __asm__ __volatile__ ("nop;");
    j = weight[i] >> 8;
             j = 1 + (j / 2);
             weight[i] = j << 8;
  }
}
}
void BZ2_hbAssignCodes ( Int32 *code,
                         UChar *length,
                         Int32 minLen,
                         Int32 maxLen,
                         Int32 alphaSize )
{
   Int32 n, vec, i;
   vec = 0;
   for (n = minLen; n <= maxLen; n++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK204_BEGIN: track(&&TRACK204_BEGIN, &&TRACK204_END);
  TRACK204_END:   __asm__ __volatile__ ("nop;");
  for (i = 0; i < alphaSize; i++)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK203_BEGIN: track(&&TRACK203_BEGIN, &&TRACK203_END);
  TRACK203_END:   __asm__ __volatile__ ("nop;");
  if (length[i] == n) {
    						   __asm__ __volatile__ ("nop;");
    TRACK202_BEGIN: track(&&TRACK202_BEGIN, &&TRACK202_END);
    TRACK202_END:   __asm__ __volatile__ ("nop;");
    code[i] = vec; vec++;
  }
  };
        vec <<= 1;
}
}
void BZ2_hbCreateDecodeTables ( Int32 *limit,
                                Int32 *base,
                                Int32 *perm,
                                UChar *length,
                                Int32 minLen,
                                Int32 maxLen,
                                Int32 alphaSize )
{
   Int32 pp, i, j, vec;
   pp = 0;
   for (i = minLen; i <= maxLen; i++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK207_BEGIN: track(&&TRACK207_BEGIN, &&TRACK207_END);
TRACK207_END:   __asm__ __volatile__ ("nop;");
for (j = 0; j < alphaSize; j++)
          {
						   __asm__ __volatile__ ("nop;");
TRACK206_BEGIN: track(&&TRACK206_BEGIN, &&TRACK206_END);
TRACK206_END:   __asm__ __volatile__ ("nop;");
if (length[j] == i) {
  						   __asm__ __volatile__ ("nop;");
  TRACK205_BEGIN: track(&&TRACK205_BEGIN, &&TRACK205_END);
  TRACK205_END:   __asm__ __volatile__ ("nop;");
  perm[pp] = j; pp++;
}
}
};
   for (i = 0; i < 23; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK208_BEGIN: track(&&TRACK208_BEGIN, &&TRACK208_END);
TRACK208_END:   __asm__ __volatile__ ("nop;");
base[i] = 0;
}
   for (i = 0; i < alphaSize; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK209_BEGIN: track(&&TRACK209_BEGIN, &&TRACK209_END);
TRACK209_END:   __asm__ __volatile__ ("nop;");
base[length[i]+1]++;
}
   for (i = 1; i < 23; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK210_BEGIN: track(&&TRACK210_BEGIN, &&TRACK210_END);
TRACK210_END:   __asm__ __volatile__ ("nop;");
base[i] += base[i-1];
}
   for (i = 0; i < 23; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK211_BEGIN: track(&&TRACK211_BEGIN, &&TRACK211_END);
TRACK211_END:   __asm__ __volatile__ ("nop;");
limit[i] = 0;
}
   vec = 0;
   for (i = minLen; i <= maxLen; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK212_BEGIN: track(&&TRACK212_BEGIN, &&TRACK212_END);
  TRACK212_END:   __asm__ __volatile__ ("nop;");
  vec += (base[i+1] - base[i]);
        limit[i] = vec-1;
        vec <<= 1;
}
   for (i = minLen + 1; i <= maxLen; i++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK213_BEGIN: track(&&TRACK213_BEGIN, &&TRACK213_END);
TRACK213_END:   __asm__ __volatile__ ("nop;");
base[i] = ((limit[i-1] + 1) << 1) - base[i];
}
}
UInt32 BZ2_crc32Table[256] = {
   0x00000000L, 0x04c11db7L, 0x09823b6eL, 0x0d4326d9L,
   0x130476dcL, 0x17c56b6bL, 0x1a864db2L, 0x1e475005L,
   0x2608edb8L, 0x22c9f00fL, 0x2f8ad6d6L, 0x2b4bcb61L,
   0x350c9b64L, 0x31cd86d3L, 0x3c8ea00aL, 0x384fbdbdL,
   0x4c11db70L, 0x48d0c6c7L, 0x4593e01eL, 0x4152fda9L,
   0x5f15adacL, 0x5bd4b01bL, 0x569796c2L, 0x52568b75L,
   0x6a1936c8L, 0x6ed82b7fL, 0x639b0da6L, 0x675a1011L,
   0x791d4014L, 0x7ddc5da3L, 0x709f7b7aL, 0x745e66cdL,
   0x9823b6e0L, 0x9ce2ab57L, 0x91a18d8eL, 0x95609039L,
   0x8b27c03cL, 0x8fe6dd8bL, 0x82a5fb52L, 0x8664e6e5L,
   0xbe2b5b58L, 0xbaea46efL, 0xb7a96036L, 0xb3687d81L,
   0xad2f2d84L, 0xa9ee3033L, 0xa4ad16eaL, 0xa06c0b5dL,
   0xd4326d90L, 0xd0f37027L, 0xddb056feL, 0xd9714b49L,
   0xc7361b4cL, 0xc3f706fbL, 0xceb42022L, 0xca753d95L,
   0xf23a8028L, 0xf6fb9d9fL, 0xfbb8bb46L, 0xff79a6f1L,
   0xe13ef6f4L, 0xe5ffeb43L, 0xe8bccd9aL, 0xec7dd02dL,
   0x34867077L, 0x30476dc0L, 0x3d044b19L, 0x39c556aeL,
   0x278206abL, 0x23431b1cL, 0x2e003dc5L, 0x2ac12072L,
   0x128e9dcfL, 0x164f8078L, 0x1b0ca6a1L, 0x1fcdbb16L,
   0x018aeb13L, 0x054bf6a4L, 0x0808d07dL, 0x0cc9cdcaL,
   0x7897ab07L, 0x7c56b6b0L, 0x71159069L, 0x75d48ddeL,
   0x6b93dddbL, 0x6f52c06cL, 0x6211e6b5L, 0x66d0fb02L,
   0x5e9f46bfL, 0x5a5e5b08L, 0x571d7dd1L, 0x53dc6066L,
   0x4d9b3063L, 0x495a2dd4L, 0x44190b0dL, 0x40d816baL,
   0xaca5c697L, 0xa864db20L, 0xa527fdf9L, 0xa1e6e04eL,
   0xbfa1b04bL, 0xbb60adfcL, 0xb6238b25L, 0xb2e29692L,
   0x8aad2b2fL, 0x8e6c3698L, 0x832f1041L, 0x87ee0df6L,
   0x99a95df3L, 0x9d684044L, 0x902b669dL, 0x94ea7b2aL,
   0xe0b41de7L, 0xe4750050L, 0xe9362689L, 0xedf73b3eL,
   0xf3b06b3bL, 0xf771768cL, 0xfa325055L, 0xfef34de2L,
   0xc6bcf05fL, 0xc27dede8L, 0xcf3ecb31L, 0xcbffd686L,
   0xd5b88683L, 0xd1799b34L, 0xdc3abdedL, 0xd8fba05aL,
   0x690ce0eeL, 0x6dcdfd59L, 0x608edb80L, 0x644fc637L,
   0x7a089632L, 0x7ec98b85L, 0x738aad5cL, 0x774bb0ebL,
   0x4f040d56L, 0x4bc510e1L, 0x46863638L, 0x42472b8fL,
   0x5c007b8aL, 0x58c1663dL, 0x558240e4L, 0x51435d53L,
   0x251d3b9eL, 0x21dc2629L, 0x2c9f00f0L, 0x285e1d47L,
   0x36194d42L, 0x32d850f5L, 0x3f9b762cL, 0x3b5a6b9bL,
   0x0315d626L, 0x07d4cb91L, 0x0a97ed48L, 0x0e56f0ffL,
   0x1011a0faL, 0x14d0bd4dL, 0x19939b94L, 0x1d528623L,
   0xf12f560eL, 0xf5ee4bb9L, 0xf8ad6d60L, 0xfc6c70d7L,
   0xe22b20d2L, 0xe6ea3d65L, 0xeba91bbcL, 0xef68060bL,
   0xd727bbb6L, 0xd3e6a601L, 0xdea580d8L, 0xda649d6fL,
   0xc423cd6aL, 0xc0e2d0ddL, 0xcda1f604L, 0xc960ebb3L,
   0xbd3e8d7eL, 0xb9ff90c9L, 0xb4bcb610L, 0xb07daba7L,
   0xae3afba2L, 0xaafbe615L, 0xa7b8c0ccL, 0xa379dd7bL,
   0x9b3660c6L, 0x9ff77d71L, 0x92b45ba8L, 0x9675461fL,
   0x8832161aL, 0x8cf30badL, 0x81b02d74L, 0x857130c3L,
   0x5d8a9099L, 0x594b8d2eL, 0x5408abf7L, 0x50c9b640L,
   0x4e8ee645L, 0x4a4ffbf2L, 0x470cdd2bL, 0x43cdc09cL,
   0x7b827d21L, 0x7f436096L, 0x7200464fL, 0x76c15bf8L,
   0x68860bfdL, 0x6c47164aL, 0x61043093L, 0x65c52d24L,
   0x119b4be9L, 0x155a565eL, 0x18197087L, 0x1cd86d30L,
   0x029f3d35L, 0x065e2082L, 0x0b1d065bL, 0x0fdc1becL,
   0x3793a651L, 0x3352bbe6L, 0x3e119d3fL, 0x3ad08088L,
   0x2497d08dL, 0x2056cd3aL, 0x2d15ebe3L, 0x29d4f654L,
   0xc5a92679L, 0xc1683bceL, 0xcc2b1d17L, 0xc8ea00a0L,
   0xd6ad50a5L, 0xd26c4d12L, 0xdf2f6bcbL, 0xdbee767cL,
   0xe3a1cbc1L, 0xe760d676L, 0xea23f0afL, 0xeee2ed18L,
   0xf0a5bd1dL, 0xf464a0aaL, 0xf9278673L, 0xfde69bc4L,
   0x89b8fd09L, 0x8d79e0beL, 0x803ac667L, 0x84fbdbd0L,
   0x9abc8bd5L, 0x9e7d9662L, 0x933eb0bbL, 0x97ffad0cL,
   0xafb010b1L, 0xab710d06L, 0xa6322bdfL, 0xa2f33668L,
   0xbcb4666dL, 0xb8757bdaL, 0xb5365d03L, 0xb1f740b4L
};
Int32 BZ2_rNums[512] = {
   619, 720, 127, 481, 931, 816, 813, 233, 566, 247,
   985, 724, 205, 454, 863, 491, 741, 242, 949, 214,
   733, 859, 335, 708, 621, 574, 73, 654, 730, 472,
   419, 436, 278, 496, 867, 210, 399, 680, 480, 51,
   878, 465, 811, 169, 869, 675, 611, 697, 867, 561,
   862, 687, 507, 283, 482, 129, 807, 591, 733, 623,
   150, 238, 59, 379, 684, 877, 625, 169, 643, 105,
   170, 607, 520, 932, 727, 476, 693, 425, 174, 647,
   73, 122, 335, 530, 442, 853, 695, 249, 445, 515,
   909, 545, 703, 919, 874, 474, 882, 500, 594, 612,
   641, 801, 220, 162, 819, 984, 589, 513, 495, 799,
   161, 604, 958, 533, 221, 400, 386, 867, 600, 782,
   382, 596, 414, 171, 516, 375, 682, 485, 911, 276,
   98, 553, 163, 354, 666, 933, 424, 341, 533, 870,
   227, 730, 475, 186, 263, 647, 537, 686, 600, 224,
   469, 68, 770, 919, 190, 373, 294, 822, 808, 206,
   184, 943, 795, 384, 383, 461, 404, 758, 839, 887,
   715, 67, 618, 276, 204, 918, 873, 777, 604, 560,
   951, 160, 578, 722, 79, 804, 96, 409, 713, 940,
   652, 934, 970, 447, 318, 353, 859, 672, 112, 785,
   645, 863, 803, 350, 139, 93, 354, 99, 820, 908,
   609, 772, 154, 274, 580, 184, 79, 626, 630, 742,
   653, 282, 762, 623, 680, 81, 927, 626, 789, 125,
   411, 521, 938, 300, 821, 78, 343, 175, 128, 250,
   170, 774, 972, 275, 999, 639, 495, 78, 352, 126,
   857, 956, 358, 619, 580, 124, 737, 594, 701, 612,
   669, 112, 134, 694, 363, 992, 809, 743, 168, 974,
   944, 375, 748, 52, 600, 747, 642, 182, 862, 81,
   344, 805, 988, 739, 511, 655, 814, 334, 249, 515,
   897, 955, 664, 981, 649, 113, 974, 459, 893, 228,
   433, 837, 553, 268, 926, 240, 102, 654, 459, 51,
   686, 754, 806, 760, 493, 403, 415, 394, 687, 700,
   946, 670, 656, 610, 738, 392, 760, 799, 887, 653,
   978, 321, 576, 617, 626, 502, 894, 679, 243, 440,
   680, 879, 194, 572, 640, 724, 926, 56, 204, 700,
   707, 151, 457, 449, 797, 195, 791, 558, 945, 679,
   297, 59, 87, 824, 713, 663, 412, 693, 342, 606,
   134, 108, 571, 364, 631, 212, 174, 643, 304, 329,
   343, 97, 430, 751, 497, 314, 983, 374, 822, 928,
   140, 206, 73, 263, 980, 736, 876, 478, 430, 305,
   170, 514, 364, 692, 829, 82, 855, 953, 676, 246,
   369, 970, 294, 750, 807, 827, 150, 790, 288, 923,
   804, 378, 215, 828, 592, 281, 565, 555, 710, 82,
   896, 831, 547, 261, 524, 462, 293, 465, 502, 56,
   661, 821, 976, 991, 658, 869, 905, 758, 745, 193,
   768, 550, 608, 933, 378, 286, 215, 979, 792, 961,
   61, 688, 793, 644, 986, 403, 106, 366, 905, 644,
   372, 567, 466, 434, 645, 210, 389, 550, 919, 135,
   780, 773, 635, 389, 707, 100, 626, 958, 165, 504,
   920, 176, 193, 713, 857, 265, 203, 50, 668, 108,
   645, 990, 626, 197, 510, 357, 358, 850, 858, 364,
   936, 638
};
void BZ2_bsInitWrite ( EState* s )
{
   s->bsLive = 0;
   s->bsBuff = 0;
}
static
void bsFinishWrite ( EState* s )
{
   while (s->bsLive > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK214_BEGIN: track(&&TRACK214_BEGIN, &&TRACK214_END);
  TRACK214_END:   __asm__ __volatile__ ("nop;");
  s->zbits[s->numZ] = (UChar)(s->bsBuff >> 24);
        s->numZ++;
        s->bsBuff <<= 8;
        s->bsLive -= 8;
}
}
static

void bsW ( EState* s, Int32 n, UInt32 v )
{
   { while (s->bsLive >= 8) {
  						   __asm__ __volatile__ ("nop;");
  TRACK215_BEGIN: track(&&TRACK215_BEGIN, &&TRACK215_END);
  TRACK215_END:   __asm__ __volatile__ ("nop;");
  s->zbits[s->numZ] = (UChar)(s->bsBuff >> 24); s->numZ++; s->bsBuff <<= 8; s->bsLive -= 8;
} };
   s->bsBuff |= (v << (32 - s->bsLive - n));
   s->bsLive += n;
}
static
void bsPutUInt32 ( EState* s, UInt32 u )
{
   bsW ( s, 8, (u >> 24) & 0xffL );
   bsW ( s, 8, (u >> 16) & 0xffL );
   bsW ( s, 8, (u >> 8) & 0xffL );
   bsW ( s, 8, u & 0xffL );
}
static
void bsPutUChar ( EState* s, UChar c )
{
   bsW( s, 8, (UInt32)c );
}
static
void makeMaps_e ( EState* s )
{
   Int32 i;
   s->nInUse = 0;
   for (i = 0; i < 256; i++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK217_BEGIN: track(&&TRACK217_BEGIN, &&TRACK217_END);
TRACK217_END:   __asm__ __volatile__ ("nop;");
if (s->inUse[i]) {
  						   __asm__ __volatile__ ("nop;");
  TRACK216_BEGIN: track(&&TRACK216_BEGIN, &&TRACK216_END);
  TRACK216_END:   __asm__ __volatile__ ("nop;");
  s->unseqToSeq[i] = s->nInUse;
           s->nInUse++;
}
}
}
static
void generateMTFValues ( EState* s )
{
   UChar yy[256];
   Int32 i, j;
   Int32 zPend;
   Int32 wr;
   Int32 EOB;
   UInt32* ptr = s->ptr;
   UChar* block = s->block;
   UInt16* mtfv = s->mtfv;
   makeMaps_e ( s );
   EOB = s->nInUse+1;
   for (i = 0; i <= EOB; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK218_BEGIN: track(&&TRACK218_BEGIN, &&TRACK218_END);
TRACK218_END:   __asm__ __volatile__ ("nop;");
s->mtfFreq[i] = 0;
}
   wr = 0;
   zPend = 0;
   for (i = 0; i < s->nInUse; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK219_BEGIN: track(&&TRACK219_BEGIN, &&TRACK219_END);
TRACK219_END:   __asm__ __volatile__ ("nop;");
yy[i] = (UChar) i;
}
   for (i = 0; i < s->nblock; i++) {
  UChar ll_i;
  						   __asm__ __volatile__ ("nop;");
  TRACK229_BEGIN: track(&&TRACK229_BEGIN, &&TRACK229_END);
  TRACK229_END:   __asm__ __volatile__ ("nop;");
  ;
        j = ptr[i]-1; if (j < 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK220_BEGIN: track(&&TRACK220_BEGIN, &&TRACK220_END);
  TRACK220_END:   __asm__ __volatile__ ("nop;");
  j += s->nblock;
  }
        ll_i = s->unseqToSeq[block[j]];
        ;
        if (yy[0] == ll_i) {
    						   __asm__ __volatile__ ("nop;");
    TRACK221_BEGIN: track(&&TRACK221_BEGIN, &&TRACK221_END);
    TRACK221_END:   __asm__ __volatile__ ("nop;");
    zPend++;
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK228_BEGIN: track(&&TRACK228_BEGIN, &&TRACK228_END);
    TRACK228_END:   __asm__ __volatile__ ("nop;");
    if (zPend > 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK226_BEGIN: track(&&TRACK226_BEGIN, &&TRACK226_END);
      TRACK226_END:   __asm__ __volatile__ ("nop;");
      zPend--;
                  while (((Bool)1)) {
        						   __asm__ __volatile__ ("nop;");
        TRACK225_BEGIN: track(&&TRACK225_BEGIN, &&TRACK225_END);
        TRACK225_END:   __asm__ __volatile__ ("nop;");
        if (zPend & 1) {
          						   __asm__ __volatile__ ("nop;");
          TRACK222_BEGIN: track(&&TRACK222_BEGIN, &&TRACK222_END);
          TRACK222_END:   __asm__ __volatile__ ("nop;");
          mtfv[wr] = 1; wr++;
                            s->mtfFreq[1]++;
        } else {
          						   __asm__ __volatile__ ("nop;");
          TRACK223_BEGIN: track(&&TRACK223_BEGIN, &&TRACK223_END);
          TRACK223_END:   __asm__ __volatile__ ("nop;");
          mtfv[wr] = 0; wr++;
                            s->mtfFreq[0]++;
        }
                       if (zPend < 2)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK224_BEGIN: track(&&TRACK224_BEGIN, &&TRACK224_END);
        TRACK224_END:   __asm__ __volatile__ ("nop;");
        break;
        }
                       zPend = (zPend - 2) / 2;
      };
                  zPend = 0;
    }
             {
                register UChar rtmp;
                register UChar* ryy_j;
                register UChar rll_i;
                rtmp = yy[1];
                yy[1] = yy[0];
                ryy_j = &(yy[1]);
                rll_i = ll_i;
                while ( rll_i != rtmp ) {
      register UChar rtmp2;
      						   __asm__ __volatile__ ("nop;");
      TRACK227_BEGIN: track(&&TRACK227_BEGIN, &&TRACK227_END);
      TRACK227_END:   __asm__ __volatile__ ("nop;");
      ryy_j++;
                     rtmp2 = rtmp;
                     rtmp = *ryy_j;
                     *ryy_j = rtmp2;
    };
                yy[0] = rtmp;
                j = ryy_j - &(yy[0]);
                mtfv[wr] = j+1; wr++; s->mtfFreq[j+1]++;
             }
  }
}
   if (zPend > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK234_BEGIN: track(&&TRACK234_BEGIN, &&TRACK234_END);
  TRACK234_END:   __asm__ __volatile__ ("nop;");
  zPend--;
        while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK233_BEGIN: track(&&TRACK233_BEGIN, &&TRACK233_END);
    TRACK233_END:   __asm__ __volatile__ ("nop;");
    if (zPend & 1) {
      						   __asm__ __volatile__ ("nop;");
      TRACK230_BEGIN: track(&&TRACK230_BEGIN, &&TRACK230_END);
      TRACK230_END:   __asm__ __volatile__ ("nop;");
      mtfv[wr] = 1; wr++;
                  s->mtfFreq[1]++;
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK231_BEGIN: track(&&TRACK231_BEGIN, &&TRACK231_END);
      TRACK231_END:   __asm__ __volatile__ ("nop;");
      mtfv[wr] = 0; wr++;
                  s->mtfFreq[0]++;
    }
             if (zPend < 2)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK232_BEGIN: track(&&TRACK232_BEGIN, &&TRACK232_END);
    TRACK232_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             zPend = (zPend - 2) / 2;
  };
        zPend = 0;
}
   mtfv[wr] = EOB; wr++; s->mtfFreq[EOB]++;
   s->nMTF = wr;
}
static
void sendMTFValues ( EState* s )
{
   Int32 v, t, i, j, gs, ge, totc, bt, bc, iter;
   Int32 nSelectors, alphaSize, minLen, maxLen, selCtr;
   Int32 nGroups, nBytes;
   UInt16 cost[6];
   Int32 fave[6];
   UInt16* mtfv = s->mtfv;
   if (s->verbosity >= 3)
       {
						   __asm__ __volatile__ ("nop;");
TRACK235_BEGIN: track(&&TRACK235_BEGIN, &&TRACK235_END);
TRACK235_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"      %d in block, %d after MTF & 1-2 coding, " "%d+2 syms in use\n",s->nblock,s->nMTF,s->nInUse);
}
   alphaSize = s->nInUse+2;
   for (t = 0; t < 6; t++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK237_BEGIN: track(&&TRACK237_BEGIN, &&TRACK237_END);
TRACK237_END:   __asm__ __volatile__ ("nop;");
for (v = 0; v < alphaSize; v++)
          {
						   __asm__ __volatile__ ("nop;");
TRACK236_BEGIN: track(&&TRACK236_BEGIN, &&TRACK236_END);
TRACK236_END:   __asm__ __volatile__ ("nop;");
s->len[t][v] = 15;
}
}
   { if (!(s->nMTF > 0))  {
						   __asm__ __volatile__ ("nop;");
TRACK238_BEGIN: track(&&TRACK238_BEGIN, &&TRACK238_END);
TRACK238_END:   __asm__ __volatile__ ("nop;");
BZ2_bz__AssertH__fail ( 3001 );
} };
   if (s->nMTF < 200)  {
						   __asm__ __volatile__ ("nop;");
TRACK239_BEGIN: track(&&TRACK239_BEGIN, &&TRACK239_END);
TRACK239_END:   __asm__ __volatile__ ("nop;");
nGroups = 2;
} else
    {
						   __asm__ __volatile__ ("nop;");
TRACK246_BEGIN: track(&&TRACK246_BEGIN, &&TRACK246_END);
TRACK246_END:   __asm__ __volatile__ ("nop;");
if (s->nMTF < 600)  {
						   __asm__ __volatile__ ("nop;");
TRACK240_BEGIN: track(&&TRACK240_BEGIN, &&TRACK240_END);
TRACK240_END:   __asm__ __volatile__ ("nop;");
nGroups = 3;
} else
    {
						   __asm__ __volatile__ ("nop;");
TRACK245_BEGIN: track(&&TRACK245_BEGIN, &&TRACK245_END);
TRACK245_END:   __asm__ __volatile__ ("nop;");
if (s->nMTF < 1200)  {
						   __asm__ __volatile__ ("nop;");
TRACK241_BEGIN: track(&&TRACK241_BEGIN, &&TRACK241_END);
TRACK241_END:   __asm__ __volatile__ ("nop;");
nGroups = 4;
} else
    {
						   __asm__ __volatile__ ("nop;");
TRACK244_BEGIN: track(&&TRACK244_BEGIN, &&TRACK244_END);
TRACK244_END:   __asm__ __volatile__ ("nop;");
if (s->nMTF < 2400)  {
						   __asm__ __volatile__ ("nop;");
TRACK242_BEGIN: track(&&TRACK242_BEGIN, &&TRACK242_END);
TRACK242_END:   __asm__ __volatile__ ("nop;");
nGroups = 5;
} else
                        {
						   __asm__ __volatile__ ("nop;");
TRACK243_BEGIN: track(&&TRACK243_BEGIN, &&TRACK243_END);
TRACK243_END:   __asm__ __volatile__ ("nop;");
nGroups = 6;
}
}
}
}
   {
      Int32 nPart, remF, tFreq, aFreq;
      nPart = nGroups;
      remF = s->nMTF;
      gs = 0;
      while (nPart > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK253_BEGIN: track(&&TRACK253_BEGIN, &&TRACK253_END);
  TRACK253_END:   __asm__ __volatile__ ("nop;");
  tFreq = remF / nPart;
           ge = gs-1;
           aFreq = 0;
           while (aFreq < tFreq && ge < alphaSize-1) {
    						   __asm__ __volatile__ ("nop;");
    TRACK247_BEGIN: track(&&TRACK247_BEGIN, &&TRACK247_END);
    TRACK247_END:   __asm__ __volatile__ ("nop;");
    ge++;
                aFreq += s->mtfFreq[ge];
  }
           if (ge > gs
               && nPart != nGroups && nPart != 1
               && ((nGroups-nPart) % 2 == 1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK248_BEGIN: track(&&TRACK248_BEGIN, &&TRACK248_END);
    TRACK248_END:   __asm__ __volatile__ ("nop;");
    aFreq -= s->mtfFreq[ge];
                ge--;
  }
           if (s->verbosity >= 3)
               {
  						   __asm__ __volatile__ ("nop;");
  TRACK249_BEGIN: track(&&TRACK249_BEGIN, &&TRACK249_END);
  TRACK249_END:   __asm__ __volatile__ ("nop;");
  fprintf(stderr,"      initial group %d, [%d .. %d], " "has %d syms (%4.1f%%)\n",nPart,gs,ge,aFreq,(100.0 * (float)aFreq) / (float)(s->nMTF));
  }
           for (v = 0; v < alphaSize; v++)
               {
  						   __asm__ __volatile__ ("nop;");
  TRACK252_BEGIN: track(&&TRACK252_BEGIN, &&TRACK252_END);
  TRACK252_END:   __asm__ __volatile__ ("nop;");
  if (v >= gs && v <= ge)
                  {
  						   __asm__ __volatile__ ("nop;");
  TRACK250_BEGIN: track(&&TRACK250_BEGIN, &&TRACK250_END);
  TRACK250_END:   __asm__ __volatile__ ("nop;");
  s->len[nPart-1][v] = 0;
  } else
                  {
  						   __asm__ __volatile__ ("nop;");
  TRACK251_BEGIN: track(&&TRACK251_BEGIN, &&TRACK251_END);
  TRACK251_END:   __asm__ __volatile__ ("nop;");
  s->len[nPart-1][v] = 15;
  }
  }
           nPart--;
           gs = ge+1;
           remF -= aFreq;
}
   }
   for (iter = 0; iter < 4; iter++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK275_BEGIN: track(&&TRACK275_BEGIN, &&TRACK275_END);
  TRACK275_END:   __asm__ __volatile__ ("nop;");
  for (t = 0; t < nGroups; t++)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK254_BEGIN: track(&&TRACK254_BEGIN, &&TRACK254_END);
  TRACK254_END:   __asm__ __volatile__ ("nop;");
  fave[t] = 0;
  }
        for (t = 0; t < nGroups; t++)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK256_BEGIN: track(&&TRACK256_BEGIN, &&TRACK256_END);
  TRACK256_END:   __asm__ __volatile__ ("nop;");
  for (v = 0; v < alphaSize; v++)
               {
  						   __asm__ __volatile__ ("nop;");
  TRACK255_BEGIN: track(&&TRACK255_BEGIN, &&TRACK255_END);
  TRACK255_END:   __asm__ __volatile__ ("nop;");
  s->rfreq[t][v] = 0;
  }
  }
        if (nGroups == 6) {
    						   __asm__ __volatile__ ("nop;");
    TRACK258_BEGIN: track(&&TRACK258_BEGIN, &&TRACK258_END);
    TRACK258_END:   __asm__ __volatile__ ("nop;");
    for (v = 0; v < alphaSize; v++) {
      						   __asm__ __volatile__ ("nop;");
      TRACK257_BEGIN: track(&&TRACK257_BEGIN, &&TRACK257_END);
      TRACK257_END:   __asm__ __volatile__ ("nop;");
      s->len_pack[v][0] = (s->len[1][v] << 16) | s->len[0][v];
                  s->len_pack[v][1] = (s->len[3][v] << 16) | s->len[2][v];
                  s->len_pack[v][2] = (s->len[5][v] << 16) | s->len[4][v];
    }
  }
        nSelectors = 0;
        totc = 0;
        gs = 0;
        while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK271_BEGIN: track(&&TRACK271_BEGIN, &&TRACK271_END);
    TRACK271_END:   __asm__ __volatile__ ("nop;");
    if (gs >= s->nMTF)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK259_BEGIN: track(&&TRACK259_BEGIN, &&TRACK259_END);
    TRACK259_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             ge = gs + 50 - 1;
             if (ge >= s->nMTF)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK260_BEGIN: track(&&TRACK260_BEGIN, &&TRACK260_END);
    TRACK260_END:   __asm__ __volatile__ ("nop;");
    ge = s->nMTF-1;
    }
             for (t = 0; t < nGroups; t++)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK261_BEGIN: track(&&TRACK261_BEGIN, &&TRACK261_END);
    TRACK261_END:   __asm__ __volatile__ ("nop;");
    cost[t] = 0;
    }
             if (nGroups == 6 && 50 == ge-gs+1) {
      register UInt32 cost01, cost23, cost45;
                  register UInt16 icv;
      						   __asm__ __volatile__ ("nop;");
      TRACK262_BEGIN: track(&&TRACK262_BEGIN, &&TRACK262_END);
      TRACK262_END:   __asm__ __volatile__ ("nop;");
      cost01 = cost23 = cost45 = 0;
                  icv = mtfv[gs+(0)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(1)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(2)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(3)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(4)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  icv = mtfv[gs+(5)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(6)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(7)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(8)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(9)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  icv = mtfv[gs+(10)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(11)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(12)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(13)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(14)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  icv = mtfv[gs+(15)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(16)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(17)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(18)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(19)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  icv = mtfv[gs+(20)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(21)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(22)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(23)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(24)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  icv = mtfv[gs+(25)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(26)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(27)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(28)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(29)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  icv = mtfv[gs+(30)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(31)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(32)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(33)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(34)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  icv = mtfv[gs+(35)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(36)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(37)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(38)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(39)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  icv = mtfv[gs+(40)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(41)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(42)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(43)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(44)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  icv = mtfv[gs+(45)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(46)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(47)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(48)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];; icv = mtfv[gs+(49)]; cost01 += s->len_pack[icv][0]; cost23 += s->len_pack[icv][1]; cost45 += s->len_pack[icv][2];;
                  cost[0] = cost01 & 0xffff; cost[1] = cost01 >> 16;
                  cost[2] = cost23 & 0xffff; cost[3] = cost23 >> 16;
                  cost[4] = cost45 & 0xffff; cost[5] = cost45 >> 16;
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK265_BEGIN: track(&&TRACK265_BEGIN, &&TRACK265_END);
      TRACK265_END:   __asm__ __volatile__ ("nop;");
      for (i = gs; i <= ge; i++) {
        UInt16 icv = mtfv[i];
        						   __asm__ __volatile__ ("nop;");
        TRACK264_BEGIN: track(&&TRACK264_BEGIN, &&TRACK264_END);
        TRACK264_END:   __asm__ __volatile__ ("nop;");
        for (t = 0; t < nGroups; t++)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK263_BEGIN: track(&&TRACK263_BEGIN, &&TRACK263_END);
        TRACK263_END:   __asm__ __volatile__ ("nop;");
        cost[t] += s->len[t][icv];
        }
      }
    }
             bc = 999999999; bt = -1;
             for (t = 0; t < nGroups; t++)
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK267_BEGIN: track(&&TRACK267_BEGIN, &&TRACK267_END);
    TRACK267_END:   __asm__ __volatile__ ("nop;");
    if (cost[t] < bc) {
      						   __asm__ __volatile__ ("nop;");
      TRACK266_BEGIN: track(&&TRACK266_BEGIN, &&TRACK266_END);
      TRACK266_END:   __asm__ __volatile__ ("nop;");
      bc = cost[t]; bt = t;
    }
    };
             totc += bc;
             fave[bt]++;
             s->selector[nSelectors] = bt;
             nSelectors++;
             if (nGroups == 6 && 50 == ge-gs+1) {
      						   __asm__ __volatile__ ("nop;");
      TRACK268_BEGIN: track(&&TRACK268_BEGIN, &&TRACK268_END);
      TRACK268_END:   __asm__ __volatile__ ("nop;");
      s->rfreq[bt][ mtfv[gs+(0)] ]++; s->rfreq[bt][ mtfv[gs+(1)] ]++; s->rfreq[bt][ mtfv[gs+(2)] ]++; s->rfreq[bt][ mtfv[gs+(3)] ]++; s->rfreq[bt][ mtfv[gs+(4)] ]++;
                  s->rfreq[bt][ mtfv[gs+(5)] ]++; s->rfreq[bt][ mtfv[gs+(6)] ]++; s->rfreq[bt][ mtfv[gs+(7)] ]++; s->rfreq[bt][ mtfv[gs+(8)] ]++; s->rfreq[bt][ mtfv[gs+(9)] ]++;
                  s->rfreq[bt][ mtfv[gs+(10)] ]++; s->rfreq[bt][ mtfv[gs+(11)] ]++; s->rfreq[bt][ mtfv[gs+(12)] ]++; s->rfreq[bt][ mtfv[gs+(13)] ]++; s->rfreq[bt][ mtfv[gs+(14)] ]++;
                  s->rfreq[bt][ mtfv[gs+(15)] ]++; s->rfreq[bt][ mtfv[gs+(16)] ]++; s->rfreq[bt][ mtfv[gs+(17)] ]++; s->rfreq[bt][ mtfv[gs+(18)] ]++; s->rfreq[bt][ mtfv[gs+(19)] ]++;
                  s->rfreq[bt][ mtfv[gs+(20)] ]++; s->rfreq[bt][ mtfv[gs+(21)] ]++; s->rfreq[bt][ mtfv[gs+(22)] ]++; s->rfreq[bt][ mtfv[gs+(23)] ]++; s->rfreq[bt][ mtfv[gs+(24)] ]++;
                  s->rfreq[bt][ mtfv[gs+(25)] ]++; s->rfreq[bt][ mtfv[gs+(26)] ]++; s->rfreq[bt][ mtfv[gs+(27)] ]++; s->rfreq[bt][ mtfv[gs+(28)] ]++; s->rfreq[bt][ mtfv[gs+(29)] ]++;
                  s->rfreq[bt][ mtfv[gs+(30)] ]++; s->rfreq[bt][ mtfv[gs+(31)] ]++; s->rfreq[bt][ mtfv[gs+(32)] ]++; s->rfreq[bt][ mtfv[gs+(33)] ]++; s->rfreq[bt][ mtfv[gs+(34)] ]++;
                  s->rfreq[bt][ mtfv[gs+(35)] ]++; s->rfreq[bt][ mtfv[gs+(36)] ]++; s->rfreq[bt][ mtfv[gs+(37)] ]++; s->rfreq[bt][ mtfv[gs+(38)] ]++; s->rfreq[bt][ mtfv[gs+(39)] ]++;
                  s->rfreq[bt][ mtfv[gs+(40)] ]++; s->rfreq[bt][ mtfv[gs+(41)] ]++; s->rfreq[bt][ mtfv[gs+(42)] ]++; s->rfreq[bt][ mtfv[gs+(43)] ]++; s->rfreq[bt][ mtfv[gs+(44)] ]++;
                  s->rfreq[bt][ mtfv[gs+(45)] ]++; s->rfreq[bt][ mtfv[gs+(46)] ]++; s->rfreq[bt][ mtfv[gs+(47)] ]++; s->rfreq[bt][ mtfv[gs+(48)] ]++; s->rfreq[bt][ mtfv[gs+(49)] ]++;
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK270_BEGIN: track(&&TRACK270_BEGIN, &&TRACK270_END);
      TRACK270_END:   __asm__ __volatile__ ("nop;");
      for (i = gs; i <= ge; i++)
                      {
      						   __asm__ __volatile__ ("nop;");
      TRACK269_BEGIN: track(&&TRACK269_BEGIN, &&TRACK269_END);
      TRACK269_END:   __asm__ __volatile__ ("nop;");
      s->rfreq[bt][ mtfv[i] ]++;
      }
    }
             gs = ge+1;
  }
        if (s->verbosity >= 3) {
    						   __asm__ __volatile__ ("nop;");
    TRACK273_BEGIN: track(&&TRACK273_BEGIN, &&TRACK273_END);
    TRACK273_END:   __asm__ __volatile__ ("nop;");
    fprintf(stderr,"      pass %d: size is %d, grp uses are ",iter+1,totc/8);
             for (t = 0; t < nGroups; t++)
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK272_BEGIN: track(&&TRACK272_BEGIN, &&TRACK272_END);
    TRACK272_END:   __asm__ __volatile__ ("nop;");
    fprintf(stderr,"%d ",fave[t]);
    }
             fprintf(stderr,"\n");
  }
        for (t = 0; t < nGroups; t++)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK274_BEGIN: track(&&TRACK274_BEGIN, &&TRACK274_END);
  TRACK274_END:   __asm__ __volatile__ ("nop;");
  BZ2_hbMakeCodeLengths ( &(s->len[t][0]), &(s->rfreq[t][0]),
                                   alphaSize, 20 );
  }
}
   { if (!(nGroups < 8))  {
						   __asm__ __volatile__ ("nop;");
TRACK276_BEGIN: track(&&TRACK276_BEGIN, &&TRACK276_END);
TRACK276_END:   __asm__ __volatile__ ("nop;");
BZ2_bz__AssertH__fail ( 3002 );
} };
   { if (!(nSelectors < 32768 && nSelectors <= (2 + (900000 / 50))))  {
						   __asm__ __volatile__ ("nop;");
TRACK277_BEGIN: track(&&TRACK277_BEGIN, &&TRACK277_END);
TRACK277_END:   __asm__ __volatile__ ("nop;");
BZ2_bz__AssertH__fail ( 3003 );
} };
   {
      UChar pos[6], ll_i, tmp2, tmp;
      for (i = 0; i < nGroups; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK278_BEGIN: track(&&TRACK278_BEGIN, &&TRACK278_END);
TRACK278_END:   __asm__ __volatile__ ("nop;");
pos[i] = i;
}
      for (i = 0; i < nSelectors; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK280_BEGIN: track(&&TRACK280_BEGIN, &&TRACK280_END);
  TRACK280_END:   __asm__ __volatile__ ("nop;");
  ll_i = s->selector[i];
           j = 0;
           tmp = pos[j];
           while ( ll_i != tmp ) {
    						   __asm__ __volatile__ ("nop;");
    TRACK279_BEGIN: track(&&TRACK279_BEGIN, &&TRACK279_END);
    TRACK279_END:   __asm__ __volatile__ ("nop;");
    j++;
                tmp2 = tmp;
                tmp = pos[j];
                pos[j] = tmp2;
  };
           pos[0] = tmp;
           s->selectorMtf[i] = j;
}
   };
   for (t = 0; t < nGroups; t++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK286_BEGIN: track(&&TRACK286_BEGIN, &&TRACK286_END);
  TRACK286_END:   __asm__ __volatile__ ("nop;");
  minLen = 32;
        maxLen = 0;
        for (i = 0; i < alphaSize; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK283_BEGIN: track(&&TRACK283_BEGIN, &&TRACK283_END);
    TRACK283_END:   __asm__ __volatile__ ("nop;");
    if (s->len[t][i] > maxLen)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK281_BEGIN: track(&&TRACK281_BEGIN, &&TRACK281_END);
    TRACK281_END:   __asm__ __volatile__ ("nop;");
    maxLen = s->len[t][i];
    }
             if (s->len[t][i] < minLen)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK282_BEGIN: track(&&TRACK282_BEGIN, &&TRACK282_END);
    TRACK282_END:   __asm__ __volatile__ ("nop;");
    minLen = s->len[t][i];
    }
  }
        { if (!(!(maxLen > 20)))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK284_BEGIN: track(&&TRACK284_BEGIN, &&TRACK284_END);
  TRACK284_END:   __asm__ __volatile__ ("nop;");
  BZ2_bz__AssertH__fail ( 3004 );
  } };
        { if (!(!(minLen < 1)))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK285_BEGIN: track(&&TRACK285_BEGIN, &&TRACK285_END);
  TRACK285_END:   __asm__ __volatile__ ("nop;");
  BZ2_bz__AssertH__fail ( 3005 );
  } };
        BZ2_hbAssignCodes ( &(s->code[t][0]), &(s->len[t][0]),
                            minLen, maxLen, alphaSize );
}
   {
      Bool inUse16[16];
      for (i = 0; i < 16; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK289_BEGIN: track(&&TRACK289_BEGIN, &&TRACK289_END);
  TRACK289_END:   __asm__ __volatile__ ("nop;");
  inUse16[i] = ((Bool)0);
            for (j = 0; j < 16; j++)
                {
  						   __asm__ __volatile__ ("nop;");
  TRACK288_BEGIN: track(&&TRACK288_BEGIN, &&TRACK288_END);
  TRACK288_END:   __asm__ __volatile__ ("nop;");
  if (s->inUse[i * 16 + j])  {
  						   __asm__ __volatile__ ("nop;");
  TRACK287_BEGIN: track(&&TRACK287_BEGIN, &&TRACK287_END);
  TRACK287_END:   __asm__ __volatile__ ("nop;");
  inUse16[i] = ((Bool)1);
  }
  }
}
      nBytes = s->numZ;
      for (i = 0; i < 16; i++)
          {
						   __asm__ __volatile__ ("nop;");
TRACK292_BEGIN: track(&&TRACK292_BEGIN, &&TRACK292_END);
TRACK292_END:   __asm__ __volatile__ ("nop;");
if (inUse16[i])  {
						   __asm__ __volatile__ ("nop;");
TRACK290_BEGIN: track(&&TRACK290_BEGIN, &&TRACK290_END);
TRACK290_END:   __asm__ __volatile__ ("nop;");
bsW(s,1,1);
} else  {
						   __asm__ __volatile__ ("nop;");
TRACK291_BEGIN: track(&&TRACK291_BEGIN, &&TRACK291_END);
TRACK291_END:   __asm__ __volatile__ ("nop;");
bsW(s,1,0);
}
}
      for (i = 0; i < 16; i++)
          {
						   __asm__ __volatile__ ("nop;");
TRACK297_BEGIN: track(&&TRACK297_BEGIN, &&TRACK297_END);
TRACK297_END:   __asm__ __volatile__ ("nop;");
if (inUse16[i])
             {
						   __asm__ __volatile__ ("nop;");
TRACK296_BEGIN: track(&&TRACK296_BEGIN, &&TRACK296_END);
TRACK296_END:   __asm__ __volatile__ ("nop;");
for (j = 0; j < 16; j++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK295_BEGIN: track(&&TRACK295_BEGIN, &&TRACK295_END);
  TRACK295_END:   __asm__ __volatile__ ("nop;");
  if (s->inUse[i * 16 + j])  {
  						   __asm__ __volatile__ ("nop;");
  TRACK293_BEGIN: track(&&TRACK293_BEGIN, &&TRACK293_END);
  TRACK293_END:   __asm__ __volatile__ ("nop;");
  bsW(s,1,1);
  } else  {
  						   __asm__ __volatile__ ("nop;");
  TRACK294_BEGIN: track(&&TRACK294_BEGIN, &&TRACK294_END);
  TRACK294_END:   __asm__ __volatile__ ("nop;");
  bsW(s,1,0);
  }
}
}
}
      if (s->verbosity >= 3)
          {
						   __asm__ __volatile__ ("nop;");
TRACK298_BEGIN: track(&&TRACK298_BEGIN, &&TRACK298_END);
TRACK298_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"      bytes: mapping %d, ",s->numZ-nBytes);
}
   }
   nBytes = s->numZ;
   bsW ( s, 3, nGroups );
   bsW ( s, 15, nSelectors );
   for (i = 0; i < nSelectors; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK300_BEGIN: track(&&TRACK300_BEGIN, &&TRACK300_END);
  TRACK300_END:   __asm__ __volatile__ ("nop;");
  for (j = 0; j < s->selectorMtf[i]; j++)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK299_BEGIN: track(&&TRACK299_BEGIN, &&TRACK299_END);
  TRACK299_END:   __asm__ __volatile__ ("nop;");
  bsW(s,1,1);
  }
        bsW(s,1,0);
}
   if (s->verbosity >= 3)
       {
						   __asm__ __volatile__ ("nop;");
TRACK301_BEGIN: track(&&TRACK301_BEGIN, &&TRACK301_END);
TRACK301_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"selectors %d, ",s->numZ-nBytes);
}
   nBytes = s->numZ;
   for (t = 0; t < nGroups; t++) {
  Int32 curr = s->len[t][0];
  						   __asm__ __volatile__ ("nop;");
  TRACK305_BEGIN: track(&&TRACK305_BEGIN, &&TRACK305_END);
  TRACK305_END:   __asm__ __volatile__ ("nop;");
  bsW ( s, 5, curr );
        for (i = 0; i < alphaSize; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK304_BEGIN: track(&&TRACK304_BEGIN, &&TRACK304_END);
    TRACK304_END:   __asm__ __volatile__ ("nop;");
    while (curr < s->len[t][i]) {
      						   __asm__ __volatile__ ("nop;");
      TRACK302_BEGIN: track(&&TRACK302_BEGIN, &&TRACK302_END);
      TRACK302_END:   __asm__ __volatile__ ("nop;");
      bsW(s,2,2); curr++;
    };
             while (curr > s->len[t][i]) {
      						   __asm__ __volatile__ ("nop;");
      TRACK303_BEGIN: track(&&TRACK303_BEGIN, &&TRACK303_END);
      TRACK303_END:   __asm__ __volatile__ ("nop;");
      bsW(s,2,3); curr--;
    };
             bsW ( s, 1, 0 );
  }
}
   if (s->verbosity >= 3)
       {
						   __asm__ __volatile__ ("nop;");
TRACK306_BEGIN: track(&&TRACK306_BEGIN, &&TRACK306_END);
TRACK306_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"code lengths %d, ",s->numZ-nBytes);
}
   nBytes = s->numZ;
   selCtr = 0;
   gs = 0;
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK313_BEGIN: track(&&TRACK313_BEGIN, &&TRACK313_END);
  TRACK313_END:   __asm__ __volatile__ ("nop;");
  if (gs >= s->nMTF)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK307_BEGIN: track(&&TRACK307_BEGIN, &&TRACK307_END);
  TRACK307_END:   __asm__ __volatile__ ("nop;");
  break;
  }
        ge = gs + 50 - 1;
        if (ge >= s->nMTF)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK308_BEGIN: track(&&TRACK308_BEGIN, &&TRACK308_END);
  TRACK308_END:   __asm__ __volatile__ ("nop;");
  ge = s->nMTF-1;
  }
        { if (!(s->selector[selCtr] < nGroups))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK309_BEGIN: track(&&TRACK309_BEGIN, &&TRACK309_END);
  TRACK309_END:   __asm__ __volatile__ ("nop;");
  BZ2_bz__AssertH__fail ( 3006 );
  } };
        if (nGroups == 6 && 50 == ge-gs+1) {
    UInt16 mtfv_i;
                UChar* s_len_sel_selCtr
                   = &(s->len[s->selector[selCtr]][0]);
                Int32* s_code_sel_selCtr
                   = &(s->code[s->selector[selCtr]][0]);
    						   __asm__ __volatile__ ("nop;");
    TRACK310_BEGIN: track(&&TRACK310_BEGIN, &&TRACK310_END);
    TRACK310_END:   __asm__ __volatile__ ("nop;");
    mtfv_i = mtfv[gs+(0)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(1)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(2)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(3)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(4)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
                mtfv_i = mtfv[gs+(5)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(6)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(7)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(8)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(9)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
                mtfv_i = mtfv[gs+(10)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(11)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(12)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(13)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(14)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
                mtfv_i = mtfv[gs+(15)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(16)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(17)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(18)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(19)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
                mtfv_i = mtfv[gs+(20)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(21)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(22)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(23)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(24)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
                mtfv_i = mtfv[gs+(25)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(26)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(27)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(28)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(29)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
                mtfv_i = mtfv[gs+(30)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(31)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(32)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(33)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(34)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
                mtfv_i = mtfv[gs+(35)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(36)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(37)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(38)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(39)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
                mtfv_i = mtfv[gs+(40)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(41)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(42)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(43)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(44)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
                mtfv_i = mtfv[gs+(45)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(46)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(47)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(48)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] ); mtfv_i = mtfv[gs+(49)]; bsW ( s, s_len_sel_selCtr[mtfv_i], s_code_sel_selCtr[mtfv_i] );
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK312_BEGIN: track(&&TRACK312_BEGIN, &&TRACK312_END);
    TRACK312_END:   __asm__ __volatile__ ("nop;");
    for (i = gs; i <= ge; i++) {
      						   __asm__ __volatile__ ("nop;");
      TRACK311_BEGIN: track(&&TRACK311_BEGIN, &&TRACK311_END);
      TRACK311_END:   __asm__ __volatile__ ("nop;");
      bsW ( s,
                        s->len [s->selector[selCtr]] [mtfv[i]],
                        s->code [s->selector[selCtr]] [mtfv[i]] );
    }
  }
        gs = ge+1;
        selCtr++;
}
   { if (!(selCtr == nSelectors))  {
						   __asm__ __volatile__ ("nop;");
TRACK314_BEGIN: track(&&TRACK314_BEGIN, &&TRACK314_END);
TRACK314_END:   __asm__ __volatile__ ("nop;");
BZ2_bz__AssertH__fail ( 3007 );
} };
   if (s->verbosity >= 3)
       {
						   __asm__ __volatile__ ("nop;");
TRACK315_BEGIN: track(&&TRACK315_BEGIN, &&TRACK315_END);
TRACK315_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"codes %d\n",s->numZ-nBytes);
}
}
void BZ2_compressBlock ( EState* s, Bool is_last_block )
{
   if (s->nblock > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK318_BEGIN: track(&&TRACK318_BEGIN, &&TRACK318_END);
  TRACK318_END:   __asm__ __volatile__ ("nop;");
  { s->blockCRC = ~(s->blockCRC); };
        s->combinedCRC = (s->combinedCRC << 1) | (s->combinedCRC >> 31);
        s->combinedCRC ^= s->blockCRC;
        if (s->blockNo > 1)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK316_BEGIN: track(&&TRACK316_BEGIN, &&TRACK316_END);
  TRACK316_END:   __asm__ __volatile__ ("nop;");
  s->numZ = 0;
  }
        if (s->verbosity >= 2)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK317_BEGIN: track(&&TRACK317_BEGIN, &&TRACK317_END);
  TRACK317_END:   __asm__ __volatile__ ("nop;");
  fprintf(stderr,"    block %d: crc = 0x%8x, " "combined CRC = 0x%8x, size = %d\n",s->blockNo,s->blockCRC,s->combinedCRC,s->nblock);
  }
        BZ2_blockSort ( s );
}
   s->zbits = (UChar*) (&((UChar*)s->arr2)[s->nblock]);
   if (s->blockNo == 1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK319_BEGIN: track(&&TRACK319_BEGIN, &&TRACK319_END);
  TRACK319_END:   __asm__ __volatile__ ("nop;");
  BZ2_bsInitWrite ( s );
        bsPutUChar ( s, 0x42 );
        bsPutUChar ( s, 0x5a );
        bsPutUChar ( s, 0x68 );
        bsPutUChar ( s, (UChar)(0x30 + s->blockSize100k) );
}
   if (s->nblock > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK320_BEGIN: track(&&TRACK320_BEGIN, &&TRACK320_END);
  TRACK320_END:   __asm__ __volatile__ ("nop;");
  bsPutUChar ( s, 0x31 ); bsPutUChar ( s, 0x41 );
        bsPutUChar ( s, 0x59 ); bsPutUChar ( s, 0x26 );
        bsPutUChar ( s, 0x53 ); bsPutUChar ( s, 0x59 );
        bsPutUInt32 ( s, s->blockCRC );
        bsW(s,1,0);
        bsW ( s, 24, s->origPtr );
        generateMTFValues ( s );
        sendMTFValues ( s );
}
   if (is_last_block) {
  						   __asm__ __volatile__ ("nop;");
  TRACK322_BEGIN: track(&&TRACK322_BEGIN, &&TRACK322_END);
  TRACK322_END:   __asm__ __volatile__ ("nop;");
  bsPutUChar ( s, 0x17 ); bsPutUChar ( s, 0x72 );
        bsPutUChar ( s, 0x45 ); bsPutUChar ( s, 0x38 );
        bsPutUChar ( s, 0x50 ); bsPutUChar ( s, 0x90 );
        bsPutUInt32 ( s, s->combinedCRC );
        if (s->verbosity >= 2)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK321_BEGIN: track(&&TRACK321_BEGIN, &&TRACK321_END);
  TRACK321_END:   __asm__ __volatile__ ("nop;");
  fprintf(stderr,"    final combined CRC = 0x%x\n   ",s->combinedCRC);
  }
        bsFinishWrite ( s );
}
}
static
void makeMaps_d ( DState* s )
{
   Int32 i;
   s->nInUse = 0;
   for (i = 0; i < 256; i++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK324_BEGIN: track(&&TRACK324_BEGIN, &&TRACK324_END);
TRACK324_END:   __asm__ __volatile__ ("nop;");
if (s->inUse[i]) {
  						   __asm__ __volatile__ ("nop;");
  TRACK323_BEGIN: track(&&TRACK323_BEGIN, &&TRACK323_END);
  TRACK323_END:   __asm__ __volatile__ ("nop;");
  s->seqToUnseq[s->nInUse] = i;
           s->nInUse++;
}
}
}
Int32 BZ2_decompress ( DState* s )
{
   UChar uc;
   Int32 retVal;
   Int32 minLen, maxLen;
   bz_stream* strm = s->strm;
   Int32 i;
   Int32 j;
   Int32 t;
   Int32 alphaSize;
   Int32 nGroups;
   Int32 nSelectors;
   Int32 EOB;
   Int32 groupNo;
   Int32 groupPos;
   Int32 nextSym;
   Int32 nblockMAX;
   Int32 nblock;
   Int32 es;
   Int32 N;
   Int32 curr;
   Int32 zt;
   Int32 zn;
   Int32 zvec;
   Int32 zj;
   Int32 gSel;
   Int32 gMinlen;
   Int32* gLimit;
   Int32* gBase;
   Int32* gPerm;
   if (s->state == 10) {
  						   __asm__ __volatile__ ("nop;");
  TRACK325_BEGIN: track(&&TRACK325_BEGIN, &&TRACK325_END);
  TRACK325_END:   __asm__ __volatile__ ("nop;");
  s->save_i = 0;
        s->save_j = 0;
        s->save_t = 0;
        s->save_alphaSize = 0;
        s->save_nGroups = 0;
        s->save_nSelectors = 0;
        s->save_EOB = 0;
        s->save_groupNo = 0;
        s->save_groupPos = 0;
        s->save_nextSym = 0;
        s->save_nblockMAX = 0;
        s->save_nblock = 0;
        s->save_es = 0;
        s->save_N = 0;
        s->save_curr = 0;
        s->save_zt = 0;
        s->save_zn = 0;
        s->save_zvec = 0;
        s->save_zj = 0;
        s->save_gSel = 0;
        s->save_gMinlen = 0;
        s->save_gLimit = ((void *)0);
        s->save_gBase = ((void *)0);
        s->save_gPerm = ((void *)0);
}
   i = s->save_i;
   j = s->save_j;
   t = s->save_t;
   alphaSize = s->save_alphaSize;
   nGroups = s->save_nGroups;
   nSelectors = s->save_nSelectors;
   EOB = s->save_EOB;
   groupNo = s->save_groupNo;
   groupPos = s->save_groupPos;
   nextSym = s->save_nextSym;
   nblockMAX = s->save_nblockMAX;
   nblock = s->save_nblock;
   es = s->save_es;
   N = s->save_N;
   curr = s->save_curr;
   zt = s->save_zt;
   zn = s->save_zn;
   zvec = s->save_zvec;
   zj = s->save_zj;
   gSel = s->save_gSel;
   gMinlen = s->save_gMinlen;
   gLimit = s->save_gLimit;
   gBase = s->save_gBase;
   gPerm = s->save_gPerm;
   retVal = 0;
   switch (s->state) {
       
  case 10:
							   __asm__ __volatile__ ("nop;");
	TRACK326_BEGIN: track(&&TRACK326_BEGIN, &&TRACK326_END);
	TRACK326_END:   __asm__ __volatile__ ("nop;");
	s->state = 10; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK330_BEGIN: track(&&TRACK330_BEGIN, &&TRACK330_END);
  TRACK330_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK327_BEGIN: track(&&TRACK327_BEGIN, &&TRACK327_END);
    TRACK327_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK328_BEGIN: track(&&TRACK328_BEGIN, &&TRACK328_END);
    TRACK328_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK329_BEGIN: track(&&TRACK329_BEGIN, &&TRACK329_END);
  TRACK329_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x42) {
  						   __asm__ __volatile__ ("nop;");
  TRACK331_BEGIN: track(&&TRACK331_BEGIN, &&TRACK331_END);
  TRACK331_END:   __asm__ __volatile__ ("nop;");
  retVal = (-5); goto save_state_and_return;
};;
       
  case 11:
							   __asm__ __volatile__ ("nop;");
	TRACK332_BEGIN: track(&&TRACK332_BEGIN, &&TRACK332_END);
	TRACK332_END:   __asm__ __volatile__ ("nop;");
	s->state = 11; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK336_BEGIN: track(&&TRACK336_BEGIN, &&TRACK336_END);
  TRACK336_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK333_BEGIN: track(&&TRACK333_BEGIN, &&TRACK333_END);
    TRACK333_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK334_BEGIN: track(&&TRACK334_BEGIN, &&TRACK334_END);
    TRACK334_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK335_BEGIN: track(&&TRACK335_BEGIN, &&TRACK335_END);
  TRACK335_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x5a) {
  						   __asm__ __volatile__ ("nop;");
  TRACK337_BEGIN: track(&&TRACK337_BEGIN, &&TRACK337_END);
  TRACK337_END:   __asm__ __volatile__ ("nop;");
  retVal = (-5); goto save_state_and_return;
};;
       
  case 12:
							   __asm__ __volatile__ ("nop;");
	TRACK338_BEGIN: track(&&TRACK338_BEGIN, &&TRACK338_END);
	TRACK338_END:   __asm__ __volatile__ ("nop;");
	s->state = 12; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK342_BEGIN: track(&&TRACK342_BEGIN, &&TRACK342_END);
  TRACK342_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK339_BEGIN: track(&&TRACK339_BEGIN, &&TRACK339_END);
    TRACK339_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK340_BEGIN: track(&&TRACK340_BEGIN, &&TRACK340_END);
    TRACK340_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK341_BEGIN: track(&&TRACK341_BEGIN, &&TRACK341_END);
  TRACK341_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
}
      if (uc != 0x68) {
  						   __asm__ __volatile__ ("nop;");
  TRACK343_BEGIN: track(&&TRACK343_BEGIN, &&TRACK343_END);
  TRACK343_END:   __asm__ __volatile__ ("nop;");
  retVal = (-5); goto save_state_and_return;
};;
       
  case 13:
							   __asm__ __volatile__ ("nop;");
	TRACK344_BEGIN: track(&&TRACK344_BEGIN, &&TRACK344_END);
	TRACK344_END:   __asm__ __volatile__ ("nop;");
	s->state = 13; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK348_BEGIN: track(&&TRACK348_BEGIN, &&TRACK348_END);
  TRACK348_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK345_BEGIN: track(&&TRACK345_BEGIN, &&TRACK345_END);
    TRACK345_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; s->blockSize100k = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK346_BEGIN: track(&&TRACK346_BEGIN, &&TRACK346_END);
    TRACK346_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK347_BEGIN: track(&&TRACK347_BEGIN, &&TRACK347_END);
  TRACK347_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
}
      if (s->blockSize100k < (0x30 + 1) ||
          s->blockSize100k > (0x30 + 9)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK349_BEGIN: track(&&TRACK349_BEGIN, &&TRACK349_END);
  TRACK349_END:   __asm__ __volatile__ ("nop;");
  retVal = (-5); goto save_state_and_return;
};;
      s->blockSize100k -= 0x30;
      if (s->smallDecompress) {
  						   __asm__ __volatile__ ("nop;");
  TRACK351_BEGIN: track(&&TRACK351_BEGIN, &&TRACK351_END);
  TRACK351_END:   __asm__ __volatile__ ("nop;");
  s->ll16 = (strm->bzalloc)(strm->opaque,(s->blockSize100k * 100000 * sizeof(UInt16)),1);
           s->ll4 = (strm->bzalloc)(strm->opaque,(((1 + s->blockSize100k * 100000) >> 1) * sizeof(UChar)),1);
           if (s->ll16 == ((void *)0) || s->ll4 == ((void *)0)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK350_BEGIN: track(&&TRACK350_BEGIN, &&TRACK350_END);
    TRACK350_END:   __asm__ __volatile__ ("nop;");
    retVal = (-3); goto save_state_and_return;
  };;
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK353_BEGIN: track(&&TRACK353_BEGIN, &&TRACK353_END);
  TRACK353_END:   __asm__ __volatile__ ("nop;");
  s->tt = (strm->bzalloc)(strm->opaque,(s->blockSize100k * 100000 * sizeof(Int32)),1);
           if (s->tt == ((void *)0)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK352_BEGIN: track(&&TRACK352_BEGIN, &&TRACK352_END);
    TRACK352_END:   __asm__ __volatile__ ("nop;");
    retVal = (-3); goto save_state_and_return;
  };;
}
       
  case 14:
							   __asm__ __volatile__ ("nop;");
	TRACK354_BEGIN: track(&&TRACK354_BEGIN, &&TRACK354_END);
	TRACK354_END:   __asm__ __volatile__ ("nop;");
	s->state = 14; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK358_BEGIN: track(&&TRACK358_BEGIN, &&TRACK358_END);
  TRACK358_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK355_BEGIN: track(&&TRACK355_BEGIN, &&TRACK355_END);
    TRACK355_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK356_BEGIN: track(&&TRACK356_BEGIN, &&TRACK356_END);
    TRACK356_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK357_BEGIN: track(&&TRACK357_BEGIN, &&TRACK357_END);
  TRACK357_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc == 0x17)  {
						   __asm__ __volatile__ ("nop;");
TRACK359_BEGIN: track(&&TRACK359_BEGIN, &&TRACK359_END);
TRACK359_END:   __asm__ __volatile__ ("nop;");
goto endhdr_2;
}
      if (uc != 0x31) {
  						   __asm__ __volatile__ ("nop;");
  TRACK360_BEGIN: track(&&TRACK360_BEGIN, &&TRACK360_END);
  TRACK360_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 15:
							   __asm__ __volatile__ ("nop;");
	TRACK361_BEGIN: track(&&TRACK361_BEGIN, &&TRACK361_END);
	TRACK361_END:   __asm__ __volatile__ ("nop;");
	s->state = 15; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK365_BEGIN: track(&&TRACK365_BEGIN, &&TRACK365_END);
  TRACK365_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK362_BEGIN: track(&&TRACK362_BEGIN, &&TRACK362_END);
    TRACK362_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK363_BEGIN: track(&&TRACK363_BEGIN, &&TRACK363_END);
    TRACK363_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK364_BEGIN: track(&&TRACK364_BEGIN, &&TRACK364_END);
  TRACK364_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x41) {
  						   __asm__ __volatile__ ("nop;");
  TRACK366_BEGIN: track(&&TRACK366_BEGIN, &&TRACK366_END);
  TRACK366_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 16:
							   __asm__ __volatile__ ("nop;");
	TRACK367_BEGIN: track(&&TRACK367_BEGIN, &&TRACK367_END);
	TRACK367_END:   __asm__ __volatile__ ("nop;");
	s->state = 16; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK371_BEGIN: track(&&TRACK371_BEGIN, &&TRACK371_END);
  TRACK371_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK368_BEGIN: track(&&TRACK368_BEGIN, &&TRACK368_END);
    TRACK368_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK369_BEGIN: track(&&TRACK369_BEGIN, &&TRACK369_END);
    TRACK369_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK370_BEGIN: track(&&TRACK370_BEGIN, &&TRACK370_END);
  TRACK370_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x59) {
  						   __asm__ __volatile__ ("nop;");
  TRACK372_BEGIN: track(&&TRACK372_BEGIN, &&TRACK372_END);
  TRACK372_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 17:
							   __asm__ __volatile__ ("nop;");
	TRACK373_BEGIN: track(&&TRACK373_BEGIN, &&TRACK373_END);
	TRACK373_END:   __asm__ __volatile__ ("nop;");
	s->state = 17; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK377_BEGIN: track(&&TRACK377_BEGIN, &&TRACK377_END);
  TRACK377_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK374_BEGIN: track(&&TRACK374_BEGIN, &&TRACK374_END);
    TRACK374_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK375_BEGIN: track(&&TRACK375_BEGIN, &&TRACK375_END);
    TRACK375_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK376_BEGIN: track(&&TRACK376_BEGIN, &&TRACK376_END);
  TRACK376_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x26) {
  						   __asm__ __volatile__ ("nop;");
  TRACK378_BEGIN: track(&&TRACK378_BEGIN, &&TRACK378_END);
  TRACK378_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 18:
							   __asm__ __volatile__ ("nop;");
	TRACK379_BEGIN: track(&&TRACK379_BEGIN, &&TRACK379_END);
	TRACK379_END:   __asm__ __volatile__ ("nop;");
	s->state = 18; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK383_BEGIN: track(&&TRACK383_BEGIN, &&TRACK383_END);
  TRACK383_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK380_BEGIN: track(&&TRACK380_BEGIN, &&TRACK380_END);
    TRACK380_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK381_BEGIN: track(&&TRACK381_BEGIN, &&TRACK381_END);
    TRACK381_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK382_BEGIN: track(&&TRACK382_BEGIN, &&TRACK382_END);
  TRACK382_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x53) {
  						   __asm__ __volatile__ ("nop;");
  TRACK384_BEGIN: track(&&TRACK384_BEGIN, &&TRACK384_END);
  TRACK384_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 19:
							   __asm__ __volatile__ ("nop;");
	TRACK385_BEGIN: track(&&TRACK385_BEGIN, &&TRACK385_END);
	TRACK385_END:   __asm__ __volatile__ ("nop;");
	s->state = 19; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK389_BEGIN: track(&&TRACK389_BEGIN, &&TRACK389_END);
  TRACK389_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK386_BEGIN: track(&&TRACK386_BEGIN, &&TRACK386_END);
    TRACK386_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK387_BEGIN: track(&&TRACK387_BEGIN, &&TRACK387_END);
    TRACK387_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK388_BEGIN: track(&&TRACK388_BEGIN, &&TRACK388_END);
  TRACK388_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x59) {
  						   __asm__ __volatile__ ("nop;");
  TRACK390_BEGIN: track(&&TRACK390_BEGIN, &&TRACK390_END);
  TRACK390_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
      s->currBlockNo++;
      if (s->verbosity >= 2)
          {
						   __asm__ __volatile__ ("nop;");
TRACK391_BEGIN: track(&&TRACK391_BEGIN, &&TRACK391_END);
TRACK391_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"\n    [%d: huff+mtf ",s->currBlockNo);
}
      s->storedBlockCRC = 0;
       
  case 20:
							   __asm__ __volatile__ ("nop;");
	TRACK392_BEGIN: track(&&TRACK392_BEGIN, &&TRACK392_END);
	TRACK392_END:   __asm__ __volatile__ ("nop;");
	s->state = 20; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK396_BEGIN: track(&&TRACK396_BEGIN, &&TRACK396_END);
  TRACK396_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK393_BEGIN: track(&&TRACK393_BEGIN, &&TRACK393_END);
    TRACK393_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK394_BEGIN: track(&&TRACK394_BEGIN, &&TRACK394_END);
    TRACK394_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK395_BEGIN: track(&&TRACK395_BEGIN, &&TRACK395_END);
  TRACK395_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
       
  case 21:
							   __asm__ __volatile__ ("nop;");
	TRACK397_BEGIN: track(&&TRACK397_BEGIN, &&TRACK397_END);
	TRACK397_END:   __asm__ __volatile__ ("nop;");
	s->state = 21; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK401_BEGIN: track(&&TRACK401_BEGIN, &&TRACK401_END);
  TRACK401_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK398_BEGIN: track(&&TRACK398_BEGIN, &&TRACK398_END);
    TRACK398_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK399_BEGIN: track(&&TRACK399_BEGIN, &&TRACK399_END);
    TRACK399_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK400_BEGIN: track(&&TRACK400_BEGIN, &&TRACK400_END);
  TRACK400_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
       
  case 22:
							   __asm__ __volatile__ ("nop;");
	TRACK402_BEGIN: track(&&TRACK402_BEGIN, &&TRACK402_END);
	TRACK402_END:   __asm__ __volatile__ ("nop;");
	s->state = 22; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK406_BEGIN: track(&&TRACK406_BEGIN, &&TRACK406_END);
  TRACK406_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK403_BEGIN: track(&&TRACK403_BEGIN, &&TRACK403_END);
    TRACK403_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK404_BEGIN: track(&&TRACK404_BEGIN, &&TRACK404_END);
    TRACK404_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK405_BEGIN: track(&&TRACK405_BEGIN, &&TRACK405_END);
  TRACK405_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
       
  case 23:
							   __asm__ __volatile__ ("nop;");
	TRACK407_BEGIN: track(&&TRACK407_BEGIN, &&TRACK407_END);
	TRACK407_END:   __asm__ __volatile__ ("nop;");
	s->state = 23; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK411_BEGIN: track(&&TRACK411_BEGIN, &&TRACK411_END);
  TRACK411_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK408_BEGIN: track(&&TRACK408_BEGIN, &&TRACK408_END);
    TRACK408_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK409_BEGIN: track(&&TRACK409_BEGIN, &&TRACK409_END);
    TRACK409_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK410_BEGIN: track(&&TRACK410_BEGIN, &&TRACK410_END);
  TRACK410_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
       
  case 24:
							   __asm__ __volatile__ ("nop;");
	TRACK412_BEGIN: track(&&TRACK412_BEGIN, &&TRACK412_END);
	TRACK412_END:   __asm__ __volatile__ ("nop;");
	s->state = 24; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK416_BEGIN: track(&&TRACK416_BEGIN, &&TRACK416_END);
  TRACK416_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 1) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK413_BEGIN: track(&&TRACK413_BEGIN, &&TRACK413_END);
    TRACK413_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; s->blockRandomised = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK414_BEGIN: track(&&TRACK414_BEGIN, &&TRACK414_END);
    TRACK414_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK415_BEGIN: track(&&TRACK415_BEGIN, &&TRACK415_END);
  TRACK415_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->origPtr = 0;
       
  case 25:
							   __asm__ __volatile__ ("nop;");
	TRACK417_BEGIN: track(&&TRACK417_BEGIN, &&TRACK417_END);
	TRACK417_END:   __asm__ __volatile__ ("nop;");
	s->state = 25; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK421_BEGIN: track(&&TRACK421_BEGIN, &&TRACK421_END);
  TRACK421_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK418_BEGIN: track(&&TRACK418_BEGIN, &&TRACK418_END);
    TRACK418_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK419_BEGIN: track(&&TRACK419_BEGIN, &&TRACK419_END);
    TRACK419_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK420_BEGIN: track(&&TRACK420_BEGIN, &&TRACK420_END);
  TRACK420_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->origPtr = (s->origPtr << 8) | ((Int32)uc);
       
  case 26:
							   __asm__ __volatile__ ("nop;");
	TRACK422_BEGIN: track(&&TRACK422_BEGIN, &&TRACK422_END);
	TRACK422_END:   __asm__ __volatile__ ("nop;");
	s->state = 26; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK426_BEGIN: track(&&TRACK426_BEGIN, &&TRACK426_END);
  TRACK426_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK423_BEGIN: track(&&TRACK423_BEGIN, &&TRACK423_END);
    TRACK423_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK424_BEGIN: track(&&TRACK424_BEGIN, &&TRACK424_END);
    TRACK424_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK425_BEGIN: track(&&TRACK425_BEGIN, &&TRACK425_END);
  TRACK425_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->origPtr = (s->origPtr << 8) | ((Int32)uc);
       
  case 27:
							   __asm__ __volatile__ ("nop;");
	TRACK427_BEGIN: track(&&TRACK427_BEGIN, &&TRACK427_END);
	TRACK427_END:   __asm__ __volatile__ ("nop;");
	s->state = 27; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK431_BEGIN: track(&&TRACK431_BEGIN, &&TRACK431_END);
  TRACK431_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK428_BEGIN: track(&&TRACK428_BEGIN, &&TRACK428_END);
    TRACK428_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK429_BEGIN: track(&&TRACK429_BEGIN, &&TRACK429_END);
    TRACK429_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK430_BEGIN: track(&&TRACK430_BEGIN, &&TRACK430_END);
  TRACK430_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->origPtr = (s->origPtr << 8) | ((Int32)uc);
      if (s->origPtr < 0)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK432_BEGIN: track(&&TRACK432_BEGIN, &&TRACK432_END);
  TRACK432_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
      if (s->origPtr > 10 + 100000*s->blockSize100k)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK433_BEGIN: track(&&TRACK433_BEGIN, &&TRACK433_END);
  TRACK433_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
      for (i = 0; i < 16; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK441_BEGIN: track(&&TRACK441_BEGIN, &&TRACK441_END);
  TRACK441_END:   __asm__ __volatile__ ("nop;");
   
    case 28:
  							   __asm__ __volatile__ ("nop;");
  	TRACK434_BEGIN: track(&&TRACK434_BEGIN, &&TRACK434_END);
  	TRACK434_END:   __asm__ __volatile__ ("nop;");
  	s->state = 28; while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK438_BEGIN: track(&&TRACK438_BEGIN, &&TRACK438_END);
    TRACK438_END:   __asm__ __volatile__ ("nop;");
    if (s->bsLive >= 1) {
      UInt32 v;
      						   __asm__ __volatile__ ("nop;");
      TRACK435_BEGIN: track(&&TRACK435_BEGIN, &&TRACK435_END);
      TRACK435_END:   __asm__ __volatile__ ("nop;");
      v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
    } if (s->strm->avail_in == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK436_BEGIN: track(&&TRACK436_BEGIN, &&TRACK436_END);
      TRACK436_END:   __asm__ __volatile__ ("nop;");
      retVal = 0; goto save_state_and_return;
    };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK437_BEGIN: track(&&TRACK437_BEGIN, &&TRACK437_END);
    TRACK437_END:   __asm__ __volatile__ ("nop;");
    s->strm->total_in_hi32++;
    }
  };
           if (uc == 1)
               {
  						   __asm__ __volatile__ ("nop;");
  TRACK439_BEGIN: track(&&TRACK439_BEGIN, &&TRACK439_END);
  TRACK439_END:   __asm__ __volatile__ ("nop;");
  s->inUse16[i] = ((Bool)1);
  } else
               {
  						   __asm__ __volatile__ ("nop;");
  TRACK440_BEGIN: track(&&TRACK440_BEGIN, &&TRACK440_END);
  TRACK440_END:   __asm__ __volatile__ ("nop;");
  s->inUse16[i] = ((Bool)0);
  }
}
      for (i = 0; i < 256; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK442_BEGIN: track(&&TRACK442_BEGIN, &&TRACK442_END);
TRACK442_END:   __asm__ __volatile__ ("nop;");
s->inUse[i] = ((Bool)0);
}
      for (i = 0; i < 16; i++)
          {
						   __asm__ __volatile__ ("nop;");
TRACK451_BEGIN: track(&&TRACK451_BEGIN, &&TRACK451_END);
TRACK451_END:   __asm__ __volatile__ ("nop;");
if (s->inUse16[i])
             {
						   __asm__ __volatile__ ("nop;");
TRACK450_BEGIN: track(&&TRACK450_BEGIN, &&TRACK450_END);
TRACK450_END:   __asm__ __volatile__ ("nop;");
for (j = 0; j < 16; j++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK449_BEGIN: track(&&TRACK449_BEGIN, &&TRACK449_END);
  TRACK449_END:   __asm__ __volatile__ ("nop;");
   
    case 29:
  							   __asm__ __volatile__ ("nop;");
  	TRACK443_BEGIN: track(&&TRACK443_BEGIN, &&TRACK443_END);
  	TRACK443_END:   __asm__ __volatile__ ("nop;");
  	s->state = 29; while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK447_BEGIN: track(&&TRACK447_BEGIN, &&TRACK447_END);
    TRACK447_END:   __asm__ __volatile__ ("nop;");
    if (s->bsLive >= 1) {
      UInt32 v;
      						   __asm__ __volatile__ ("nop;");
      TRACK444_BEGIN: track(&&TRACK444_BEGIN, &&TRACK444_END);
      TRACK444_END:   __asm__ __volatile__ ("nop;");
      v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
    } if (s->strm->avail_in == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK445_BEGIN: track(&&TRACK445_BEGIN, &&TRACK445_END);
      TRACK445_END:   __asm__ __volatile__ ("nop;");
      retVal = 0; goto save_state_and_return;
    };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK446_BEGIN: track(&&TRACK446_BEGIN, &&TRACK446_END);
    TRACK446_END:   __asm__ __volatile__ ("nop;");
    s->strm->total_in_hi32++;
    }
  };
                 if (uc == 1)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK448_BEGIN: track(&&TRACK448_BEGIN, &&TRACK448_END);
  TRACK448_END:   __asm__ __volatile__ ("nop;");
  s->inUse[i * 16 + j] = ((Bool)1);
  }
}
}
}
      makeMaps_d ( s );
      if (s->nInUse == 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK452_BEGIN: track(&&TRACK452_BEGIN, &&TRACK452_END);
  TRACK452_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
      alphaSize = s->nInUse+2;
       
  case 30:
							   __asm__ __volatile__ ("nop;");
	TRACK453_BEGIN: track(&&TRACK453_BEGIN, &&TRACK453_END);
	TRACK453_END:   __asm__ __volatile__ ("nop;");
	s->state = 30; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK457_BEGIN: track(&&TRACK457_BEGIN, &&TRACK457_END);
  TRACK457_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 3) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK454_BEGIN: track(&&TRACK454_BEGIN, &&TRACK454_END);
    TRACK454_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-3)) & ((1 << 3)-1); s->bsLive -= 3; nGroups = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK455_BEGIN: track(&&TRACK455_BEGIN, &&TRACK455_END);
    TRACK455_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK456_BEGIN: track(&&TRACK456_BEGIN, &&TRACK456_END);
  TRACK456_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (nGroups < 2 || nGroups > 6) {
  						   __asm__ __volatile__ ("nop;");
  TRACK458_BEGIN: track(&&TRACK458_BEGIN, &&TRACK458_END);
  TRACK458_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 31:
							   __asm__ __volatile__ ("nop;");
	TRACK459_BEGIN: track(&&TRACK459_BEGIN, &&TRACK459_END);
	TRACK459_END:   __asm__ __volatile__ ("nop;");
	s->state = 31; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK463_BEGIN: track(&&TRACK463_BEGIN, &&TRACK463_END);
  TRACK463_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 15) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK460_BEGIN: track(&&TRACK460_BEGIN, &&TRACK460_END);
    TRACK460_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-15)) & ((1 << 15)-1); s->bsLive -= 15; nSelectors = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK461_BEGIN: track(&&TRACK461_BEGIN, &&TRACK461_END);
    TRACK461_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK462_BEGIN: track(&&TRACK462_BEGIN, &&TRACK462_END);
  TRACK462_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (nSelectors < 1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK464_BEGIN: track(&&TRACK464_BEGIN, &&TRACK464_END);
  TRACK464_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
      for (i = 0; i < nSelectors; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK473_BEGIN: track(&&TRACK473_BEGIN, &&TRACK473_END);
  TRACK473_END:   __asm__ __volatile__ ("nop;");
  j = 0;
           while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK472_BEGIN: track(&&TRACK472_BEGIN, &&TRACK472_END);
    TRACK472_END:   __asm__ __volatile__ ("nop;");
     
      case 32:
    							   __asm__ __volatile__ ("nop;");
    	TRACK465_BEGIN: track(&&TRACK465_BEGIN, &&TRACK465_END);
    	TRACK465_END:   __asm__ __volatile__ ("nop;");
    	s->state = 32; while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK469_BEGIN: track(&&TRACK469_BEGIN, &&TRACK469_END);
      TRACK469_END:   __asm__ __volatile__ ("nop;");
      if (s->bsLive >= 1) {
        UInt32 v;
        						   __asm__ __volatile__ ("nop;");
        TRACK466_BEGIN: track(&&TRACK466_BEGIN, &&TRACK466_END);
        TRACK466_END:   __asm__ __volatile__ ("nop;");
        v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
      } if (s->strm->avail_in == 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK467_BEGIN: track(&&TRACK467_BEGIN, &&TRACK467_END);
        TRACK467_END:   __asm__ __volatile__ ("nop;");
        retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK468_BEGIN: track(&&TRACK468_BEGIN, &&TRACK468_END);
      TRACK468_END:   __asm__ __volatile__ ("nop;");
      s->strm->total_in_hi32++;
      }
    };
                if (uc == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK470_BEGIN: track(&&TRACK470_BEGIN, &&TRACK470_END);
    TRACK470_END:   __asm__ __volatile__ ("nop;");
    break;
    }
                j++;
                if (j >= nGroups) {
      						   __asm__ __volatile__ ("nop;");
      TRACK471_BEGIN: track(&&TRACK471_BEGIN, &&TRACK471_END);
      TRACK471_END:   __asm__ __volatile__ ("nop;");
      retVal = (-4); goto save_state_and_return;
    };;
  }
           s->selectorMtf[i] = j;
}
      {
         UChar pos[6], tmp, v;
         for (v = 0; v < nGroups; v++)  {
						   __asm__ __volatile__ ("nop;");
TRACK474_BEGIN: track(&&TRACK474_BEGIN, &&TRACK474_END);
TRACK474_END:   __asm__ __volatile__ ("nop;");
pos[v] = v;
}
         for (i = 0; i < nSelectors; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK476_BEGIN: track(&&TRACK476_BEGIN, &&TRACK476_END);
  TRACK476_END:   __asm__ __volatile__ ("nop;");
  v = s->selectorMtf[i];
              tmp = pos[v];
              while (v > 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK475_BEGIN: track(&&TRACK475_BEGIN, &&TRACK475_END);
    TRACK475_END:   __asm__ __volatile__ ("nop;");
    pos[v] = pos[v-1]; v--;
  }
              pos[0] = tmp;
              s->selector[i] = tmp;
}
      }
      for (t = 0; t < nGroups; t++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK498_BEGIN: track(&&TRACK498_BEGIN, &&TRACK498_END);
  TRACK498_END:   __asm__ __volatile__ ("nop;");
   
    case 33:
  							   __asm__ __volatile__ ("nop;");
  	TRACK477_BEGIN: track(&&TRACK477_BEGIN, &&TRACK477_END);
  	TRACK477_END:   __asm__ __volatile__ ("nop;");
  	s->state = 33; while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK481_BEGIN: track(&&TRACK481_BEGIN, &&TRACK481_END);
    TRACK481_END:   __asm__ __volatile__ ("nop;");
    if (s->bsLive >= 5) {
      UInt32 v;
      						   __asm__ __volatile__ ("nop;");
      TRACK478_BEGIN: track(&&TRACK478_BEGIN, &&TRACK478_END);
      TRACK478_END:   __asm__ __volatile__ ("nop;");
      v = (s->bsBuff >> (s->bsLive-5)) & ((1 << 5)-1); s->bsLive -= 5; curr = v; break;
    } if (s->strm->avail_in == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK479_BEGIN: track(&&TRACK479_BEGIN, &&TRACK479_END);
      TRACK479_END:   __asm__ __volatile__ ("nop;");
      retVal = 0; goto save_state_and_return;
    };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK480_BEGIN: track(&&TRACK480_BEGIN, &&TRACK480_END);
    TRACK480_END:   __asm__ __volatile__ ("nop;");
    s->strm->total_in_hi32++;
    }
  };
           for (i = 0; i < alphaSize; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK497_BEGIN: track(&&TRACK497_BEGIN, &&TRACK497_END);
    TRACK497_END:   __asm__ __volatile__ ("nop;");
    while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK496_BEGIN: track(&&TRACK496_BEGIN, &&TRACK496_END);
      TRACK496_END:   __asm__ __volatile__ ("nop;");
      if (curr < 1 || curr > 20) {
        						   __asm__ __volatile__ ("nop;");
        TRACK482_BEGIN: track(&&TRACK482_BEGIN, &&TRACK482_END);
        TRACK482_END:   __asm__ __volatile__ ("nop;");
        retVal = (-4); goto save_state_and_return;
      };;
                      
        case 34:
      							   __asm__ __volatile__ ("nop;");
      	TRACK483_BEGIN: track(&&TRACK483_BEGIN, &&TRACK483_END);
      	TRACK483_END:   __asm__ __volatile__ ("nop;");
      	s->state = 34; while (((Bool)1)) {
        						   __asm__ __volatile__ ("nop;");
        TRACK487_BEGIN: track(&&TRACK487_BEGIN, &&TRACK487_END);
        TRACK487_END:   __asm__ __volatile__ ("nop;");
        if (s->bsLive >= 1) {
          UInt32 v;
          						   __asm__ __volatile__ ("nop;");
          TRACK484_BEGIN: track(&&TRACK484_BEGIN, &&TRACK484_END);
          TRACK484_END:   __asm__ __volatile__ ("nop;");
          v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
        } if (s->strm->avail_in == 0) {
          						   __asm__ __volatile__ ("nop;");
          TRACK485_BEGIN: track(&&TRACK485_BEGIN, &&TRACK485_END);
          TRACK485_END:   __asm__ __volatile__ ("nop;");
          retVal = 0; goto save_state_and_return;
        };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK486_BEGIN: track(&&TRACK486_BEGIN, &&TRACK486_END);
        TRACK486_END:   __asm__ __volatile__ ("nop;");
        s->strm->total_in_hi32++;
        }
      };
                     if (uc == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK488_BEGIN: track(&&TRACK488_BEGIN, &&TRACK488_END);
      TRACK488_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                      
        case 35:
      							   __asm__ __volatile__ ("nop;");
      	TRACK489_BEGIN: track(&&TRACK489_BEGIN, &&TRACK489_END);
      	TRACK489_END:   __asm__ __volatile__ ("nop;");
      	s->state = 35; while (((Bool)1)) {
        						   __asm__ __volatile__ ("nop;");
        TRACK493_BEGIN: track(&&TRACK493_BEGIN, &&TRACK493_END);
        TRACK493_END:   __asm__ __volatile__ ("nop;");
        if (s->bsLive >= 1) {
          UInt32 v;
          						   __asm__ __volatile__ ("nop;");
          TRACK490_BEGIN: track(&&TRACK490_BEGIN, &&TRACK490_END);
          TRACK490_END:   __asm__ __volatile__ ("nop;");
          v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
        } if (s->strm->avail_in == 0) {
          						   __asm__ __volatile__ ("nop;");
          TRACK491_BEGIN: track(&&TRACK491_BEGIN, &&TRACK491_END);
          TRACK491_END:   __asm__ __volatile__ ("nop;");
          retVal = 0; goto save_state_and_return;
        };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK492_BEGIN: track(&&TRACK492_BEGIN, &&TRACK492_END);
        TRACK492_END:   __asm__ __volatile__ ("nop;");
        s->strm->total_in_hi32++;
        }
      };
                     if (uc == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK494_BEGIN: track(&&TRACK494_BEGIN, &&TRACK494_END);
      TRACK494_END:   __asm__ __volatile__ ("nop;");
      curr++;
      } else  {
      						   __asm__ __volatile__ ("nop;");
      TRACK495_BEGIN: track(&&TRACK495_BEGIN, &&TRACK495_END);
      TRACK495_END:   __asm__ __volatile__ ("nop;");
      curr--;
      }
    }
                s->len[t][i] = curr;
  }
}
      for (t = 0; t < nGroups; t++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK502_BEGIN: track(&&TRACK502_BEGIN, &&TRACK502_END);
  TRACK502_END:   __asm__ __volatile__ ("nop;");
  minLen = 32;
           maxLen = 0;
           for (i = 0; i < alphaSize; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK501_BEGIN: track(&&TRACK501_BEGIN, &&TRACK501_END);
    TRACK501_END:   __asm__ __volatile__ ("nop;");
    if (s->len[t][i] > maxLen)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK499_BEGIN: track(&&TRACK499_BEGIN, &&TRACK499_END);
    TRACK499_END:   __asm__ __volatile__ ("nop;");
    maxLen = s->len[t][i];
    }
                if (s->len[t][i] < minLen)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK500_BEGIN: track(&&TRACK500_BEGIN, &&TRACK500_END);
    TRACK500_END:   __asm__ __volatile__ ("nop;");
    minLen = s->len[t][i];
    }
  }
           BZ2_hbCreateDecodeTables (
              &(s->limit[t][0]),
              &(s->base[t][0]),
              &(s->perm[t][0]),
              &(s->len[t][0]),
              minLen, maxLen, alphaSize
           );
           s->minLens[t] = minLen;
}
      EOB = s->nInUse+1;
      nblockMAX = 100000 * s->blockSize100k;
      groupNo = -1;
      groupPos = 0;
      for (i = 0; i <= 255; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK503_BEGIN: track(&&TRACK503_BEGIN, &&TRACK503_END);
TRACK503_END:   __asm__ __volatile__ ("nop;");
s->unzftab[i] = 0;
}
      {
         Int32 ii, jj, kk;
         kk = 4096 -1;
         for (ii = 256 / 16 - 1; ii >= 0; ii--) {
  						   __asm__ __volatile__ ("nop;");
  TRACK505_BEGIN: track(&&TRACK505_BEGIN, &&TRACK505_END);
  TRACK505_END:   __asm__ __volatile__ ("nop;");
  for (jj = 16 -1; jj >= 0; jj--) {
    						   __asm__ __volatile__ ("nop;");
    TRACK504_BEGIN: track(&&TRACK504_BEGIN, &&TRACK504_END);
    TRACK504_END:   __asm__ __volatile__ ("nop;");
    s->mtfa[kk] = (UChar)(ii * 16 + jj);
                   kk--;
  }
              s->mtfbase[ii] = kk + 1;
}
      }
      nblock = 0;
      { if (groupPos == 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK507_BEGIN: track(&&TRACK507_BEGIN, &&TRACK507_END);
  TRACK507_END:   __asm__ __volatile__ ("nop;");
  groupNo++; if (groupNo >= nSelectors) {
    						   __asm__ __volatile__ ("nop;");
    TRACK506_BEGIN: track(&&TRACK506_BEGIN, &&TRACK506_END);
    TRACK506_END:   __asm__ __volatile__ ("nop;");
    retVal = (-4); goto save_state_and_return;
  };; groupPos = 50; gSel = s->selector[groupNo]; gMinlen = s->minLens[gSel]; gLimit = &(s->limit[gSel][0]); gPerm = &(s->perm[gSel][0]); gBase = &(s->base[gSel][0]);
} groupPos--; zn = gMinlen;  
  case 36:
							   __asm__ __volatile__ ("nop;");
	TRACK508_BEGIN: track(&&TRACK508_BEGIN, &&TRACK508_END);
	TRACK508_END:   __asm__ __volatile__ ("nop;");
	s->state = 36; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK512_BEGIN: track(&&TRACK512_BEGIN, &&TRACK512_END);
  TRACK512_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= zn) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK509_BEGIN: track(&&TRACK509_BEGIN, &&TRACK509_END);
    TRACK509_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-zn)) & ((1 << zn)-1); s->bsLive -= zn; zvec = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK510_BEGIN: track(&&TRACK510_BEGIN, &&TRACK510_END);
    TRACK510_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK511_BEGIN: track(&&TRACK511_BEGIN, &&TRACK511_END);
  TRACK511_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
}; while (1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK520_BEGIN: track(&&TRACK520_BEGIN, &&TRACK520_END);
  TRACK520_END:   __asm__ __volatile__ ("nop;");
  if (zn > 20 ) {
    						   __asm__ __volatile__ ("nop;");
    TRACK513_BEGIN: track(&&TRACK513_BEGIN, &&TRACK513_END);
    TRACK513_END:   __asm__ __volatile__ ("nop;");
    retVal = (-4); goto save_state_and_return;
  };; if (zvec <= gLimit[zn])  {
  						   __asm__ __volatile__ ("nop;");
  TRACK514_BEGIN: track(&&TRACK514_BEGIN, &&TRACK514_END);
  TRACK514_END:   __asm__ __volatile__ ("nop;");
  break;
  } zn++;  
    case 37:
  							   __asm__ __volatile__ ("nop;");
  	TRACK515_BEGIN: track(&&TRACK515_BEGIN, &&TRACK515_END);
  	TRACK515_END:   __asm__ __volatile__ ("nop;");
  	s->state = 37; while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK519_BEGIN: track(&&TRACK519_BEGIN, &&TRACK519_END);
    TRACK519_END:   __asm__ __volatile__ ("nop;");
    if (s->bsLive >= 1) {
      UInt32 v;
      						   __asm__ __volatile__ ("nop;");
      TRACK516_BEGIN: track(&&TRACK516_BEGIN, &&TRACK516_END);
      TRACK516_END:   __asm__ __volatile__ ("nop;");
      v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; zj = v; break;
    } if (s->strm->avail_in == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK517_BEGIN: track(&&TRACK517_BEGIN, &&TRACK517_END);
      TRACK517_END:   __asm__ __volatile__ ("nop;");
      retVal = 0; goto save_state_and_return;
    };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK518_BEGIN: track(&&TRACK518_BEGIN, &&TRACK518_END);
    TRACK518_END:   __asm__ __volatile__ ("nop;");
    s->strm->total_in_hi32++;
    }
  }; zvec = (zvec << 1) | zj;
}; if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) {
  						   __asm__ __volatile__ ("nop;");
  TRACK521_BEGIN: track(&&TRACK521_BEGIN, &&TRACK521_END);
  TRACK521_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};; nextSym = gPerm[zvec - gBase[zn]]; };
      while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK579_BEGIN: track(&&TRACK579_BEGIN, &&TRACK579_END);
  TRACK579_END:   __asm__ __volatile__ ("nop;");
  if (nextSym == EOB)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK522_BEGIN: track(&&TRACK522_BEGIN, &&TRACK522_END);
  TRACK522_END:   __asm__ __volatile__ ("nop;");
  break;
  }
           if (nextSym == 0 || nextSym == 1) {
    						   __asm__ __volatile__ ("nop;");
    TRACK549_BEGIN: track(&&TRACK549_BEGIN, &&TRACK549_END);
    TRACK549_END:   __asm__ __volatile__ ("nop;");
    es = -1;
                N = 1;
                do {
      						   __asm__ __volatile__ ("nop;");
      TRACK542_BEGIN: track(&&TRACK542_BEGIN, &&TRACK542_END);
      TRACK542_END:   __asm__ __volatile__ ("nop;");
      if (nextSym == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK523_BEGIN: track(&&TRACK523_BEGIN, &&TRACK523_END);
      TRACK523_END:   __asm__ __volatile__ ("nop;");
      es = es + (0+1) * N;
      } else
                      {
      						   __asm__ __volatile__ ("nop;");
      TRACK525_BEGIN: track(&&TRACK525_BEGIN, &&TRACK525_END);
      TRACK525_END:   __asm__ __volatile__ ("nop;");
      if (nextSym == 1)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK524_BEGIN: track(&&TRACK524_BEGIN, &&TRACK524_END);
      TRACK524_END:   __asm__ __volatile__ ("nop;");
      es = es + (1+1) * N;
      }
      }
                     N = N * 2;
                     { if (groupPos == 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK527_BEGIN: track(&&TRACK527_BEGIN, &&TRACK527_END);
        TRACK527_END:   __asm__ __volatile__ ("nop;");
        groupNo++; if (groupNo >= nSelectors) {
          						   __asm__ __volatile__ ("nop;");
          TRACK526_BEGIN: track(&&TRACK526_BEGIN, &&TRACK526_END);
          TRACK526_END:   __asm__ __volatile__ ("nop;");
          retVal = (-4); goto save_state_and_return;
        };; groupPos = 50; gSel = s->selector[groupNo]; gMinlen = s->minLens[gSel]; gLimit = &(s->limit[gSel][0]); gPerm = &(s->perm[gSel][0]); gBase = &(s->base[gSel][0]);
      } groupPos--; zn = gMinlen;  
        case 38:
      							   __asm__ __volatile__ ("nop;");
      	TRACK528_BEGIN: track(&&TRACK528_BEGIN, &&TRACK528_END);
      	TRACK528_END:   __asm__ __volatile__ ("nop;");
      	s->state = 38; while (((Bool)1)) {
        						   __asm__ __volatile__ ("nop;");
        TRACK532_BEGIN: track(&&TRACK532_BEGIN, &&TRACK532_END);
        TRACK532_END:   __asm__ __volatile__ ("nop;");
        if (s->bsLive >= zn) {
          UInt32 v;
          						   __asm__ __volatile__ ("nop;");
          TRACK529_BEGIN: track(&&TRACK529_BEGIN, &&TRACK529_END);
          TRACK529_END:   __asm__ __volatile__ ("nop;");
          v = (s->bsBuff >> (s->bsLive-zn)) & ((1 << zn)-1); s->bsLive -= zn; zvec = v; break;
        } if (s->strm->avail_in == 0) {
          						   __asm__ __volatile__ ("nop;");
          TRACK530_BEGIN: track(&&TRACK530_BEGIN, &&TRACK530_END);
          TRACK530_END:   __asm__ __volatile__ ("nop;");
          retVal = 0; goto save_state_and_return;
        };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK531_BEGIN: track(&&TRACK531_BEGIN, &&TRACK531_END);
        TRACK531_END:   __asm__ __volatile__ ("nop;");
        s->strm->total_in_hi32++;
        }
      }; while (1) {
        						   __asm__ __volatile__ ("nop;");
        TRACK540_BEGIN: track(&&TRACK540_BEGIN, &&TRACK540_END);
        TRACK540_END:   __asm__ __volatile__ ("nop;");
        if (zn > 20 ) {
          						   __asm__ __volatile__ ("nop;");
          TRACK533_BEGIN: track(&&TRACK533_BEGIN, &&TRACK533_END);
          TRACK533_END:   __asm__ __volatile__ ("nop;");
          retVal = (-4); goto save_state_and_return;
        };; if (zvec <= gLimit[zn])  {
        						   __asm__ __volatile__ ("nop;");
        TRACK534_BEGIN: track(&&TRACK534_BEGIN, &&TRACK534_END);
        TRACK534_END:   __asm__ __volatile__ ("nop;");
        break;
        } zn++;  
          case 39:
        							   __asm__ __volatile__ ("nop;");
        	TRACK535_BEGIN: track(&&TRACK535_BEGIN, &&TRACK535_END);
        	TRACK535_END:   __asm__ __volatile__ ("nop;");
        	s->state = 39; while (((Bool)1)) {
          						   __asm__ __volatile__ ("nop;");
          TRACK539_BEGIN: track(&&TRACK539_BEGIN, &&TRACK539_END);
          TRACK539_END:   __asm__ __volatile__ ("nop;");
          if (s->bsLive >= 1) {
            UInt32 v;
            						   __asm__ __volatile__ ("nop;");
            TRACK536_BEGIN: track(&&TRACK536_BEGIN, &&TRACK536_END);
            TRACK536_END:   __asm__ __volatile__ ("nop;");
            v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; zj = v; break;
          } if (s->strm->avail_in == 0) {
            						   __asm__ __volatile__ ("nop;");
            TRACK537_BEGIN: track(&&TRACK537_BEGIN, &&TRACK537_END);
            TRACK537_END:   __asm__ __volatile__ ("nop;");
            retVal = 0; goto save_state_and_return;
          };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
          						   __asm__ __volatile__ ("nop;");
          TRACK538_BEGIN: track(&&TRACK538_BEGIN, &&TRACK538_END);
          TRACK538_END:   __asm__ __volatile__ ("nop;");
          s->strm->total_in_hi32++;
          }
        }; zvec = (zvec << 1) | zj;
      }; if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) {
        						   __asm__ __volatile__ ("nop;");
        TRACK541_BEGIN: track(&&TRACK541_BEGIN, &&TRACK541_END);
        TRACK541_END:   __asm__ __volatile__ ("nop;");
        retVal = (-4); goto save_state_and_return;
      };; nextSym = gPerm[zvec - gBase[zn]]; };
    }
                   while (nextSym == 0 || nextSym == 1);
                es++;
                uc = s->seqToUnseq[ s->mtfa[s->mtfbase[0]] ];
                s->unzftab[uc] += es;
                if (s->smallDecompress)
                    {
    						   __asm__ __volatile__ ("nop;");
    TRACK545_BEGIN: track(&&TRACK545_BEGIN, &&TRACK545_END);
    TRACK545_END:   __asm__ __volatile__ ("nop;");
    while (es > 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK544_BEGIN: track(&&TRACK544_BEGIN, &&TRACK544_END);
      TRACK544_END:   __asm__ __volatile__ ("nop;");
      if (nblock >= nblockMAX) {
        						   __asm__ __volatile__ ("nop;");
        TRACK543_BEGIN: track(&&TRACK543_BEGIN, &&TRACK543_END);
        TRACK543_END:   __asm__ __volatile__ ("nop;");
        retVal = (-4); goto save_state_and_return;
      };;
                        s->ll16[nblock] = (UInt16)uc;
                        nblock++;
                        es--;
    }
    }
                else
                    {
    						   __asm__ __volatile__ ("nop;");
    TRACK548_BEGIN: track(&&TRACK548_BEGIN, &&TRACK548_END);
    TRACK548_END:   __asm__ __volatile__ ("nop;");
    while (es > 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK547_BEGIN: track(&&TRACK547_BEGIN, &&TRACK547_END);
      TRACK547_END:   __asm__ __volatile__ ("nop;");
      if (nblock >= nblockMAX) {
        						   __asm__ __volatile__ ("nop;");
        TRACK546_BEGIN: track(&&TRACK546_BEGIN, &&TRACK546_END);
        TRACK546_END:   __asm__ __volatile__ ("nop;");
        retVal = (-4); goto save_state_and_return;
      };;
                        s->tt[nblock] = (UInt32)uc;
                        nblock++;
                        es--;
    }
    };
                continue;
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK578_BEGIN: track(&&TRACK578_BEGIN, &&TRACK578_END);
    TRACK578_END:   __asm__ __volatile__ ("nop;");
    if (nblock >= nblockMAX) {
      						   __asm__ __volatile__ ("nop;");
      TRACK550_BEGIN: track(&&TRACK550_BEGIN, &&TRACK550_END);
      TRACK550_END:   __asm__ __volatile__ ("nop;");
      retVal = (-4); goto save_state_and_return;
    };;
                {
                   Int32 ii, jj, kk, pp, lno, off;
                   UInt32 nn;
                   nn = (UInt32)(nextSym - 1);
                   if (nn < 16) {
      						   __asm__ __volatile__ ("nop;");
      TRACK553_BEGIN: track(&&TRACK553_BEGIN, &&TRACK553_END);
      TRACK553_END:   __asm__ __volatile__ ("nop;");
      pp = s->mtfbase[0];
                        uc = s->mtfa[pp+nn];
                        while (nn > 3) {
        Int32 z = pp+nn;
        						   __asm__ __volatile__ ("nop;");
        TRACK551_BEGIN: track(&&TRACK551_BEGIN, &&TRACK551_END);
        TRACK551_END:   __asm__ __volatile__ ("nop;");
        s->mtfa[(z) ] = s->mtfa[(z)-1];
                             s->mtfa[(z)-1] = s->mtfa[(z)-2];
                             s->mtfa[(z)-2] = s->mtfa[(z)-3];
                             s->mtfa[(z)-3] = s->mtfa[(z)-4];
                             nn -= 4;
      }
                        while (nn > 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK552_BEGIN: track(&&TRACK552_BEGIN, &&TRACK552_END);
        TRACK552_END:   __asm__ __volatile__ ("nop;");
        s->mtfa[(pp+nn)] = s->mtfa[(pp+nn)-1]; nn--;
      };
                        s->mtfa[pp] = uc;
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK559_BEGIN: track(&&TRACK559_BEGIN, &&TRACK559_END);
      TRACK559_END:   __asm__ __volatile__ ("nop;");
      lno = nn / 16;
                        off = nn % 16;
                        pp = s->mtfbase[lno] + off;
                        uc = s->mtfa[pp];
                        while (pp > s->mtfbase[lno]) {
        						   __asm__ __volatile__ ("nop;");
        TRACK554_BEGIN: track(&&TRACK554_BEGIN, &&TRACK554_END);
        TRACK554_END:   __asm__ __volatile__ ("nop;");
        s->mtfa[pp] = s->mtfa[pp-1]; pp--;
      };
                        s->mtfbase[lno]++;
                        while (lno > 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK555_BEGIN: track(&&TRACK555_BEGIN, &&TRACK555_END);
        TRACK555_END:   __asm__ __volatile__ ("nop;");
        s->mtfbase[lno]--;
                             s->mtfa[s->mtfbase[lno]]
                                = s->mtfa[s->mtfbase[lno-1] + 16 - 1];
                             lno--;
      }
                        s->mtfbase[0]--;
                        s->mtfa[s->mtfbase[0]] = uc;
                        if (s->mtfbase[0] == 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK558_BEGIN: track(&&TRACK558_BEGIN, &&TRACK558_END);
        TRACK558_END:   __asm__ __volatile__ ("nop;");
        kk = 4096 -1;
                             for (ii = 256 / 16 -1; ii >= 0; ii--) {
          						   __asm__ __volatile__ ("nop;");
          TRACK557_BEGIN: track(&&TRACK557_BEGIN, &&TRACK557_END);
          TRACK557_END:   __asm__ __volatile__ ("nop;");
          for (jj = 16 -1; jj >= 0; jj--) {
            						   __asm__ __volatile__ ("nop;");
            TRACK556_BEGIN: track(&&TRACK556_BEGIN, &&TRACK556_END);
            TRACK556_END:   __asm__ __volatile__ ("nop;");
            s->mtfa[kk] = s->mtfa[s->mtfbase[ii] + jj];
                                       kk--;
          }
                                  s->mtfbase[ii] = kk + 1;
        }
      }
    }
                }
                s->unzftab[s->seqToUnseq[uc]]++;
                if (s->smallDecompress)
                    {
    						   __asm__ __volatile__ ("nop;");
    TRACK560_BEGIN: track(&&TRACK560_BEGIN, &&TRACK560_END);
    TRACK560_END:   __asm__ __volatile__ ("nop;");
    s->ll16[nblock] = (UInt16)(s->seqToUnseq[uc]);
    } else
                    {
    						   __asm__ __volatile__ ("nop;");
    TRACK561_BEGIN: track(&&TRACK561_BEGIN, &&TRACK561_END);
    TRACK561_END:   __asm__ __volatile__ ("nop;");
    s->tt[nblock] = (UInt32)(s->seqToUnseq[uc]);
    }
                nblock++;
                { if (groupPos == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK563_BEGIN: track(&&TRACK563_BEGIN, &&TRACK563_END);
      TRACK563_END:   __asm__ __volatile__ ("nop;");
      groupNo++; if (groupNo >= nSelectors) {
        						   __asm__ __volatile__ ("nop;");
        TRACK562_BEGIN: track(&&TRACK562_BEGIN, &&TRACK562_END);
        TRACK562_END:   __asm__ __volatile__ ("nop;");
        retVal = (-4); goto save_state_and_return;
      };; groupPos = 50; gSel = s->selector[groupNo]; gMinlen = s->minLens[gSel]; gLimit = &(s->limit[gSel][0]); gPerm = &(s->perm[gSel][0]); gBase = &(s->base[gSel][0]);
    } groupPos--; zn = gMinlen;  
      case 40:
    							   __asm__ __volatile__ ("nop;");
    	TRACK564_BEGIN: track(&&TRACK564_BEGIN, &&TRACK564_END);
    	TRACK564_END:   __asm__ __volatile__ ("nop;");
    	s->state = 40; while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK568_BEGIN: track(&&TRACK568_BEGIN, &&TRACK568_END);
      TRACK568_END:   __asm__ __volatile__ ("nop;");
      if (s->bsLive >= zn) {
        UInt32 v;
        						   __asm__ __volatile__ ("nop;");
        TRACK565_BEGIN: track(&&TRACK565_BEGIN, &&TRACK565_END);
        TRACK565_END:   __asm__ __volatile__ ("nop;");
        v = (s->bsBuff >> (s->bsLive-zn)) & ((1 << zn)-1); s->bsLive -= zn; zvec = v; break;
      } if (s->strm->avail_in == 0) {
        						   __asm__ __volatile__ ("nop;");
        TRACK566_BEGIN: track(&&TRACK566_BEGIN, &&TRACK566_END);
        TRACK566_END:   __asm__ __volatile__ ("nop;");
        retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK567_BEGIN: track(&&TRACK567_BEGIN, &&TRACK567_END);
      TRACK567_END:   __asm__ __volatile__ ("nop;");
      s->strm->total_in_hi32++;
      }
    }; while (1) {
      						   __asm__ __volatile__ ("nop;");
      TRACK576_BEGIN: track(&&TRACK576_BEGIN, &&TRACK576_END);
      TRACK576_END:   __asm__ __volatile__ ("nop;");
      if (zn > 20 ) {
        						   __asm__ __volatile__ ("nop;");
        TRACK569_BEGIN: track(&&TRACK569_BEGIN, &&TRACK569_END);
        TRACK569_END:   __asm__ __volatile__ ("nop;");
        retVal = (-4); goto save_state_and_return;
      };; if (zvec <= gLimit[zn])  {
      						   __asm__ __volatile__ ("nop;");
      TRACK570_BEGIN: track(&&TRACK570_BEGIN, &&TRACK570_END);
      TRACK570_END:   __asm__ __volatile__ ("nop;");
      break;
      } zn++;  
        case 41:
      							   __asm__ __volatile__ ("nop;");
      	TRACK571_BEGIN: track(&&TRACK571_BEGIN, &&TRACK571_END);
      	TRACK571_END:   __asm__ __volatile__ ("nop;");
      	s->state = 41; while (((Bool)1)) {
        						   __asm__ __volatile__ ("nop;");
        TRACK575_BEGIN: track(&&TRACK575_BEGIN, &&TRACK575_END);
        TRACK575_END:   __asm__ __volatile__ ("nop;");
        if (s->bsLive >= 1) {
          UInt32 v;
          						   __asm__ __volatile__ ("nop;");
          TRACK572_BEGIN: track(&&TRACK572_BEGIN, &&TRACK572_END);
          TRACK572_END:   __asm__ __volatile__ ("nop;");
          v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; zj = v; break;
        } if (s->strm->avail_in == 0) {
          						   __asm__ __volatile__ ("nop;");
          TRACK573_BEGIN: track(&&TRACK573_BEGIN, &&TRACK573_END);
          TRACK573_END:   __asm__ __volatile__ ("nop;");
          retVal = 0; goto save_state_and_return;
        };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK574_BEGIN: track(&&TRACK574_BEGIN, &&TRACK574_END);
        TRACK574_END:   __asm__ __volatile__ ("nop;");
        s->strm->total_in_hi32++;
        }
      }; zvec = (zvec << 1) | zj;
    }; if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) {
      						   __asm__ __volatile__ ("nop;");
      TRACK577_BEGIN: track(&&TRACK577_BEGIN, &&TRACK577_END);
      TRACK577_END:   __asm__ __volatile__ ("nop;");
      retVal = (-4); goto save_state_and_return;
    };; nextSym = gPerm[zvec - gBase[zn]]; };
                continue;
  }
}
      if (s->origPtr < 0 || s->origPtr >= nblock)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK580_BEGIN: track(&&TRACK580_BEGIN, &&TRACK580_END);
  TRACK580_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
      s->state_out_len = 0;
      s->state_out_ch = 0;
      { s->calculatedBlockCRC = 0xffffffffL; };
      s->state = 2;
      if (s->verbosity >= 2)  {
						   __asm__ __volatile__ ("nop;");
TRACK581_BEGIN: track(&&TRACK581_BEGIN, &&TRACK581_END);
TRACK581_END:   __asm__ __volatile__ ("nop;");
fprintf(stderr,"rt+rld");
}
      s->cftab[0] = 0;
      for (i = 1; i <= 256; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK582_BEGIN: track(&&TRACK582_BEGIN, &&TRACK582_END);
TRACK582_END:   __asm__ __volatile__ ("nop;");
s->cftab[i] = s->unzftab[i-1];
}
      for (i = 1; i <= 256; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK583_BEGIN: track(&&TRACK583_BEGIN, &&TRACK583_END);
TRACK583_END:   __asm__ __volatile__ ("nop;");
s->cftab[i] += s->cftab[i-1];
}
      if (s->smallDecompress) {
  						   __asm__ __volatile__ ("nop;");
  TRACK595_BEGIN: track(&&TRACK595_BEGIN, &&TRACK595_END);
  TRACK595_END:   __asm__ __volatile__ ("nop;");
  for (i = 0; i <= 256; i++)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK584_BEGIN: track(&&TRACK584_BEGIN, &&TRACK584_END);
  TRACK584_END:   __asm__ __volatile__ ("nop;");
  s->cftabCopy[i] = s->cftab[i];
  }
           for (i = 0; i < nblock; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK587_BEGIN: track(&&TRACK587_BEGIN, &&TRACK587_END);
    TRACK587_END:   __asm__ __volatile__ ("nop;");
    uc = (UChar)(s->ll16[i]);
                { s->ll16[i] = (UInt16)(s->cftabCopy[uc] & 0x0000ffff); { if (((i) & 0x1) == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK585_BEGIN: track(&&TRACK585_BEGIN, &&TRACK585_END);
    TRACK585_END:   __asm__ __volatile__ ("nop;");
    s->ll4[(i) >> 1] = (s->ll4[(i) >> 1] & 0xf0) | (s->cftabCopy[uc] >> 16);
    } else  {
    						   __asm__ __volatile__ ("nop;");
    TRACK586_BEGIN: track(&&TRACK586_BEGIN, &&TRACK586_END);
    TRACK586_END:   __asm__ __volatile__ ("nop;");
    s->ll4[(i) >> 1] = (s->ll4[(i) >> 1] & 0x0f) | ((s->cftabCopy[uc] >> 16) << 4);
    } }; };
                s->cftabCopy[uc]++;
  }
           i = s->origPtr;
           j = (((UInt32)s->ll16[i]) | (((((UInt32)(s->ll4[(i) >> 1])) >> (((i) << 2) & 0x4)) & 0xF) << 16));
           do {
    Int32 tmp = (((UInt32)s->ll16[j]) | (((((UInt32)(s->ll4[(j) >> 1])) >> (((j) << 2) & 0x4)) & 0xF) << 16));
    						   __asm__ __volatile__ ("nop;");
    TRACK590_BEGIN: track(&&TRACK590_BEGIN, &&TRACK590_END);
    TRACK590_END:   __asm__ __volatile__ ("nop;");
    { s->ll16[j] = (UInt16)(i & 0x0000ffff); { if (((j) & 0x1) == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK588_BEGIN: track(&&TRACK588_BEGIN, &&TRACK588_END);
    TRACK588_END:   __asm__ __volatile__ ("nop;");
    s->ll4[(j) >> 1] = (s->ll4[(j) >> 1] & 0xf0) | (i >> 16);
    } else  {
    						   __asm__ __volatile__ ("nop;");
    TRACK589_BEGIN: track(&&TRACK589_BEGIN, &&TRACK589_END);
    TRACK589_END:   __asm__ __volatile__ ("nop;");
    s->ll4[(j) >> 1] = (s->ll4[(j) >> 1] & 0x0f) | ((i >> 16) << 4);
    } }; };
                i = j;
                j = tmp;
  }
              while (i != s->origPtr);
           s->tPos = s->origPtr;
           s->nblock_used = 0;
           if (s->blockRandomised) {
    						   __asm__ __volatile__ ("nop;");
    TRACK593_BEGIN: track(&&TRACK593_BEGIN, &&TRACK593_END);
    TRACK593_END:   __asm__ __volatile__ ("nop;");
    s->rNToGo = 0; s->rTPos = 0;
                s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
                if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK592_BEGIN: track(&&TRACK592_BEGIN, &&TRACK592_END);
      TRACK592_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK591_BEGIN: track(&&TRACK591_BEGIN, &&TRACK591_END);
      TRACK591_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;; s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK594_BEGIN: track(&&TRACK594_BEGIN, &&TRACK594_END);
    TRACK594_END:   __asm__ __volatile__ ("nop;");
    s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
  }
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK601_BEGIN: track(&&TRACK601_BEGIN, &&TRACK601_END);
  TRACK601_END:   __asm__ __volatile__ ("nop;");
  for (i = 0; i < nblock; i++) {
    						   __asm__ __volatile__ ("nop;");
    TRACK596_BEGIN: track(&&TRACK596_BEGIN, &&TRACK596_END);
    TRACK596_END:   __asm__ __volatile__ ("nop;");
    uc = (UChar)(s->tt[i] & 0xff);
                s->tt[s->cftab[uc]] |= (i << 8);
                s->cftab[uc]++;
  }
           s->tPos = s->tt[s->origPtr] >> 8;
           s->nblock_used = 0;
           if (s->blockRandomised) {
    						   __asm__ __volatile__ ("nop;");
    TRACK599_BEGIN: track(&&TRACK599_BEGIN, &&TRACK599_END);
    TRACK599_END:   __asm__ __volatile__ ("nop;");
    s->rNToGo = 0; s->rTPos = 0;
                s->tPos = s->tt[s->tPos]; s->k0 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; s->nblock_used++;
                if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK598_BEGIN: track(&&TRACK598_BEGIN, &&TRACK598_END);
      TRACK598_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK597_BEGIN: track(&&TRACK597_BEGIN, &&TRACK597_END);
      TRACK597_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;; s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK600_BEGIN: track(&&TRACK600_BEGIN, &&TRACK600_END);
    TRACK600_END:   __asm__ __volatile__ ("nop;");
    s->tPos = s->tt[s->tPos]; s->k0 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; s->nblock_used++;
  }
}
      { retVal = 0; goto save_state_and_return; };;
    endhdr_2:
       
  case 42:
							   __asm__ __volatile__ ("nop;");
	TRACK602_BEGIN: track(&&TRACK602_BEGIN, &&TRACK602_END);
	TRACK602_END:   __asm__ __volatile__ ("nop;");
	s->state = 42; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK606_BEGIN: track(&&TRACK606_BEGIN, &&TRACK606_END);
  TRACK606_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK603_BEGIN: track(&&TRACK603_BEGIN, &&TRACK603_END);
    TRACK603_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK604_BEGIN: track(&&TRACK604_BEGIN, &&TRACK604_END);
    TRACK604_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK605_BEGIN: track(&&TRACK605_BEGIN, &&TRACK605_END);
  TRACK605_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x72) {
  						   __asm__ __volatile__ ("nop;");
  TRACK607_BEGIN: track(&&TRACK607_BEGIN, &&TRACK607_END);
  TRACK607_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 43:
							   __asm__ __volatile__ ("nop;");
	TRACK608_BEGIN: track(&&TRACK608_BEGIN, &&TRACK608_END);
	TRACK608_END:   __asm__ __volatile__ ("nop;");
	s->state = 43; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK612_BEGIN: track(&&TRACK612_BEGIN, &&TRACK612_END);
  TRACK612_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK609_BEGIN: track(&&TRACK609_BEGIN, &&TRACK609_END);
    TRACK609_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK610_BEGIN: track(&&TRACK610_BEGIN, &&TRACK610_END);
    TRACK610_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK611_BEGIN: track(&&TRACK611_BEGIN, &&TRACK611_END);
  TRACK611_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x45) {
  						   __asm__ __volatile__ ("nop;");
  TRACK613_BEGIN: track(&&TRACK613_BEGIN, &&TRACK613_END);
  TRACK613_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 44:
							   __asm__ __volatile__ ("nop;");
	TRACK614_BEGIN: track(&&TRACK614_BEGIN, &&TRACK614_END);
	TRACK614_END:   __asm__ __volatile__ ("nop;");
	s->state = 44; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK618_BEGIN: track(&&TRACK618_BEGIN, &&TRACK618_END);
  TRACK618_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK615_BEGIN: track(&&TRACK615_BEGIN, &&TRACK615_END);
    TRACK615_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK616_BEGIN: track(&&TRACK616_BEGIN, &&TRACK616_END);
    TRACK616_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK617_BEGIN: track(&&TRACK617_BEGIN, &&TRACK617_END);
  TRACK617_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x38) {
  						   __asm__ __volatile__ ("nop;");
  TRACK619_BEGIN: track(&&TRACK619_BEGIN, &&TRACK619_END);
  TRACK619_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 45:
							   __asm__ __volatile__ ("nop;");
	TRACK620_BEGIN: track(&&TRACK620_BEGIN, &&TRACK620_END);
	TRACK620_END:   __asm__ __volatile__ ("nop;");
	s->state = 45; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK624_BEGIN: track(&&TRACK624_BEGIN, &&TRACK624_END);
  TRACK624_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK621_BEGIN: track(&&TRACK621_BEGIN, &&TRACK621_END);
    TRACK621_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK622_BEGIN: track(&&TRACK622_BEGIN, &&TRACK622_END);
    TRACK622_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK623_BEGIN: track(&&TRACK623_BEGIN, &&TRACK623_END);
  TRACK623_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x50) {
  						   __asm__ __volatile__ ("nop;");
  TRACK625_BEGIN: track(&&TRACK625_BEGIN, &&TRACK625_END);
  TRACK625_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
       
  case 46:
							   __asm__ __volatile__ ("nop;");
	TRACK626_BEGIN: track(&&TRACK626_BEGIN, &&TRACK626_END);
	TRACK626_END:   __asm__ __volatile__ ("nop;");
	s->state = 46; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK630_BEGIN: track(&&TRACK630_BEGIN, &&TRACK630_END);
  TRACK630_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK627_BEGIN: track(&&TRACK627_BEGIN, &&TRACK627_END);
    TRACK627_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK628_BEGIN: track(&&TRACK628_BEGIN, &&TRACK628_END);
    TRACK628_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK629_BEGIN: track(&&TRACK629_BEGIN, &&TRACK629_END);
  TRACK629_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      if (uc != 0x90) {
  						   __asm__ __volatile__ ("nop;");
  TRACK631_BEGIN: track(&&TRACK631_BEGIN, &&TRACK631_END);
  TRACK631_END:   __asm__ __volatile__ ("nop;");
  retVal = (-4); goto save_state_and_return;
};;
      s->storedCombinedCRC = 0;
       
  case 47:
							   __asm__ __volatile__ ("nop;");
	TRACK632_BEGIN: track(&&TRACK632_BEGIN, &&TRACK632_END);
	TRACK632_END:   __asm__ __volatile__ ("nop;");
	s->state = 47; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK636_BEGIN: track(&&TRACK636_BEGIN, &&TRACK636_END);
  TRACK636_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK633_BEGIN: track(&&TRACK633_BEGIN, &&TRACK633_END);
    TRACK633_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK634_BEGIN: track(&&TRACK634_BEGIN, &&TRACK634_END);
    TRACK634_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK635_BEGIN: track(&&TRACK635_BEGIN, &&TRACK635_END);
  TRACK635_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
       
  case 48:
							   __asm__ __volatile__ ("nop;");
	TRACK637_BEGIN: track(&&TRACK637_BEGIN, &&TRACK637_END);
	TRACK637_END:   __asm__ __volatile__ ("nop;");
	s->state = 48; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK641_BEGIN: track(&&TRACK641_BEGIN, &&TRACK641_END);
  TRACK641_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK638_BEGIN: track(&&TRACK638_BEGIN, &&TRACK638_END);
    TRACK638_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK639_BEGIN: track(&&TRACK639_BEGIN, &&TRACK639_END);
    TRACK639_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK640_BEGIN: track(&&TRACK640_BEGIN, &&TRACK640_END);
  TRACK640_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
       
  case 49:
							   __asm__ __volatile__ ("nop;");
	TRACK642_BEGIN: track(&&TRACK642_BEGIN, &&TRACK642_END);
	TRACK642_END:   __asm__ __volatile__ ("nop;");
	s->state = 49; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK646_BEGIN: track(&&TRACK646_BEGIN, &&TRACK646_END);
  TRACK646_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK643_BEGIN: track(&&TRACK643_BEGIN, &&TRACK643_END);
    TRACK643_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK644_BEGIN: track(&&TRACK644_BEGIN, &&TRACK644_END);
    TRACK644_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK645_BEGIN: track(&&TRACK645_BEGIN, &&TRACK645_END);
  TRACK645_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
       
  case 50:
							   __asm__ __volatile__ ("nop;");
	TRACK647_BEGIN: track(&&TRACK647_BEGIN, &&TRACK647_END);
	TRACK647_END:   __asm__ __volatile__ ("nop;");
	s->state = 50; while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK651_BEGIN: track(&&TRACK651_BEGIN, &&TRACK651_END);
  TRACK651_END:   __asm__ __volatile__ ("nop;");
  if (s->bsLive >= 8) {
    UInt32 v;
    						   __asm__ __volatile__ ("nop;");
    TRACK648_BEGIN: track(&&TRACK648_BEGIN, &&TRACK648_END);
    TRACK648_END:   __asm__ __volatile__ ("nop;");
    v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
  } if (s->strm->avail_in == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK649_BEGIN: track(&&TRACK649_BEGIN, &&TRACK649_END);
    TRACK649_END:   __asm__ __volatile__ ("nop;");
    retVal = 0; goto save_state_and_return;
  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK650_BEGIN: track(&&TRACK650_BEGIN, &&TRACK650_END);
  TRACK650_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_in_hi32++;
  }
};
      s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
      s->state = 1;
      { retVal = 4; goto save_state_and_return; };;
       
  default:
							   __asm__ __volatile__ ("nop;");
	TRACK653_BEGIN: track(&&TRACK653_BEGIN, &&TRACK653_END);
	TRACK653_END:   __asm__ __volatile__ ("nop;");
	{ if (!(((Bool)0)))  {
							   __asm__ __volatile__ ("nop;");
	TRACK652_BEGIN: track(&&TRACK652_BEGIN, &&TRACK652_END);
	TRACK652_END:   __asm__ __volatile__ ("nop;");
	BZ2_bz__AssertH__fail ( 4001 );
	} };
   }
   { if (!(((Bool)0)))  {
						   __asm__ __volatile__ ("nop;");
TRACK654_BEGIN: track(&&TRACK654_BEGIN, &&TRACK654_END);
TRACK654_END:   __asm__ __volatile__ ("nop;");
BZ2_bz__AssertH__fail ( 4002 );
} };
   save_state_and_return:
   s->save_i = i;
   s->save_j = j;
   s->save_t = t;
   s->save_alphaSize = alphaSize;
   s->save_nGroups = nGroups;
   s->save_nSelectors = nSelectors;
   s->save_EOB = EOB;
   s->save_groupNo = groupNo;
   s->save_groupPos = groupPos;
   s->save_nextSym = nextSym;
   s->save_nblockMAX = nblockMAX;
   s->save_nblock = nblock;
   s->save_es = es;
   s->save_N = N;
   s->save_curr = curr;
   s->save_zt = zt;
   s->save_zn = zn;
   s->save_zvec = zvec;
   s->save_zj = zj;
   s->save_gSel = gSel;
   s->save_gMinlen = gMinlen;
   s->save_gLimit = gLimit;
   s->save_gBase = gBase;
   s->save_gPerm = gPerm;
   return retVal;
}
void BZ2_bz__AssertH__fail ( int errcode )
{
   fprintf(stderr,
      "\n\nbzip2/libbzip2: internal error number %d.\n"
      "This is a bug in bzip2/libbzip2, %s.\n"
      "Please report it to me at: jseward@acm.org.  If this happened\n"
      "when you were using some program which uses libbzip2 as a\n"
      "component, you should also report this bug to the author(s)\n"
      "of that program.  Please make an effort to report this bug;\n"
      "timely and accurate bug reports eventually lead to higher\n"
      "quality software.  Thanks.  Julian Seward, 30 December 2001.\n\n",
      errcode,
      BZ2_bzlibVersion()
   );
   if (errcode == 1007) {
  						   __asm__ __volatile__ ("nop;");
  TRACK655_BEGIN: track(&&TRACK655_BEGIN, &&TRACK655_END);
  TRACK655_END:   __asm__ __volatile__ ("nop;");
  fprintf(stderr,
        "\n*** A special note about internal error number 1007 ***\n"
        "\n"
        "Experience suggests that a common cause of i.e. 1007\n"
        "is unreliable memory or other hardware.  The 1007 assertion\n"
        "just happens to cross-check the results of huge numbers of\n"
        "memory reads/writes, and so acts (unintendedly) as a stress\n"
        "test of your memory system.\n"
        "\n"
        "I suggest the following: try compressing the file again,\n"
        "possibly monitoring progress in detail with the -vv flag.\n"
        "\n"
        "* If the error cannot be reproduced, and/or happens at different\n"
        "  points in compression, you may have a flaky memory system.\n"
        "  Try a memory-test program.  I have used Memtest86\n"
        "  (www.memtest86.com).  At the time of writing it is free (GPLd).\n"
        "  Memtest86 tests memory much more thorougly than your BIOSs\n"
        "  power-on test, and may find failures that the BIOS doesn't.\n"
        "\n"
        "* If the error can be repeatably reproduced, this is a bug in\n"
        "  bzip2, and I would very much like to hear about it.  Please\n"
        "  let me know, and, ideally, save a copy of the file causing the\n"
        "  problem -- without which I will be unable to investigate it.\n"
        "\n"
     );
}
   exit(3);
}
static
int bz_config_ok ( void )
{
   if (sizeof(int) != 4)  {
						   __asm__ __volatile__ ("nop;");
TRACK656_BEGIN: track(&&TRACK656_BEGIN, &&TRACK656_END);
TRACK656_END:   __asm__ __volatile__ ("nop;");
return 0;
}
   if (sizeof(short) != 2)  {
						   __asm__ __volatile__ ("nop;");
TRACK657_BEGIN: track(&&TRACK657_BEGIN, &&TRACK657_END);
TRACK657_END:   __asm__ __volatile__ ("nop;");
return 0;
}
   if (sizeof(char) != 1)  {
						   __asm__ __volatile__ ("nop;");
TRACK658_BEGIN: track(&&TRACK658_BEGIN, &&TRACK658_END);
TRACK658_END:   __asm__ __volatile__ ("nop;");
return 0;
}
   return 1;
}
static
void* default_bzalloc ( void* opaque, Int32 items, Int32 size )
{
   void* v = malloc ( items * size );
   return v;
}
static
void default_bzfree ( void* opaque, void* addr )
{
   if (addr != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK659_BEGIN: track(&&TRACK659_BEGIN, &&TRACK659_END);
TRACK659_END:   __asm__ __volatile__ ("nop;");
free ( addr );
}
}
static
void prepare_new_block ( EState* s )
{
   Int32 i;
   s->nblock = 0;
   s->numZ = 0;
   s->state_out_pos = 0;
   { s->blockCRC = 0xffffffffL; };
   for (i = 0; i < 256; i++)  {
						   __asm__ __volatile__ ("nop;");
TRACK660_BEGIN: track(&&TRACK660_BEGIN, &&TRACK660_END);
TRACK660_END:   __asm__ __volatile__ ("nop;");
s->inUse[i] = ((Bool)0);
}
   s->blockNo++;
}
static
void init_RL ( EState* s )
{
   s->state_in_ch = 256;
   s->state_in_len = 0;
}
static
Bool isempty_RL ( EState* s )
{
   if (s->state_in_ch < 256 && s->state_in_len > 0)
       {
						   __asm__ __volatile__ ("nop;");
TRACK661_BEGIN: track(&&TRACK661_BEGIN, &&TRACK661_END);
TRACK661_END:   __asm__ __volatile__ ("nop;");
return ((Bool)0);
} else
       {
						   __asm__ __volatile__ ("nop;");
TRACK662_BEGIN: track(&&TRACK662_BEGIN, &&TRACK662_END);
TRACK662_END:   __asm__ __volatile__ ("nop;");
return ((Bool)1);
}
}
int BZ2_bzCompressInit
                    ( bz_stream* strm,
                     int blockSize100k,
                     int verbosity,
                     int workFactor )
{
   Int32 n;
   EState* s;
   if (!bz_config_ok())  {
						   __asm__ __volatile__ ("nop;");
TRACK663_BEGIN: track(&&TRACK663_BEGIN, &&TRACK663_END);
TRACK663_END:   __asm__ __volatile__ ("nop;");
return (-9);
}
   if (strm == ((void *)0) ||
       blockSize100k < 1 || blockSize100k > 9 ||
       workFactor < 0 || workFactor > 250)
      {
						   __asm__ __volatile__ ("nop;");
TRACK664_BEGIN: track(&&TRACK664_BEGIN, &&TRACK664_END);
TRACK664_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (workFactor == 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK665_BEGIN: track(&&TRACK665_BEGIN, &&TRACK665_END);
TRACK665_END:   __asm__ __volatile__ ("nop;");
workFactor = 30;
}
   if (strm->bzalloc == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK666_BEGIN: track(&&TRACK666_BEGIN, &&TRACK666_END);
TRACK666_END:   __asm__ __volatile__ ("nop;");
strm->bzalloc = default_bzalloc;
}
   if (strm->bzfree == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK667_BEGIN: track(&&TRACK667_BEGIN, &&TRACK667_END);
TRACK667_END:   __asm__ __volatile__ ("nop;");
strm->bzfree = default_bzfree;
}
   s = (strm->bzalloc)(strm->opaque,(sizeof(EState)),1);
   if (s == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK668_BEGIN: track(&&TRACK668_BEGIN, &&TRACK668_END);
TRACK668_END:   __asm__ __volatile__ ("nop;");
return (-3);
}
   s->strm = strm;
   s->arr1 = ((void *)0);
   s->arr2 = ((void *)0);
   s->ftab = ((void *)0);
   n = 100000 * blockSize100k;
   s->arr1 = (strm->bzalloc)(strm->opaque,(n * sizeof(UInt32)),1);
   s->arr2 = (strm->bzalloc)(strm->opaque,((n+(2 + 12 + 18 + 2)) * sizeof(UInt32)),1);
   s->ftab = (strm->bzalloc)(strm->opaque,(65537 * sizeof(UInt32)),1);
   if (s->arr1 == ((void *)0) || s->arr2 == ((void *)0) || s->ftab == ((void *)0)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK673_BEGIN: track(&&TRACK673_BEGIN, &&TRACK673_END);
  TRACK673_END:   __asm__ __volatile__ ("nop;");
  if (s->arr1 != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK669_BEGIN: track(&&TRACK669_BEGIN, &&TRACK669_END);
  TRACK669_END:   __asm__ __volatile__ ("nop;");
  (strm->bzfree)(strm->opaque,(s->arr1));
  }
        if (s->arr2 != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK670_BEGIN: track(&&TRACK670_BEGIN, &&TRACK670_END);
  TRACK670_END:   __asm__ __volatile__ ("nop;");
  (strm->bzfree)(strm->opaque,(s->arr2));
  }
        if (s->ftab != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK671_BEGIN: track(&&TRACK671_BEGIN, &&TRACK671_END);
  TRACK671_END:   __asm__ __volatile__ ("nop;");
  (strm->bzfree)(strm->opaque,(s->ftab));
  }
        if (s != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK672_BEGIN: track(&&TRACK672_BEGIN, &&TRACK672_END);
  TRACK672_END:   __asm__ __volatile__ ("nop;");
  (strm->bzfree)(strm->opaque,(s));
  }
        return (-3);
}
   s->blockNo = 0;
   s->state = 2;
   s->mode = 2;
   s->combinedCRC = 0;
   s->blockSize100k = blockSize100k;
   s->nblockMAX = 100000 * blockSize100k - 19;
   s->verbosity = verbosity;
   s->workFactor = workFactor;
   s->block = (UChar*)s->arr2;
   s->mtfv = (UInt16*)s->arr1;
   s->zbits = ((void *)0);
   s->ptr = (UInt32*)s->arr1;
   strm->state = s;
   strm->total_in_lo32 = 0;
   strm->total_in_hi32 = 0;
   strm->total_out_lo32 = 0;
   strm->total_out_hi32 = 0;
   init_RL ( s );
   prepare_new_block ( s );
   return 0;
}
static
void add_pair_to_block ( EState* s )
{
   Int32 i;
   UChar ch = (UChar)(s->state_in_ch);
   for (i = 0; i < s->state_in_len; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK674_BEGIN: track(&&TRACK674_BEGIN, &&TRACK674_END);
  TRACK674_END:   __asm__ __volatile__ ("nop;");
  { s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar)ch)]; };
}
   s->inUse[s->state_in_ch] = ((Bool)1);
   switch (s->state_in_len) {
       
  case 1:
							   __asm__ __volatile__ ("nop;");
	TRACK675_BEGIN: track(&&TRACK675_BEGIN, &&TRACK675_END);
	TRACK675_END:   __asm__ __volatile__ ("nop;");
	s->block[s->nblock] = (UChar)ch; s->nblock++;
         break;
       
  case 2:
							   __asm__ __volatile__ ("nop;");
	TRACK676_BEGIN: track(&&TRACK676_BEGIN, &&TRACK676_END);
	TRACK676_END:   __asm__ __volatile__ ("nop;");
	s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         break;
       
  case 3:
							   __asm__ __volatile__ ("nop;");
	TRACK677_BEGIN: track(&&TRACK677_BEGIN, &&TRACK677_END);
	TRACK677_END:   __asm__ __volatile__ ("nop;");
	s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         break;
       
  default:
							   __asm__ __volatile__ ("nop;");
	TRACK678_BEGIN: track(&&TRACK678_BEGIN, &&TRACK678_END);
	TRACK678_END:   __asm__ __volatile__ ("nop;");
	s->inUse[s->state_in_len-4] = ((Bool)1);
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = ((UChar)(s->state_in_len-4));
         s->nblock++;
         break;
   }
}
static
void flush_RL ( EState* s )
{
   if (s->state_in_ch < 256)  {
						   __asm__ __volatile__ ("nop;");
TRACK679_BEGIN: track(&&TRACK679_BEGIN, &&TRACK679_END);
TRACK679_END:   __asm__ __volatile__ ("nop;");
add_pair_to_block ( s );
}
   init_RL ( s );
}
static
Bool copy_input_until_stop ( EState* s )
{
   Bool progress_in = ((Bool)0);
   if (s->mode == 2) {
  						   __asm__ __volatile__ ("nop;");
  TRACK689_BEGIN: track(&&TRACK689_BEGIN, &&TRACK689_END);
  TRACK689_END:   __asm__ __volatile__ ("nop;");
  while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK688_BEGIN: track(&&TRACK688_BEGIN, &&TRACK688_END);
    TRACK688_END:   __asm__ __volatile__ ("nop;");
    if (s->nblock >= s->nblockMAX)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK680_BEGIN: track(&&TRACK680_BEGIN, &&TRACK680_END);
    TRACK680_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             if (s->strm->avail_in == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK681_BEGIN: track(&&TRACK681_BEGIN, &&TRACK681_END);
    TRACK681_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             progress_in = ((Bool)1);
             { UInt32 zchh = (UInt32)((UInt32)(*((UChar*)(s->strm->next_in)))); if (zchh != s->state_in_ch && s->state_in_len == 1) {
      UChar ch = (UChar)(s->state_in_ch);
      						   __asm__ __volatile__ ("nop;");
      TRACK682_BEGIN: track(&&TRACK682_BEGIN, &&TRACK682_END);
      TRACK682_END:   __asm__ __volatile__ ("nop;");
      { s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar)ch)]; }; s->inUse[s->state_in_ch] = ((Bool)1); s->block[s->nblock] = (UChar)ch; s->nblock++; s->state_in_ch = zchh;
    } else  {
    						   __asm__ __volatile__ ("nop;");
    TRACK686_BEGIN: track(&&TRACK686_BEGIN, &&TRACK686_END);
    TRACK686_END:   __asm__ __volatile__ ("nop;");
    if (zchh != s->state_in_ch || s->state_in_len == 255) {
      						   __asm__ __volatile__ ("nop;");
      TRACK684_BEGIN: track(&&TRACK684_BEGIN, &&TRACK684_END);
      TRACK684_END:   __asm__ __volatile__ ("nop;");
      if (s->state_in_ch < 256)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK683_BEGIN: track(&&TRACK683_BEGIN, &&TRACK683_END);
      TRACK683_END:   __asm__ __volatile__ ("nop;");
      add_pair_to_block ( s );
      } s->state_in_ch = zchh; s->state_in_len = 1;
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK685_BEGIN: track(&&TRACK685_BEGIN, &&TRACK685_END);
      TRACK685_END:   __asm__ __volatile__ ("nop;");
      s->state_in_len++;
    }
    } };
             s->strm->next_in++;
             s->strm->avail_in--;
             s->strm->total_in_lo32++;
             if (s->strm->total_in_lo32 == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK687_BEGIN: track(&&TRACK687_BEGIN, &&TRACK687_END);
    TRACK687_END:   __asm__ __volatile__ ("nop;");
    s->strm->total_in_hi32++;
    }
  }
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK700_BEGIN: track(&&TRACK700_BEGIN, &&TRACK700_END);
  TRACK700_END:   __asm__ __volatile__ ("nop;");
  while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK699_BEGIN: track(&&TRACK699_BEGIN, &&TRACK699_END);
    TRACK699_END:   __asm__ __volatile__ ("nop;");
    if (s->nblock >= s->nblockMAX)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK690_BEGIN: track(&&TRACK690_BEGIN, &&TRACK690_END);
    TRACK690_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             if (s->strm->avail_in == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK691_BEGIN: track(&&TRACK691_BEGIN, &&TRACK691_END);
    TRACK691_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             if (s->avail_in_expect == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK692_BEGIN: track(&&TRACK692_BEGIN, &&TRACK692_END);
    TRACK692_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             progress_in = ((Bool)1);
             { UInt32 zchh = (UInt32)((UInt32)(*((UChar*)(s->strm->next_in)))); if (zchh != s->state_in_ch && s->state_in_len == 1) {
      UChar ch = (UChar)(s->state_in_ch);
      						   __asm__ __volatile__ ("nop;");
      TRACK693_BEGIN: track(&&TRACK693_BEGIN, &&TRACK693_END);
      TRACK693_END:   __asm__ __volatile__ ("nop;");
      { s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar)ch)]; }; s->inUse[s->state_in_ch] = ((Bool)1); s->block[s->nblock] = (UChar)ch; s->nblock++; s->state_in_ch = zchh;
    } else  {
    						   __asm__ __volatile__ ("nop;");
    TRACK697_BEGIN: track(&&TRACK697_BEGIN, &&TRACK697_END);
    TRACK697_END:   __asm__ __volatile__ ("nop;");
    if (zchh != s->state_in_ch || s->state_in_len == 255) {
      						   __asm__ __volatile__ ("nop;");
      TRACK695_BEGIN: track(&&TRACK695_BEGIN, &&TRACK695_END);
      TRACK695_END:   __asm__ __volatile__ ("nop;");
      if (s->state_in_ch < 256)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK694_BEGIN: track(&&TRACK694_BEGIN, &&TRACK694_END);
      TRACK694_END:   __asm__ __volatile__ ("nop;");
      add_pair_to_block ( s );
      } s->state_in_ch = zchh; s->state_in_len = 1;
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK696_BEGIN: track(&&TRACK696_BEGIN, &&TRACK696_END);
      TRACK696_END:   __asm__ __volatile__ ("nop;");
      s->state_in_len++;
    }
    } };
             s->strm->next_in++;
             s->strm->avail_in--;
             s->strm->total_in_lo32++;
             if (s->strm->total_in_lo32 == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK698_BEGIN: track(&&TRACK698_BEGIN, &&TRACK698_END);
    TRACK698_END:   __asm__ __volatile__ ("nop;");
    s->strm->total_in_hi32++;
    }
             s->avail_in_expect--;
  }
}
   return progress_in;
}
static
Bool copy_output_until_stop ( EState* s )
{
   Bool progress_out = ((Bool)0);
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK704_BEGIN: track(&&TRACK704_BEGIN, &&TRACK704_END);
  TRACK704_END:   __asm__ __volatile__ ("nop;");
  if (s->strm->avail_out == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK701_BEGIN: track(&&TRACK701_BEGIN, &&TRACK701_END);
  TRACK701_END:   __asm__ __volatile__ ("nop;");
  break;
  }
        if (s->state_out_pos >= s->numZ)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK702_BEGIN: track(&&TRACK702_BEGIN, &&TRACK702_END);
  TRACK702_END:   __asm__ __volatile__ ("nop;");
  break;
  }
        progress_out = ((Bool)1);
        *(s->strm->next_out) = s->zbits[s->state_out_pos];
        s->state_out_pos++;
        s->strm->avail_out--;
        s->strm->next_out++;
        s->strm->total_out_lo32++;
        if (s->strm->total_out_lo32 == 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK703_BEGIN: track(&&TRACK703_BEGIN, &&TRACK703_END);
  TRACK703_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_out_hi32++;
  }
}
   return progress_out;
}
static
Bool handle_compress ( bz_stream* strm )
{
   Bool progress_in = ((Bool)0);
   Bool progress_out = ((Bool)0);
   EState* s = strm->state;
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK715_BEGIN: track(&&TRACK715_BEGIN, &&TRACK715_END);
  TRACK715_END:   __asm__ __volatile__ ("nop;");
  if (s->state == 1) {
    						   __asm__ __volatile__ ("nop;");
    TRACK708_BEGIN: track(&&TRACK708_BEGIN, &&TRACK708_END);
    TRACK708_END:   __asm__ __volatile__ ("nop;");
    progress_out |= copy_output_until_stop ( s );
             if (s->state_out_pos < s->numZ)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK705_BEGIN: track(&&TRACK705_BEGIN, &&TRACK705_END);
    TRACK705_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             if (s->mode == 4 &&
                 s->avail_in_expect == 0 &&
                 isempty_RL(s))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK706_BEGIN: track(&&TRACK706_BEGIN, &&TRACK706_END);
    TRACK706_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             prepare_new_block ( s );
             s->state = 2;
             if (s->mode == 3 &&
                 s->avail_in_expect == 0 &&
                 isempty_RL(s))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK707_BEGIN: track(&&TRACK707_BEGIN, &&TRACK707_END);
    TRACK707_END:   __asm__ __volatile__ ("nop;");
    break;
    }
  }
        if (s->state == 2) {
    						   __asm__ __volatile__ ("nop;");
    TRACK714_BEGIN: track(&&TRACK714_BEGIN, &&TRACK714_END);
    TRACK714_END:   __asm__ __volatile__ ("nop;");
    progress_in |= copy_input_until_stop ( s );
             if (s->mode != 2 && s->avail_in_expect == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK709_BEGIN: track(&&TRACK709_BEGIN, &&TRACK709_END);
      TRACK709_END:   __asm__ __volatile__ ("nop;");
      flush_RL ( s );
                  BZ2_compressBlock ( s, (Bool)(s->mode == 4) );
                  s->state = 1;
    }
             else
              {
    						   __asm__ __volatile__ ("nop;");
    TRACK713_BEGIN: track(&&TRACK713_BEGIN, &&TRACK713_END);
    TRACK713_END:   __asm__ __volatile__ ("nop;");
    if (s->nblock >= s->nblockMAX) {
      						   __asm__ __volatile__ ("nop;");
      TRACK710_BEGIN: track(&&TRACK710_BEGIN, &&TRACK710_END);
      TRACK710_END:   __asm__ __volatile__ ("nop;");
      BZ2_compressBlock ( s, ((Bool)0) );
                  s->state = 1;
    }
             else
              {
    						   __asm__ __volatile__ ("nop;");
    TRACK712_BEGIN: track(&&TRACK712_BEGIN, &&TRACK712_END);
    TRACK712_END:   __asm__ __volatile__ ("nop;");
    if (s->strm->avail_in == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK711_BEGIN: track(&&TRACK711_BEGIN, &&TRACK711_END);
      TRACK711_END:   __asm__ __volatile__ ("nop;");
      break;
    }
    }
    }
  }
}
   return progress_in || progress_out;
}
int BZ2_bzCompress ( bz_stream *strm, int action )
{
   Bool progress;
   EState* s;
   if (strm == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK716_BEGIN: track(&&TRACK716_BEGIN, &&TRACK716_END);
TRACK716_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   s = strm->state;
   if (s == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK717_BEGIN: track(&&TRACK717_BEGIN, &&TRACK717_END);
TRACK717_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (s->strm != strm)  {
						   __asm__ __volatile__ ("nop;");
TRACK718_BEGIN: track(&&TRACK718_BEGIN, &&TRACK718_END);
TRACK718_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   preswitch:
   switch (s->mode) {
       
  case 1:
							   __asm__ __volatile__ ("nop;");
	TRACK719_BEGIN: track(&&TRACK719_BEGIN, &&TRACK719_END);
	TRACK719_END:   __asm__ __volatile__ ("nop;");
	return (-1);
       
  case 2:
							   __asm__ __volatile__ ("nop;");
	TRACK726_BEGIN: track(&&TRACK726_BEGIN, &&TRACK726_END);
	TRACK726_END:   __asm__ __volatile__ ("nop;");
	if (action == 0) {
	  						   __asm__ __volatile__ ("nop;");
	  TRACK720_BEGIN: track(&&TRACK720_BEGIN, &&TRACK720_END);
	  TRACK720_END:   __asm__ __volatile__ ("nop;");
	  progress = handle_compress ( strm );
	              return progress ? 1 : (-2);
	}
	         else
	   {
							   __asm__ __volatile__ ("nop;");
	TRACK725_BEGIN: track(&&TRACK725_BEGIN, &&TRACK725_END);
	TRACK725_END:   __asm__ __volatile__ ("nop;");
	if (action == 1) {
	  						   __asm__ __volatile__ ("nop;");
	  TRACK721_BEGIN: track(&&TRACK721_BEGIN, &&TRACK721_END);
	  TRACK721_END:   __asm__ __volatile__ ("nop;");
	  s->avail_in_expect = strm->avail_in;
	              s->mode = 3;
	              goto preswitch;
	}
	         else
	          {
							   __asm__ __volatile__ ("nop;");
	TRACK724_BEGIN: track(&&TRACK724_BEGIN, &&TRACK724_END);
	TRACK724_END:   __asm__ __volatile__ ("nop;");
	if (action == 2) {
	  						   __asm__ __volatile__ ("nop;");
	  TRACK722_BEGIN: track(&&TRACK722_BEGIN, &&TRACK722_END);
	  TRACK722_END:   __asm__ __volatile__ ("nop;");
	  s->avail_in_expect = strm->avail_in;
	              s->mode = 4;
	              goto preswitch;
	}
	         else
	             {
							   __asm__ __volatile__ ("nop;");
	TRACK723_BEGIN: track(&&TRACK723_BEGIN, &&TRACK723_END);
	TRACK723_END:   __asm__ __volatile__ ("nop;");
	return (-2);
	}
	}
	}
       
  case 3:
							   __asm__ __volatile__ ("nop;");
	TRACK728_BEGIN: track(&&TRACK728_BEGIN, &&TRACK728_END);
	TRACK728_END:   __asm__ __volatile__ ("nop;");
	if (action != 1)  {
							   __asm__ __volatile__ ("nop;");
	TRACK727_BEGIN: track(&&TRACK727_BEGIN, &&TRACK727_END);
	TRACK727_END:   __asm__ __volatile__ ("nop;");
	return (-1);
	}
         if (s->avail_in_expect != s->strm->avail_in)
             {
						   __asm__ __volatile__ ("nop;");
TRACK729_BEGIN: track(&&TRACK729_BEGIN, &&TRACK729_END);
TRACK729_END:   __asm__ __volatile__ ("nop;");
return (-1);
}
         progress = handle_compress ( strm );
         if (s->avail_in_expect > 0 || !isempty_RL(s) ||
             s->state_out_pos < s->numZ)  {
						   __asm__ __volatile__ ("nop;");
TRACK730_BEGIN: track(&&TRACK730_BEGIN, &&TRACK730_END);
TRACK730_END:   __asm__ __volatile__ ("nop;");
return 2;
}
         s->mode = 2;
         return 1;
       
  case 4:
							   __asm__ __volatile__ ("nop;");
	TRACK732_BEGIN: track(&&TRACK732_BEGIN, &&TRACK732_END);
	TRACK732_END:   __asm__ __volatile__ ("nop;");
	if (action != 2)  {
							   __asm__ __volatile__ ("nop;");
	TRACK731_BEGIN: track(&&TRACK731_BEGIN, &&TRACK731_END);
	TRACK731_END:   __asm__ __volatile__ ("nop;");
	return (-1);
	}
         if (s->avail_in_expect != s->strm->avail_in)
             {
						   __asm__ __volatile__ ("nop;");
TRACK733_BEGIN: track(&&TRACK733_BEGIN, &&TRACK733_END);
TRACK733_END:   __asm__ __volatile__ ("nop;");
return (-1);
}
         progress = handle_compress ( strm );
         if (!progress)  {
						   __asm__ __volatile__ ("nop;");
TRACK734_BEGIN: track(&&TRACK734_BEGIN, &&TRACK734_END);
TRACK734_END:   __asm__ __volatile__ ("nop;");
return (-1);
}
         if (s->avail_in_expect > 0 || !isempty_RL(s) ||
             s->state_out_pos < s->numZ)  {
						   __asm__ __volatile__ ("nop;");
TRACK735_BEGIN: track(&&TRACK735_BEGIN, &&TRACK735_END);
TRACK735_END:   __asm__ __volatile__ ("nop;");
return 3;
}
         s->mode = 1;
         return 4;
   }
   return 0;
}
int BZ2_bzCompressEnd ( bz_stream *strm )
{
   EState* s;
   if (strm == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK736_BEGIN: track(&&TRACK736_BEGIN, &&TRACK736_END);
TRACK736_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   s = strm->state;
   if (s == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK737_BEGIN: track(&&TRACK737_BEGIN, &&TRACK737_END);
TRACK737_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (s->strm != strm)  {
						   __asm__ __volatile__ ("nop;");
TRACK738_BEGIN: track(&&TRACK738_BEGIN, &&TRACK738_END);
TRACK738_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (s->arr1 != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK739_BEGIN: track(&&TRACK739_BEGIN, &&TRACK739_END);
TRACK739_END:   __asm__ __volatile__ ("nop;");
(strm->bzfree)(strm->opaque,(s->arr1));
}
   if (s->arr2 != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK740_BEGIN: track(&&TRACK740_BEGIN, &&TRACK740_END);
TRACK740_END:   __asm__ __volatile__ ("nop;");
(strm->bzfree)(strm->opaque,(s->arr2));
}
   if (s->ftab != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK741_BEGIN: track(&&TRACK741_BEGIN, &&TRACK741_END);
TRACK741_END:   __asm__ __volatile__ ("nop;");
(strm->bzfree)(strm->opaque,(s->ftab));
}
   (strm->bzfree)(strm->opaque,(strm->state));
   strm->state = ((void *)0);
   return 0;
}
int BZ2_bzDecompressInit
                     ( bz_stream* strm,
                       int verbosity,
                       int small )
{
   DState* s;
   if (!bz_config_ok())  {
						   __asm__ __volatile__ ("nop;");
TRACK742_BEGIN: track(&&TRACK742_BEGIN, &&TRACK742_END);
TRACK742_END:   __asm__ __volatile__ ("nop;");
return (-9);
}
   if (strm == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK743_BEGIN: track(&&TRACK743_BEGIN, &&TRACK743_END);
TRACK743_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (small != 0 && small != 1)  {
						   __asm__ __volatile__ ("nop;");
TRACK744_BEGIN: track(&&TRACK744_BEGIN, &&TRACK744_END);
TRACK744_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (verbosity < 0 || verbosity > 4)  {
						   __asm__ __volatile__ ("nop;");
TRACK745_BEGIN: track(&&TRACK745_BEGIN, &&TRACK745_END);
TRACK745_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (strm->bzalloc == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK746_BEGIN: track(&&TRACK746_BEGIN, &&TRACK746_END);
TRACK746_END:   __asm__ __volatile__ ("nop;");
strm->bzalloc = default_bzalloc;
}
   if (strm->bzfree == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK747_BEGIN: track(&&TRACK747_BEGIN, &&TRACK747_END);
TRACK747_END:   __asm__ __volatile__ ("nop;");
strm->bzfree = default_bzfree;
}
   s = (strm->bzalloc)(strm->opaque,(sizeof(DState)),1);
   if (s == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK748_BEGIN: track(&&TRACK748_BEGIN, &&TRACK748_END);
TRACK748_END:   __asm__ __volatile__ ("nop;");
return (-3);
}
   s->strm = strm;
   strm->state = s;
   s->state = 10;
   s->bsLive = 0;
   s->bsBuff = 0;
   s->calculatedCombinedCRC = 0;
   strm->total_in_lo32 = 0;
   strm->total_in_hi32 = 0;
   strm->total_out_lo32 = 0;
   strm->total_out_hi32 = 0;
   s->smallDecompress = (Bool)small;
   s->ll4 = ((void *)0);
   s->ll16 = ((void *)0);
   s->tt = ((void *)0);
   s->currBlockNo = 0;
   s->verbosity = verbosity;
   return 0;
}
static
void unRLE_obuf_to_output_FAST ( DState* s )
{
   UChar k1;
   if (s->blockRandomised) {
  						   __asm__ __volatile__ ("nop;");
  TRACK771_BEGIN: track(&&TRACK771_BEGIN, &&TRACK771_END);
  TRACK771_END:   __asm__ __volatile__ ("nop;");
  while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK770_BEGIN: track(&&TRACK770_BEGIN, &&TRACK770_END);
    TRACK770_END:   __asm__ __volatile__ ("nop;");
    while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK752_BEGIN: track(&&TRACK752_BEGIN, &&TRACK752_END);
      TRACK752_END:   __asm__ __volatile__ ("nop;");
      if (s->strm->avail_out == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK749_BEGIN: track(&&TRACK749_BEGIN, &&TRACK749_END);
      TRACK749_END:   __asm__ __volatile__ ("nop;");
      return;
      }
                  if (s->state_out_len == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK750_BEGIN: track(&&TRACK750_BEGIN, &&TRACK750_END);
      TRACK750_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  *( (UChar*)(s->strm->next_out) ) = s->state_out_ch;
                  { s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar)s->state_out_ch)]; };
                  s->state_out_len--;
                  s->strm->next_out++;
                  s->strm->avail_out--;
                  s->strm->total_out_lo32++;
                  if (s->strm->total_out_lo32 == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK751_BEGIN: track(&&TRACK751_BEGIN, &&TRACK751_END);
      TRACK751_END:   __asm__ __volatile__ ("nop;");
      s->strm->total_out_hi32++;
      }
    }
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK753_BEGIN: track(&&TRACK753_BEGIN, &&TRACK753_END);
    TRACK753_END:   __asm__ __volatile__ ("nop;");
    return;
    }
             s->state_out_len = 1;
             s->state_out_ch = s->k0;
             s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK755_BEGIN: track(&&TRACK755_BEGIN, &&TRACK755_END);
      TRACK755_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK754_BEGIN: track(&&TRACK754_BEGIN, &&TRACK754_END);
      TRACK754_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK756_BEGIN: track(&&TRACK756_BEGIN, &&TRACK756_END);
    TRACK756_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != s->k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK757_BEGIN: track(&&TRACK757_BEGIN, &&TRACK757_END);
      TRACK757_END:   __asm__ __volatile__ ("nop;");
      s->k0 = k1; continue;
    };
             s->state_out_len = 2;
             s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK759_BEGIN: track(&&TRACK759_BEGIN, &&TRACK759_END);
      TRACK759_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK758_BEGIN: track(&&TRACK758_BEGIN, &&TRACK758_END);
      TRACK758_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK760_BEGIN: track(&&TRACK760_BEGIN, &&TRACK760_END);
    TRACK760_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != s->k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK761_BEGIN: track(&&TRACK761_BEGIN, &&TRACK761_END);
      TRACK761_END:   __asm__ __volatile__ ("nop;");
      s->k0 = k1; continue;
    };
             s->state_out_len = 3;
             s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK763_BEGIN: track(&&TRACK763_BEGIN, &&TRACK763_END);
      TRACK763_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK762_BEGIN: track(&&TRACK762_BEGIN, &&TRACK762_END);
      TRACK762_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK764_BEGIN: track(&&TRACK764_BEGIN, &&TRACK764_END);
    TRACK764_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != s->k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK765_BEGIN: track(&&TRACK765_BEGIN, &&TRACK765_END);
      TRACK765_END:   __asm__ __volatile__ ("nop;");
      s->k0 = k1; continue;
    };
             s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK767_BEGIN: track(&&TRACK767_BEGIN, &&TRACK767_END);
      TRACK767_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK766_BEGIN: track(&&TRACK766_BEGIN, &&TRACK766_END);
      TRACK766_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
             s->state_out_len = ((Int32)k1) + 4;
             s->tPos = s->tt[s->tPos]; s->k0 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK769_BEGIN: track(&&TRACK769_BEGIN, &&TRACK769_END);
      TRACK769_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK768_BEGIN: track(&&TRACK768_BEGIN, &&TRACK768_END);
      TRACK768_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             s->k0 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
  }
} else {
  UInt32 c_calculatedBlockCRC = s->calculatedBlockCRC;
        UChar c_state_out_ch = s->state_out_ch;
        Int32 c_state_out_len = s->state_out_len;
        Int32 c_nblock_used = s->nblock_used;
        Int32 c_k0 = s->k0;
        UInt32* c_tt = s->tt;
        UInt32 c_tPos = s->tPos;
        char* cs_next_out = s->strm->next_out;
        unsigned int cs_avail_out = s->strm->avail_out;
        UInt32 avail_out_INIT = cs_avail_out;
        Int32 s_save_nblockPP = s->save_nblock+1;
        unsigned int total_out_lo32_old;
  						   __asm__ __volatile__ ("nop;");
  TRACK799_BEGIN: track(&&TRACK799_BEGIN, &&TRACK799_END);
  TRACK799_END:   __asm__ __volatile__ ("nop;");
  while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK785_BEGIN: track(&&TRACK785_BEGIN, &&TRACK785_END);
    TRACK785_END:   __asm__ __volatile__ ("nop;");
    if (c_state_out_len > 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK777_BEGIN: track(&&TRACK777_BEGIN, &&TRACK777_END);
      TRACK777_END:   __asm__ __volatile__ ("nop;");
      while (((Bool)1)) {
        						   __asm__ __volatile__ ("nop;");
        TRACK774_BEGIN: track(&&TRACK774_BEGIN, &&TRACK774_END);
        TRACK774_END:   __asm__ __volatile__ ("nop;");
        if (cs_avail_out == 0)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK772_BEGIN: track(&&TRACK772_BEGIN, &&TRACK772_END);
        TRACK772_END:   __asm__ __volatile__ ("nop;");
        goto return_notr;
        }
                       if (c_state_out_len == 1)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK773_BEGIN: track(&&TRACK773_BEGIN, &&TRACK773_END);
        TRACK773_END:   __asm__ __volatile__ ("nop;");
        break;
        }
                       *( (UChar*)(cs_next_out) ) = c_state_out_ch;
                       { c_calculatedBlockCRC = (c_calculatedBlockCRC << 8) ^ BZ2_crc32Table[(c_calculatedBlockCRC >> 24) ^ ((UChar)c_state_out_ch)]; };
                       c_state_out_len--;
                       cs_next_out++;
                       cs_avail_out--;
      }
                  s_state_out_len_eq_one:
                  {
        						   __asm__ __volatile__ ("nop;");
        TRACK776_BEGIN: track(&&TRACK776_BEGIN, &&TRACK776_END);
        TRACK776_END:   __asm__ __volatile__ ("nop;");
        if (cs_avail_out == 0) {
          						   __asm__ __volatile__ ("nop;");
          TRACK775_BEGIN: track(&&TRACK775_BEGIN, &&TRACK775_END);
          TRACK775_END:   __asm__ __volatile__ ("nop;");
          c_state_out_len = 1; goto return_notr;
        };
                       *( (UChar*)(cs_next_out) ) = c_state_out_ch;
                       { c_calculatedBlockCRC = (c_calculatedBlockCRC << 8) ^ BZ2_crc32Table[(c_calculatedBlockCRC >> 24) ^ ((UChar)c_state_out_ch)]; };
                       cs_next_out++;
                       cs_avail_out--;
      }
    }
             if (c_nblock_used == s_save_nblockPP) {
      						   __asm__ __volatile__ ("nop;");
      TRACK778_BEGIN: track(&&TRACK778_BEGIN, &&TRACK778_END);
      TRACK778_END:   __asm__ __volatile__ ("nop;");
      c_state_out_len = 0; goto return_notr;
    };
             c_state_out_ch = c_k0;
             c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
             if (k1 != c_k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK779_BEGIN: track(&&TRACK779_BEGIN, &&TRACK779_END);
      TRACK779_END:   __asm__ __volatile__ ("nop;");
      c_k0 = k1; goto s_state_out_len_eq_one;
    };
             if (c_nblock_used == s_save_nblockPP)
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK780_BEGIN: track(&&TRACK780_BEGIN, &&TRACK780_END);
    TRACK780_END:   __asm__ __volatile__ ("nop;");
    goto s_state_out_len_eq_one;
    }
             c_state_out_len = 2;
             c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
             if (c_nblock_used == s_save_nblockPP)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK781_BEGIN: track(&&TRACK781_BEGIN, &&TRACK781_END);
    TRACK781_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != c_k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK782_BEGIN: track(&&TRACK782_BEGIN, &&TRACK782_END);
      TRACK782_END:   __asm__ __volatile__ ("nop;");
      c_k0 = k1; continue;
    };
             c_state_out_len = 3;
             c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
             if (c_nblock_used == s_save_nblockPP)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK783_BEGIN: track(&&TRACK783_BEGIN, &&TRACK783_END);
    TRACK783_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != c_k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK784_BEGIN: track(&&TRACK784_BEGIN, &&TRACK784_END);
      TRACK784_END:   __asm__ __volatile__ ("nop;");
      c_k0 = k1; continue;
    };
             c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
             c_state_out_len = ((Int32)k1) + 4;
             c_tPos = c_tt[c_tPos]; c_k0 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
  }
        return_notr:
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK786_BEGIN: track(&&TRACK786_BEGIN, &&TRACK786_END);
  TRACK786_END:   __asm__ __volatile__ ("nop;");
  total_out_lo32_old = s->strm->total_out_lo32;
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK787_BEGIN: track(&&TRACK787_BEGIN, &&TRACK787_END);
  TRACK787_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_out_lo32 += (avail_out_INIT - cs_avail_out);
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK789_BEGIN: track(&&TRACK789_BEGIN, &&TRACK789_END);
  TRACK789_END:   __asm__ __volatile__ ("nop;");
  if (s->strm->total_out_lo32 < total_out_lo32_old)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK788_BEGIN: track(&&TRACK788_BEGIN, &&TRACK788_END);
  TRACK788_END:   __asm__ __volatile__ ("nop;");
  s->strm->total_out_hi32++;
  }
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK790_BEGIN: track(&&TRACK790_BEGIN, &&TRACK790_END);
  TRACK790_END:   __asm__ __volatile__ ("nop;");
  s->calculatedBlockCRC = c_calculatedBlockCRC;
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK791_BEGIN: track(&&TRACK791_BEGIN, &&TRACK791_END);
  TRACK791_END:   __asm__ __volatile__ ("nop;");
  s->state_out_ch = c_state_out_ch;
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK792_BEGIN: track(&&TRACK792_BEGIN, &&TRACK792_END);
  TRACK792_END:   __asm__ __volatile__ ("nop;");
  s->state_out_len = c_state_out_len;
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK793_BEGIN: track(&&TRACK793_BEGIN, &&TRACK793_END);
  TRACK793_END:   __asm__ __volatile__ ("nop;");
  s->nblock_used = c_nblock_used;
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK794_BEGIN: track(&&TRACK794_BEGIN, &&TRACK794_END);
  TRACK794_END:   __asm__ __volatile__ ("nop;");
  s->k0 = c_k0;
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK795_BEGIN: track(&&TRACK795_BEGIN, &&TRACK795_END);
  TRACK795_END:   __asm__ __volatile__ ("nop;");
  s->tt = c_tt;
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK796_BEGIN: track(&&TRACK796_BEGIN, &&TRACK796_END);
  TRACK796_END:   __asm__ __volatile__ ("nop;");
  s->tPos = c_tPos;
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK797_BEGIN: track(&&TRACK797_BEGIN, &&TRACK797_END);
  TRACK797_END:   __asm__ __volatile__ ("nop;");
  s->strm->next_out = cs_next_out;
  }
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK798_BEGIN: track(&&TRACK798_BEGIN, &&TRACK798_END);
  TRACK798_END:   __asm__ __volatile__ ("nop;");
  s->strm->avail_out = cs_avail_out;
  }
}
}
Int32 BZ2_indexIntoF ( Int32 indx, Int32 *cftab )
{
   Int32 nb, na, mid;
   nb = 0;
   na = 256;
   do {
  						   __asm__ __volatile__ ("nop;");
  TRACK802_BEGIN: track(&&TRACK802_BEGIN, &&TRACK802_END);
  TRACK802_END:   __asm__ __volatile__ ("nop;");
  mid = (nb + na) >> 1;
        if (indx >= cftab[mid])  {
  						   __asm__ __volatile__ ("nop;");
  TRACK800_BEGIN: track(&&TRACK800_BEGIN, &&TRACK800_END);
  TRACK800_END:   __asm__ __volatile__ ("nop;");
  nb = mid;
  } else  {
  						   __asm__ __volatile__ ("nop;");
  TRACK801_BEGIN: track(&&TRACK801_BEGIN, &&TRACK801_END);
  TRACK801_END:   __asm__ __volatile__ ("nop;");
  na = mid;
  }
}
   while (na - nb != 1);
   return nb;
}
static
void unRLE_obuf_to_output_SMALL ( DState* s )
{
   UChar k1;
   if (s->blockRandomised) {
  						   __asm__ __volatile__ ("nop;");
  TRACK825_BEGIN: track(&&TRACK825_BEGIN, &&TRACK825_END);
  TRACK825_END:   __asm__ __volatile__ ("nop;");
  while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK824_BEGIN: track(&&TRACK824_BEGIN, &&TRACK824_END);
    TRACK824_END:   __asm__ __volatile__ ("nop;");
    while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK806_BEGIN: track(&&TRACK806_BEGIN, &&TRACK806_END);
      TRACK806_END:   __asm__ __volatile__ ("nop;");
      if (s->strm->avail_out == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK803_BEGIN: track(&&TRACK803_BEGIN, &&TRACK803_END);
      TRACK803_END:   __asm__ __volatile__ ("nop;");
      return;
      }
                  if (s->state_out_len == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK804_BEGIN: track(&&TRACK804_BEGIN, &&TRACK804_END);
      TRACK804_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  *( (UChar*)(s->strm->next_out) ) = s->state_out_ch;
                  { s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar)s->state_out_ch)]; };
                  s->state_out_len--;
                  s->strm->next_out++;
                  s->strm->avail_out--;
                  s->strm->total_out_lo32++;
                  if (s->strm->total_out_lo32 == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK805_BEGIN: track(&&TRACK805_BEGIN, &&TRACK805_END);
      TRACK805_END:   __asm__ __volatile__ ("nop;");
      s->strm->total_out_hi32++;
      }
    }
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK807_BEGIN: track(&&TRACK807_BEGIN, &&TRACK807_END);
    TRACK807_END:   __asm__ __volatile__ ("nop;");
    return;
    }
             s->state_out_len = 1;
             s->state_out_ch = s->k0;
             k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK809_BEGIN: track(&&TRACK809_BEGIN, &&TRACK809_END);
      TRACK809_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK808_BEGIN: track(&&TRACK808_BEGIN, &&TRACK808_END);
      TRACK808_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK810_BEGIN: track(&&TRACK810_BEGIN, &&TRACK810_END);
    TRACK810_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != s->k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK811_BEGIN: track(&&TRACK811_BEGIN, &&TRACK811_END);
      TRACK811_END:   __asm__ __volatile__ ("nop;");
      s->k0 = k1; continue;
    };
             s->state_out_len = 2;
             k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK813_BEGIN: track(&&TRACK813_BEGIN, &&TRACK813_END);
      TRACK813_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK812_BEGIN: track(&&TRACK812_BEGIN, &&TRACK812_END);
      TRACK812_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK814_BEGIN: track(&&TRACK814_BEGIN, &&TRACK814_END);
    TRACK814_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != s->k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK815_BEGIN: track(&&TRACK815_BEGIN, &&TRACK815_END);
      TRACK815_END:   __asm__ __volatile__ ("nop;");
      s->k0 = k1; continue;
    };
             s->state_out_len = 3;
             k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK817_BEGIN: track(&&TRACK817_BEGIN, &&TRACK817_END);
      TRACK817_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK816_BEGIN: track(&&TRACK816_BEGIN, &&TRACK816_END);
      TRACK816_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK818_BEGIN: track(&&TRACK818_BEGIN, &&TRACK818_END);
    TRACK818_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != s->k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK819_BEGIN: track(&&TRACK819_BEGIN, &&TRACK819_END);
      TRACK819_END:   __asm__ __volatile__ ("nop;");
      s->k0 = k1; continue;
    };
             k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK821_BEGIN: track(&&TRACK821_BEGIN, &&TRACK821_END);
      TRACK821_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK820_BEGIN: track(&&TRACK820_BEGIN, &&TRACK820_END);
      TRACK820_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
             s->state_out_len = ((Int32)k1) + 4;
             s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK823_BEGIN: track(&&TRACK823_BEGIN, &&TRACK823_END);
      TRACK823_END:   __asm__ __volatile__ ("nop;");
      s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK822_BEGIN: track(&&TRACK822_BEGIN, &&TRACK822_END);
      TRACK822_END:   __asm__ __volatile__ ("nop;");
      s->rTPos = 0;
      }
    } s->rNToGo--;;
             s->k0 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
  }
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK838_BEGIN: track(&&TRACK838_BEGIN, &&TRACK838_END);
  TRACK838_END:   __asm__ __volatile__ ("nop;");
  while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK837_BEGIN: track(&&TRACK837_BEGIN, &&TRACK837_END);
    TRACK837_END:   __asm__ __volatile__ ("nop;");
    while (((Bool)1)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK829_BEGIN: track(&&TRACK829_BEGIN, &&TRACK829_END);
      TRACK829_END:   __asm__ __volatile__ ("nop;");
      if (s->strm->avail_out == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK826_BEGIN: track(&&TRACK826_BEGIN, &&TRACK826_END);
      TRACK826_END:   __asm__ __volatile__ ("nop;");
      return;
      }
                  if (s->state_out_len == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK827_BEGIN: track(&&TRACK827_BEGIN, &&TRACK827_END);
      TRACK827_END:   __asm__ __volatile__ ("nop;");
      break;
      }
                  *( (UChar*)(s->strm->next_out) ) = s->state_out_ch;
                  { s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar)s->state_out_ch)]; };
                  s->state_out_len--;
                  s->strm->next_out++;
                  s->strm->avail_out--;
                  s->strm->total_out_lo32++;
                  if (s->strm->total_out_lo32 == 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK828_BEGIN: track(&&TRACK828_BEGIN, &&TRACK828_END);
      TRACK828_END:   __asm__ __volatile__ ("nop;");
      s->strm->total_out_hi32++;
      }
    }
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK830_BEGIN: track(&&TRACK830_BEGIN, &&TRACK830_END);
    TRACK830_END:   __asm__ __volatile__ ("nop;");
    return;
    }
             s->state_out_len = 1;
             s->state_out_ch = s->k0;
             k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK831_BEGIN: track(&&TRACK831_BEGIN, &&TRACK831_END);
    TRACK831_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != s->k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK832_BEGIN: track(&&TRACK832_BEGIN, &&TRACK832_END);
      TRACK832_END:   __asm__ __volatile__ ("nop;");
      s->k0 = k1; continue;
    };
             s->state_out_len = 2;
             k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK833_BEGIN: track(&&TRACK833_BEGIN, &&TRACK833_END);
    TRACK833_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != s->k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK834_BEGIN: track(&&TRACK834_BEGIN, &&TRACK834_END);
      TRACK834_END:   __asm__ __volatile__ ("nop;");
      s->k0 = k1; continue;
    };
             s->state_out_len = 3;
             k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
             if (s->nblock_used == s->save_nblock+1)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK835_BEGIN: track(&&TRACK835_BEGIN, &&TRACK835_END);
    TRACK835_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
             if (k1 != s->k0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK836_BEGIN: track(&&TRACK836_BEGIN, &&TRACK836_END);
      TRACK836_END:   __asm__ __volatile__ ("nop;");
      s->k0 = k1; continue;
    };
             k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
             s->state_out_len = ((Int32)k1) + 4;
             s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
  }
}
}
int BZ2_bzDecompress ( bz_stream *strm )
{
   DState* s;
   if (strm == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK839_BEGIN: track(&&TRACK839_BEGIN, &&TRACK839_END);
TRACK839_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   s = strm->state;
   if (s == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK840_BEGIN: track(&&TRACK840_BEGIN, &&TRACK840_END);
TRACK840_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (s->strm != strm)  {
						   __asm__ __volatile__ ("nop;");
TRACK841_BEGIN: track(&&TRACK841_BEGIN, &&TRACK841_END);
TRACK841_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK856_BEGIN: track(&&TRACK856_BEGIN, &&TRACK856_END);
  TRACK856_END:   __asm__ __volatile__ ("nop;");
  if (s->state == 1)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK842_BEGIN: track(&&TRACK842_BEGIN, &&TRACK842_END);
  TRACK842_END:   __asm__ __volatile__ ("nop;");
  return (-1);
  }
        if (s->state == 2) {
    						   __asm__ __volatile__ ("nop;");
    TRACK850_BEGIN: track(&&TRACK850_BEGIN, &&TRACK850_END);
    TRACK850_END:   __asm__ __volatile__ ("nop;");
    if (s->smallDecompress)
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK843_BEGIN: track(&&TRACK843_BEGIN, &&TRACK843_END);
    TRACK843_END:   __asm__ __volatile__ ("nop;");
    unRLE_obuf_to_output_SMALL ( s );
    } else
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK844_BEGIN: track(&&TRACK844_BEGIN, &&TRACK844_END);
    TRACK844_END:   __asm__ __volatile__ ("nop;");
    unRLE_obuf_to_output_FAST ( s );
    }
             if (s->nblock_used == s->save_nblock+1 && s->state_out_len == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK848_BEGIN: track(&&TRACK848_BEGIN, &&TRACK848_END);
      TRACK848_END:   __asm__ __volatile__ ("nop;");
      { s->calculatedBlockCRC = ~(s->calculatedBlockCRC); };
                  if (s->verbosity >= 3)
                      {
      						   __asm__ __volatile__ ("nop;");
      TRACK845_BEGIN: track(&&TRACK845_BEGIN, &&TRACK845_END);
      TRACK845_END:   __asm__ __volatile__ ("nop;");
      fprintf(stderr," {0x%x, 0x%x}",s->storedBlockCRC,s->calculatedBlockCRC);
      }
                  if (s->verbosity >= 2)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK846_BEGIN: track(&&TRACK846_BEGIN, &&TRACK846_END);
      TRACK846_END:   __asm__ __volatile__ ("nop;");
      fprintf(stderr,"]");
      }
                  if (s->calculatedBlockCRC != s->storedBlockCRC)
                      {
      						   __asm__ __volatile__ ("nop;");
      TRACK847_BEGIN: track(&&TRACK847_BEGIN, &&TRACK847_END);
      TRACK847_END:   __asm__ __volatile__ ("nop;");
      return (-4);
      }
                  s->calculatedCombinedCRC
                     = (s->calculatedCombinedCRC << 1) |
                          (s->calculatedCombinedCRC >> 31);
                  s->calculatedCombinedCRC ^= s->calculatedBlockCRC;
                  s->state = 14;
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK849_BEGIN: track(&&TRACK849_BEGIN, &&TRACK849_END);
      TRACK849_END:   __asm__ __volatile__ ("nop;");
      return 0;
    }
  }
        if (s->state >= 10) {
    Int32 r = BZ2_decompress ( s );
    						   __asm__ __volatile__ ("nop;");
    TRACK855_BEGIN: track(&&TRACK855_BEGIN, &&TRACK855_END);
    TRACK855_END:   __asm__ __volatile__ ("nop;");
    if (r == 4) {
      						   __asm__ __volatile__ ("nop;");
      TRACK853_BEGIN: track(&&TRACK853_BEGIN, &&TRACK853_END);
      TRACK853_END:   __asm__ __volatile__ ("nop;");
      if (s->verbosity >= 3)
                      {
      						   __asm__ __volatile__ ("nop;");
      TRACK851_BEGIN: track(&&TRACK851_BEGIN, &&TRACK851_END);
      TRACK851_END:   __asm__ __volatile__ ("nop;");
      fprintf(stderr,"\n    combined CRCs: stored = 0x%x, computed = 0x%x",s->storedCombinedCRC,s->calculatedCombinedCRC);
      }
                  if (s->calculatedCombinedCRC != s->storedCombinedCRC)
                      {
      						   __asm__ __volatile__ ("nop;");
      TRACK852_BEGIN: track(&&TRACK852_BEGIN, &&TRACK852_END);
      TRACK852_END:   __asm__ __volatile__ ("nop;");
      return (-4);
      }
                  return r;
    }
             if (s->state != 2)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK854_BEGIN: track(&&TRACK854_BEGIN, &&TRACK854_END);
    TRACK854_END:   __asm__ __volatile__ ("nop;");
    return r;
    }
  }
}
   { if (!(0))  {
						   __asm__ __volatile__ ("nop;");
TRACK857_BEGIN: track(&&TRACK857_BEGIN, &&TRACK857_END);
TRACK857_END:   __asm__ __volatile__ ("nop;");
BZ2_bz__AssertH__fail ( 6001 );
} };
   return 0;
}
int BZ2_bzDecompressEnd ( bz_stream *strm )
{
   DState* s;
   if (strm == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK858_BEGIN: track(&&TRACK858_BEGIN, &&TRACK858_END);
TRACK858_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   s = strm->state;
   if (s == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK859_BEGIN: track(&&TRACK859_BEGIN, &&TRACK859_END);
TRACK859_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (s->strm != strm)  {
						   __asm__ __volatile__ ("nop;");
TRACK860_BEGIN: track(&&TRACK860_BEGIN, &&TRACK860_END);
TRACK860_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (s->tt != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK861_BEGIN: track(&&TRACK861_BEGIN, &&TRACK861_END);
TRACK861_END:   __asm__ __volatile__ ("nop;");
(strm->bzfree)(strm->opaque,(s->tt));
}
   if (s->ll16 != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK862_BEGIN: track(&&TRACK862_BEGIN, &&TRACK862_END);
TRACK862_END:   __asm__ __volatile__ ("nop;");
(strm->bzfree)(strm->opaque,(s->ll16));
}
   if (s->ll4 != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK863_BEGIN: track(&&TRACK863_BEGIN, &&TRACK863_END);
TRACK863_END:   __asm__ __volatile__ ("nop;");
(strm->bzfree)(strm->opaque,(s->ll4));
}
   (strm->bzfree)(strm->opaque,(strm->state));
   strm->state = ((void *)0);
   return 0;
}
typedef
   struct {
      FILE* handle;
      Char buf[5000];
      Int32 bufN;
      Bool writing;
      bz_stream strm;
      Int32 lastErr;
      Bool initialisedOk;
   }
   bzFile;
static Bool myfeof ( FILE* f )
{
   Int32 c = fgetc ( f );
   if (c == (-1))  {
						   __asm__ __volatile__ ("nop;");
TRACK864_BEGIN: track(&&TRACK864_BEGIN, &&TRACK864_END);
TRACK864_END:   __asm__ __volatile__ ("nop;");
return ((Bool)1);
}
   ungetc ( c, f );
   return ((Bool)0);
}
BZFILE* BZ2_bzWriteOpen
                    ( int* bzerror,
                      FILE* f,
                      int blockSize100k,
                      int verbosity,
                      int workFactor )
{
   Int32 ret;
   bzFile* bzf = ((void *)0);
   { if (bzerror != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK865_BEGIN: track(&&TRACK865_BEGIN, &&TRACK865_END);
TRACK865_END:   __asm__ __volatile__ ("nop;");
*bzerror = 0;
} if (bzf != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK866_BEGIN: track(&&TRACK866_BEGIN, &&TRACK866_END);
TRACK866_END:   __asm__ __volatile__ ("nop;");
bzf->lastErr = 0;
} };
   if (f == ((void *)0) ||
       (blockSize100k < 1 || blockSize100k > 9) ||
       (workFactor < 0 || workFactor > 250) ||
       (verbosity < 0 || verbosity > 4))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK869_BEGIN: track(&&TRACK869_BEGIN, &&TRACK869_END);
  TRACK869_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK867_BEGIN: track(&&TRACK867_BEGIN, &&TRACK867_END);
  TRACK867_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-2);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK868_BEGIN: track(&&TRACK868_BEGIN, &&TRACK868_END);
  TRACK868_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-2);
  } }; return ((void *)0);
};
   if (ferror(f))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK872_BEGIN: track(&&TRACK872_BEGIN, &&TRACK872_END);
  TRACK872_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK870_BEGIN: track(&&TRACK870_BEGIN, &&TRACK870_END);
  TRACK870_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-6);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK871_BEGIN: track(&&TRACK871_BEGIN, &&TRACK871_END);
  TRACK871_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-6);
  } }; return ((void *)0);
};
   bzf = malloc ( sizeof(bzFile) );
   if (bzf == ((void *)0))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK875_BEGIN: track(&&TRACK875_BEGIN, &&TRACK875_END);
  TRACK875_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK873_BEGIN: track(&&TRACK873_BEGIN, &&TRACK873_END);
  TRACK873_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-3);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK874_BEGIN: track(&&TRACK874_BEGIN, &&TRACK874_END);
  TRACK874_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-3);
  } }; return ((void *)0);
};
   { if (bzerror != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK876_BEGIN: track(&&TRACK876_BEGIN, &&TRACK876_END);
TRACK876_END:   __asm__ __volatile__ ("nop;");
*bzerror = 0;
} if (bzf != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK877_BEGIN: track(&&TRACK877_BEGIN, &&TRACK877_END);
TRACK877_END:   __asm__ __volatile__ ("nop;");
bzf->lastErr = 0;
} };
   bzf->initialisedOk = ((Bool)0);
   bzf->bufN = 0;
   bzf->handle = f;
   bzf->writing = ((Bool)1);
   bzf->strm.bzalloc = ((void *)0);
   bzf->strm.bzfree = ((void *)0);
   bzf->strm.opaque = ((void *)0);
   if (workFactor == 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK878_BEGIN: track(&&TRACK878_BEGIN, &&TRACK878_END);
TRACK878_END:   __asm__ __volatile__ ("nop;");
workFactor = 30;
}
   ret = BZ2_bzCompressInit ( &(bzf->strm), blockSize100k,
                              verbosity, workFactor );
   if (ret != 0)
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK881_BEGIN: track(&&TRACK881_BEGIN, &&TRACK881_END);
  TRACK881_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK879_BEGIN: track(&&TRACK879_BEGIN, &&TRACK879_END);
  TRACK879_END:   __asm__ __volatile__ ("nop;");
  *bzerror = ret;
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK880_BEGIN: track(&&TRACK880_BEGIN, &&TRACK880_END);
  TRACK880_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = ret;
  } }; free(bzf); return ((void *)0);
};
   bzf->strm.avail_in = 0;
   bzf->initialisedOk = ((Bool)1);
   return bzf;
}
void BZ2_bzWrite
             ( int* bzerror,
               BZFILE* b,
               void* buf,
               int len )
{
   Int32 n, n2, ret;
   bzFile* bzf = (bzFile*)b;
   { if (bzerror != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK882_BEGIN: track(&&TRACK882_BEGIN, &&TRACK882_END);
TRACK882_END:   __asm__ __volatile__ ("nop;");
*bzerror = 0;
} if (bzf != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK883_BEGIN: track(&&TRACK883_BEGIN, &&TRACK883_END);
TRACK883_END:   __asm__ __volatile__ ("nop;");
bzf->lastErr = 0;
} };
   if (bzf == ((void *)0) || buf == ((void *)0) || len < 0)
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK886_BEGIN: track(&&TRACK886_BEGIN, &&TRACK886_END);
  TRACK886_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK884_BEGIN: track(&&TRACK884_BEGIN, &&TRACK884_END);
  TRACK884_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-2);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK885_BEGIN: track(&&TRACK885_BEGIN, &&TRACK885_END);
  TRACK885_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-2);
  } }; return;
};
   if (!(bzf->writing))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK889_BEGIN: track(&&TRACK889_BEGIN, &&TRACK889_END);
  TRACK889_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK887_BEGIN: track(&&TRACK887_BEGIN, &&TRACK887_END);
  TRACK887_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-1);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK888_BEGIN: track(&&TRACK888_BEGIN, &&TRACK888_END);
  TRACK888_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-1);
  } }; return;
};
   if (ferror(bzf->handle))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK892_BEGIN: track(&&TRACK892_BEGIN, &&TRACK892_END);
  TRACK892_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK890_BEGIN: track(&&TRACK890_BEGIN, &&TRACK890_END);
  TRACK890_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-6);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK891_BEGIN: track(&&TRACK891_BEGIN, &&TRACK891_END);
  TRACK891_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-6);
  } }; return;
};
   if (len == 0)
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK895_BEGIN: track(&&TRACK895_BEGIN, &&TRACK895_END);
  TRACK895_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK893_BEGIN: track(&&TRACK893_BEGIN, &&TRACK893_END);
  TRACK893_END:   __asm__ __volatile__ ("nop;");
  *bzerror = 0;
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK894_BEGIN: track(&&TRACK894_BEGIN, &&TRACK894_END);
  TRACK894_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = 0;
  } }; return;
};
   bzf->strm.avail_in = len;
   bzf->strm.next_in = buf;
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK906_BEGIN: track(&&TRACK906_BEGIN, &&TRACK906_END);
  TRACK906_END:   __asm__ __volatile__ ("nop;");
  bzf->strm.avail_out = 5000;
        bzf->strm.next_out = bzf->buf;
        ret = BZ2_bzCompress ( &(bzf->strm), 0 );
        if (ret != 1)
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK898_BEGIN: track(&&TRACK898_BEGIN, &&TRACK898_END);
    TRACK898_END:   __asm__ __volatile__ ("nop;");
    { if (bzerror != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK896_BEGIN: track(&&TRACK896_BEGIN, &&TRACK896_END);
    TRACK896_END:   __asm__ __volatile__ ("nop;");
    *bzerror = ret;
    } if (bzf != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK897_BEGIN: track(&&TRACK897_BEGIN, &&TRACK897_END);
    TRACK897_END:   __asm__ __volatile__ ("nop;");
    bzf->lastErr = ret;
    } }; return;
  };
        if (bzf->strm.avail_out < 5000) {
    						   __asm__ __volatile__ ("nop;");
    TRACK902_BEGIN: track(&&TRACK902_BEGIN, &&TRACK902_END);
    TRACK902_END:   __asm__ __volatile__ ("nop;");
    n = 5000 - bzf->strm.avail_out;
             n2 = fwrite ( (void*)(bzf->buf), sizeof(UChar),
                           n, bzf->handle );
             if (n != n2 || ferror(bzf->handle))
                {
      						   __asm__ __volatile__ ("nop;");
      TRACK901_BEGIN: track(&&TRACK901_BEGIN, &&TRACK901_END);
      TRACK901_END:   __asm__ __volatile__ ("nop;");
      { if (bzerror != ((void *)0))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK899_BEGIN: track(&&TRACK899_BEGIN, &&TRACK899_END);
      TRACK899_END:   __asm__ __volatile__ ("nop;");
      *bzerror = (-6);
      } if (bzf != ((void *)0))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK900_BEGIN: track(&&TRACK900_BEGIN, &&TRACK900_END);
      TRACK900_END:   __asm__ __volatile__ ("nop;");
      bzf->lastErr = (-6);
      } }; return;
    };
  }
        if (bzf->strm.avail_in == 0)
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK905_BEGIN: track(&&TRACK905_BEGIN, &&TRACK905_END);
    TRACK905_END:   __asm__ __volatile__ ("nop;");
    { if (bzerror != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK903_BEGIN: track(&&TRACK903_BEGIN, &&TRACK903_END);
    TRACK903_END:   __asm__ __volatile__ ("nop;");
    *bzerror = 0;
    } if (bzf != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK904_BEGIN: track(&&TRACK904_BEGIN, &&TRACK904_END);
    TRACK904_END:   __asm__ __volatile__ ("nop;");
    bzf->lastErr = 0;
    } }; return;
  };
}
}
void BZ2_bzWriteClose
                  ( int* bzerror,
                    BZFILE* b,
                    int abandon,
                    unsigned int* nbytes_in,
                    unsigned int* nbytes_out )
{
   BZ2_bzWriteClose64 ( bzerror, b, abandon,
                        nbytes_in, ((void *)0), nbytes_out, ((void *)0) );
}
void BZ2_bzWriteClose64
                  ( int* bzerror,
                    BZFILE* b,
                    int abandon,
                    unsigned int* nbytes_in_lo32,
                    unsigned int* nbytes_in_hi32,
                    unsigned int* nbytes_out_lo32,
                    unsigned int* nbytes_out_hi32 )
{
   Int32 n, n2, ret;
   bzFile* bzf = (bzFile*)b;
   if (bzf == ((void *)0))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK909_BEGIN: track(&&TRACK909_BEGIN, &&TRACK909_END);
  TRACK909_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK907_BEGIN: track(&&TRACK907_BEGIN, &&TRACK907_END);
  TRACK907_END:   __asm__ __volatile__ ("nop;");
  *bzerror = 0;
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK908_BEGIN: track(&&TRACK908_BEGIN, &&TRACK908_END);
  TRACK908_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = 0;
  } }; return;
};
   if (!(bzf->writing))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK912_BEGIN: track(&&TRACK912_BEGIN, &&TRACK912_END);
  TRACK912_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK910_BEGIN: track(&&TRACK910_BEGIN, &&TRACK910_END);
  TRACK910_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-1);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK911_BEGIN: track(&&TRACK911_BEGIN, &&TRACK911_END);
  TRACK911_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-1);
  } }; return;
};
   if (ferror(bzf->handle))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK915_BEGIN: track(&&TRACK915_BEGIN, &&TRACK915_END);
  TRACK915_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK913_BEGIN: track(&&TRACK913_BEGIN, &&TRACK913_END);
  TRACK913_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-6);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK914_BEGIN: track(&&TRACK914_BEGIN, &&TRACK914_END);
  TRACK914_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-6);
  } }; return;
};
   if (nbytes_in_lo32 != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK916_BEGIN: track(&&TRACK916_BEGIN, &&TRACK916_END);
TRACK916_END:   __asm__ __volatile__ ("nop;");
*nbytes_in_lo32 = 0;
}
   if (nbytes_in_hi32 != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK917_BEGIN: track(&&TRACK917_BEGIN, &&TRACK917_END);
TRACK917_END:   __asm__ __volatile__ ("nop;");
*nbytes_in_hi32 = 0;
}
   if (nbytes_out_lo32 != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK918_BEGIN: track(&&TRACK918_BEGIN, &&TRACK918_END);
TRACK918_END:   __asm__ __volatile__ ("nop;");
*nbytes_out_lo32 = 0;
}
   if (nbytes_out_hi32 != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK919_BEGIN: track(&&TRACK919_BEGIN, &&TRACK919_END);
TRACK919_END:   __asm__ __volatile__ ("nop;");
*nbytes_out_hi32 = 0;
}
   if ((!abandon) && bzf->lastErr == 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK929_BEGIN: track(&&TRACK929_BEGIN, &&TRACK929_END);
  TRACK929_END:   __asm__ __volatile__ ("nop;");
  while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK928_BEGIN: track(&&TRACK928_BEGIN, &&TRACK928_END);
    TRACK928_END:   __asm__ __volatile__ ("nop;");
    bzf->strm.avail_out = 5000;
             bzf->strm.next_out = bzf->buf;
             ret = BZ2_bzCompress ( &(bzf->strm), 2 );
             if (ret != 3 && ret != 4)
                {
      						   __asm__ __volatile__ ("nop;");
      TRACK922_BEGIN: track(&&TRACK922_BEGIN, &&TRACK922_END);
      TRACK922_END:   __asm__ __volatile__ ("nop;");
      { if (bzerror != ((void *)0))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK920_BEGIN: track(&&TRACK920_BEGIN, &&TRACK920_END);
      TRACK920_END:   __asm__ __volatile__ ("nop;");
      *bzerror = ret;
      } if (bzf != ((void *)0))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK921_BEGIN: track(&&TRACK921_BEGIN, &&TRACK921_END);
      TRACK921_END:   __asm__ __volatile__ ("nop;");
      bzf->lastErr = ret;
      } }; return;
    };
             if (bzf->strm.avail_out < 5000) {
      						   __asm__ __volatile__ ("nop;");
      TRACK926_BEGIN: track(&&TRACK926_BEGIN, &&TRACK926_END);
      TRACK926_END:   __asm__ __volatile__ ("nop;");
      n = 5000 - bzf->strm.avail_out;
                  n2 = fwrite ( (void*)(bzf->buf), sizeof(UChar),
                                n, bzf->handle );
                  if (n != n2 || ferror(bzf->handle))
                     {
        						   __asm__ __volatile__ ("nop;");
        TRACK925_BEGIN: track(&&TRACK925_BEGIN, &&TRACK925_END);
        TRACK925_END:   __asm__ __volatile__ ("nop;");
        { if (bzerror != ((void *)0))  {
        						   __asm__ __volatile__ ("nop;");
        TRACK923_BEGIN: track(&&TRACK923_BEGIN, &&TRACK923_END);
        TRACK923_END:   __asm__ __volatile__ ("nop;");
        *bzerror = (-6);
        } if (bzf != ((void *)0))  {
        						   __asm__ __volatile__ ("nop;");
        TRACK924_BEGIN: track(&&TRACK924_BEGIN, &&TRACK924_END);
        TRACK924_END:   __asm__ __volatile__ ("nop;");
        bzf->lastErr = (-6);
        } }; return;
      };
    }
             if (ret == 4)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK927_BEGIN: track(&&TRACK927_BEGIN, &&TRACK927_END);
    TRACK927_END:   __asm__ __volatile__ ("nop;");
    break;
    }
  }
}
   if ( !abandon && !ferror ( bzf->handle ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK933_BEGIN: track(&&TRACK933_BEGIN, &&TRACK933_END);
  TRACK933_END:   __asm__ __volatile__ ("nop;");
  fflush ( bzf->handle );
        if (ferror(bzf->handle))
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK932_BEGIN: track(&&TRACK932_BEGIN, &&TRACK932_END);
    TRACK932_END:   __asm__ __volatile__ ("nop;");
    { if (bzerror != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK930_BEGIN: track(&&TRACK930_BEGIN, &&TRACK930_END);
    TRACK930_END:   __asm__ __volatile__ ("nop;");
    *bzerror = (-6);
    } if (bzf != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK931_BEGIN: track(&&TRACK931_BEGIN, &&TRACK931_END);
    TRACK931_END:   __asm__ __volatile__ ("nop;");
    bzf->lastErr = (-6);
    } }; return;
  };
}
   if (nbytes_in_lo32 != ((void *)0))
       {
						   __asm__ __volatile__ ("nop;");
TRACK934_BEGIN: track(&&TRACK934_BEGIN, &&TRACK934_END);
TRACK934_END:   __asm__ __volatile__ ("nop;");
*nbytes_in_lo32 = bzf->strm.total_in_lo32;
}
   if (nbytes_in_hi32 != ((void *)0))
       {
						   __asm__ __volatile__ ("nop;");
TRACK935_BEGIN: track(&&TRACK935_BEGIN, &&TRACK935_END);
TRACK935_END:   __asm__ __volatile__ ("nop;");
*nbytes_in_hi32 = bzf->strm.total_in_hi32;
}
   if (nbytes_out_lo32 != ((void *)0))
       {
						   __asm__ __volatile__ ("nop;");
TRACK936_BEGIN: track(&&TRACK936_BEGIN, &&TRACK936_END);
TRACK936_END:   __asm__ __volatile__ ("nop;");
*nbytes_out_lo32 = bzf->strm.total_out_lo32;
}
   if (nbytes_out_hi32 != ((void *)0))
       {
						   __asm__ __volatile__ ("nop;");
TRACK937_BEGIN: track(&&TRACK937_BEGIN, &&TRACK937_END);
TRACK937_END:   __asm__ __volatile__ ("nop;");
*nbytes_out_hi32 = bzf->strm.total_out_hi32;
}
   { if (bzerror != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK938_BEGIN: track(&&TRACK938_BEGIN, &&TRACK938_END);
TRACK938_END:   __asm__ __volatile__ ("nop;");
*bzerror = 0;
} if (bzf != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK939_BEGIN: track(&&TRACK939_BEGIN, &&TRACK939_END);
TRACK939_END:   __asm__ __volatile__ ("nop;");
bzf->lastErr = 0;
} };
   BZ2_bzCompressEnd ( &(bzf->strm) );
   free ( bzf );
}
BZFILE* BZ2_bzReadOpen
                   ( int* bzerror,
                     FILE* f,
                     int verbosity,
                     int small,
                     void* unused,
                     int nUnused )
{
   bzFile* bzf = ((void *)0);
   int ret;
   { if (bzerror != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK940_BEGIN: track(&&TRACK940_BEGIN, &&TRACK940_END);
TRACK940_END:   __asm__ __volatile__ ("nop;");
*bzerror = 0;
} if (bzf != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK941_BEGIN: track(&&TRACK941_BEGIN, &&TRACK941_END);
TRACK941_END:   __asm__ __volatile__ ("nop;");
bzf->lastErr = 0;
} };
   if (f == ((void *)0) ||
       (small != 0 && small != 1) ||
       (verbosity < 0 || verbosity > 4) ||
       (unused == ((void *)0) && nUnused != 0) ||
       (unused != ((void *)0) && (nUnused < 0 || nUnused > 5000)))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK944_BEGIN: track(&&TRACK944_BEGIN, &&TRACK944_END);
  TRACK944_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK942_BEGIN: track(&&TRACK942_BEGIN, &&TRACK942_END);
  TRACK942_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-2);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK943_BEGIN: track(&&TRACK943_BEGIN, &&TRACK943_END);
  TRACK943_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-2);
  } }; return ((void *)0);
};
   if (ferror(f))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK947_BEGIN: track(&&TRACK947_BEGIN, &&TRACK947_END);
  TRACK947_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK945_BEGIN: track(&&TRACK945_BEGIN, &&TRACK945_END);
  TRACK945_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-6);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK946_BEGIN: track(&&TRACK946_BEGIN, &&TRACK946_END);
  TRACK946_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-6);
  } }; return ((void *)0);
};
   bzf = malloc ( sizeof(bzFile) );
   if (bzf == ((void *)0))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK950_BEGIN: track(&&TRACK950_BEGIN, &&TRACK950_END);
  TRACK950_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK948_BEGIN: track(&&TRACK948_BEGIN, &&TRACK948_END);
  TRACK948_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-3);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK949_BEGIN: track(&&TRACK949_BEGIN, &&TRACK949_END);
  TRACK949_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-3);
  } }; return ((void *)0);
};
   { if (bzerror != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK951_BEGIN: track(&&TRACK951_BEGIN, &&TRACK951_END);
TRACK951_END:   __asm__ __volatile__ ("nop;");
*bzerror = 0;
} if (bzf != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK952_BEGIN: track(&&TRACK952_BEGIN, &&TRACK952_END);
TRACK952_END:   __asm__ __volatile__ ("nop;");
bzf->lastErr = 0;
} };
   bzf->initialisedOk = ((Bool)0);
   bzf->handle = f;
   bzf->bufN = 0;
   bzf->writing = ((Bool)0);
   bzf->strm.bzalloc = ((void *)0);
   bzf->strm.bzfree = ((void *)0);
   bzf->strm.opaque = ((void *)0);
   while (nUnused > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK953_BEGIN: track(&&TRACK953_BEGIN, &&TRACK953_END);
  TRACK953_END:   __asm__ __volatile__ ("nop;");
  bzf->buf[bzf->bufN] = *((UChar*)(unused)); bzf->bufN++;
        unused = ((void*)( 1 + ((UChar*)(unused)) ));
        nUnused--;
}
   ret = BZ2_bzDecompressInit ( &(bzf->strm), verbosity, small );
   if (ret != 0)
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK956_BEGIN: track(&&TRACK956_BEGIN, &&TRACK956_END);
  TRACK956_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK954_BEGIN: track(&&TRACK954_BEGIN, &&TRACK954_END);
  TRACK954_END:   __asm__ __volatile__ ("nop;");
  *bzerror = ret;
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK955_BEGIN: track(&&TRACK955_BEGIN, &&TRACK955_END);
  TRACK955_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = ret;
  } }; free(bzf); return ((void *)0);
};
   bzf->strm.avail_in = bzf->bufN;
   bzf->strm.next_in = bzf->buf;
   bzf->initialisedOk = ((Bool)1);
   return bzf;
}
void BZ2_bzReadClose ( int *bzerror, BZFILE *b )
{
   bzFile* bzf = (bzFile*)b;
   { if (bzerror != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK957_BEGIN: track(&&TRACK957_BEGIN, &&TRACK957_END);
TRACK957_END:   __asm__ __volatile__ ("nop;");
*bzerror = 0;
} if (bzf != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK958_BEGIN: track(&&TRACK958_BEGIN, &&TRACK958_END);
TRACK958_END:   __asm__ __volatile__ ("nop;");
bzf->lastErr = 0;
} };
   if (bzf == ((void *)0))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK961_BEGIN: track(&&TRACK961_BEGIN, &&TRACK961_END);
  TRACK961_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK959_BEGIN: track(&&TRACK959_BEGIN, &&TRACK959_END);
  TRACK959_END:   __asm__ __volatile__ ("nop;");
  *bzerror = 0;
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK960_BEGIN: track(&&TRACK960_BEGIN, &&TRACK960_END);
  TRACK960_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = 0;
  } }; return;
};
   if (bzf->writing)
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK964_BEGIN: track(&&TRACK964_BEGIN, &&TRACK964_END);
  TRACK964_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK962_BEGIN: track(&&TRACK962_BEGIN, &&TRACK962_END);
  TRACK962_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-1);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK963_BEGIN: track(&&TRACK963_BEGIN, &&TRACK963_END);
  TRACK963_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-1);
  } }; return;
};
   if (bzf->initialisedOk)
       {
						   __asm__ __volatile__ ("nop;");
TRACK965_BEGIN: track(&&TRACK965_BEGIN, &&TRACK965_END);
TRACK965_END:   __asm__ __volatile__ ("nop;");
(void)BZ2_bzDecompressEnd ( &(bzf->strm) );
}
   free ( bzf );
}
int BZ2_bzRead
           ( int* bzerror,
             BZFILE* b,
             void* buf,
             int len )
{
   Int32 n, ret;
   bzFile* bzf = (bzFile*)b;
   { if (bzerror != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK966_BEGIN: track(&&TRACK966_BEGIN, &&TRACK966_END);
TRACK966_END:   __asm__ __volatile__ ("nop;");
*bzerror = 0;
} if (bzf != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK967_BEGIN: track(&&TRACK967_BEGIN, &&TRACK967_END);
TRACK967_END:   __asm__ __volatile__ ("nop;");
bzf->lastErr = 0;
} };
   if (bzf == ((void *)0) || buf == ((void *)0) || len < 0)
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK970_BEGIN: track(&&TRACK970_BEGIN, &&TRACK970_END);
  TRACK970_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK968_BEGIN: track(&&TRACK968_BEGIN, &&TRACK968_END);
  TRACK968_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-2);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK969_BEGIN: track(&&TRACK969_BEGIN, &&TRACK969_END);
  TRACK969_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-2);
  } }; return 0;
};
   if (bzf->writing)
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK973_BEGIN: track(&&TRACK973_BEGIN, &&TRACK973_END);
  TRACK973_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK971_BEGIN: track(&&TRACK971_BEGIN, &&TRACK971_END);
  TRACK971_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-1);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK972_BEGIN: track(&&TRACK972_BEGIN, &&TRACK972_END);
  TRACK972_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-1);
  } }; return 0;
};
   if (len == 0)
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK976_BEGIN: track(&&TRACK976_BEGIN, &&TRACK976_END);
  TRACK976_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK974_BEGIN: track(&&TRACK974_BEGIN, &&TRACK974_END);
  TRACK974_END:   __asm__ __volatile__ ("nop;");
  *bzerror = 0;
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK975_BEGIN: track(&&TRACK975_BEGIN, &&TRACK975_END);
  TRACK975_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = 0;
  } }; return 0;
};
   bzf->strm.avail_out = len;
   bzf->strm.next_out = buf;
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK996_BEGIN: track(&&TRACK996_BEGIN, &&TRACK996_END);
  TRACK996_END:   __asm__ __volatile__ ("nop;");
  if (ferror(bzf->handle))
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK979_BEGIN: track(&&TRACK979_BEGIN, &&TRACK979_END);
    TRACK979_END:   __asm__ __volatile__ ("nop;");
    { if (bzerror != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK977_BEGIN: track(&&TRACK977_BEGIN, &&TRACK977_END);
    TRACK977_END:   __asm__ __volatile__ ("nop;");
    *bzerror = (-6);
    } if (bzf != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK978_BEGIN: track(&&TRACK978_BEGIN, &&TRACK978_END);
    TRACK978_END:   __asm__ __volatile__ ("nop;");
    bzf->lastErr = (-6);
    } }; return 0;
  };
        if (bzf->strm.avail_in == 0 && !myfeof(bzf->handle)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK983_BEGIN: track(&&TRACK983_BEGIN, &&TRACK983_END);
    TRACK983_END:   __asm__ __volatile__ ("nop;");
    n = fread ( bzf->buf, sizeof(UChar),
                         5000, bzf->handle );
             if (ferror(bzf->handle))
                {
      						   __asm__ __volatile__ ("nop;");
      TRACK982_BEGIN: track(&&TRACK982_BEGIN, &&TRACK982_END);
      TRACK982_END:   __asm__ __volatile__ ("nop;");
      { if (bzerror != ((void *)0))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK980_BEGIN: track(&&TRACK980_BEGIN, &&TRACK980_END);
      TRACK980_END:   __asm__ __volatile__ ("nop;");
      *bzerror = (-6);
      } if (bzf != ((void *)0))  {
      						   __asm__ __volatile__ ("nop;");
      TRACK981_BEGIN: track(&&TRACK981_BEGIN, &&TRACK981_END);
      TRACK981_END:   __asm__ __volatile__ ("nop;");
      bzf->lastErr = (-6);
      } }; return 0;
    };
             bzf->bufN = n;
             bzf->strm.avail_in = bzf->bufN;
             bzf->strm.next_in = bzf->buf;
  }
        ret = BZ2_bzDecompress ( &(bzf->strm) );
        if (ret != 0 && ret != 4)
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK986_BEGIN: track(&&TRACK986_BEGIN, &&TRACK986_END);
    TRACK986_END:   __asm__ __volatile__ ("nop;");
    { if (bzerror != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK984_BEGIN: track(&&TRACK984_BEGIN, &&TRACK984_END);
    TRACK984_END:   __asm__ __volatile__ ("nop;");
    *bzerror = ret;
    } if (bzf != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK985_BEGIN: track(&&TRACK985_BEGIN, &&TRACK985_END);
    TRACK985_END:   __asm__ __volatile__ ("nop;");
    bzf->lastErr = ret;
    } }; return 0;
  };
        if (ret == 0 && myfeof(bzf->handle) &&
            bzf->strm.avail_in == 0 && bzf->strm.avail_out > 0)
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK989_BEGIN: track(&&TRACK989_BEGIN, &&TRACK989_END);
    TRACK989_END:   __asm__ __volatile__ ("nop;");
    { if (bzerror != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK987_BEGIN: track(&&TRACK987_BEGIN, &&TRACK987_END);
    TRACK987_END:   __asm__ __volatile__ ("nop;");
    *bzerror = (-7);
    } if (bzf != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK988_BEGIN: track(&&TRACK988_BEGIN, &&TRACK988_END);
    TRACK988_END:   __asm__ __volatile__ ("nop;");
    bzf->lastErr = (-7);
    } }; return 0;
  };
        if (ret == 4)
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK992_BEGIN: track(&&TRACK992_BEGIN, &&TRACK992_END);
    TRACK992_END:   __asm__ __volatile__ ("nop;");
    { if (bzerror != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK990_BEGIN: track(&&TRACK990_BEGIN, &&TRACK990_END);
    TRACK990_END:   __asm__ __volatile__ ("nop;");
    *bzerror = 4;
    } if (bzf != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK991_BEGIN: track(&&TRACK991_BEGIN, &&TRACK991_END);
    TRACK991_END:   __asm__ __volatile__ ("nop;");
    bzf->lastErr = 4;
    } };
               return len - bzf->strm.avail_out;
  };
        if (bzf->strm.avail_out == 0)
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK995_BEGIN: track(&&TRACK995_BEGIN, &&TRACK995_END);
    TRACK995_END:   __asm__ __volatile__ ("nop;");
    { if (bzerror != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK993_BEGIN: track(&&TRACK993_BEGIN, &&TRACK993_END);
    TRACK993_END:   __asm__ __volatile__ ("nop;");
    *bzerror = 0;
    } if (bzf != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK994_BEGIN: track(&&TRACK994_BEGIN, &&TRACK994_END);
    TRACK994_END:   __asm__ __volatile__ ("nop;");
    bzf->lastErr = 0;
    } }; return len;
  };
}
   return 0;
}
void BZ2_bzReadGetUnused
                     ( int* bzerror,
                       BZFILE* b,
                       void** unused,
                       int* nUnused )
{
   bzFile* bzf = (bzFile*)b;
   if (bzf == ((void *)0))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK999_BEGIN: track(&&TRACK999_BEGIN, &&TRACK999_END);
  TRACK999_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK997_BEGIN: track(&&TRACK997_BEGIN, &&TRACK997_END);
  TRACK997_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-2);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK998_BEGIN: track(&&TRACK998_BEGIN, &&TRACK998_END);
  TRACK998_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-2);
  } }; return;
};
   if (bzf->lastErr != 4)
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK1002_BEGIN: track(&&TRACK1002_BEGIN, &&TRACK1002_END);
  TRACK1002_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1000_BEGIN: track(&&TRACK1000_BEGIN, &&TRACK1000_END);
  TRACK1000_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-1);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1001_BEGIN: track(&&TRACK1001_BEGIN, &&TRACK1001_END);
  TRACK1001_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-1);
  } }; return;
};
   if (unused == ((void *)0) || nUnused == ((void *)0))
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK1005_BEGIN: track(&&TRACK1005_BEGIN, &&TRACK1005_END);
  TRACK1005_END:   __asm__ __volatile__ ("nop;");
  { if (bzerror != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1003_BEGIN: track(&&TRACK1003_BEGIN, &&TRACK1003_END);
  TRACK1003_END:   __asm__ __volatile__ ("nop;");
  *bzerror = (-2);
  } if (bzf != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1004_BEGIN: track(&&TRACK1004_BEGIN, &&TRACK1004_END);
  TRACK1004_END:   __asm__ __volatile__ ("nop;");
  bzf->lastErr = (-2);
  } }; return;
};
   { if (bzerror != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK1006_BEGIN: track(&&TRACK1006_BEGIN, &&TRACK1006_END);
TRACK1006_END:   __asm__ __volatile__ ("nop;");
*bzerror = 0;
} if (bzf != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK1007_BEGIN: track(&&TRACK1007_BEGIN, &&TRACK1007_END);
TRACK1007_END:   __asm__ __volatile__ ("nop;");
bzf->lastErr = 0;
} };
   *nUnused = bzf->strm.avail_in;
   *unused = bzf->strm.next_in;
}
int BZ2_bzBuffToBuffCompress
                         ( char* dest,
                           unsigned int* destLen,
                           char* source,
                           unsigned int sourceLen,
                           int blockSize100k,
                           int verbosity,
                           int workFactor )
{
   bz_stream strm;
   int ret;
   if (dest == ((void *)0) || destLen == ((void *)0) ||
       source == ((void *)0) ||
       blockSize100k < 1 || blockSize100k > 9 ||
       verbosity < 0 || verbosity > 4 ||
       workFactor < 0 || workFactor > 250)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1008_BEGIN: track(&&TRACK1008_BEGIN, &&TRACK1008_END);
TRACK1008_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   if (workFactor == 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1009_BEGIN: track(&&TRACK1009_BEGIN, &&TRACK1009_END);
TRACK1009_END:   __asm__ __volatile__ ("nop;");
workFactor = 30;
}
   strm.bzalloc = ((void *)0);
   strm.bzfree = ((void *)0);
   strm.opaque = ((void *)0);
   ret = BZ2_bzCompressInit ( &strm, blockSize100k,
                              verbosity, workFactor );
   if (ret != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1010_BEGIN: track(&&TRACK1010_BEGIN, &&TRACK1010_END);
TRACK1010_END:   __asm__ __volatile__ ("nop;");
return ret;
}
   strm.next_in = source;
   strm.next_out = dest;
   strm.avail_in = sourceLen;
   strm.avail_out = *destLen;
   ret = BZ2_bzCompress ( &strm, 2 );
   if (ret == 3)  {
						   __asm__ __volatile__ ("nop;");
TRACK1011_BEGIN: track(&&TRACK1011_BEGIN, &&TRACK1011_END);
TRACK1011_END:   __asm__ __volatile__ ("nop;");
goto output_overflow;
}
   if (ret != 4)  {
						   __asm__ __volatile__ ("nop;");
TRACK1012_BEGIN: track(&&TRACK1012_BEGIN, &&TRACK1012_END);
TRACK1012_END:   __asm__ __volatile__ ("nop;");
goto errhandler;
}
   *destLen -= strm.avail_out;
   BZ2_bzCompressEnd ( &strm );
   return 0;
   output_overflow:
   BZ2_bzCompressEnd ( &strm );
   return (-8);
   errhandler:
   BZ2_bzCompressEnd ( &strm );
   return ret;
}
int BZ2_bzBuffToBuffDecompress
                           ( char* dest,
                             unsigned int* destLen,
                             char* source,
                             unsigned int sourceLen,
                             int small,
                             int verbosity )
{
   bz_stream strm;
   int ret;
   if (dest == ((void *)0) || destLen == ((void *)0) ||
       source == ((void *)0) ||
       (small != 0 && small != 1) ||
       verbosity < 0 || verbosity > 4)
           {
						   __asm__ __volatile__ ("nop;");
TRACK1013_BEGIN: track(&&TRACK1013_BEGIN, &&TRACK1013_END);
TRACK1013_END:   __asm__ __volatile__ ("nop;");
return (-2);
}
   strm.bzalloc = ((void *)0);
   strm.bzfree = ((void *)0);
   strm.opaque = ((void *)0);
   ret = BZ2_bzDecompressInit ( &strm, verbosity, small );
   if (ret != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1014_BEGIN: track(&&TRACK1014_BEGIN, &&TRACK1014_END);
TRACK1014_END:   __asm__ __volatile__ ("nop;");
return ret;
}
   strm.next_in = source;
   strm.next_out = dest;
   strm.avail_in = sourceLen;
   strm.avail_out = *destLen;
   ret = BZ2_bzDecompress ( &strm );
   if (ret == 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1015_BEGIN: track(&&TRACK1015_BEGIN, &&TRACK1015_END);
TRACK1015_END:   __asm__ __volatile__ ("nop;");
goto output_overflow_or_eof;
}
   if (ret != 4)  {
						   __asm__ __volatile__ ("nop;");
TRACK1016_BEGIN: track(&&TRACK1016_BEGIN, &&TRACK1016_END);
TRACK1016_END:   __asm__ __volatile__ ("nop;");
goto errhandler;
}
   *destLen -= strm.avail_out;
   BZ2_bzDecompressEnd ( &strm );
   return 0;
   output_overflow_or_eof:
   if (strm.avail_out > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1017_BEGIN: track(&&TRACK1017_BEGIN, &&TRACK1017_END);
  TRACK1017_END:   __asm__ __volatile__ ("nop;");
  BZ2_bzDecompressEnd ( &strm );
        return (-7);
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK1018_BEGIN: track(&&TRACK1018_BEGIN, &&TRACK1018_END);
  TRACK1018_END:   __asm__ __volatile__ ("nop;");
  BZ2_bzDecompressEnd ( &strm );
        return (-8);
};
   errhandler:
   BZ2_bzDecompressEnd ( &strm );
   return ret;
}
const char * BZ2_bzlibVersion(void)
{
   return "1.0.2, 30-Dec-2001";
}
static
BZFILE * bzopen_or_bzdopen
               ( const char *path,
                 int fd,
                 const char *mode,
                 int open_mode)
{
   int bzerr;
   char unused[5000];
   int blockSize100k = 9;
   int writing = 0;
   char mode2[10] = "";
   FILE *fp = ((void *)0);
   BZFILE *bzfp = ((void *)0);
   int verbosity = 0;
   int workFactor = 30;
   int smallMode = 0;
   int nUnused = 0;
   if (mode == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK1019_BEGIN: track(&&TRACK1019_BEGIN, &&TRACK1019_END);
TRACK1019_END:   __asm__ __volatile__ ("nop;");
return ((void *)0);
}
   while (*mode) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1025_BEGIN: track(&&TRACK1025_BEGIN, &&TRACK1025_END);
  TRACK1025_END:   __asm__ __volatile__ ("nop;");
  switch (*mode) {
         
    case 'r':
  							   __asm__ __volatile__ ("nop;");
  	TRACK1020_BEGIN: track(&&TRACK1020_BEGIN, &&TRACK1020_END);
  	TRACK1020_END:   __asm__ __volatile__ ("nop;");
  	writing = 0; break;
         
    case 'w':
  							   __asm__ __volatile__ ("nop;");
  	TRACK1021_BEGIN: track(&&TRACK1021_BEGIN, &&TRACK1021_END);
  	TRACK1021_END:   __asm__ __volatile__ ("nop;");
  	writing = 1; break;
         
    case 's':
  							   __asm__ __volatile__ ("nop;");
  	TRACK1022_BEGIN: track(&&TRACK1022_BEGIN, &&TRACK1022_END);
  	TRACK1022_END:   __asm__ __volatile__ ("nop;");
  	smallMode = 1; break;
         
    default:
  							   __asm__ __volatile__ ("nop;");
  	TRACK1024_BEGIN: track(&&TRACK1024_BEGIN, &&TRACK1024_END);
  	TRACK1024_END:   __asm__ __volatile__ ("nop;");
  	if (((*__ctype_b_loc ())[(int) (((int)(*mode)))] & (unsigned short int) _ISdigit)) {
  	  						   __asm__ __volatile__ ("nop;");
  	  TRACK1023_BEGIN: track(&&TRACK1023_BEGIN, &&TRACK1023_END);
  	  TRACK1023_END:   __asm__ __volatile__ ("nop;");
  	  blockSize100k = *mode-0x30;
  	}
        }
        mode++;
}
   strcat(mode2, writing ? "w" : "r" );
   strcat(mode2,"b");
   if (open_mode==0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1028_BEGIN: track(&&TRACK1028_BEGIN, &&TRACK1028_END);
  TRACK1028_END:   __asm__ __volatile__ ("nop;");
  if (path==((void *)0) || strcmp(path,"")==0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1026_BEGIN: track(&&TRACK1026_BEGIN, &&TRACK1026_END);
    TRACK1026_END:   __asm__ __volatile__ ("nop;");
    fp = (writing ? stdout : stdin);
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK1027_BEGIN: track(&&TRACK1027_BEGIN, &&TRACK1027_END);
    TRACK1027_END:   __asm__ __volatile__ ("nop;");
    fp = fopen(path,mode2);
  }
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK1029_BEGIN: track(&&TRACK1029_BEGIN, &&TRACK1029_END);
  TRACK1029_END:   __asm__ __volatile__ ("nop;");
  fp = fdopen(fd,mode2);
}
   if (fp == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK1030_BEGIN: track(&&TRACK1030_BEGIN, &&TRACK1030_END);
TRACK1030_END:   __asm__ __volatile__ ("nop;");
return ((void *)0);
}
   if (writing) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1033_BEGIN: track(&&TRACK1033_BEGIN, &&TRACK1033_END);
  TRACK1033_END:   __asm__ __volatile__ ("nop;");
  if (blockSize100k < 1)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1031_BEGIN: track(&&TRACK1031_BEGIN, &&TRACK1031_END);
  TRACK1031_END:   __asm__ __volatile__ ("nop;");
  blockSize100k = 1;
  }
        if (blockSize100k > 9)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1032_BEGIN: track(&&TRACK1032_BEGIN, &&TRACK1032_END);
  TRACK1032_END:   __asm__ __volatile__ ("nop;");
  blockSize100k = 9;
  }
        bzfp = BZ2_bzWriteOpen(&bzerr,fp,blockSize100k,
                               verbosity,workFactor);
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK1034_BEGIN: track(&&TRACK1034_BEGIN, &&TRACK1034_END);
  TRACK1034_END:   __asm__ __volatile__ ("nop;");
  bzfp = BZ2_bzReadOpen(&bzerr,fp,verbosity,smallMode,
                              unused,nUnused);
}
   if (bzfp == ((void *)0)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1036_BEGIN: track(&&TRACK1036_BEGIN, &&TRACK1036_END);
  TRACK1036_END:   __asm__ __volatile__ ("nop;");
  if (fp != stdin && fp != stdout)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1035_BEGIN: track(&&TRACK1035_BEGIN, &&TRACK1035_END);
  TRACK1035_END:   __asm__ __volatile__ ("nop;");
  fclose(fp);
  }
        return ((void *)0);
}
   return bzfp;
}
BZFILE * BZ2_bzopen
               ( const char *path,
                 const char *mode )
{
   return bzopen_or_bzdopen(path,-1,mode, 0);
}
BZFILE * BZ2_bzdopen
               ( int fd,
                 const char *mode )
{
   return bzopen_or_bzdopen(((void *)0),fd,mode, 1);
}
int BZ2_bzread (BZFILE* b, void* buf, int len )
{
   int bzerr, nread;
   if (((bzFile*)b)->lastErr == 4)  {
						   __asm__ __volatile__ ("nop;");
TRACK1037_BEGIN: track(&&TRACK1037_BEGIN, &&TRACK1037_END);
TRACK1037_END:   __asm__ __volatile__ ("nop;");
return 0;
}
   nread = BZ2_bzRead(&bzerr,b,buf,len);
   if (bzerr == 0 || bzerr == 4) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1038_BEGIN: track(&&TRACK1038_BEGIN, &&TRACK1038_END);
  TRACK1038_END:   __asm__ __volatile__ ("nop;");
  return nread;
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK1039_BEGIN: track(&&TRACK1039_BEGIN, &&TRACK1039_END);
  TRACK1039_END:   __asm__ __volatile__ ("nop;");
  return -1;
}
}
int BZ2_bzwrite (BZFILE* b, void* buf, int len )
{
   int bzerr;
   BZ2_bzWrite(&bzerr,b,buf,len);
   if(bzerr == 0){
  						   __asm__ __volatile__ ("nop;");
  TRACK1040_BEGIN: track(&&TRACK1040_BEGIN, &&TRACK1040_END);
  TRACK1040_END:   __asm__ __volatile__ ("nop;");
  return len;
}else{
  						   __asm__ __volatile__ ("nop;");
  TRACK1041_BEGIN: track(&&TRACK1041_BEGIN, &&TRACK1041_END);
  TRACK1041_END:   __asm__ __volatile__ ("nop;");
  return -1;
}
}
int BZ2_bzflush (BZFILE *b)
{
   return 0;
}
void BZ2_bzclose (BZFILE* b)
{
   int bzerr;
   FILE *fp = ((bzFile *)b)->handle;
   if (b==((void *)0)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1042_BEGIN: track(&&TRACK1042_BEGIN, &&TRACK1042_END);
  TRACK1042_END:   __asm__ __volatile__ ("nop;");
  return;
}
   if(((bzFile*)b)->writing){
  						   __asm__ __volatile__ ("nop;");
  TRACK1044_BEGIN: track(&&TRACK1044_BEGIN, &&TRACK1044_END);
  TRACK1044_END:   __asm__ __volatile__ ("nop;");
  BZ2_bzWriteClose(&bzerr,b,0,((void *)0),((void *)0));
        if(bzerr != 0){
    						   __asm__ __volatile__ ("nop;");
    TRACK1043_BEGIN: track(&&TRACK1043_BEGIN, &&TRACK1043_END);
    TRACK1043_END:   __asm__ __volatile__ ("nop;");
    BZ2_bzWriteClose(((void *)0),b,1,((void *)0),((void *)0));
  }
}else{
  						   __asm__ __volatile__ ("nop;");
  TRACK1045_BEGIN: track(&&TRACK1045_BEGIN, &&TRACK1045_END);
  TRACK1045_END:   __asm__ __volatile__ ("nop;");
  BZ2_bzReadClose(&bzerr,b);
}
   if(fp!=stdin && fp!=stdout){
  						   __asm__ __volatile__ ("nop;");
  TRACK1046_BEGIN: track(&&TRACK1046_BEGIN, &&TRACK1046_END);
  TRACK1046_END:   __asm__ __volatile__ ("nop;");
  fclose(fp);
}
}
static char *bzerrorstrings[] = {
       "OK"
      ,"SEQUENCE_ERROR"
      ,"PARAM_ERROR"
      ,"MEM_ERROR"
      ,"DATA_ERROR"
      ,"DATA_ERROR_MAGIC"
      ,"IO_ERROR"
      ,"UNEXPECTED_EOF"
      ,"OUTBUFF_FULL"
      ,"CONFIG_ERROR"
      ,"???"
      ,"???"
      ,"???"
      ,"???"
      ,"???"
      ,"???"
};
const char * BZ2_bzerror (BZFILE *b, int *errnum)
{
   int err = ((bzFile *)b)->lastErr;
   if(err>0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1047_BEGIN: track(&&TRACK1047_BEGIN, &&TRACK1047_END);
TRACK1047_END:   __asm__ __volatile__ ("nop;");
err = 0;
}
   *errnum = err;
   return bzerrorstrings[err*-1];
}


extern double acos (double __x) ; extern double __acos (double __x) ;
extern double asin (double __x) ; extern double __asin (double __x) ;
extern double atan (double __x) ; extern double __atan (double __x) ;
extern double atan2 (double __y, double __x) ; extern double __atan2 (double __y, double __x) ;
extern double cos (double __x) ; extern double __cos (double __x) ;
extern double sin (double __x) ; extern double __sin (double __x) ;
extern double tan (double __x) ; extern double __tan (double __x) ;
extern double cosh (double __x) ; extern double __cosh (double __x) ;
extern double sinh (double __x) ; extern double __sinh (double __x) ;
extern double tanh (double __x) ; extern double __tanh (double __x) ;


extern double exp (double __x) ; extern double __exp (double __x) ;
extern double frexp (double __x, int *__exponent) ; extern double __frexp (double __x, int *__exponent) ;
extern double ldexp (double __x, int __exponent) ; extern double __ldexp (double __x, int __exponent) ;
extern double log (double __x) ; extern double __log (double __x) ;
extern double log10 (double __x) ; extern double __log10 (double __x) ;
extern double modf (double __x, double *__iptr) ; extern double __modf (double __x, double *__iptr)
     ;


extern double pow (double __x, double __y) ; extern double __pow (double __x, double __y) ;
extern double sqrt (double __x) ; extern double __sqrt (double __x) ;


extern double ceil (double __x) ; extern double __ceil (double __x) ;
extern double fabs (double __x) ; extern double __fabs (double __x) ;
extern double floor (double __x) ; extern double __floor (double __x) ;
extern double fmod (double __x, double __y) ; extern double __fmod (double __x, double __y) ;
extern int __isinf (double __value) ;
extern int __finite (double __value) ;

extern int __isnan (double __value) ;



typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __pid_t pid_t;

typedef __time_t time_t;

typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef int int8_t ;
typedef int int16_t ;
typedef int int32_t ;
typedef int int64_t ;
typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;
typedef int register_t ;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;

struct flock
  {
    short int l_type;
    short int l_whence;
    __off_t l_start;
    __off_t l_len;
    __pid_t l_pid;
  };


extern int fcntl (int __fd, int __cmd, ...);
extern int open (__const char *__file, int __oflag, ...) ;
extern int creat (__const char *__file, __mode_t __mode) ;


struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };
extern int utime (__const char *__file,
    __const struct utimbuf *__file_times)
     ;


struct stat
  {
    __dev_t st_dev;
    unsigned short int __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    __time_t st_atime;
    unsigned long int st_atimensec;
    __time_t st_mtime;
    unsigned long int st_mtimensec;
    __time_t st_ctime;
    unsigned long int st_ctimensec;
    unsigned long int __unused4;
    unsigned long int __unused5;
  };
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) ;
extern int fstat (int __fd, struct stat *__buf) ;
extern int chmod (__const char *__file, __mode_t __mode)
     ;
extern __mode_t umask (__mode_t __mask) ;
extern int mkdir (__const char *__path, __mode_t __mode)
     ;
extern int mkfifo (__const char *__path, __mode_t __mode)
     ;
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     ;
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) ;
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) ;
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     ;
extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) ;
extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     ;


typedef __clock_t clock_t;


struct tms
  {
    clock_t tms_utime;
    clock_t tms_stime;
    clock_t tms_cutime;
    clock_t tms_cstime;
  };
extern clock_t times (struct tms *__buffer) ;

typedef int IntNative;
Int32 verbosity;
Bool keepInputFiles, smallMode, deleteOutputOnInterrupt;
Bool forceOverwrite, testFailsExist, unzFailsExist, noisy;
Int32 numFileNames, numFilesProcessed, blockSize100k;
Int32 exitValue;
Int32 opMode;
Int32 srcMode;
Int32 longestFileName;
Char inName [1034];
Char outName[1034];
Char tmpName[1034];
Char *progName;
Char progNameReally[1034];
FILE *outputHandleJustInCase;
Int32 workFactor;
static void panic ( Char* ) ;
static void ioError ( void ) ;
static void outOfMemory ( void ) ;
static void configError ( void ) ;
static void crcError ( void ) ;
static void cleanUpAndFail ( Int32 ) ;
static void compressedStreamEOF ( void ) ;
static void copyFileName ( Char*, Char* );
static void* myMalloc ( Int32 );
typedef
   struct { UChar b[8]; }
   UInt64;
static
void uInt64_from_UInt32s ( UInt64* n, UInt32 lo32, UInt32 hi32 )
{
   n->b[7] = (UChar)((hi32 >> 24) & 0xFF);
   n->b[6] = (UChar)((hi32 >> 16) & 0xFF);
   n->b[5] = (UChar)((hi32 >> 8) & 0xFF);
   n->b[4] = (UChar) (hi32 & 0xFF);
   n->b[3] = (UChar)((lo32 >> 24) & 0xFF);
   n->b[2] = (UChar)((lo32 >> 16) & 0xFF);
   n->b[1] = (UChar)((lo32 >> 8) & 0xFF);
   n->b[0] = (UChar) (lo32 & 0xFF);
}
static
double uInt64_to_double ( UInt64* n )
{
   Int32 i;
   double base = 1.0;
   double sum = 0.0;
   for (i = 0; i < 8; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1048_BEGIN: track(&&TRACK1048_BEGIN, &&TRACK1048_END);
  TRACK1048_END:   __asm__ __volatile__ ("nop;");
  sum += base * (double)(n->b[i]);
        base *= 256.0;
}
   return sum;
}
static
Bool uInt64_isZero ( UInt64* n )
{
   Int32 i;
   for (i = 0; i < 8; i++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1050_BEGIN: track(&&TRACK1050_BEGIN, &&TRACK1050_END);
TRACK1050_END:   __asm__ __volatile__ ("nop;");
if (n->b[i] != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1049_BEGIN: track(&&TRACK1049_BEGIN, &&TRACK1049_END);
TRACK1049_END:   __asm__ __volatile__ ("nop;");
return 0;
}
}
   return 1;
}
static
Int32 uInt64_qrm10 ( UInt64* n )
{
   UInt32 rem, tmp;
   Int32 i;
   rem = 0;
   for (i = 7; i >= 0; i--) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1051_BEGIN: track(&&TRACK1051_BEGIN, &&TRACK1051_END);
  TRACK1051_END:   __asm__ __volatile__ ("nop;");
  tmp = rem * 256 + n->b[i];
        n->b[i] = tmp / 10;
        rem = tmp % 10;
}
   return rem;
}
static
void uInt64_toAscii ( char* outbuf, UInt64* n )
{
   Int32 i, q;
   UChar buf[32];
   Int32 nBuf = 0;
   UInt64 n_copy = *n;
   do {
  						   __asm__ __volatile__ ("nop;");
  TRACK1052_BEGIN: track(&&TRACK1052_BEGIN, &&TRACK1052_END);
  TRACK1052_END:   __asm__ __volatile__ ("nop;");
  q = uInt64_qrm10 ( &n_copy );
        buf[nBuf] = q + '0';
        nBuf++;
} while (!uInt64_isZero(&n_copy));
   outbuf[nBuf] = 0;
   for (i = 0; i < nBuf; i++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1053_BEGIN: track(&&TRACK1053_BEGIN, &&TRACK1053_END);
TRACK1053_END:   __asm__ __volatile__ ("nop;");
outbuf[i] = buf[nBuf-i-1];
}
}
static
void compressStream ( FILE *stream, FILE *zStream )
{
   BZFILE* bzf = ((void *)0);
   UChar ibuf[5000];
   Int32 nIbuf;
   UInt32 nbytes_in_lo32, nbytes_in_hi32;
   UInt32 nbytes_out_lo32, nbytes_out_hi32;
   Int32 bzerr, bzerr_dummy, ret;
   ;
   ;
   if (ferror(stream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1054_BEGIN: track(&&TRACK1054_BEGIN, &&TRACK1054_END);
TRACK1054_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   if (ferror(zStream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1055_BEGIN: track(&&TRACK1055_BEGIN, &&TRACK1055_END);
TRACK1055_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   bzf = BZ2_bzWriteOpen ( &bzerr, zStream,
                           blockSize100k, verbosity, workFactor );
   if (bzerr != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1056_BEGIN: track(&&TRACK1056_BEGIN, &&TRACK1056_END);
TRACK1056_END:   __asm__ __volatile__ ("nop;");
goto errhandler;
}
   if (verbosity >= 2)  {
						   __asm__ __volatile__ ("nop;");
TRACK1057_BEGIN: track(&&TRACK1057_BEGIN, &&TRACK1057_END);
TRACK1057_END:   __asm__ __volatile__ ("nop;");
fprintf ( stderr, "\n" );
}
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1062_BEGIN: track(&&TRACK1062_BEGIN, &&TRACK1062_END);
  TRACK1062_END:   __asm__ __volatile__ ("nop;");
  if (myfeof(stream))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1058_BEGIN: track(&&TRACK1058_BEGIN, &&TRACK1058_END);
  TRACK1058_END:   __asm__ __volatile__ ("nop;");
  break;
  }
        nIbuf = fread ( ibuf, sizeof(UChar), 5000, stream );
        if (ferror(stream))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1059_BEGIN: track(&&TRACK1059_BEGIN, &&TRACK1059_END);
  TRACK1059_END:   __asm__ __volatile__ ("nop;");
  goto errhandler_io;
  }
        if (nIbuf > 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1060_BEGIN: track(&&TRACK1060_BEGIN, &&TRACK1060_END);
  TRACK1060_END:   __asm__ __volatile__ ("nop;");
  BZ2_bzWrite ( &bzerr, bzf, (void*)ibuf, nIbuf );
  }
        if (bzerr != 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1061_BEGIN: track(&&TRACK1061_BEGIN, &&TRACK1061_END);
  TRACK1061_END:   __asm__ __volatile__ ("nop;");
  goto errhandler;
  }
}
   BZ2_bzWriteClose64 ( &bzerr, bzf, 0,
                        &nbytes_in_lo32, &nbytes_in_hi32,
                        &nbytes_out_lo32, &nbytes_out_hi32 );
   if (bzerr != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1063_BEGIN: track(&&TRACK1063_BEGIN, &&TRACK1063_END);
TRACK1063_END:   __asm__ __volatile__ ("nop;");
goto errhandler;
}
   if (ferror(zStream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1064_BEGIN: track(&&TRACK1064_BEGIN, &&TRACK1064_END);
TRACK1064_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   ret = fflush ( zStream );
   if (ret == (-1))  {
						   __asm__ __volatile__ ("nop;");
TRACK1065_BEGIN: track(&&TRACK1065_BEGIN, &&TRACK1065_END);
TRACK1065_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   if (zStream != stdout) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1067_BEGIN: track(&&TRACK1067_BEGIN, &&TRACK1067_END);
  TRACK1067_END:   __asm__ __volatile__ ("nop;");
  ret = fclose ( zStream );
        outputHandleJustInCase = ((void *)0);
        if (ret == (-1))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1066_BEGIN: track(&&TRACK1066_BEGIN, &&TRACK1066_END);
  TRACK1066_END:   __asm__ __volatile__ ("nop;");
  goto errhandler_io;
  }
}
   outputHandleJustInCase = ((void *)0);
   if (ferror(stream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1068_BEGIN: track(&&TRACK1068_BEGIN, &&TRACK1068_END);
TRACK1068_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   ret = fclose ( stream );
   if (ret == (-1))  {
						   __asm__ __volatile__ ("nop;");
TRACK1069_BEGIN: track(&&TRACK1069_BEGIN, &&TRACK1069_END);
TRACK1069_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   if (verbosity >= 1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1072_BEGIN: track(&&TRACK1072_BEGIN, &&TRACK1072_END);
  TRACK1072_END:   __asm__ __volatile__ ("nop;");
  if (nbytes_in_lo32 == 0 && nbytes_in_hi32 == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1070_BEGIN: track(&&TRACK1070_BEGIN, &&TRACK1070_END);
    TRACK1070_END:   __asm__ __volatile__ ("nop;");
    fprintf ( stderr, " no data compressed.\n");
  } else {
    Char buf_nin[32], buf_nout[32];
      UInt64 nbytes_in, nbytes_out;
      double nbytes_in_d, nbytes_out_d;
    						   __asm__ __volatile__ ("nop;");
    TRACK1071_BEGIN: track(&&TRACK1071_BEGIN, &&TRACK1071_END);
    TRACK1071_END:   __asm__ __volatile__ ("nop;");
    uInt64_from_UInt32s ( &nbytes_in,
              nbytes_in_lo32, nbytes_in_hi32 );
      uInt64_from_UInt32s ( &nbytes_out,
              nbytes_out_lo32, nbytes_out_hi32 );
      nbytes_in_d = uInt64_to_double ( &nbytes_in );
      nbytes_out_d = uInt64_to_double ( &nbytes_out );
      uInt64_toAscii ( buf_nin, &nbytes_in );
      uInt64_toAscii ( buf_nout, &nbytes_out );
      fprintf ( stderr, "%6.3f:1, %6.3f bits/byte, "
         "%5.2f%% saved, %s in, %s out.\n",
         nbytes_in_d / nbytes_out_d,
         (8.0 * nbytes_out_d) / nbytes_in_d,
         100.0 * (1.0 - nbytes_out_d / nbytes_in_d),
         buf_nin,
         buf_nout
       );
  }
}
   return;
   errhandler:
   BZ2_bzWriteClose64 ( &bzerr_dummy, bzf, 1,
                        &nbytes_in_lo32, &nbytes_in_hi32,
                        &nbytes_out_lo32, &nbytes_out_hi32 );
   switch (bzerr) {
       
  case (-9):
							   __asm__ __volatile__ ("nop;");
	TRACK1073_BEGIN: track(&&TRACK1073_BEGIN, &&TRACK1073_END);
	TRACK1073_END:   __asm__ __volatile__ ("nop;");
	configError(); break;
       
  case (-3):
							   __asm__ __volatile__ ("nop;");
	TRACK1074_BEGIN: track(&&TRACK1074_BEGIN, &&TRACK1074_END);
	TRACK1074_END:   __asm__ __volatile__ ("nop;");
	outOfMemory (); break;
       
  case (-6):
							   __asm__ __volatile__ ("nop;");
	TRACK1076_BEGIN: track(&&TRACK1076_BEGIN, &&TRACK1076_END);
	TRACK1076_END:   __asm__ __volatile__ ("nop;");
	errhandler_io:
	          {
							   __asm__ __volatile__ ("nop;");
	TRACK1075_BEGIN: track(&&TRACK1075_BEGIN, &&TRACK1075_END);
	TRACK1075_END:   __asm__ __volatile__ ("nop;");
	ioError();
	}  {
						   __asm__ __volatile__ ("nop;");
TRACK1077_BEGIN: track(&&TRACK1077_BEGIN, &&TRACK1077_END);
TRACK1077_END:   __asm__ __volatile__ ("nop;");
break;
}
       
  default:
							   __asm__ __volatile__ ("nop;");
	TRACK1078_BEGIN: track(&&TRACK1078_BEGIN, &&TRACK1078_END);
	TRACK1078_END:   __asm__ __volatile__ ("nop;");
	panic ( "compress:unexpected error" );
   }
   panic ( "compress:end" );
}
static
Bool uncompressStream ( FILE *zStream, FILE *stream )
{
   BZFILE* bzf = ((void *)0);
   Int32 bzerr, bzerr_dummy, ret, nread, streamNo, i;
   UChar obuf[5000];
   UChar unused[5000];
   Int32 nUnused;
   UChar* unusedTmp;
   nUnused = 0;
   streamNo = 0;
   ;
   ;
   if (ferror(stream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1079_BEGIN: track(&&TRACK1079_BEGIN, &&TRACK1079_END);
TRACK1079_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   if (ferror(zStream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1080_BEGIN: track(&&TRACK1080_BEGIN, &&TRACK1080_END);
TRACK1080_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1091_BEGIN: track(&&TRACK1091_BEGIN, &&TRACK1091_END);
  TRACK1091_END:   __asm__ __volatile__ ("nop;");
  bzf = BZ2_bzReadOpen (
                 &bzerr, zStream, verbosity,
                 (int)smallMode, unused, nUnused
              );
        if (bzf == ((void *)0) || bzerr != 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1081_BEGIN: track(&&TRACK1081_BEGIN, &&TRACK1081_END);
  TRACK1081_END:   __asm__ __volatile__ ("nop;");
  goto errhandler;
  }
        streamNo++;
        while (bzerr == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1085_BEGIN: track(&&TRACK1085_BEGIN, &&TRACK1085_END);
    TRACK1085_END:   __asm__ __volatile__ ("nop;");
    nread = BZ2_bzRead ( &bzerr, bzf, obuf, 5000 );
             if (bzerr == (-5))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1082_BEGIN: track(&&TRACK1082_BEGIN, &&TRACK1082_END);
    TRACK1082_END:   __asm__ __volatile__ ("nop;");
    goto trycat;
    }
             if ((bzerr == 0 || bzerr == 4) && nread > 0)
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK1083_BEGIN: track(&&TRACK1083_BEGIN, &&TRACK1083_END);
    TRACK1083_END:   __asm__ __volatile__ ("nop;");
    fwrite ( obuf, sizeof(UChar), nread, stream );
    }
             if (ferror(stream))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1084_BEGIN: track(&&TRACK1084_BEGIN, &&TRACK1084_END);
    TRACK1084_END:   __asm__ __volatile__ ("nop;");
    goto errhandler_io;
    }
  }
        if (bzerr != 4)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1086_BEGIN: track(&&TRACK1086_BEGIN, &&TRACK1086_END);
  TRACK1086_END:   __asm__ __volatile__ ("nop;");
  goto errhandler;
  }
        BZ2_bzReadGetUnused ( &bzerr, bzf, (void**)(&unusedTmp), &nUnused );
        if (bzerr != 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1087_BEGIN: track(&&TRACK1087_BEGIN, &&TRACK1087_END);
  TRACK1087_END:   __asm__ __volatile__ ("nop;");
  panic ( "decompress:bzReadGetUnused" );
  }
        for (i = 0; i < nUnused; i++)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1088_BEGIN: track(&&TRACK1088_BEGIN, &&TRACK1088_END);
  TRACK1088_END:   __asm__ __volatile__ ("nop;");
  unused[i] = unusedTmp[i];
  }
        BZ2_bzReadClose ( &bzerr, bzf );
        if (bzerr != 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1089_BEGIN: track(&&TRACK1089_BEGIN, &&TRACK1089_END);
  TRACK1089_END:   __asm__ __volatile__ ("nop;");
  panic ( "decompress:bzReadGetUnused" );
  }
        if (nUnused == 0 && myfeof(zStream))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1090_BEGIN: track(&&TRACK1090_BEGIN, &&TRACK1090_END);
  TRACK1090_END:   __asm__ __volatile__ ("nop;");
  break;
  }
}
   closeok:
   if (ferror(zStream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1092_BEGIN: track(&&TRACK1092_BEGIN, &&TRACK1092_END);
TRACK1092_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   ret = fclose ( zStream );
   if (ret == (-1))  {
						   __asm__ __volatile__ ("nop;");
TRACK1093_BEGIN: track(&&TRACK1093_BEGIN, &&TRACK1093_END);
TRACK1093_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   if (ferror(stream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1094_BEGIN: track(&&TRACK1094_BEGIN, &&TRACK1094_END);
TRACK1094_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   ret = fflush ( stream );
   if (ret != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1095_BEGIN: track(&&TRACK1095_BEGIN, &&TRACK1095_END);
TRACK1095_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   if (stream != stdout) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1097_BEGIN: track(&&TRACK1097_BEGIN, &&TRACK1097_END);
  TRACK1097_END:   __asm__ __volatile__ ("nop;");
  ret = fclose ( stream );
        outputHandleJustInCase = ((void *)0);
        if (ret == (-1))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1096_BEGIN: track(&&TRACK1096_BEGIN, &&TRACK1096_END);
  TRACK1096_END:   __asm__ __volatile__ ("nop;");
  goto errhandler_io;
  }
}
   outputHandleJustInCase = ((void *)0);
   if (verbosity >= 2)  {
						   __asm__ __volatile__ ("nop;");
TRACK1098_BEGIN: track(&&TRACK1098_BEGIN, &&TRACK1098_END);
TRACK1098_END:   __asm__ __volatile__ ("nop;");
fprintf ( stderr, "\n    " );
}
   return ((Bool)1);
   trycat:
   if (forceOverwrite) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1104_BEGIN: track(&&TRACK1104_BEGIN, &&TRACK1104_END);
  TRACK1104_END:   __asm__ __volatile__ ("nop;");
  rewind(zStream);
        while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1103_BEGIN: track(&&TRACK1103_BEGIN, &&TRACK1103_END);
    TRACK1103_END:   __asm__ __volatile__ ("nop;");
    if (myfeof(zStream))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1099_BEGIN: track(&&TRACK1099_BEGIN, &&TRACK1099_END);
    TRACK1099_END:   __asm__ __volatile__ ("nop;");
    break;
    }
            nread = fread ( obuf, sizeof(UChar), 5000, zStream );
            if (ferror(zStream))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1100_BEGIN: track(&&TRACK1100_BEGIN, &&TRACK1100_END);
    TRACK1100_END:   __asm__ __volatile__ ("nop;");
    goto errhandler_io;
    }
            if (nread > 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1101_BEGIN: track(&&TRACK1101_BEGIN, &&TRACK1101_END);
    TRACK1101_END:   __asm__ __volatile__ ("nop;");
    fwrite ( obuf, sizeof(UChar), nread, stream );
    }
            if (ferror(stream))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1102_BEGIN: track(&&TRACK1102_BEGIN, &&TRACK1102_END);
    TRACK1102_END:   __asm__ __volatile__ ("nop;");
    goto errhandler_io;
    }
  }
        goto closeok;
}
   errhandler:
   BZ2_bzReadClose ( &bzerr_dummy, bzf );
   switch (bzerr) {
       
  case (-9):
							   __asm__ __volatile__ ("nop;");
	TRACK1105_BEGIN: track(&&TRACK1105_BEGIN, &&TRACK1105_END);
	TRACK1105_END:   __asm__ __volatile__ ("nop;");
	configError(); break;
       
  case (-6):
							   __asm__ __volatile__ ("nop;");
	TRACK1107_BEGIN: track(&&TRACK1107_BEGIN, &&TRACK1107_END);
	TRACK1107_END:   __asm__ __volatile__ ("nop;");
	errhandler_io:
	          {
							   __asm__ __volatile__ ("nop;");
	TRACK1106_BEGIN: track(&&TRACK1106_BEGIN, &&TRACK1106_END);
	TRACK1106_END:   __asm__ __volatile__ ("nop;");
	ioError();
	}  {
						   __asm__ __volatile__ ("nop;");
TRACK1108_BEGIN: track(&&TRACK1108_BEGIN, &&TRACK1108_END);
TRACK1108_END:   __asm__ __volatile__ ("nop;");
break;
}
       
  case (-4):
							   __asm__ __volatile__ ("nop;");
	TRACK1109_BEGIN: track(&&TRACK1109_BEGIN, &&TRACK1109_END);
	TRACK1109_END:   __asm__ __volatile__ ("nop;");
	crcError();
       
  case (-3):
							   __asm__ __volatile__ ("nop;");
	TRACK1110_BEGIN: track(&&TRACK1110_BEGIN, &&TRACK1110_END);
	TRACK1110_END:   __asm__ __volatile__ ("nop;");
	outOfMemory();
       
  case (-7):
							   __asm__ __volatile__ ("nop;");
	TRACK1111_BEGIN: track(&&TRACK1111_BEGIN, &&TRACK1111_END);
	TRACK1111_END:   __asm__ __volatile__ ("nop;");
	compressedStreamEOF();
       
  case (-5):
							   __asm__ __volatile__ ("nop;");
	TRACK1113_BEGIN: track(&&TRACK1113_BEGIN, &&TRACK1113_END);
	TRACK1113_END:   __asm__ __volatile__ ("nop;");
	if (zStream != stdin)  {
							   __asm__ __volatile__ ("nop;");
	TRACK1112_BEGIN: track(&&TRACK1112_BEGIN, &&TRACK1112_END);
	TRACK1112_END:   __asm__ __volatile__ ("nop;");
	fclose(zStream);
	}
         if (stream != stdout)  {
						   __asm__ __volatile__ ("nop;");
TRACK1114_BEGIN: track(&&TRACK1114_BEGIN, &&TRACK1114_END);
TRACK1114_END:   __asm__ __volatile__ ("nop;");
fclose(stream);
}
         if (streamNo == 1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1115_BEGIN: track(&&TRACK1115_BEGIN, &&TRACK1115_END);
  TRACK1115_END:   __asm__ __volatile__ ("nop;");
  return ((Bool)0);
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK1117_BEGIN: track(&&TRACK1117_BEGIN, &&TRACK1117_END);
  TRACK1117_END:   __asm__ __volatile__ ("nop;");
  if (noisy)
               {
  						   __asm__ __volatile__ ("nop;");
  TRACK1116_BEGIN: track(&&TRACK1116_BEGIN, &&TRACK1116_END);
  TRACK1116_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
                        "\n%s: %s: trailing garbage after EOF ignored\n",
                        progName, inName );
  }
              return ((Bool)1);
}
       
  default:
							   __asm__ __volatile__ ("nop;");
	TRACK1118_BEGIN: track(&&TRACK1118_BEGIN, &&TRACK1118_END);
	TRACK1118_END:   __asm__ __volatile__ ("nop;");
	panic ( "decompress:unexpected error" );
   }
   panic ( "decompress:end" );
   return ((Bool)1);
}
static
Bool testStream ( FILE *zStream )
{
   BZFILE* bzf = ((void *)0);
   Int32 bzerr, bzerr_dummy, ret, nread, streamNo, i;
   UChar obuf[5000];
   UChar unused[5000];
   Int32 nUnused;
   UChar* unusedTmp;
   nUnused = 0;
   streamNo = 0;
   ;
   if (ferror(zStream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1119_BEGIN: track(&&TRACK1119_BEGIN, &&TRACK1119_END);
TRACK1119_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   while (((Bool)1)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1128_BEGIN: track(&&TRACK1128_BEGIN, &&TRACK1128_END);
  TRACK1128_END:   __asm__ __volatile__ ("nop;");
  bzf = BZ2_bzReadOpen (
                 &bzerr, zStream, verbosity,
                 (int)smallMode, unused, nUnused
              );
        if (bzf == ((void *)0) || bzerr != 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1120_BEGIN: track(&&TRACK1120_BEGIN, &&TRACK1120_END);
  TRACK1120_END:   __asm__ __volatile__ ("nop;");
  goto errhandler;
  }
        streamNo++;
        while (bzerr == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1122_BEGIN: track(&&TRACK1122_BEGIN, &&TRACK1122_END);
    TRACK1122_END:   __asm__ __volatile__ ("nop;");
    nread = BZ2_bzRead ( &bzerr, bzf, obuf, 5000 );
             if (bzerr == (-5))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1121_BEGIN: track(&&TRACK1121_BEGIN, &&TRACK1121_END);
    TRACK1121_END:   __asm__ __volatile__ ("nop;");
    goto errhandler;
    }
  }
        if (bzerr != 4)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1123_BEGIN: track(&&TRACK1123_BEGIN, &&TRACK1123_END);
  TRACK1123_END:   __asm__ __volatile__ ("nop;");
  goto errhandler;
  }
        BZ2_bzReadGetUnused ( &bzerr, bzf, (void**)(&unusedTmp), &nUnused );
        if (bzerr != 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1124_BEGIN: track(&&TRACK1124_BEGIN, &&TRACK1124_END);
  TRACK1124_END:   __asm__ __volatile__ ("nop;");
  panic ( "test:bzReadGetUnused" );
  }
        for (i = 0; i < nUnused; i++)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1125_BEGIN: track(&&TRACK1125_BEGIN, &&TRACK1125_END);
  TRACK1125_END:   __asm__ __volatile__ ("nop;");
  unused[i] = unusedTmp[i];
  }
        BZ2_bzReadClose ( &bzerr, bzf );
        if (bzerr != 0)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1126_BEGIN: track(&&TRACK1126_BEGIN, &&TRACK1126_END);
  TRACK1126_END:   __asm__ __volatile__ ("nop;");
  panic ( "test:bzReadGetUnused" );
  }
        if (nUnused == 0 && myfeof(zStream))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1127_BEGIN: track(&&TRACK1127_BEGIN, &&TRACK1127_END);
  TRACK1127_END:   __asm__ __volatile__ ("nop;");
  break;
  }
}
   if (ferror(zStream))  {
						   __asm__ __volatile__ ("nop;");
TRACK1129_BEGIN: track(&&TRACK1129_BEGIN, &&TRACK1129_END);
TRACK1129_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   ret = fclose ( zStream );
   if (ret == (-1))  {
						   __asm__ __volatile__ ("nop;");
TRACK1130_BEGIN: track(&&TRACK1130_BEGIN, &&TRACK1130_END);
TRACK1130_END:   __asm__ __volatile__ ("nop;");
goto errhandler_io;
}
   if (verbosity >= 2)  {
						   __asm__ __volatile__ ("nop;");
TRACK1131_BEGIN: track(&&TRACK1131_BEGIN, &&TRACK1131_END);
TRACK1131_END:   __asm__ __volatile__ ("nop;");
fprintf ( stderr, "\n    " );
}
   return ((Bool)1);
   errhandler:
   BZ2_bzReadClose ( &bzerr_dummy, bzf );
   if (verbosity == 0)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1132_BEGIN: track(&&TRACK1132_BEGIN, &&TRACK1132_END);
TRACK1132_END:   __asm__ __volatile__ ("nop;");
fprintf ( stderr, "%s: %s: ", progName, inName );
}
   switch (bzerr) {
       
  case (-9):
							   __asm__ __volatile__ ("nop;");
	TRACK1133_BEGIN: track(&&TRACK1133_BEGIN, &&TRACK1133_END);
	TRACK1133_END:   __asm__ __volatile__ ("nop;");
	configError(); break;
       
  case (-6):
							   __asm__ __volatile__ ("nop;");
	TRACK1135_BEGIN: track(&&TRACK1135_BEGIN, &&TRACK1135_END);
	TRACK1135_END:   __asm__ __volatile__ ("nop;");
	errhandler_io:
	          {
							   __asm__ __volatile__ ("nop;");
	TRACK1134_BEGIN: track(&&TRACK1134_BEGIN, &&TRACK1134_END);
	TRACK1134_END:   __asm__ __volatile__ ("nop;");
	ioError();
	}  {
						   __asm__ __volatile__ ("nop;");
TRACK1136_BEGIN: track(&&TRACK1136_BEGIN, &&TRACK1136_END);
TRACK1136_END:   __asm__ __volatile__ ("nop;");
break;
}
       
  case (-4):
							   __asm__ __volatile__ ("nop;");
	TRACK1137_BEGIN: track(&&TRACK1137_BEGIN, &&TRACK1137_END);
	TRACK1137_END:   __asm__ __volatile__ ("nop;");
	fprintf ( stderr,
	                   "data integrity (CRC) error in data\n" );
         return ((Bool)0);
       
  case (-3):
							   __asm__ __volatile__ ("nop;");
	TRACK1138_BEGIN: track(&&TRACK1138_BEGIN, &&TRACK1138_END);
	TRACK1138_END:   __asm__ __volatile__ ("nop;");
	outOfMemory();
       
  case (-7):
							   __asm__ __volatile__ ("nop;");
	TRACK1139_BEGIN: track(&&TRACK1139_BEGIN, &&TRACK1139_END);
	TRACK1139_END:   __asm__ __volatile__ ("nop;");
	fprintf ( stderr,
	                   "file ends unexpectedly\n" );
         return ((Bool)0);
       
  case (-5):
							   __asm__ __volatile__ ("nop;");
	TRACK1141_BEGIN: track(&&TRACK1141_BEGIN, &&TRACK1141_END);
	TRACK1141_END:   __asm__ __volatile__ ("nop;");
	if (zStream != stdin)  {
							   __asm__ __volatile__ ("nop;");
	TRACK1140_BEGIN: track(&&TRACK1140_BEGIN, &&TRACK1140_END);
	TRACK1140_END:   __asm__ __volatile__ ("nop;");
	fclose(zStream);
	}
         if (streamNo == 1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1142_BEGIN: track(&&TRACK1142_BEGIN, &&TRACK1142_END);
  TRACK1142_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
                      "bad magic number (file not created by bzip2)\n" );
              return ((Bool)0);
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK1144_BEGIN: track(&&TRACK1144_BEGIN, &&TRACK1144_END);
  TRACK1144_END:   __asm__ __volatile__ ("nop;");
  if (noisy)
               {
  						   __asm__ __volatile__ ("nop;");
  TRACK1143_BEGIN: track(&&TRACK1143_BEGIN, &&TRACK1143_END);
  TRACK1143_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
                        "trailing garbage after EOF ignored\n" );
  }
              return ((Bool)1);
}
       
  default:
							   __asm__ __volatile__ ("nop;");
	TRACK1145_BEGIN: track(&&TRACK1145_BEGIN, &&TRACK1145_END);
	TRACK1145_END:   __asm__ __volatile__ ("nop;");
	panic ( "test:unexpected error" );
   }
   panic ( "test:end" );
   return ((Bool)1);
}
static
void setExit ( Int32 v )
{
   if (v > exitValue)  {
						   __asm__ __volatile__ ("nop;");
TRACK1146_BEGIN: track(&&TRACK1146_BEGIN, &&TRACK1146_END);
TRACK1146_END:   __asm__ __volatile__ ("nop;");
exitValue = v;
}
}
static
void cadvise ( void )
{
   if (noisy)
    {
						   __asm__ __volatile__ ("nop;");
TRACK1147_BEGIN: track(&&TRACK1147_BEGIN, &&TRACK1147_END);
TRACK1147_END:   __asm__ __volatile__ ("nop;");
fprintf (
      stderr,
      "\nIt is possible that the compressed file(s) have become corrupted.\n"
        "You can use the -tvv option to test integrity of such files.\n\n"
        "You can use the `bzip2recover' program to attempt to recover\n"
        "data from undamaged sections of corrupted files.\n\n"
    );
}
}
static
void showFileNames ( void )
{
   if (noisy)
    {
						   __asm__ __volatile__ ("nop;");
TRACK1148_BEGIN: track(&&TRACK1148_BEGIN, &&TRACK1148_END);
TRACK1148_END:   __asm__ __volatile__ ("nop;");
fprintf (
      stderr,
      "\tInput file = %s, output file = %s\n",
      inName, outName
   );
}
}
static
void cleanUpAndFail ( Int32 ec )
{
   IntNative retVal;
   struct stat statBuf;
   if ( srcMode == 3
        && opMode != 3
        && deleteOutputOnInterrupt ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1154_BEGIN: track(&&TRACK1154_BEGIN, &&TRACK1154_END);
  TRACK1154_END:   __asm__ __volatile__ ("nop;");
  retVal = stat ( inName, &statBuf );
        if (retVal == 0) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1152_BEGIN: track(&&TRACK1152_BEGIN, &&TRACK1152_END);
    TRACK1152_END:   __asm__ __volatile__ ("nop;");
    if (noisy)
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK1149_BEGIN: track(&&TRACK1149_BEGIN, &&TRACK1149_END);
    TRACK1149_END:   __asm__ __volatile__ ("nop;");
    fprintf ( stderr,
                          "%s: Deleting output file %s, if it exists.\n",
                          progName, outName );
    }
             if (outputHandleJustInCase != ((void *)0))
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK1150_BEGIN: track(&&TRACK1150_BEGIN, &&TRACK1150_END);
    TRACK1150_END:   __asm__ __volatile__ ("nop;");
    fclose ( outputHandleJustInCase );
    }
             retVal = remove ( outName );
             if (retVal != 0)
                 {
    						   __asm__ __volatile__ ("nop;");
    TRACK1151_BEGIN: track(&&TRACK1151_BEGIN, &&TRACK1151_END);
    TRACK1151_END:   __asm__ __volatile__ ("nop;");
    fprintf ( stderr,
                          "%s: WARNING: deletion of output file "
                          "(apparently) failed.\n",
                          progName );
    }
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK1153_BEGIN: track(&&TRACK1153_BEGIN, &&TRACK1153_END);
    TRACK1153_END:   __asm__ __volatile__ ("nop;");
    fprintf ( stderr,
                       "%s: WARNING: deletion of output file suppressed\n",
                        progName );
             fprintf ( stderr,
                       "%s:    since input file no longer exists.  Output file\n",
                       progName );
             fprintf ( stderr,
                       "%s:    `%s' may be incomplete.\n",
                       progName, outName );
             fprintf ( stderr,
                       "%s:    I suggest doing an integrity test (bzip2 -tv)"
                       " of it.\n",
                       progName );
  }
}
   if (noisy && numFileNames > 0 && numFilesProcessed < numFileNames) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1155_BEGIN: track(&&TRACK1155_BEGIN, &&TRACK1155_END);
  TRACK1155_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
                  "%s: WARNING: some files have not been processed:\n"
                  "%s:    %d specified on command line, %d not processed yet.\n\n",
                  progName, progName,
                  numFileNames, numFileNames - numFilesProcessed );
}
   setExit(ec);
   exit(exitValue);
}
static
void panic ( Char* s )
{
   fprintf ( stderr,
             "\n%s: PANIC -- internal consistency error:\n"
             "\t%s\n"
             "\tThis is a BUG.  Please report it to me at:\n"
             "\tjseward@acm.org\n",
             progName, s );
   showFileNames();
   cleanUpAndFail( 3 );
}
static
void crcError ( void )
{
   fprintf ( stderr,
             "\n%s: Data integrity error when decompressing.\n",
             progName );
   showFileNames();
   cadvise();
   cleanUpAndFail( 2 );
}
static
void compressedStreamEOF ( void )
{
  if (noisy) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1156_BEGIN: track(&&TRACK1156_BEGIN, &&TRACK1156_END);
  TRACK1156_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
         "\n%s: Compressed file ends unexpectedly;\n\t"
         "perhaps it is corrupted?  *Possible* reason follows.\n",
         progName );
      perror ( progName );
      showFileNames();
      cadvise();
}
  cleanUpAndFail( 2 );
}
static
void ioError ( void )
{
   fprintf ( stderr,
             "\n%s: I/O or other error, bailing out.  "
             "Possible reason follows.\n",
             progName );
   perror ( progName );
   showFileNames();
   cleanUpAndFail( 1 );
}
static
void mySignalCatcher ( IntNative n )
{
   fprintf ( stderr,
             "\n%s: Control-C or similar caught, quitting.\n",
             progName );
   cleanUpAndFail(1);
}
static
void mySIGSEGVorSIGBUScatcher ( IntNative n )
{
   if (opMode == 1)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1157_BEGIN: track(&&TRACK1157_BEGIN, &&TRACK1157_END);
TRACK1157_END:   __asm__ __volatile__ ("nop;");
fprintf (
      stderr,
      "\n%s: Caught a SIGSEGV or SIGBUS whilst compressing.\n"
      "\n"
      "   Possible causes are (most likely first):\n"
      "   (1) This computer has unreliable memory or cache hardware\n"
      "       (a surprisingly common problem; try a different machine.)\n"
      "   (2) A bug in the compiler used to create this executable\n"
      "       (unlikely, if you didn't compile bzip2 yourself.)\n"
      "   (3) A real bug in bzip2 -- I hope this should never be the case.\n"
      "   The user's manual, Section 4.3, has more info on (1) and (2).\n"
      "   \n"
      "   If you suspect this is a bug in bzip2, or are unsure about (1)\n"
      "   or (2), feel free to report it to me at: jseward@acm.org.\n"
      "   Section 4.3 of the user's manual describes the info a useful\n"
      "   bug report should have.  If the manual is available on your\n"
      "   system, please try and read it before mailing me.  If you don't\n"
      "   have the manual or can't be bothered to read it, mail me anyway.\n"
      "\n",
      progName );
}
      else
       {
						   __asm__ __volatile__ ("nop;");
TRACK1158_BEGIN: track(&&TRACK1158_BEGIN, &&TRACK1158_END);
TRACK1158_END:   __asm__ __volatile__ ("nop;");
fprintf (
      stderr,
      "\n%s: Caught a SIGSEGV or SIGBUS whilst decompressing.\n"
      "\n"
      "   Possible causes are (most likely first):\n"
      "   (1) The compressed data is corrupted, and bzip2's usual checks\n"
      "       failed to detect this.  Try bzip2 -tvv my_file.bz2.\n"
      "   (2) This computer has unreliable memory or cache hardware\n"
      "       (a surprisingly common problem; try a different machine.)\n"
      "   (3) A bug in the compiler used to create this executable\n"
      "       (unlikely, if you didn't compile bzip2 yourself.)\n"
      "   (4) A real bug in bzip2 -- I hope this should never be the case.\n"
      "   The user's manual, Section 4.3, has more info on (2) and (3).\n"
      "   \n"
      "   If you suspect this is a bug in bzip2, or are unsure about (2)\n"
      "   or (3), feel free to report it to me at: jseward@acm.org.\n"
      "   Section 4.3 of the user's manual describes the info a useful\n"
      "   bug report should have.  If the manual is available on your\n"
      "   system, please try and read it before mailing me.  If you don't\n"
      "   have the manual or can't be bothered to read it, mail me anyway.\n"
      "\n",
      progName );
}
   showFileNames();
   if (opMode == 1)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1159_BEGIN: track(&&TRACK1159_BEGIN, &&TRACK1159_END);
TRACK1159_END:   __asm__ __volatile__ ("nop;");
cleanUpAndFail( 3 );
} else
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK1160_BEGIN: track(&&TRACK1160_BEGIN, &&TRACK1160_END);
  TRACK1160_END:   __asm__ __volatile__ ("nop;");
  cadvise(); cleanUpAndFail( 2 );
}
}
static
void outOfMemory ( void )
{
   fprintf ( stderr,
             "\n%s: couldn't allocate enough memory\n",
             progName );
   showFileNames();
   cleanUpAndFail(1);
}
static
void configError ( void )
{
   fprintf ( stderr,
             "bzip2: I'm not configured correctly for this platform!\n"
             "\tI require Int32, Int16 and Char to have sizes\n"
             "\tof 4, 2 and 1 bytes to run properly, and they don't.\n"
             "\tProbably you can fix this by defining them correctly,\n"
             "\tand recompiling.  Bye!\n" );
   setExit(3);
   exit(exitValue);
}
static
void pad ( Char *s )
{
   Int32 i;
   if ( (Int32)strlen(s) >= longestFileName )  {
						   __asm__ __volatile__ ("nop;");
TRACK1161_BEGIN: track(&&TRACK1161_BEGIN, &&TRACK1161_END);
TRACK1161_END:   __asm__ __volatile__ ("nop;");
return;
}
   for (i = 1; i <= longestFileName - (Int32)strlen(s); i++)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1162_BEGIN: track(&&TRACK1162_BEGIN, &&TRACK1162_END);
TRACK1162_END:   __asm__ __volatile__ ("nop;");
fprintf ( stderr, " " );
}
}
static
void copyFileName ( Char* to, Char* from )
{
   if ( strlen(from) > 1034 -10 ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1163_BEGIN: track(&&TRACK1163_BEGIN, &&TRACK1163_END);
  TRACK1163_END:   __asm__ __volatile__ ("nop;");
  fprintf (
           stderr,
           "bzip2: file name\n`%s'\n"
           "is suspiciously (more than %d chars) long.\n"
           "Try using a reasonable file name instead.  Sorry! :-)\n",
           from, 1034 -10
        );
        setExit(1);
        exit(exitValue);
}
  strncpy(to,from,1034 -10);
  to[1034 -10]='\0';
}
static
Bool fileExists ( Char* name )
{
   FILE *tmp = fopen ( name, "rb" );
   Bool exists = (tmp != ((void *)0));
   if (tmp != ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK1164_BEGIN: track(&&TRACK1164_BEGIN, &&TRACK1164_END);
TRACK1164_END:   __asm__ __volatile__ ("nop;");
fclose ( tmp );
}
   return exists;
}
FILE* fopen_output_safely ( Char* name, const char* mode )
{
   FILE* fp;
   IntNative fh;
   fh = open(name, 01|0100|0200, 0200|0400);
   if (fh == -1)  {
						   __asm__ __volatile__ ("nop;");
TRACK1165_BEGIN: track(&&TRACK1165_BEGIN, &&TRACK1165_END);
TRACK1165_END:   __asm__ __volatile__ ("nop;");
return ((void *)0);
}
   fp = fdopen(fh, mode);
   if (fp == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK1166_BEGIN: track(&&TRACK1166_BEGIN, &&TRACK1166_END);
TRACK1166_END:   __asm__ __volatile__ ("nop;");
close(fh);
}
   return fp;
}
static
Bool notAStandardFile ( Char* name )
{
   IntNative i;
   struct stat statBuf;
   i = lstat ( name, &statBuf );
   if (i != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1167_BEGIN: track(&&TRACK1167_BEGIN, &&TRACK1167_END);
TRACK1167_END:   __asm__ __volatile__ ("nop;");
return ((Bool)1);
}
   if (((((statBuf.st_mode)) & 0170000) == (0100000)))  {
						   __asm__ __volatile__ ("nop;");
TRACK1168_BEGIN: track(&&TRACK1168_BEGIN, &&TRACK1168_END);
TRACK1168_END:   __asm__ __volatile__ ("nop;");
return ((Bool)0);
}
   return ((Bool)1);
}
static
Int32 countHardLinks ( Char* name )
{
   IntNative i;
   struct stat statBuf;
   i = lstat ( name, &statBuf );
   if (i != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1169_BEGIN: track(&&TRACK1169_BEGIN, &&TRACK1169_END);
TRACK1169_END:   __asm__ __volatile__ ("nop;");
return 0;
}
   return (statBuf.st_nlink - 1);
}
static
struct stat fileMetaInfo;
static
void saveInputFileMetaInfo ( Char *srcName )
{
   IntNative retVal;
   retVal = stat( srcName, &fileMetaInfo );
   { if ((retVal) != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1170_BEGIN: track(&&TRACK1170_BEGIN, &&TRACK1170_END);
TRACK1170_END:   __asm__ __volatile__ ("nop;");
ioError();
} };
}
static
void applySavedMetaInfoToOutputFile ( Char *dstName )
{
   IntNative retVal;
   struct utimbuf uTimBuf;
   uTimBuf.actime = fileMetaInfo.st_atime;
   uTimBuf.modtime = fileMetaInfo.st_mtime;
   retVal = chmod ( dstName, fileMetaInfo.st_mode );
   { if ((retVal) != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1171_BEGIN: track(&&TRACK1171_BEGIN, &&TRACK1171_END);
TRACK1171_END:   __asm__ __volatile__ ("nop;");
ioError();
} };
   retVal = utime ( dstName, &uTimBuf );
   { if ((retVal) != 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1172_BEGIN: track(&&TRACK1172_BEGIN, &&TRACK1172_END);
TRACK1172_END:   __asm__ __volatile__ ("nop;");
ioError();
} };
   retVal = chown ( dstName, fileMetaInfo.st_uid, fileMetaInfo.st_gid );
}
static
Bool containsDubiousChars ( Char* name )
{
   return ((Bool)0);
}
Char* zSuffix[4]
   = { ".bz2", ".bz", ".tbz2", ".tbz" };
Char* unzSuffix[4]
   = { "", "", ".tar", ".tar" };
static
Bool hasSuffix ( Char* s, Char* suffix )
{
   Int32 ns = strlen(s);
   Int32 nx = strlen(suffix);
   if (ns < nx)  {
						   __asm__ __volatile__ ("nop;");
TRACK1173_BEGIN: track(&&TRACK1173_BEGIN, &&TRACK1173_END);
TRACK1173_END:   __asm__ __volatile__ ("nop;");
return ((Bool)0);
}
   if (strcmp(s + ns - nx, suffix) == 0)  {
						   __asm__ __volatile__ ("nop;");
TRACK1174_BEGIN: track(&&TRACK1174_BEGIN, &&TRACK1174_END);
TRACK1174_END:   __asm__ __volatile__ ("nop;");
return ((Bool)1);
}
   return ((Bool)0);
}
static
Bool mapSuffix ( Char* name,
                 Char* oldSuffix, Char* newSuffix )
{
   if (!hasSuffix(name,oldSuffix))  {
						   __asm__ __volatile__ ("nop;");
TRACK1175_BEGIN: track(&&TRACK1175_BEGIN, &&TRACK1175_END);
TRACK1175_END:   __asm__ __volatile__ ("nop;");
return ((Bool)0);
}
   name[strlen(name)-strlen(oldSuffix)] = 0;
   strcat ( name, newSuffix );
   return ((Bool)1);
}
static
void compress ( Char *name )
{
   FILE *inStr;
   FILE *outStr;
   Int32 n, i;
   struct stat statBuf;
   deleteOutputOnInterrupt = ((Bool)0);
   if (name == ((void *)0) && srcMode != 1)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1176_BEGIN: track(&&TRACK1176_BEGIN, &&TRACK1176_END);
TRACK1176_END:   __asm__ __volatile__ ("nop;");
panic ( "compress: bad modes\n" );
}
   switch (srcMode) {
       
  case 1:
							   __asm__ __volatile__ ("nop;");
	TRACK1177_BEGIN: track(&&TRACK1177_BEGIN, &&TRACK1177_END);
	TRACK1177_END:   __asm__ __volatile__ ("nop;");
	copyFileName ( inName, "(stdin)" );
         copyFileName ( outName, "(stdout)" );
         break;
       
  case 3:
							   __asm__ __volatile__ ("nop;");
	TRACK1178_BEGIN: track(&&TRACK1178_BEGIN, &&TRACK1178_END);
	TRACK1178_END:   __asm__ __volatile__ ("nop;");
	copyFileName ( inName, name );
         copyFileName ( outName, name );
         strcat ( outName, ".bz2" );
         break;
       
  case 2:
							   __asm__ __volatile__ ("nop;");
	TRACK1179_BEGIN: track(&&TRACK1179_BEGIN, &&TRACK1179_END);
	TRACK1179_END:   __asm__ __volatile__ ("nop;");
	copyFileName ( inName, name );
         copyFileName ( outName, "(stdout)" );
         break;
   }
   if ( srcMode != 1 && containsDubiousChars ( inName ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1181_BEGIN: track(&&TRACK1181_BEGIN, &&TRACK1181_END);
  TRACK1181_END:   __asm__ __volatile__ ("nop;");
  if (noisy)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1180_BEGIN: track(&&TRACK1180_BEGIN, &&TRACK1180_END);
  TRACK1180_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: There are no files matching `%s'.\n",
                  progName, inName );
  }
        setExit(1);
        return;
}
   if ( srcMode != 1 && !fileExists ( inName ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1182_BEGIN: track(&&TRACK1182_BEGIN, &&TRACK1182_END);
  TRACK1182_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                  progName, inName, strerror((*__errno_location ())) );
        setExit(1);
        return;
}
   for (i = 0; i < 4; i++) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1185_BEGIN: track(&&TRACK1185_BEGIN, &&TRACK1185_END);
  TRACK1185_END:   __asm__ __volatile__ ("nop;");
  if (hasSuffix(inName, zSuffix[i])) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1184_BEGIN: track(&&TRACK1184_BEGIN, &&TRACK1184_END);
    TRACK1184_END:   __asm__ __volatile__ ("nop;");
    if (noisy)
              {
    						   __asm__ __volatile__ ("nop;");
    TRACK1183_BEGIN: track(&&TRACK1183_BEGIN, &&TRACK1183_END);
    TRACK1183_END:   __asm__ __volatile__ ("nop;");
    fprintf ( stderr,
                       "%s: Input file %s already has %s suffix.\n",
                       progName, inName, zSuffix[i] );
    }
             setExit(1);
             return;
  }
}
   if ( srcMode == 3 || srcMode == 2 ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1187_BEGIN: track(&&TRACK1187_BEGIN, &&TRACK1187_END);
  TRACK1187_END:   __asm__ __volatile__ ("nop;");
  stat(inName, &statBuf);
        if ( ((((statBuf.st_mode)) & 0170000) == (0040000)) ) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1186_BEGIN: track(&&TRACK1186_BEGIN, &&TRACK1186_END);
    TRACK1186_END:   __asm__ __volatile__ ("nop;");
    fprintf( stderr,
                      "%s: Input file %s is a directory.\n",
                      progName,inName);
             setExit(1);
             return;
  }
}
   if ( srcMode == 3 && !forceOverwrite && notAStandardFile ( inName )) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1189_BEGIN: track(&&TRACK1189_BEGIN, &&TRACK1189_END);
  TRACK1189_END:   __asm__ __volatile__ ("nop;");
  if (noisy)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1188_BEGIN: track(&&TRACK1188_BEGIN, &&TRACK1188_END);
  TRACK1188_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Input file %s is not a normal file.\n",
                  progName, inName );
  }
        setExit(1);
        return;
}
   if ( srcMode == 3 && fileExists ( outName ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1192_BEGIN: track(&&TRACK1192_BEGIN, &&TRACK1192_END);
  TRACK1192_END:   __asm__ __volatile__ ("nop;");
  if (forceOverwrite) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1190_BEGIN: track(&&TRACK1190_BEGIN, &&TRACK1190_END);
    TRACK1190_END:   __asm__ __volatile__ ("nop;");
    remove(outName);
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK1191_BEGIN: track(&&TRACK1191_BEGIN, &&TRACK1191_END);
    TRACK1191_END:   __asm__ __volatile__ ("nop;");
    fprintf ( stderr, "%s: Output file %s already exists.\n",
         progName, outName );
      setExit(1);
      return;
  }
}
   if ( srcMode == 3 && !forceOverwrite &&
        (n=countHardLinks ( inName )) > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1193_BEGIN: track(&&TRACK1193_BEGIN, &&TRACK1193_END);
  TRACK1193_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Input file %s has %d other link%s.\n",
                  progName, inName, n, n > 1 ? "s" : "" );
        setExit(1);
        return;
}
   if ( srcMode == 3 ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1194_BEGIN: track(&&TRACK1194_BEGIN, &&TRACK1194_END);
  TRACK1194_END:   __asm__ __volatile__ ("nop;");
  saveInputFileMetaInfo ( inName );
}
   switch ( srcMode ) {
       
  case 1:
							   __asm__ __volatile__ ("nop;");
	TRACK1195_BEGIN: track(&&TRACK1195_BEGIN, &&TRACK1195_END);
	TRACK1195_END:   __asm__ __volatile__ ("nop;");
	inStr = stdin;
         outStr = stdout;
         if ( isatty ( fileno ( stdout ) ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1196_BEGIN: track(&&TRACK1196_BEGIN, &&TRACK1196_END);
  TRACK1196_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
                        "%s: I won't write compressed data to a terminal.\n",
                        progName );
              fprintf ( stderr, "%s: For help, type: `%s --help'.\n",
                                progName, progName );
              setExit(1);
              return;
};
         break;
       
  case 2:
							   __asm__ __volatile__ ("nop;");
	TRACK1197_BEGIN: track(&&TRACK1197_BEGIN, &&TRACK1197_END);
	TRACK1197_END:   __asm__ __volatile__ ("nop;");
	inStr = fopen ( inName, "rb" );
         outStr = stdout;
         if ( isatty ( fileno ( stdout ) ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1199_BEGIN: track(&&TRACK1199_BEGIN, &&TRACK1199_END);
  TRACK1199_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
                        "%s: I won't write compressed data to a terminal.\n",
                        progName );
              fprintf ( stderr, "%s: For help, type: `%s --help'.\n",
                                progName, progName );
              if ( inStr != ((void *)0) )  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1198_BEGIN: track(&&TRACK1198_BEGIN, &&TRACK1198_END);
  TRACK1198_END:   __asm__ __volatile__ ("nop;");
  fclose ( inStr );
  }
              setExit(1);
              return;
};
         if ( inStr == ((void *)0) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1200_BEGIN: track(&&TRACK1200_BEGIN, &&TRACK1200_END);
  TRACK1200_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                        progName, inName, strerror((*__errno_location ())) );
              setExit(1);
              return;
};
         break;
       
  case 3:
							   __asm__ __volatile__ ("nop;");
	TRACK1201_BEGIN: track(&&TRACK1201_BEGIN, &&TRACK1201_END);
	TRACK1201_END:   __asm__ __volatile__ ("nop;");
	inStr = fopen ( inName, "rb" );
         outStr = fopen_output_safely ( outName, "wb" );
         if ( outStr == ((void *)0)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1203_BEGIN: track(&&TRACK1203_BEGIN, &&TRACK1203_END);
  TRACK1203_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't create output file %s: %s.\n",
                        progName, outName, strerror((*__errno_location ())) );
              if ( inStr != ((void *)0) )  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1202_BEGIN: track(&&TRACK1202_BEGIN, &&TRACK1202_END);
  TRACK1202_END:   __asm__ __volatile__ ("nop;");
  fclose ( inStr );
  }
              setExit(1);
              return;
}
         if ( inStr == ((void *)0) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1205_BEGIN: track(&&TRACK1205_BEGIN, &&TRACK1205_END);
  TRACK1205_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                        progName, inName, strerror((*__errno_location ())) );
              if ( outStr != ((void *)0) )  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1204_BEGIN: track(&&TRACK1204_BEGIN, &&TRACK1204_END);
  TRACK1204_END:   __asm__ __volatile__ ("nop;");
  fclose ( outStr );
  }
              setExit(1);
              return;
};
         break;
       
  default:
							   __asm__ __volatile__ ("nop;");
	TRACK1206_BEGIN: track(&&TRACK1206_BEGIN, &&TRACK1206_END);
	TRACK1206_END:   __asm__ __volatile__ ("nop;");
	panic ( "compress: bad srcMode" );
         break;
   }
   if (verbosity >= 1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1207_BEGIN: track(&&TRACK1207_BEGIN, &&TRACK1207_END);
  TRACK1207_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "  %s: ", inName );
        pad ( inName );
        fflush ( stderr );
}
   outputHandleJustInCase = outStr;
   deleteOutputOnInterrupt = ((Bool)1);
   compressStream ( inStr, outStr );
   outputHandleJustInCase = ((void *)0);
   if ( srcMode == 3 ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1210_BEGIN: track(&&TRACK1210_BEGIN, &&TRACK1210_END);
  TRACK1210_END:   __asm__ __volatile__ ("nop;");
  applySavedMetaInfoToOutputFile ( outName );
        deleteOutputOnInterrupt = ((Bool)0);
        if ( !keepInputFiles ) {
    IntNative retVal = remove ( inName );
    						   __asm__ __volatile__ ("nop;");
    TRACK1209_BEGIN: track(&&TRACK1209_BEGIN, &&TRACK1209_END);
    TRACK1209_END:   __asm__ __volatile__ ("nop;");
    { if ((retVal) != 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1208_BEGIN: track(&&TRACK1208_BEGIN, &&TRACK1208_END);
    TRACK1208_END:   __asm__ __volatile__ ("nop;");
    ioError();
    } };
  }
}
   deleteOutputOnInterrupt = ((Bool)0);
}
static
void uncompress ( Char *name )
{
   FILE *inStr;
   FILE *outStr;
   Int32 n, i;
   Bool magicNumberOK;
   Bool cantGuess;
   struct stat statBuf;
   deleteOutputOnInterrupt = ((Bool)0);
   if (name == ((void *)0) && srcMode != 1)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1211_BEGIN: track(&&TRACK1211_BEGIN, &&TRACK1211_END);
TRACK1211_END:   __asm__ __volatile__ ("nop;");
panic ( "uncompress: bad modes\n" );
}
   cantGuess = ((Bool)0);
   switch (srcMode) {
       
  case 1:
							   __asm__ __volatile__ ("nop;");
	TRACK1212_BEGIN: track(&&TRACK1212_BEGIN, &&TRACK1212_END);
	TRACK1212_END:   __asm__ __volatile__ ("nop;");
	copyFileName ( inName, "(stdin)" );
         copyFileName ( outName, "(stdout)" );
         break;
       
  case 3:
							   __asm__ __volatile__ ("nop;");
	TRACK1213_BEGIN: track(&&TRACK1213_BEGIN, &&TRACK1213_END);
	TRACK1213_END:   __asm__ __volatile__ ("nop;");
	copyFileName ( inName, name );
         copyFileName ( outName, name );
         for (i = 0; i < 4; i++)
             {
						   __asm__ __volatile__ ("nop;");
TRACK1215_BEGIN: track(&&TRACK1215_BEGIN, &&TRACK1215_END);
TRACK1215_END:   __asm__ __volatile__ ("nop;");
if (mapSuffix(outName,zSuffix[i],unzSuffix[i]))
                {
						   __asm__ __volatile__ ("nop;");
TRACK1214_BEGIN: track(&&TRACK1214_BEGIN, &&TRACK1214_END);
TRACK1214_END:   __asm__ __volatile__ ("nop;");
goto zzz;
}
}
         cantGuess = ((Bool)1);
         strcat ( outName, ".out" );
         break;
       
  case 2:
							   __asm__ __volatile__ ("nop;");
	TRACK1216_BEGIN: track(&&TRACK1216_BEGIN, &&TRACK1216_END);
	TRACK1216_END:   __asm__ __volatile__ ("nop;");
	copyFileName ( inName, name );
         copyFileName ( outName, "(stdout)" );
         break;
   }
   zzz:
   if ( srcMode != 1 && containsDubiousChars ( inName ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1218_BEGIN: track(&&TRACK1218_BEGIN, &&TRACK1218_END);
  TRACK1218_END:   __asm__ __volatile__ ("nop;");
  if (noisy)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1217_BEGIN: track(&&TRACK1217_BEGIN, &&TRACK1217_END);
  TRACK1217_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: There are no files matching `%s'.\n",
                  progName, inName );
  }
        setExit(1);
        return;
}
   if ( srcMode != 1 && !fileExists ( inName ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1219_BEGIN: track(&&TRACK1219_BEGIN, &&TRACK1219_END);
  TRACK1219_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                  progName, inName, strerror((*__errno_location ())) );
        setExit(1);
        return;
}
   if ( srcMode == 3 || srcMode == 2 ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1221_BEGIN: track(&&TRACK1221_BEGIN, &&TRACK1221_END);
  TRACK1221_END:   __asm__ __volatile__ ("nop;");
  stat(inName, &statBuf);
        if ( ((((statBuf.st_mode)) & 0170000) == (0040000)) ) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1220_BEGIN: track(&&TRACK1220_BEGIN, &&TRACK1220_END);
    TRACK1220_END:   __asm__ __volatile__ ("nop;");
    fprintf( stderr,
                      "%s: Input file %s is a directory.\n",
                      progName,inName);
             setExit(1);
             return;
  }
}
   if ( srcMode == 3 && !forceOverwrite && notAStandardFile ( inName )) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1223_BEGIN: track(&&TRACK1223_BEGIN, &&TRACK1223_END);
  TRACK1223_END:   __asm__ __volatile__ ("nop;");
  if (noisy)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1222_BEGIN: track(&&TRACK1222_BEGIN, &&TRACK1222_END);
  TRACK1222_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Input file %s is not a normal file.\n",
                  progName, inName );
  }
        setExit(1);
        return;
}
   if ( cantGuess ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1225_BEGIN: track(&&TRACK1225_BEGIN, &&TRACK1225_END);
  TRACK1225_END:   __asm__ __volatile__ ("nop;");
  if (noisy)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1224_BEGIN: track(&&TRACK1224_BEGIN, &&TRACK1224_END);
  TRACK1224_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
                  "%s: Can't guess original name for %s -- using %s\n",
                  progName, inName, outName );
  }
}
   if ( srcMode == 3 && fileExists ( outName ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1228_BEGIN: track(&&TRACK1228_BEGIN, &&TRACK1228_END);
  TRACK1228_END:   __asm__ __volatile__ ("nop;");
  if (forceOverwrite) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1226_BEGIN: track(&&TRACK1226_BEGIN, &&TRACK1226_END);
    TRACK1226_END:   __asm__ __volatile__ ("nop;");
    remove(outName);
  } else {
    						   __asm__ __volatile__ ("nop;");
    TRACK1227_BEGIN: track(&&TRACK1227_BEGIN, &&TRACK1227_END);
    TRACK1227_END:   __asm__ __volatile__ ("nop;");
    fprintf ( stderr, "%s: Output file %s already exists.\n",
                      progName, outName );
            setExit(1);
            return;
  }
}
   if ( srcMode == 3 && !forceOverwrite &&
        (n=countHardLinks ( inName ) ) > 0) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1229_BEGIN: track(&&TRACK1229_BEGIN, &&TRACK1229_END);
  TRACK1229_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Input file %s has %d other link%s.\n",
                  progName, inName, n, n > 1 ? "s" : "" );
        setExit(1);
        return;
}
   if ( srcMode == 3 ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1230_BEGIN: track(&&TRACK1230_BEGIN, &&TRACK1230_END);
  TRACK1230_END:   __asm__ __volatile__ ("nop;");
  saveInputFileMetaInfo ( inName );
}
   switch ( srcMode ) {
       
  case 1:
							   __asm__ __volatile__ ("nop;");
	TRACK1231_BEGIN: track(&&TRACK1231_BEGIN, &&TRACK1231_END);
	TRACK1231_END:   __asm__ __volatile__ ("nop;");
	inStr = stdin;
         outStr = stdout;
         if ( isatty ( fileno ( stdin ) ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1232_BEGIN: track(&&TRACK1232_BEGIN, &&TRACK1232_END);
  TRACK1232_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
                        "%s: I won't read compressed data from a terminal.\n",
                        progName );
              fprintf ( stderr, "%s: For help, type: `%s --help'.\n",
                                progName, progName );
              setExit(1);
              return;
};
         break;
       
  case 2:
							   __asm__ __volatile__ ("nop;");
	TRACK1233_BEGIN: track(&&TRACK1233_BEGIN, &&TRACK1233_END);
	TRACK1233_END:   __asm__ __volatile__ ("nop;");
	inStr = fopen ( inName, "rb" );
         outStr = stdout;
         if ( inStr == ((void *)0) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1235_BEGIN: track(&&TRACK1235_BEGIN, &&TRACK1235_END);
  TRACK1235_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't open input file %s:%s.\n",
                        progName, inName, strerror((*__errno_location ())) );
              if ( inStr != ((void *)0) )  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1234_BEGIN: track(&&TRACK1234_BEGIN, &&TRACK1234_END);
  TRACK1234_END:   __asm__ __volatile__ ("nop;");
  fclose ( inStr );
  }
              setExit(1);
              return;
};
         break;
       
  case 3:
							   __asm__ __volatile__ ("nop;");
	TRACK1236_BEGIN: track(&&TRACK1236_BEGIN, &&TRACK1236_END);
	TRACK1236_END:   __asm__ __volatile__ ("nop;");
	inStr = fopen ( inName, "rb" );
         outStr = fopen_output_safely ( outName, "wb" );
         if ( outStr == ((void *)0)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1238_BEGIN: track(&&TRACK1238_BEGIN, &&TRACK1238_END);
  TRACK1238_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't create output file %s: %s.\n",
                        progName, outName, strerror((*__errno_location ())) );
              if ( inStr != ((void *)0) )  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1237_BEGIN: track(&&TRACK1237_BEGIN, &&TRACK1237_END);
  TRACK1237_END:   __asm__ __volatile__ ("nop;");
  fclose ( inStr );
  }
              setExit(1);
              return;
}
         if ( inStr == ((void *)0) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1240_BEGIN: track(&&TRACK1240_BEGIN, &&TRACK1240_END);
  TRACK1240_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                        progName, inName, strerror((*__errno_location ())) );
              if ( outStr != ((void *)0) )  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1239_BEGIN: track(&&TRACK1239_BEGIN, &&TRACK1239_END);
  TRACK1239_END:   __asm__ __volatile__ ("nop;");
  fclose ( outStr );
  }
              setExit(1);
              return;
};
         break;
       
  default:
							   __asm__ __volatile__ ("nop;");
	TRACK1241_BEGIN: track(&&TRACK1241_BEGIN, &&TRACK1241_END);
	TRACK1241_END:   __asm__ __volatile__ ("nop;");
	panic ( "uncompress: bad srcMode" );
         break;
   }
   if (verbosity >= 1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1242_BEGIN: track(&&TRACK1242_BEGIN, &&TRACK1242_END);
  TRACK1242_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "  %s: ", inName );
        pad ( inName );
        fflush ( stderr );
}
   outputHandleJustInCase = outStr;
   deleteOutputOnInterrupt = ((Bool)1);
   magicNumberOK = uncompressStream ( inStr, outStr );
   outputHandleJustInCase = ((void *)0);
   if ( magicNumberOK ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1246_BEGIN: track(&&TRACK1246_BEGIN, &&TRACK1246_END);
  TRACK1246_END:   __asm__ __volatile__ ("nop;");
  if ( srcMode == 3 ) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1245_BEGIN: track(&&TRACK1245_BEGIN, &&TRACK1245_END);
    TRACK1245_END:   __asm__ __volatile__ ("nop;");
    applySavedMetaInfoToOutputFile ( outName );
             deleteOutputOnInterrupt = ((Bool)0);
             if ( !keepInputFiles ) {
      IntNative retVal = remove ( inName );
      						   __asm__ __volatile__ ("nop;");
      TRACK1244_BEGIN: track(&&TRACK1244_BEGIN, &&TRACK1244_END);
      TRACK1244_END:   __asm__ __volatile__ ("nop;");
      { if ((retVal) != 0)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK1243_BEGIN: track(&&TRACK1243_BEGIN, &&TRACK1243_END);
      TRACK1243_END:   __asm__ __volatile__ ("nop;");
      ioError();
      } };
    }
  }
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK1249_BEGIN: track(&&TRACK1249_BEGIN, &&TRACK1249_END);
  TRACK1249_END:   __asm__ __volatile__ ("nop;");
  unzFailsExist = ((Bool)1);
        deleteOutputOnInterrupt = ((Bool)0);
        if ( srcMode == 3 ) {
    IntNative retVal = remove ( outName );
    						   __asm__ __volatile__ ("nop;");
    TRACK1248_BEGIN: track(&&TRACK1248_BEGIN, &&TRACK1248_END);
    TRACK1248_END:   __asm__ __volatile__ ("nop;");
    { if ((retVal) != 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1247_BEGIN: track(&&TRACK1247_BEGIN, &&TRACK1247_END);
    TRACK1247_END:   __asm__ __volatile__ ("nop;");
    ioError();
    } };
  }
}
   deleteOutputOnInterrupt = ((Bool)0);
   if ( magicNumberOK ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1251_BEGIN: track(&&TRACK1251_BEGIN, &&TRACK1251_END);
  TRACK1251_END:   __asm__ __volatile__ ("nop;");
  if (verbosity >= 1)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK1250_BEGIN: track(&&TRACK1250_BEGIN, &&TRACK1250_END);
  TRACK1250_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "done\n" );
  }
} else {
  						   __asm__ __volatile__ ("nop;");
  TRACK1254_BEGIN: track(&&TRACK1254_BEGIN, &&TRACK1254_END);
  TRACK1254_END:   __asm__ __volatile__ ("nop;");
  setExit(2);
        if (verbosity >= 1)
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK1252_BEGIN: track(&&TRACK1252_BEGIN, &&TRACK1252_END);
  TRACK1252_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "not a bzip2 file.\n" );
  } else
            {
  						   __asm__ __volatile__ ("nop;");
  TRACK1253_BEGIN: track(&&TRACK1253_BEGIN, &&TRACK1253_END);
  TRACK1253_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr,
                     "%s: %s is not a bzip2 file.\n",
                     progName, inName );
  }
}
}
static
void testf ( Char *name )
{
   FILE *inStr;
   Bool allOK;
   struct stat statBuf;
   deleteOutputOnInterrupt = ((Bool)0);
   if (name == ((void *)0) && srcMode != 1)
       {
						   __asm__ __volatile__ ("nop;");
TRACK1255_BEGIN: track(&&TRACK1255_BEGIN, &&TRACK1255_END);
TRACK1255_END:   __asm__ __volatile__ ("nop;");
panic ( "testf: bad modes\n" );
}
   copyFileName ( outName, "(none)" );
   switch (srcMode) {
       
  case 1:
							   __asm__ __volatile__ ("nop;");
	TRACK1256_BEGIN: track(&&TRACK1256_BEGIN, &&TRACK1256_END);
	TRACK1256_END:   __asm__ __volatile__ ("nop;");
	copyFileName ( inName, "(stdin)" ); break;
       
  case 3:
							   __asm__ __volatile__ ("nop;");
	TRACK1257_BEGIN: track(&&TRACK1257_BEGIN, &&TRACK1257_END);
	TRACK1257_END:   __asm__ __volatile__ ("nop;");
	copyFileName ( inName, name ); break;
       
  case 2:
							   __asm__ __volatile__ ("nop;");
	TRACK1258_BEGIN: track(&&TRACK1258_BEGIN, &&TRACK1258_END);
	TRACK1258_END:   __asm__ __volatile__ ("nop;");
	copyFileName ( inName, name ); break;
   }
   if ( srcMode != 1 && containsDubiousChars ( inName ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1260_BEGIN: track(&&TRACK1260_BEGIN, &&TRACK1260_END);
  TRACK1260_END:   __asm__ __volatile__ ("nop;");
  if (noisy)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1259_BEGIN: track(&&TRACK1259_BEGIN, &&TRACK1259_END);
  TRACK1259_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: There are no files matching `%s'.\n",
                  progName, inName );
  }
        setExit(1);
        return;
}
   if ( srcMode != 1 && !fileExists ( inName ) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1261_BEGIN: track(&&TRACK1261_BEGIN, &&TRACK1261_END);
  TRACK1261_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't open input %s: %s.\n",
                  progName, inName, strerror((*__errno_location ())) );
        setExit(1);
        return;
}
   if ( srcMode != 1 ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1263_BEGIN: track(&&TRACK1263_BEGIN, &&TRACK1263_END);
  TRACK1263_END:   __asm__ __volatile__ ("nop;");
  stat(inName, &statBuf);
        if ( ((((statBuf.st_mode)) & 0170000) == (0040000)) ) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1262_BEGIN: track(&&TRACK1262_BEGIN, &&TRACK1262_END);
    TRACK1262_END:   __asm__ __volatile__ ("nop;");
    fprintf( stderr,
                      "%s: Input file %s is a directory.\n",
                      progName,inName);
             setExit(1);
             return;
  }
}
   switch ( srcMode ) {
       
  case 1:
							   __asm__ __volatile__ ("nop;");
	TRACK1265_BEGIN: track(&&TRACK1265_BEGIN, &&TRACK1265_END);
	TRACK1265_END:   __asm__ __volatile__ ("nop;");
	if ( isatty ( fileno ( stdin ) ) ) {
	  						   __asm__ __volatile__ ("nop;");
	  TRACK1264_BEGIN: track(&&TRACK1264_BEGIN, &&TRACK1264_END);
	  TRACK1264_END:   __asm__ __volatile__ ("nop;");
	  fprintf ( stderr,
	                        "%s: I won't read compressed data from a terminal.\n",
	                        progName );
	              fprintf ( stderr, "%s: For help, type: `%s --help'.\n",
	                                progName, progName );
	              setExit(1);
	              return;
	};
         inStr = stdin;
         break;
       
  case 2:
							   __asm__ __volatile__ ("nop;");
	TRACK1267_BEGIN: track(&&TRACK1267_BEGIN, &&TRACK1267_END);
	TRACK1267_END:   __asm__ __volatile__ ("nop;");
	 
	  case 3:
								   __asm__ __volatile__ ("nop;");
		TRACK1266_BEGIN: track(&&TRACK1266_BEGIN, &&TRACK1266_END);
		TRACK1266_END:   __asm__ __volatile__ ("nop;");
		inStr = fopen ( inName, "rb" );
         if ( inStr == ((void *)0) ) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1268_BEGIN: track(&&TRACK1268_BEGIN, &&TRACK1268_END);
  TRACK1268_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "%s: Can't open input file %s:%s.\n",
                        progName, inName, strerror((*__errno_location ())) );
              setExit(1);
              return;
};
         break;
       
  default:
							   __asm__ __volatile__ ("nop;");
	TRACK1269_BEGIN: track(&&TRACK1269_BEGIN, &&TRACK1269_END);
	TRACK1269_END:   __asm__ __volatile__ ("nop;");
	panic ( "testf: bad srcMode" );
         break;
   }
   if (verbosity >= 1) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1270_BEGIN: track(&&TRACK1270_BEGIN, &&TRACK1270_END);
  TRACK1270_END:   __asm__ __volatile__ ("nop;");
  fprintf ( stderr, "  %s: ", inName );
        pad ( inName );
        fflush ( stderr );
}
   outputHandleJustInCase = ((void *)0);
   allOK = testStream ( inStr );
   if (allOK && verbosity >= 1)  {
						   __asm__ __volatile__ ("nop;");
TRACK1271_BEGIN: track(&&TRACK1271_BEGIN, &&TRACK1271_END);
TRACK1271_END:   __asm__ __volatile__ ("nop;");
fprintf ( stderr, "ok\n" );
}
   if (!allOK)  {
						   __asm__ __volatile__ ("nop;");
TRACK1272_BEGIN: track(&&TRACK1272_BEGIN, &&TRACK1272_END);
TRACK1272_END:   __asm__ __volatile__ ("nop;");
testFailsExist = ((Bool)1);
}
}
static
void license ( void )
{
   fprintf ( stderr,
    "bzip2, a block-sorting file compressor.  "
    "Version %s.\n"
    "   \n"
    "   Copyright (C) 1996-2002 by Julian Seward.\n"
    "   \n"
    "   This program is free software; you can redistribute it and/or modify\n"
    "   it under the terms set out in the LICENSE file, which is included\n"
    "   in the bzip2-1.0 source distribution.\n"
    "   \n"
    "   This program is distributed in the hope that it will be useful,\n"
    "   but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
    "   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
    "   LICENSE file for more details.\n"
    "   \n",
    BZ2_bzlibVersion()
   );
}
static
void usage ( Char *fullProgName )
{
   fprintf (
      stderr,
      "bzip2, a block-sorting file compressor.  "
      "Version %s.\n"
      "\n   usage: %s [flags and input files in any order]\n"
      "\n"
      "   -h --help           print this message\n"
      "   -d --decompress     force decompression\n"
      "   -z --compress       force compression\n"
      "   -k --keep           keep (don't delete) input files\n"
      "   -f --force          overwrite existing output files\n"
      "   -t --test           test compressed file integrity\n"
      "   -c --stdout         output to standard out\n"
      "   -q --quiet          suppress noncritical error messages\n"
      "   -v --verbose        be verbose (a 2nd -v gives more)\n"
      "   -L --license        display software version & license\n"
      "   -V --version        display software version & license\n"
      "   -s --small          use less memory (at most 2500k)\n"
      "   -1 .. -9            set block size to 100k .. 900k\n"
      "   --fast              alias for -1\n"
      "   --best              alias for -9\n"
      "\n"
      "   If invoked as `bzip2', default action is to compress.\n"
      "              as `bunzip2',  default action is to decompress.\n"
      "              as `bzcat', default action is to decompress to stdout.\n"
      "\n"
      "   If no file names are given, bzip2 compresses or decompresses\n"
      "   from standard input to standard output.  You can combine\n"
      "   short flags, so `-v -4' means the same as -v4 or -4v, &c.\n"
      "\n"
      ,
      BZ2_bzlibVersion(),
      fullProgName
   );
}
static
void redundant ( Char* flag )
{
   fprintf (
      stderr,
      "%s: %s is redundant in versions 0.9.5 and above\n",
      progName, flag );
}
typedef
   struct zzzz {
      Char *name;
      struct zzzz *link;
   }
   Cell;
static
void *myMalloc ( Int32 n )
{
   void* p;
   p = malloc ( (size_t)n );
   if (p == ((void *)0))  {
						   __asm__ __volatile__ ("nop;");
TRACK1273_BEGIN: track(&&TRACK1273_BEGIN, &&TRACK1273_END);
TRACK1273_END:   __asm__ __volatile__ ("nop;");
outOfMemory ();
}
   return p;
}
static
Cell *mkCell ( void )
{
   Cell *c;
   c = (Cell*) myMalloc ( sizeof ( Cell ) );
   c->name = ((void *)0);
   c->link = ((void *)0);
   return c;
}
static
Cell *snocString ( Cell *root, Char *name )
{
   if (root == ((void *)0)) {
  Cell *tmp = mkCell();
  						   __asm__ __volatile__ ("nop;");
  TRACK1274_BEGIN: track(&&TRACK1274_BEGIN, &&TRACK1274_END);
  TRACK1274_END:   __asm__ __volatile__ ("nop;");
  tmp->name = (Char*) myMalloc ( 5 + strlen(name) );
        strcpy ( tmp->name, name );
        return tmp;
} else {
  Cell *tmp = root;
  						   __asm__ __volatile__ ("nop;");
  TRACK1276_BEGIN: track(&&TRACK1276_BEGIN, &&TRACK1276_END);
  TRACK1276_END:   __asm__ __volatile__ ("nop;");
  while (tmp->link != ((void *)0))  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1275_BEGIN: track(&&TRACK1275_BEGIN, &&TRACK1275_END);
  TRACK1275_END:   __asm__ __volatile__ ("nop;");
  tmp = tmp->link;
  }
        tmp->link = snocString ( tmp->link, name );
        return root;
}
}
static
void addFlagsFromEnvVar ( Cell** argList, Char* varName )
{
   Int32 i, j, k;
   Char *envbase, *p;
   envbase = getenv(varName);
   if (envbase != ((void *)0)) {
  						   __asm__ __volatile__ ("nop;");
  TRACK1284_BEGIN: track(&&TRACK1284_BEGIN, &&TRACK1284_END);
  TRACK1284_END:   __asm__ __volatile__ ("nop;");
  p = envbase;
        i = 0;
        while (((Bool)1)) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1283_BEGIN: track(&&TRACK1283_BEGIN, &&TRACK1283_END);
    TRACK1283_END:   __asm__ __volatile__ ("nop;");
    if (p[i] == 0)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1277_BEGIN: track(&&TRACK1277_BEGIN, &&TRACK1277_END);
    TRACK1277_END:   __asm__ __volatile__ ("nop;");
    break;
    }
             p += i;
             i = 0;
             while (((*__ctype_b_loc ())[(int) (((Int32)(p[0])))] & (unsigned short int) _ISspace))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1278_BEGIN: track(&&TRACK1278_BEGIN, &&TRACK1278_END);
    TRACK1278_END:   __asm__ __volatile__ ("nop;");
    p++;
    }
             while (p[i] != 0 && !((*__ctype_b_loc ())[(int) (((Int32)(p[i])))] & (unsigned short int) _ISspace))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1279_BEGIN: track(&&TRACK1279_BEGIN, &&TRACK1279_END);
    TRACK1279_END:   __asm__ __volatile__ ("nop;");
    i++;
    }
             if (i > 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK1282_BEGIN: track(&&TRACK1282_BEGIN, &&TRACK1282_END);
      TRACK1282_END:   __asm__ __volatile__ ("nop;");
      k = i; if (k > 1034 -10)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK1280_BEGIN: track(&&TRACK1280_BEGIN, &&TRACK1280_END);
      TRACK1280_END:   __asm__ __volatile__ ("nop;");
      k = 1034 -10;
      }
                  for (j = 0; j < k; j++)  {
      						   __asm__ __volatile__ ("nop;");
      TRACK1281_BEGIN: track(&&TRACK1281_BEGIN, &&TRACK1281_END);
      TRACK1281_END:   __asm__ __volatile__ ("nop;");
      tmpName[j] = p[j];
      }
                  tmpName[k] = 0;
                  *argList=snocString((*argList), (tmpName));
    }
  }
}
}
IntNative main ( IntNative argc, Char *argv[] )
{
  Int32 i, j;
     Char *tmp;
     Cell *argList;
     Cell *aa;
     Bool decode;
  init();
  atexit(report);
  if (sizeof(Int32) != 4 || sizeof(UInt32) != 4 ||
         sizeof(Int16) != 2 || sizeof(UInt16) != 2 ||
         sizeof(Char) != 1 || sizeof(UChar) != 1)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1285_BEGIN: track(&&TRACK1285_BEGIN, &&TRACK1285_END);
  TRACK1285_END:   __asm__ __volatile__ ("nop;");
  configError();
  }
     outputHandleJustInCase = ((void *)0);
     smallMode = ((Bool)0);
     keepInputFiles = ((Bool)0);
     forceOverwrite = ((Bool)0);
     noisy = ((Bool)1);
     verbosity = 0;
     blockSize100k = 9;
     testFailsExist = ((Bool)0);
     unzFailsExist = ((Bool)0);
     numFileNames = 0;
     numFilesProcessed = 0;
     workFactor = 30;
     deleteOutputOnInterrupt = ((Bool)0);
     exitValue = 0;
     i = j = 0;
     signal (11, mySIGSEGVorSIGBUScatcher);
     signal (7, mySIGSEGVorSIGBUScatcher);
     copyFileName ( inName, "(none)" );
     copyFileName ( outName, "(none)" );
     copyFileName ( progNameReally, argv[0] );
     progName = &progNameReally[0];
     for (tmp = &progNameReally[0]; *tmp != '\0'; tmp++)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1287_BEGIN: track(&&TRACK1287_BEGIN, &&TRACK1287_END);
  TRACK1287_END:   __asm__ __volatile__ ("nop;");
  if (*tmp == '/')  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1286_BEGIN: track(&&TRACK1286_BEGIN, &&TRACK1286_END);
  TRACK1286_END:   __asm__ __volatile__ ("nop;");
  progName = tmp + 1;
  }
  }
     argList = ((void *)0);
     addFlagsFromEnvVar ( &argList, "BZIP2" );
     addFlagsFromEnvVar ( &argList, "BZIP" );
     for (i = 1; i <= argc-1; i++)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1288_BEGIN: track(&&TRACK1288_BEGIN, &&TRACK1288_END);
  TRACK1288_END:   __asm__ __volatile__ ("nop;");
  argList=snocString((argList), (argv[i]));
  }
     longestFileName = 7;
     numFileNames = 0;
     decode = ((Bool)1);
     for (aa = argList; aa != ((void *)0); aa = aa->link) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1292_BEGIN: track(&&TRACK1292_BEGIN, &&TRACK1292_END);
    TRACK1292_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--"))==0)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK1289_BEGIN: track(&&TRACK1289_BEGIN, &&TRACK1289_END);
      TRACK1289_END:   __asm__ __volatile__ ("nop;");
      decode = ((Bool)0); continue;
    }
          if (aa->name[0] == '-' && decode)  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1290_BEGIN: track(&&TRACK1290_BEGIN, &&TRACK1290_END);
    TRACK1290_END:   __asm__ __volatile__ ("nop;");
    continue;
    }
          numFileNames++;
          if (longestFileName < (Int32)strlen(aa->name) )
              {
    						   __asm__ __volatile__ ("nop;");
    TRACK1291_BEGIN: track(&&TRACK1291_BEGIN, &&TRACK1291_END);
    TRACK1291_END:   __asm__ __volatile__ ("nop;");
    longestFileName = (Int32)strlen(aa->name);
    }
  }
     if (numFileNames == 0)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1293_BEGIN: track(&&TRACK1293_BEGIN, &&TRACK1293_END);
  TRACK1293_END:   __asm__ __volatile__ ("nop;");
  srcMode = 1;
  } else  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1294_BEGIN: track(&&TRACK1294_BEGIN, &&TRACK1294_END);
  TRACK1294_END:   __asm__ __volatile__ ("nop;");
  srcMode = 3;
  }
     opMode = 1;
     if ( (strstr ( progName, "unzip" ) != 0) ||
          (strstr ( progName, "UNZIP" ) != 0) )
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1295_BEGIN: track(&&TRACK1295_BEGIN, &&TRACK1295_END);
  TRACK1295_END:   __asm__ __volatile__ ("nop;");
  opMode = 2;
  }
     if ( (strstr ( progName, "z2cat" ) != 0) ||
          (strstr ( progName, "Z2CAT" ) != 0) ||
          (strstr ( progName, "zcat" ) != 0) ||
          (strstr ( progName, "ZCAT" ) != 0) ) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1296_BEGIN: track(&&TRACK1296_BEGIN, &&TRACK1296_END);
    TRACK1296_END:   __asm__ __volatile__ ("nop;");
    opMode = 2;
          srcMode = (numFileNames == 0) ? 1 : 2;
  }
     for (aa = argList; aa != ((void *)0); aa = aa->link) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1322_BEGIN: track(&&TRACK1322_BEGIN, &&TRACK1322_END);
    TRACK1322_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1297_BEGIN: track(&&TRACK1297_BEGIN, &&TRACK1297_END);
    TRACK1297_END:   __asm__ __volatile__ ("nop;");
    break;
    }
          if (aa->name[0] == '-' && aa->name[1] != '-') {
      						   __asm__ __volatile__ ("nop;");
      TRACK1321_BEGIN: track(&&TRACK1321_BEGIN, &&TRACK1321_END);
      TRACK1321_END:   __asm__ __volatile__ ("nop;");
      for (j = 1; aa->name[j] != '\0'; j++) {
        						   __asm__ __volatile__ ("nop;");
        TRACK1320_BEGIN: track(&&TRACK1320_BEGIN, &&TRACK1320_END);
        TRACK1320_END:   __asm__ __volatile__ ("nop;");
        switch (aa->name[j]) {
                        
          case 'c':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1298_BEGIN: track(&&TRACK1298_BEGIN, &&TRACK1298_END);
        	TRACK1298_END:   __asm__ __volatile__ ("nop;");
        	srcMode = 2; break;
                        
          case 'd':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1299_BEGIN: track(&&TRACK1299_BEGIN, &&TRACK1299_END);
        	TRACK1299_END:   __asm__ __volatile__ ("nop;");
        	opMode = 2; break;
                        
          case 'z':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1300_BEGIN: track(&&TRACK1300_BEGIN, &&TRACK1300_END);
        	TRACK1300_END:   __asm__ __volatile__ ("nop;");
        	opMode = 1; break;
                        
          case 'f':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1301_BEGIN: track(&&TRACK1301_BEGIN, &&TRACK1301_END);
        	TRACK1301_END:   __asm__ __volatile__ ("nop;");
        	forceOverwrite = ((Bool)1); break;
                        
          case 't':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1302_BEGIN: track(&&TRACK1302_BEGIN, &&TRACK1302_END);
        	TRACK1302_END:   __asm__ __volatile__ ("nop;");
        	opMode = 3; break;
                        
          case 'k':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1303_BEGIN: track(&&TRACK1303_BEGIN, &&TRACK1303_END);
        	TRACK1303_END:   __asm__ __volatile__ ("nop;");
        	keepInputFiles = ((Bool)1); break;
                        
          case 's':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1304_BEGIN: track(&&TRACK1304_BEGIN, &&TRACK1304_END);
        	TRACK1304_END:   __asm__ __volatile__ ("nop;");
        	smallMode = ((Bool)1); break;
                        
          case 'q':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1305_BEGIN: track(&&TRACK1305_BEGIN, &&TRACK1305_END);
        	TRACK1305_END:   __asm__ __volatile__ ("nop;");
        	noisy = ((Bool)0); break;
                        
          case '1':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1306_BEGIN: track(&&TRACK1306_BEGIN, &&TRACK1306_END);
        	TRACK1306_END:   __asm__ __volatile__ ("nop;");
        	blockSize100k = 1; break;
                        
          case '2':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1307_BEGIN: track(&&TRACK1307_BEGIN, &&TRACK1307_END);
        	TRACK1307_END:   __asm__ __volatile__ ("nop;");
        	blockSize100k = 2; break;
                        
          case '3':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1308_BEGIN: track(&&TRACK1308_BEGIN, &&TRACK1308_END);
        	TRACK1308_END:   __asm__ __volatile__ ("nop;");
        	blockSize100k = 3; break;
                        
          case '4':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1309_BEGIN: track(&&TRACK1309_BEGIN, &&TRACK1309_END);
        	TRACK1309_END:   __asm__ __volatile__ ("nop;");
        	blockSize100k = 4; break;
                        
          case '5':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1310_BEGIN: track(&&TRACK1310_BEGIN, &&TRACK1310_END);
        	TRACK1310_END:   __asm__ __volatile__ ("nop;");
        	blockSize100k = 5; break;
                        
          case '6':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1311_BEGIN: track(&&TRACK1311_BEGIN, &&TRACK1311_END);
        	TRACK1311_END:   __asm__ __volatile__ ("nop;");
        	blockSize100k = 6; break;
                        
          case '7':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1312_BEGIN: track(&&TRACK1312_BEGIN, &&TRACK1312_END);
        	TRACK1312_END:   __asm__ __volatile__ ("nop;");
        	blockSize100k = 7; break;
                        
          case '8':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1313_BEGIN: track(&&TRACK1313_BEGIN, &&TRACK1313_END);
        	TRACK1313_END:   __asm__ __volatile__ ("nop;");
        	blockSize100k = 8; break;
                        
          case '9':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1314_BEGIN: track(&&TRACK1314_BEGIN, &&TRACK1314_END);
        	TRACK1314_END:   __asm__ __volatile__ ("nop;");
        	blockSize100k = 9; break;
                        
          case 'V':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1316_BEGIN: track(&&TRACK1316_BEGIN, &&TRACK1316_END);
        	TRACK1316_END:   __asm__ __volatile__ ("nop;");
        	 
        	  case 'L':
        								   __asm__ __volatile__ ("nop;");
        		TRACK1315_BEGIN: track(&&TRACK1315_BEGIN, &&TRACK1315_END);
        		TRACK1315_END:   __asm__ __volatile__ ("nop;");
        		license(); break;
                        
          case 'v':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1317_BEGIN: track(&&TRACK1317_BEGIN, &&TRACK1317_END);
        	TRACK1317_END:   __asm__ __volatile__ ("nop;");
        	verbosity++; break;
                        
          case 'h':
        							   __asm__ __volatile__ ("nop;");
        	TRACK1318_BEGIN: track(&&TRACK1318_BEGIN, &&TRACK1318_END);
        	TRACK1318_END:   __asm__ __volatile__ ("nop;");
        	usage ( progName );
                                 exit ( 0 );
                                 break;
                        
          default:
        							   __asm__ __volatile__ ("nop;");
        	TRACK1319_BEGIN: track(&&TRACK1319_BEGIN, &&TRACK1319_END);
        	TRACK1319_END:   __asm__ __volatile__ ("nop;");
        	fprintf ( stderr, "%s: Bad flag `%s'\n",
        	                                   progName, aa->name );
                                 usage ( progName );
                                 exit ( 1 );
                                 break;
                    }
      }
    }
  }
     for (aa = argList; aa != ((void *)0); aa = aa->link) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1359_BEGIN: track(&&TRACK1359_BEGIN, &&TRACK1359_END);
    TRACK1359_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1323_BEGIN: track(&&TRACK1323_BEGIN, &&TRACK1323_END);
    TRACK1323_END:   __asm__ __volatile__ ("nop;");
    break;
    }
          if ((strcmp(aa->name, ("--stdout"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1324_BEGIN: track(&&TRACK1324_BEGIN, &&TRACK1324_END);
    TRACK1324_END:   __asm__ __volatile__ ("nop;");
    srcMode = 2;
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1358_BEGIN: track(&&TRACK1358_BEGIN, &&TRACK1358_END);
    TRACK1358_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--decompress"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1325_BEGIN: track(&&TRACK1325_BEGIN, &&TRACK1325_END);
    TRACK1325_END:   __asm__ __volatile__ ("nop;");
    opMode = 2;
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1357_BEGIN: track(&&TRACK1357_BEGIN, &&TRACK1357_END);
    TRACK1357_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--compress"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1326_BEGIN: track(&&TRACK1326_BEGIN, &&TRACK1326_END);
    TRACK1326_END:   __asm__ __volatile__ ("nop;");
    opMode = 1;
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1356_BEGIN: track(&&TRACK1356_BEGIN, &&TRACK1356_END);
    TRACK1356_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--force"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1327_BEGIN: track(&&TRACK1327_BEGIN, &&TRACK1327_END);
    TRACK1327_END:   __asm__ __volatile__ ("nop;");
    forceOverwrite = ((Bool)1);
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1355_BEGIN: track(&&TRACK1355_BEGIN, &&TRACK1355_END);
    TRACK1355_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--test"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1328_BEGIN: track(&&TRACK1328_BEGIN, &&TRACK1328_END);
    TRACK1328_END:   __asm__ __volatile__ ("nop;");
    opMode = 3;
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1354_BEGIN: track(&&TRACK1354_BEGIN, &&TRACK1354_END);
    TRACK1354_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--keep"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1329_BEGIN: track(&&TRACK1329_BEGIN, &&TRACK1329_END);
    TRACK1329_END:   __asm__ __volatile__ ("nop;");
    keepInputFiles = ((Bool)1);
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1353_BEGIN: track(&&TRACK1353_BEGIN, &&TRACK1353_END);
    TRACK1353_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--small"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1330_BEGIN: track(&&TRACK1330_BEGIN, &&TRACK1330_END);
    TRACK1330_END:   __asm__ __volatile__ ("nop;");
    smallMode = ((Bool)1);
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1352_BEGIN: track(&&TRACK1352_BEGIN, &&TRACK1352_END);
    TRACK1352_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--quiet"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1331_BEGIN: track(&&TRACK1331_BEGIN, &&TRACK1331_END);
    TRACK1331_END:   __asm__ __volatile__ ("nop;");
    noisy = ((Bool)0);
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1351_BEGIN: track(&&TRACK1351_BEGIN, &&TRACK1351_END);
    TRACK1351_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--version"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1332_BEGIN: track(&&TRACK1332_BEGIN, &&TRACK1332_END);
    TRACK1332_END:   __asm__ __volatile__ ("nop;");
    license();
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1350_BEGIN: track(&&TRACK1350_BEGIN, &&TRACK1350_END);
    TRACK1350_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--license"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1333_BEGIN: track(&&TRACK1333_BEGIN, &&TRACK1333_END);
    TRACK1333_END:   __asm__ __volatile__ ("nop;");
    license();
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1349_BEGIN: track(&&TRACK1349_BEGIN, &&TRACK1349_END);
    TRACK1349_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--exponential"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1334_BEGIN: track(&&TRACK1334_BEGIN, &&TRACK1334_END);
    TRACK1334_END:   __asm__ __volatile__ ("nop;");
    workFactor = 1;
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1348_BEGIN: track(&&TRACK1348_BEGIN, &&TRACK1348_END);
    TRACK1348_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--repetitive-best"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1335_BEGIN: track(&&TRACK1335_BEGIN, &&TRACK1335_END);
    TRACK1335_END:   __asm__ __volatile__ ("nop;");
    redundant(aa->name);
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1347_BEGIN: track(&&TRACK1347_BEGIN, &&TRACK1347_END);
    TRACK1347_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--repetitive-fast"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1336_BEGIN: track(&&TRACK1336_BEGIN, &&TRACK1336_END);
    TRACK1336_END:   __asm__ __volatile__ ("nop;");
    redundant(aa->name);
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1346_BEGIN: track(&&TRACK1346_BEGIN, &&TRACK1346_END);
    TRACK1346_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--fast"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1337_BEGIN: track(&&TRACK1337_BEGIN, &&TRACK1337_END);
    TRACK1337_END:   __asm__ __volatile__ ("nop;");
    blockSize100k = 1;
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1345_BEGIN: track(&&TRACK1345_BEGIN, &&TRACK1345_END);
    TRACK1345_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--best"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1338_BEGIN: track(&&TRACK1338_BEGIN, &&TRACK1338_END);
    TRACK1338_END:   __asm__ __volatile__ ("nop;");
    blockSize100k = 9;
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1344_BEGIN: track(&&TRACK1344_BEGIN, &&TRACK1344_END);
    TRACK1344_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--verbose"))==0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1339_BEGIN: track(&&TRACK1339_BEGIN, &&TRACK1339_END);
    TRACK1339_END:   __asm__ __volatile__ ("nop;");
    verbosity++;
    } else
           {
    						   __asm__ __volatile__ ("nop;");
    TRACK1343_BEGIN: track(&&TRACK1343_BEGIN, &&TRACK1343_END);
    TRACK1343_END:   __asm__ __volatile__ ("nop;");
    if ((strcmp(aa->name, ("--help"))==0)) {
      						   __asm__ __volatile__ ("nop;");
      TRACK1340_BEGIN: track(&&TRACK1340_BEGIN, &&TRACK1340_END);
      TRACK1340_END:   __asm__ __volatile__ ("nop;");
      usage ( progName ); exit ( 0 );
    }
             else
              {
    						   __asm__ __volatile__ ("nop;");
    TRACK1342_BEGIN: track(&&TRACK1342_BEGIN, &&TRACK1342_END);
    TRACK1342_END:   __asm__ __volatile__ ("nop;");
    if (strncmp ( aa->name, "--", 2) == 0) {
      						   __asm__ __volatile__ ("nop;");
      TRACK1341_BEGIN: track(&&TRACK1341_BEGIN, &&TRACK1341_END);
      TRACK1341_END:   __asm__ __volatile__ ("nop;");
      fprintf ( stderr, "%s: Bad flag `%s'\n", progName, aa->name );
                  usage ( progName );
                  exit ( 1 );
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
  }
     if (verbosity > 4)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1360_BEGIN: track(&&TRACK1360_BEGIN, &&TRACK1360_END);
  TRACK1360_END:   __asm__ __volatile__ ("nop;");
  verbosity = 4;
  }
     if (opMode == 1 && smallMode && blockSize100k > 2)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1361_BEGIN: track(&&TRACK1361_BEGIN, &&TRACK1361_END);
  TRACK1361_END:   __asm__ __volatile__ ("nop;");
  blockSize100k = 2;
  }
     if (opMode == 3 && srcMode == 2) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1362_BEGIN: track(&&TRACK1362_BEGIN, &&TRACK1362_END);
    TRACK1362_END:   __asm__ __volatile__ ("nop;");
    fprintf ( stderr, "%s: -c and -t cannot be used together.\n",
                    progName );
          exit ( 1 );
  }
     if (srcMode == 2 && numFileNames == 0)
         {
  						   __asm__ __volatile__ ("nop;");
  TRACK1363_BEGIN: track(&&TRACK1363_BEGIN, &&TRACK1363_END);
  TRACK1363_END:   __asm__ __volatile__ ("nop;");
  srcMode = 1;
  }
     if (opMode != 1)  {
  						   __asm__ __volatile__ ("nop;");
  TRACK1364_BEGIN: track(&&TRACK1364_BEGIN, &&TRACK1364_END);
  TRACK1364_END:   __asm__ __volatile__ ("nop;");
  blockSize100k = 0;
  }
     if (srcMode == 3) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1365_BEGIN: track(&&TRACK1365_BEGIN, &&TRACK1365_END);
    TRACK1365_END:   __asm__ __volatile__ ("nop;");
    signal (2, mySignalCatcher);
          signal (15, mySignalCatcher);
          signal (1, mySignalCatcher);
  }
     if (opMode == 1) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1371_BEGIN: track(&&TRACK1371_BEGIN, &&TRACK1371_END);
    TRACK1371_END:   __asm__ __volatile__ ("nop;");
    if (srcMode == 1) {
      						   __asm__ __volatile__ ("nop;");
      TRACK1366_BEGIN: track(&&TRACK1366_BEGIN, &&TRACK1366_END);
      TRACK1366_END:   __asm__ __volatile__ ("nop;");
      compress ( ((void *)0) );
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK1370_BEGIN: track(&&TRACK1370_BEGIN, &&TRACK1370_END);
      TRACK1370_END:   __asm__ __volatile__ ("nop;");
      decode = ((Bool)1);
              for (aa = argList; aa != ((void *)0); aa = aa->link) {
        						   __asm__ __volatile__ ("nop;");
        TRACK1369_BEGIN: track(&&TRACK1369_BEGIN, &&TRACK1369_END);
        TRACK1369_END:   __asm__ __volatile__ ("nop;");
        if ((strcmp(aa->name, ("--"))==0)) {
          						   __asm__ __volatile__ ("nop;");
          TRACK1367_BEGIN: track(&&TRACK1367_BEGIN, &&TRACK1367_END);
          TRACK1367_END:   __asm__ __volatile__ ("nop;");
          decode = ((Bool)0); continue;
        }
                   if (aa->name[0] == '-' && decode)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK1368_BEGIN: track(&&TRACK1368_BEGIN, &&TRACK1368_END);
        TRACK1368_END:   __asm__ __volatile__ ("nop;");
        continue;
        }
                   numFilesProcessed++;
                   compress ( aa->name );
      }
    }
  }
     else
      {
  						   __asm__ __volatile__ ("nop;");
  TRACK1386_BEGIN: track(&&TRACK1386_BEGIN, &&TRACK1386_END);
  TRACK1386_END:   __asm__ __volatile__ ("nop;");
  if (opMode == 2) {
    						   __asm__ __volatile__ ("nop;");
    TRACK1378_BEGIN: track(&&TRACK1378_BEGIN, &&TRACK1378_END);
    TRACK1378_END:   __asm__ __volatile__ ("nop;");
    unzFailsExist = ((Bool)0);
          if (srcMode == 1) {
      						   __asm__ __volatile__ ("nop;");
      TRACK1372_BEGIN: track(&&TRACK1372_BEGIN, &&TRACK1372_END);
      TRACK1372_END:   __asm__ __volatile__ ("nop;");
      uncompress ( ((void *)0) );
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK1376_BEGIN: track(&&TRACK1376_BEGIN, &&TRACK1376_END);
      TRACK1376_END:   __asm__ __volatile__ ("nop;");
      decode = ((Bool)1);
               for (aa = argList; aa != ((void *)0); aa = aa->link) {
        						   __asm__ __volatile__ ("nop;");
        TRACK1375_BEGIN: track(&&TRACK1375_BEGIN, &&TRACK1375_END);
        TRACK1375_END:   __asm__ __volatile__ ("nop;");
        if ((strcmp(aa->name, ("--"))==0)) {
          						   __asm__ __volatile__ ("nop;");
          TRACK1373_BEGIN: track(&&TRACK1373_BEGIN, &&TRACK1373_END);
          TRACK1373_END:   __asm__ __volatile__ ("nop;");
          decode = ((Bool)0); continue;
        }
                    if (aa->name[0] == '-' && decode)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK1374_BEGIN: track(&&TRACK1374_BEGIN, &&TRACK1374_END);
        TRACK1374_END:   __asm__ __volatile__ ("nop;");
        continue;
        }
                    numFilesProcessed++;
                    uncompress ( aa->name );
      }
    }
          if (unzFailsExist) {
      						   __asm__ __volatile__ ("nop;");
      TRACK1377_BEGIN: track(&&TRACK1377_BEGIN, &&TRACK1377_END);
      TRACK1377_END:   __asm__ __volatile__ ("nop;");
      setExit(2);
               exit(exitValue);
    }
  }
     else {
    						   __asm__ __volatile__ ("nop;");
    TRACK1385_BEGIN: track(&&TRACK1385_BEGIN, &&TRACK1385_END);
    TRACK1385_END:   __asm__ __volatile__ ("nop;");
    testFailsExist = ((Bool)0);
          if (srcMode == 1) {
      						   __asm__ __volatile__ ("nop;");
      TRACK1379_BEGIN: track(&&TRACK1379_BEGIN, &&TRACK1379_END);
      TRACK1379_END:   __asm__ __volatile__ ("nop;");
      testf ( ((void *)0) );
    } else {
      						   __asm__ __volatile__ ("nop;");
      TRACK1383_BEGIN: track(&&TRACK1383_BEGIN, &&TRACK1383_END);
      TRACK1383_END:   __asm__ __volatile__ ("nop;");
      decode = ((Bool)1);
               for (aa = argList; aa != ((void *)0); aa = aa->link) {
        						   __asm__ __volatile__ ("nop;");
        TRACK1382_BEGIN: track(&&TRACK1382_BEGIN, &&TRACK1382_END);
        TRACK1382_END:   __asm__ __volatile__ ("nop;");
        if ((strcmp(aa->name, ("--"))==0)) {
          						   __asm__ __volatile__ ("nop;");
          TRACK1380_BEGIN: track(&&TRACK1380_BEGIN, &&TRACK1380_END);
          TRACK1380_END:   __asm__ __volatile__ ("nop;");
          decode = ((Bool)0); continue;
        }
                    if (aa->name[0] == '-' && decode)  {
        						   __asm__ __volatile__ ("nop;");
        TRACK1381_BEGIN: track(&&TRACK1381_BEGIN, &&TRACK1381_END);
        TRACK1381_END:   __asm__ __volatile__ ("nop;");
        continue;
        }
                    numFilesProcessed++;
                    testf ( aa->name );
      }
    }
          if (testFailsExist && noisy) {
      						   __asm__ __volatile__ ("nop;");
      TRACK1384_BEGIN: track(&&TRACK1384_BEGIN, &&TRACK1384_END);
      TRACK1384_END:   __asm__ __volatile__ ("nop;");
      fprintf ( stderr,
                 "\n"
                 "You can use the `bzip2recover' program to attempt to recover\n"
                 "data from undamaged sections of corrupted files.\n\n"
               );
               setExit(2);
               exit(exitValue);
    }
  }
  }
     aa = argList;
     while (aa != ((void *)0)) {
    Cell* aa2 = aa->link;
    						   __asm__ __volatile__ ("nop;");
    TRACK1388_BEGIN: track(&&TRACK1388_BEGIN, &&TRACK1388_END);
    TRACK1388_END:   __asm__ __volatile__ ("nop;");
    if (aa->name != ((void *)0))  {
    						   __asm__ __volatile__ ("nop;");
    TRACK1387_BEGIN: track(&&TRACK1387_BEGIN, &&TRACK1387_END);
    TRACK1387_END:   __asm__ __volatile__ ("nop;");
    free(aa->name);
    }
          free(aa);
          aa = aa2;
  }
     return exitValue;
}
