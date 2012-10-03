
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


//Include files for page unprotection

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

//Statistics
typedef struct
{
  int count;
}coverage_t;
//Unprotect CS and initialize variables
static void init();
//Report Statistics in the end
static void report();
//Tracking block
static void track(int start, int end);
//Declare a static coverage var
static coverage_t coverage;
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
   if (lo == hi) return;
   if (hi - lo > 3) {
      for ( i = hi-4; i >= lo; i-- ) {
         tmp = fmap[i];
         ec_tmp = eclass[tmp];
         for ( j = i+4; j <= hi && ec_tmp > eclass[fmap[j]]; j += 4 )
            fmap[j-4] = fmap[j];
         fmap[j-4] = tmp;
      }
   }
   for ( i = hi-1; i >= lo; i-- ) {
      tmp = fmap[i];
      ec_tmp = eclass[tmp];
      for ( j = i+1; j <= hi && ec_tmp > eclass[fmap[j]]; j++ )
         fmap[j-1] = fmap[j];
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
      { if (!(sp < 100)) BZ2_bz__AssertH__fail ( 1004 ); };
      { sp--; lo = stackLo[sp]; hi = stackHi[sp]; };
      if (hi - lo < 10) {
         fallbackSimpleSort ( fmap, eclass, lo, hi );
         continue;
      }
      r = ((r * 7621) + 1) % 32768;
      r3 = r % 3;
      if (r3 == 0) med = eclass[fmap[lo]]; else
      if (r3 == 1) med = eclass[fmap[(lo+hi)>>1]]; else
                   med = eclass[fmap[hi]];
      unLo = ltLo = lo;
      unHi = gtHi = hi;
      while (1) {
         while (1) {
            if (unLo > unHi) break;
            n = (Int32)eclass[fmap[unLo]] - (Int32)med;
            if (n == 0) {
               { Int32 zztmp = fmap[unLo]; fmap[unLo] = fmap[ltLo]; fmap[ltLo] = zztmp; };
               ltLo++; unLo++;
               continue;
            };
            if (n > 0) break;
            unLo++;
         }
         while (1) {
            if (unLo > unHi) break;
            n = (Int32)eclass[fmap[unHi]] - (Int32)med;
            if (n == 0) {
               { Int32 zztmp = fmap[unHi]; fmap[unHi] = fmap[gtHi]; fmap[gtHi] = zztmp; };
               gtHi--; unHi--;
               continue;
            };
            if (n < 0) break;
            unHi--;
         }
         if (unLo > unHi) break;
         { Int32 zztmp = fmap[unLo]; fmap[unLo] = fmap[unHi]; fmap[unHi] = zztmp; }; unLo++; unHi--;
      }
      ;
      if (gtHi < ltLo) continue;
      n = ((ltLo-lo) < (unLo-ltLo)) ? (ltLo-lo) : (unLo-ltLo); { Int32 yyp1 = (lo); Int32 yyp2 = (unLo-n); Int32 yyn = (n); while (yyn > 0) { { Int32 zztmp = fmap[yyp1]; fmap[yyp1] = fmap[yyp2]; fmap[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--; } };
      m = ((hi-gtHi) < (gtHi-unHi)) ? (hi-gtHi) : (gtHi-unHi); { Int32 yyp1 = (unLo); Int32 yyp2 = (hi-m+1); Int32 yyn = (m); while (yyn > 0) { { Int32 zztmp = fmap[yyp1]; fmap[yyp1] = fmap[yyp2]; fmap[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--; } };
      n = lo + unLo - ltLo - 1;
      m = hi - (gtHi - unHi) + 1;
      if (n - lo > hi - m) {
         { stackLo[sp] = lo; stackHi[sp] = n; sp++; };
         { stackLo[sp] = m; stackHi[sp] = hi; sp++; };
      } else {
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
      fprintf(stderr,"        bucket sorting ...\n");
   for (i = 0; i < 257; i++) ftab[i] = 0;
   for (i = 0; i < nblock; i++) ftab[eclass8[i]]++;
   for (i = 0; i < 256; i++) ftabCopy[i] = ftab[i];
   for (i = 1; i < 257; i++) ftab[i] += ftab[i-1];
   for (i = 0; i < nblock; i++) {
      j = eclass8[i];
      k = ftab[j] - 1;
      ftab[j] = k;
      fmap[k] = i;
   }
   nBhtab = 2 + (nblock / 32);
   for (i = 0; i < nBhtab; i++) bhtab[i] = 0;
   for (i = 0; i < 256; i++) bhtab[(ftab[i]) >> 5] |= (1 << ((ftab[i]) & 31));
   for (i = 0; i < 32; i++) {
      bhtab[(nblock + 2*i) >> 5] |= (1 << ((nblock + 2*i) & 31));
      bhtab[(nblock + 2*i + 1) >> 5] &= ~(1 << ((nblock + 2*i + 1) & 31));
   }
   H = 1;
   while (1) {
      if (verb >= 4)
         fprintf(stderr,"        depth %6d has ",H);
      j = 0;
      for (i = 0; i < nblock; i++) {
         if ((bhtab[(i) >> 5] & (1 << ((i) & 31)))) j = i;
         k = fmap[i] - H; if (k < 0) k += nblock;
         eclass[k] = j;
      }
      nNotDone = 0;
      r = -1;
      while (1) {
         k = r + 1;
         while ((bhtab[(k) >> 5] & (1 << ((k) & 31))) && ((k) & 0x01f)) k++;
         if ((bhtab[(k) >> 5] & (1 << ((k) & 31)))) {
            while (bhtab[(k) >> 5] == 0xffffffff) k += 32;
            while ((bhtab[(k) >> 5] & (1 << ((k) & 31)))) k++;
         }
         l = k - 1;
         if (l >= nblock) break;
         while (!(bhtab[(k) >> 5] & (1 << ((k) & 31))) && ((k) & 0x01f)) k++;
         if (!(bhtab[(k) >> 5] & (1 << ((k) & 31)))) {
            while (bhtab[(k) >> 5] == 0x00000000) k += 32;
            while (!(bhtab[(k) >> 5] & (1 << ((k) & 31)))) k++;
         }
         r = k - 1;
         if (r >= nblock) break;
         if (r > l) {
            nNotDone += (r - l + 1);
            fallbackQSort3 ( fmap, eclass, l, r );
            cc = -1;
            for (i = l; i <= r; i++) {
               cc1 = eclass[fmap[i]];
               if (cc != cc1) { bhtab[(i) >> 5] |= (1 << ((i) & 31)); cc = cc1; };
            }
         }
      }
      if (verb >= 4)
         fprintf(stderr,"%6d unresolved strings\n",nNotDone);
      H *= 2;
      if (H > nblock || nNotDone == 0) break;
   }
   if (verb >= 4)
      fprintf(stderr,"        reconstructing block ...\n");
   j = 0;
   for (i = 0; i < nblock; i++) {
      while (ftabCopy[j] == 0) j++;
      ftabCopy[j]--;
      eclass8[fmap[i]] = (UChar)j;
   }
   { if (!(j < 256)) BZ2_bz__AssertH__fail ( 1005 ); };
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
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   c1 = block[i1]; c2 = block[i2];
   if (c1 != c2) return (c1 > c2);
   i1++; i2++;
   k = nblock + 8;
   do {
      c1 = block[i1]; c2 = block[i2];
      if (c1 != c2) return (c1 > c2);
      s1 = quadrant[i1]; s2 = quadrant[i2];
      if (s1 != s2) return (s1 > s2);
      i1++; i2++;
      c1 = block[i1]; c2 = block[i2];
      if (c1 != c2) return (c1 > c2);
      s1 = quadrant[i1]; s2 = quadrant[i2];
      if (s1 != s2) return (s1 > s2);
      i1++; i2++;
      c1 = block[i1]; c2 = block[i2];
      if (c1 != c2) return (c1 > c2);
      s1 = quadrant[i1]; s2 = quadrant[i2];
      if (s1 != s2) return (s1 > s2);
      i1++; i2++;
      c1 = block[i1]; c2 = block[i2];
      if (c1 != c2) return (c1 > c2);
      s1 = quadrant[i1]; s2 = quadrant[i2];
      if (s1 != s2) return (s1 > s2);
      i1++; i2++;
      c1 = block[i1]; c2 = block[i2];
      if (c1 != c2) return (c1 > c2);
      s1 = quadrant[i1]; s2 = quadrant[i2];
      if (s1 != s2) return (s1 > s2);
      i1++; i2++;
      c1 = block[i1]; c2 = block[i2];
      if (c1 != c2) return (c1 > c2);
      s1 = quadrant[i1]; s2 = quadrant[i2];
      if (s1 != s2) return (s1 > s2);
      i1++; i2++;
      c1 = block[i1]; c2 = block[i2];
      if (c1 != c2) return (c1 > c2);
      s1 = quadrant[i1]; s2 = quadrant[i2];
      if (s1 != s2) return (s1 > s2);
      i1++; i2++;
      c1 = block[i1]; c2 = block[i2];
      if (c1 != c2) return (c1 > c2);
      s1 = quadrant[i1]; s2 = quadrant[i2];
      if (s1 != s2) return (s1 > s2);
      i1++; i2++;
      if (i1 >= nblock) i1 -= nblock;
      if (i2 >= nblock) i2 -= nblock;
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
   if (bigN < 2) return;
   hp = 0;
   while (incs[hp] < bigN) hp++;
   hp--;
   for (; hp >= 0; hp--) {
      h = incs[hp];
      i = lo + h;
      while (((Bool)1)) {
         if (i > hi) break;
         v = ptr[i];
         j = i;
         while ( mainGtU (
                    ptr[j-h]+d, v+d, block, quadrant, nblock, budget
                 ) ) {
            ptr[j] = ptr[j-h];
            j = j - h;
            if (j <= (lo + h - 1)) break;
         }
         ptr[j] = v;
         i++;
         if (i > hi) break;
         v = ptr[i];
         j = i;
         while ( mainGtU (
                    ptr[j-h]+d, v+d, block, quadrant, nblock, budget
                 ) ) {
            ptr[j] = ptr[j-h];
            j = j - h;
            if (j <= (lo + h - 1)) break;
         }
         ptr[j] = v;
         i++;
         if (i > hi) break;
         v = ptr[i];
         j = i;
         while ( mainGtU (
                    ptr[j-h]+d, v+d, block, quadrant, nblock, budget
                 ) ) {
            ptr[j] = ptr[j-h];
            j = j - h;
            if (j <= (lo + h - 1)) break;
         }
         ptr[j] = v;
         i++;
         if (*budget < 0) return;
      }
   }
}
static
UChar mmed3 ( UChar a, UChar b, UChar c )
{
   UChar t;
   if (a > b) { t = a; a = b; b = t; };
   if (b > c) {
      b = c;
      if (a > b) b = a;
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
      { if (!(sp < 100)) BZ2_bz__AssertH__fail ( 1001 ); };
      { sp--; lo = stackLo[sp]; hi = stackHi[sp]; d = stackD [sp]; };
      if (hi - lo < 20 ||
          d > (2 + 12)) {
         mainSimpleSort ( ptr, block, quadrant, nblock, lo, hi, d, budget );
         if (*budget < 0) return;
         continue;
      }
      med = (Int32)
            mmed3 ( block[ptr[ lo ]+d],
                    block[ptr[ hi ]+d],
                    block[ptr[ (lo+hi)>>1 ]+d] );
      unLo = ltLo = lo;
      unHi = gtHi = hi;
      while (((Bool)1)) {
         while (((Bool)1)) {
            if (unLo > unHi) break;
            n = ((Int32)block[ptr[unLo]+d]) - med;
            if (n == 0) {
               { Int32 zztmp = ptr[unLo]; ptr[unLo] = ptr[ltLo]; ptr[ltLo] = zztmp; };
               ltLo++; unLo++; continue;
            };
            if (n > 0) break;
            unLo++;
         }
         while (((Bool)1)) {
            if (unLo > unHi) break;
            n = ((Int32)block[ptr[unHi]+d]) - med;
            if (n == 0) {
               { Int32 zztmp = ptr[unHi]; ptr[unHi] = ptr[gtHi]; ptr[gtHi] = zztmp; };
               gtHi--; unHi--; continue;
            };
            if (n < 0) break;
            unHi--;
         }
         if (unLo > unHi) break;
         { Int32 zztmp = ptr[unLo]; ptr[unLo] = ptr[unHi]; ptr[unHi] = zztmp; }; unLo++; unHi--;
      }
      ;
      if (gtHi < ltLo) {
         { stackLo[sp] = lo; stackHi[sp] = hi; stackD [sp] = d+1; sp++; };
         continue;
      }
      n = ((ltLo-lo) < (unLo-ltLo)) ? (ltLo-lo) : (unLo-ltLo); { Int32 yyp1 = (lo); Int32 yyp2 = (unLo-n); Int32 yyn = (n); while (yyn > 0) { { Int32 zztmp = ptr[yyp1]; ptr[yyp1] = ptr[yyp2]; ptr[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--; } };
      m = ((hi-gtHi) < (gtHi-unHi)) ? (hi-gtHi) : (gtHi-unHi); { Int32 yyp1 = (unLo); Int32 yyp2 = (hi-m+1); Int32 yyn = (m); while (yyn > 0) { { Int32 zztmp = ptr[yyp1]; ptr[yyp1] = ptr[yyp2]; ptr[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--; } };
      n = lo + unLo - ltLo - 1;
      m = hi - (gtHi - unHi) + 1;
      nextLo[0] = lo; nextHi[0] = n; nextD[0] = d;
      nextLo[1] = m; nextHi[1] = hi; nextD[1] = d;
      nextLo[2] = n+1; nextHi[2] = m-1; nextD[2] = d+1;
      if ((nextHi[0]-nextLo[0]) < (nextHi[1]-nextLo[1])) { Int32 tz; tz = nextLo[0]; nextLo[0] = nextLo[1]; nextLo[1] = tz; tz = nextHi[0]; nextHi[0] = nextHi[1]; nextHi[1] = tz; tz = nextD [0]; nextD [0] = nextD [1]; nextD [1] = tz; };
      if ((nextHi[1]-nextLo[1]) < (nextHi[2]-nextLo[2])) { Int32 tz; tz = nextLo[1]; nextLo[1] = nextLo[2]; nextLo[2] = tz; tz = nextHi[1]; nextHi[1] = nextHi[2]; nextHi[2] = tz; tz = nextD [1]; nextD [1] = nextD [2]; nextD [2] = tz; };
      if ((nextHi[0]-nextLo[0]) < (nextHi[1]-nextLo[1])) { Int32 tz; tz = nextLo[0]; nextLo[0] = nextLo[1]; nextLo[1] = tz; tz = nextHi[0]; nextHi[0] = nextHi[1]; nextHi[1] = tz; tz = nextD [0]; nextD [0] = nextD [1]; nextD [1] = tz; };
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
                Int32* budget) 
{
   Int32 i, j, k, ss, sb;
   Int32 runningOrder[256];
   Bool bigDone[256];
   Int32 copyStart[256];
   Int32 copyEnd [256];
   UChar c1;
   Int32 numQSorted;
   UInt16 s;
   if (verb >= 4) fprintf(stderr,"        main sort initialise ...\n");
   for (i = 65536; i >= 0; i--) ftab[i] = 0;
   j = block[0] << 8;
   i = nblock-1;
   for (; i >= 3; i -= 4) {
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
      quadrant[i] = 0;
      j = (j >> 8) | ( ((UInt16)block[i]) << 8);
      ftab[j]++;
   }
   for (i = 0; i < (2 + 12 + 18 + 2); i++) {
      block [nblock+i] = block[i];
      quadrant[nblock+i] = 0;
   }
   if (verb >= 4) fprintf(stderr,"        bucket sorting ...\n");
   for (i = 1; i <= 65536; i++) ftab[i] += ftab[i-1];
   s = block[0] << 8;
   i = nblock-1;
   for (; i >= 3; i -= 4) {
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
      s = (s >> 8) | (block[i] << 8);
      j = ftab[s] -1;
      ftab[s] = j;
      ptr[j] = i;
   }
   for (i = 0; i <= 255; i++) {
      bigDone [i] = ((Bool)0);
      runningOrder[i] = i;
   }
   {
      Int32 vv;
      Int32 h = 1;
      do h = 3 * h + 1; while (h <= 256);
      do {
         h = h / 3;
         for (i = h; i <= 255; i++) {
            vv = runningOrder[i];
            j = i;
            while ( (ftab[((runningOrder[j-h])+1) << 8] - ftab[(runningOrder[j-h]) << 8]) > (ftab[((vv)+1) << 8] - ftab[(vv) << 8]) ) {
               runningOrder[j] = runningOrder[j-h];
               j = j - h;
               if (j <= (h - 1)) goto zero;
            }
            zero:
            runningOrder[j] = vv;
         }
      } while (h != 1);
   }
   numQSorted = 0;
   for (i = 0; i <= 255; i++) {



      ss = runningOrder[i];
      for (j = 0; j <= 255; j++) {
         if (j != ss) {
            sb = (ss << 8) + j;
            if ( ! (ftab[sb] & (1 << 21)) ) {
               Int32 lo = ftab[sb] & (~((1 << 21)));
               Int32 hi = (ftab[sb+1] & (~((1 << 21)))) - 1;
               if (hi > lo) {
                  if (verb >= 4)
                     fprintf(stderr,"        qsort [0x%x, 0x%x]   " "done %d   this %d\n",ss,j,numQSorted,hi - lo + 1);
                  mainQSort3 (
                     ptr, block, quadrant, nblock,
                     lo, hi, 2, budget
                  );
                  numQSorted += (hi - lo + 1);
                  if (*budget < 0) return;
               }
            }
            ftab[sb] |= (1 << 21);
         }
      }
      { if (!(!bigDone[ss])) BZ2_bz__AssertH__fail ( 1006 ); };
      {
         for (j = 0; j <= 255; j++) {
            copyStart[j] = ftab[(j << 8) + ss] & (~((1 << 21)));
            copyEnd [j] = (ftab[(j << 8) + ss + 1] & (~((1 << 21)))) - 1;
         }
         for (j = ftab[ss << 8] & (~((1 << 21))); j < copyStart[ss]; j++) {
            k = ptr[j]-1; if (k < 0) k += nblock;
            c1 = block[k];
            if (!bigDone[c1])
               ptr[ copyStart[c1]++ ] = k;
         }
         for (j = (ftab[(ss+1) << 8] & (~((1 << 21)))) - 1; j > copyEnd[ss]; j--) {
            k = ptr[j]-1; if (k < 0) k += nblock;
            c1 = block[k];
            if (!bigDone[c1])
               ptr[ copyEnd[c1]-- ] = k;
         }
      }
      { if (!((copyStart[ss]-1 == copyEnd[ss]) || (copyStart[ss] == 0 && copyEnd[ss] == nblock-1))) BZ2_bz__AssertH__fail ( 1007 ); }
      for (j = 0; j <= 255; j++) ftab[(j << 8) + ss] |= (1 << 21);
      bigDone[ss] = ((Bool)1);
      if (i < 255) {
         Int32 bbStart = ftab[ss << 8] & (~((1 << 21)));
         Int32 bbSize = (ftab[(ss+1) << 8] & (~((1 << 21)))) - bbStart;
         Int32 shifts = 0;
         while ((bbSize >> shifts) > 65534) shifts++;
         for (j = bbSize-1; j >= 0; j--) {
            Int32 a2update = ptr[bbStart + j];
            UInt16 qVal = (UInt16)(j >> shifts);
            quadrant[a2update] = qVal;
            if (a2update < (2 + 12 + 18 + 2))
               quadrant[a2update + nblock] = qVal;
         }
         { if (!(((bbSize-1) >> shifts) <= 65535)) BZ2_bz__AssertH__fail ( 1002 ); };
      }
   }
   if (verb >= 4)
      fprintf(stderr,"        %d pointers, %d sorted, %d scanned\n",nblock,numQSorted,nblock - numQSorted);
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
      fallbackSort ( s->arr1, s->arr2, ftab, nblock, verb );
   } else {
      i = nblock+(2 + 12 + 18 + 2);
      if (i & 1) i++;
      quadrant = (UInt16*)(&(block[i]));
      if (wfact < 1 ) wfact = 1;
      if (wfact > 100) wfact = 100;
      budgetInit = nblock * ((wfact-1) / 3);
      budget = budgetInit;
      mainSort ( ptr, block, quadrant, ftab, nblock, verb, &budget );
      if (verb >= 3)
         fprintf(stderr,"      %d work, %d block, ratio %5.2f\n",budgetInit - budget,nblock,(float)(budgetInit - budget) / (float)(nblock==0 ? 1 : nblock));
      if (budget < 0) {
         if (verb >= 2)
            fprintf(stderr,"    too repetitive; using fallback" " sorting algorithm\n");
         fallbackSort ( s->arr1, s->arr2, ftab, nblock, verb );
      }
   }
   s->origPtr = -1;
   for (i = 0; i < s->nblock; i++)
      if (ptr[i] == 0)
         { s->origPtr = i; break; };
   { if (!(s->origPtr != -1)) BZ2_bz__AssertH__fail ( 1003 ); };
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
      weight[i+1] = (freq[i] == 0 ? 1 : freq[i]) << 8;
   while (((Bool)1)) {
      nNodes = alphaSize;
      nHeap = 0;
      heap[0] = 0;
      weight[0] = 0;
      parent[0] = -2;
      for (i = 1; i <= alphaSize; i++) {
         parent[i] = -1;
         nHeap++;
         heap[nHeap] = i;
         { Int32 zz, tmp; zz = nHeap; tmp = heap[zz]; while (weight[tmp] < weight[heap[zz >> 1]]) { heap[zz] = heap[zz >> 1]; zz >>= 1; } heap[zz] = tmp; };
      }
      { if (!(nHeap < (258 +2))) BZ2_bz__AssertH__fail ( 2001 ); };
      while (nHeap > 1) {
         n1 = heap[1]; heap[1] = heap[nHeap]; nHeap--; { Int32 zz, yy, tmp; zz = 1; tmp = heap[zz]; while (((Bool)1)) { yy = zz << 1; if (yy > nHeap) break; if (yy < nHeap && weight[heap[yy+1]] < weight[heap[yy]]) yy++; if (weight[tmp] < weight[heap[yy]]) break; heap[zz] = heap[yy]; zz = yy; } heap[zz] = tmp; };
         n2 = heap[1]; heap[1] = heap[nHeap]; nHeap--; { Int32 zz, yy, tmp; zz = 1; tmp = heap[zz]; while (((Bool)1)) { yy = zz << 1; if (yy > nHeap) break; if (yy < nHeap && weight[heap[yy+1]] < weight[heap[yy]]) yy++; if (weight[tmp] < weight[heap[yy]]) break; heap[zz] = heap[yy]; zz = yy; } heap[zz] = tmp; };
         nNodes++;
         parent[n1] = parent[n2] = nNodes;
         weight[nNodes] = (((weight[n1]) & 0xffffff00)+((weight[n2]) & 0xffffff00)) | (1 + ((((weight[n1]) & 0x000000ff)) > (((weight[n2]) & 0x000000ff)) ? (((weight[n1]) & 0x000000ff)) : (((weight[n2]) & 0x000000ff))));
         parent[nNodes] = -1;
         nHeap++;
         heap[nHeap] = nNodes;
         { Int32 zz, tmp; zz = nHeap; tmp = heap[zz]; while (weight[tmp] < weight[heap[zz >> 1]]) { heap[zz] = heap[zz >> 1]; zz >>= 1; } heap[zz] = tmp; };
      }
      { if (!(nNodes < (258 * 2))) BZ2_bz__AssertH__fail ( 2002 ); };
      tooLong = ((Bool)0);
      for (i = 1; i <= alphaSize; i++) {
         j = 0;
         k = i;
         while (parent[k] >= 0) { k = parent[k]; j++; }
         len[i-1] = j;
         if (j > maxLen) tooLong = ((Bool)1);
      }
      if (! tooLong) break;
      for (i = 1; i < alphaSize; i++) {
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
      for (i = 0; i < alphaSize; i++)
         if (length[i] == n) { code[i] = vec; vec++; };
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
      for (j = 0; j < alphaSize; j++)
         if (length[j] == i) { perm[pp] = j; pp++; };
   for (i = 0; i < 23; i++) base[i] = 0;
   for (i = 0; i < alphaSize; i++) base[length[i]+1]++;
   for (i = 1; i < 23; i++) base[i] += base[i-1];
   for (i = 0; i < 23; i++) limit[i] = 0;
   vec = 0;
   for (i = minLen; i <= maxLen; i++) {
      vec += (base[i+1] - base[i]);
      limit[i] = vec-1;
      vec <<= 1;
   }
   for (i = minLen + 1; i <= maxLen; i++)
      base[i] = ((limit[i-1] + 1) << 1) - base[i];
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
      s->zbits[s->numZ] = (UChar)(s->bsBuff >> 24);
      s->numZ++;
      s->bsBuff <<= 8;
      s->bsLive -= 8;
   }
}
static
void bsW ( EState* s, Int32 n, UInt32 v )
{
   { while (s->bsLive >= 8) { s->zbits[s->numZ] = (UChar)(s->bsBuff >> 24); s->numZ++; s->bsBuff <<= 8; s->bsLive -= 8; } };
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
      if (s->inUse[i]) {
         s->unseqToSeq[i] = s->nInUse;
         s->nInUse++;
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
   for (i = 0; i <= EOB; i++) s->mtfFreq[i] = 0;
   wr = 0;
   zPend = 0;
   for (i = 0; i < s->nInUse; i++) yy[i] = (UChar) i;
   for (i = 0; i < s->nblock; i++) {
      UChar ll_i;
      ;
      j = ptr[i]-1; if (j < 0) j += s->nblock;
      ll_i = s->unseqToSeq[block[j]];
      ;
      if (yy[0] == ll_i) {
         zPend++;
      } else {
         if (zPend > 0) {
            zPend--;
            while (((Bool)1)) {
               if (zPend & 1) {
                  mtfv[wr] = 1; wr++;
                  s->mtfFreq[1]++;
               } else {
                  mtfv[wr] = 0; wr++;
                  s->mtfFreq[0]++;
               }
               if (zPend < 2) break;
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
      zPend--;
      while (((Bool)1)) {
         if (zPend & 1) {
            mtfv[wr] = 1; wr++;
            s->mtfFreq[1]++;
         } else {
            mtfv[wr] = 0; wr++;
            s->mtfFreq[0]++;
         }
         if (zPend < 2) break;
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
      fprintf(stderr,"      %d in block, %d after MTF & 1-2 coding, " "%d+2 syms in use\n",s->nblock,s->nMTF,s->nInUse);
   alphaSize = s->nInUse+2;
   for (t = 0; t < 6; t++)
      for (v = 0; v < alphaSize; v++)
         s->len[t][v] = 15;
   { if (!(s->nMTF > 0)) BZ2_bz__AssertH__fail ( 3001 ); };
   if (s->nMTF < 200) nGroups = 2; else
   if (s->nMTF < 600) nGroups = 3; else
   if (s->nMTF < 1200) nGroups = 4; else
   if (s->nMTF < 2400) nGroups = 5; else
                       nGroups = 6;
   {
      Int32 nPart, remF, tFreq, aFreq;
      nPart = nGroups;
      remF = s->nMTF;
      gs = 0;
      while (nPart > 0) {
         tFreq = remF / nPart;
         ge = gs-1;
         aFreq = 0;
         while (aFreq < tFreq && ge < alphaSize-1) {
            ge++;
            aFreq += s->mtfFreq[ge];
         }
         if (ge > gs
             && nPart != nGroups && nPart != 1
             && ((nGroups-nPart) % 2 == 1)) {
            aFreq -= s->mtfFreq[ge];
            ge--;
         }
         if (s->verbosity >= 3)
            fprintf(stderr,"      initial group %d, [%d .. %d], " "has %d syms (%4.1f%%)\n",nPart,gs,ge,aFreq,(100.0 * (float)aFreq) / (float)(s->nMTF));
         for (v = 0; v < alphaSize; v++)
            if (v >= gs && v <= ge)
               s->len[nPart-1][v] = 0; else
               s->len[nPart-1][v] = 15;
         nPart--;
         gs = ge+1;
         remF -= aFreq;
      }
   }
   for (iter = 0; iter < 4; iter++) {
      for (t = 0; t < nGroups; t++) fave[t] = 0;
      for (t = 0; t < nGroups; t++)
         for (v = 0; v < alphaSize; v++)
            s->rfreq[t][v] = 0;
      if (nGroups == 6) {
         for (v = 0; v < alphaSize; v++) {
            s->len_pack[v][0] = (s->len[1][v] << 16) | s->len[0][v];
            s->len_pack[v][1] = (s->len[3][v] << 16) | s->len[2][v];
            s->len_pack[v][2] = (s->len[5][v] << 16) | s->len[4][v];
  }
      }
      nSelectors = 0;
      totc = 0;
      gs = 0;
      while (((Bool)1)) {
         if (gs >= s->nMTF) break;
         ge = gs + 50 - 1;
         if (ge >= s->nMTF) ge = s->nMTF-1;
         for (t = 0; t < nGroups; t++) cost[t] = 0;
         if (nGroups == 6 && 50 == ge-gs+1) {
            register UInt32 cost01, cost23, cost45;
            register UInt16 icv;
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
            for (i = gs; i <= ge; i++) {
               UInt16 icv = mtfv[i];
               for (t = 0; t < nGroups; t++) cost[t] += s->len[t][icv];
            }
         }
         bc = 999999999; bt = -1;
         for (t = 0; t < nGroups; t++)
            if (cost[t] < bc) { bc = cost[t]; bt = t; };
         totc += bc;
         fave[bt]++;
         s->selector[nSelectors] = bt;
         nSelectors++;
         if (nGroups == 6 && 50 == ge-gs+1) {
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
            for (i = gs; i <= ge; i++)
               s->rfreq[bt][ mtfv[i] ]++;
         }
         gs = ge+1;
      }
      if (s->verbosity >= 3) {
         fprintf(stderr,"      pass %d: size is %d, grp uses are ",iter+1,totc/8);
         for (t = 0; t < nGroups; t++)
            fprintf(stderr,"%d ",fave[t]);
         fprintf(stderr,"\n");
      }
      for (t = 0; t < nGroups; t++)
         BZ2_hbMakeCodeLengths ( &(s->len[t][0]), &(s->rfreq[t][0]),
                                 alphaSize, 20 );
   }
   { if (!(nGroups < 8)) BZ2_bz__AssertH__fail ( 3002 ); };
   { if (!(nSelectors < 32768 && nSelectors <= (2 + (900000 / 50)))) BZ2_bz__AssertH__fail ( 3003 ); };
   {
      UChar pos[6], ll_i, tmp2, tmp;
      for (i = 0; i < nGroups; i++) pos[i] = i;
      for (i = 0; i < nSelectors; i++) {
         ll_i = s->selector[i];
         j = 0;
         tmp = pos[j];
         while ( ll_i != tmp ) {
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
      minLen = 32;
      maxLen = 0;
      for (i = 0; i < alphaSize; i++) {
         if (s->len[t][i] > maxLen) maxLen = s->len[t][i];
         if (s->len[t][i] < minLen) minLen = s->len[t][i];
      }
      { if (!(!(maxLen > 20))) BZ2_bz__AssertH__fail ( 3004 ); };
      { if (!(!(minLen < 1))) BZ2_bz__AssertH__fail ( 3005 ); };
      BZ2_hbAssignCodes ( &(s->code[t][0]), &(s->len[t][0]),
                          minLen, maxLen, alphaSize );
   }
   {
      Bool inUse16[16];
      for (i = 0; i < 16; i++) {
          inUse16[i] = ((Bool)0);
          for (j = 0; j < 16; j++)
             if (s->inUse[i * 16 + j]) inUse16[i] = ((Bool)1);
      }
      nBytes = s->numZ;
      for (i = 0; i < 16; i++)
         if (inUse16[i]) bsW(s,1,1); else bsW(s,1,0);
      for (i = 0; i < 16; i++)
         if (inUse16[i])
            for (j = 0; j < 16; j++) {
               if (s->inUse[i * 16 + j]) bsW(s,1,1); else bsW(s,1,0);
            }
      if (s->verbosity >= 3)
         fprintf(stderr,"      bytes: mapping %d, ",s->numZ-nBytes);
   }
   nBytes = s->numZ;
   bsW ( s, 3, nGroups );
   bsW ( s, 15, nSelectors );
   for (i = 0; i < nSelectors; i++) {
      for (j = 0; j < s->selectorMtf[i]; j++) bsW(s,1,1);
      bsW(s,1,0);
   }
   if (s->verbosity >= 3)
      fprintf(stderr,"selectors %d, ",s->numZ-nBytes);
   nBytes = s->numZ;
   for (t = 0; t < nGroups; t++) {
      Int32 curr = s->len[t][0];
      bsW ( s, 5, curr );
      for (i = 0; i < alphaSize; i++) {
         while (curr < s->len[t][i]) { bsW(s,2,2); curr++; };
         while (curr > s->len[t][i]) { bsW(s,2,3); curr--; };
         bsW ( s, 1, 0 );
      }
   }
   if (s->verbosity >= 3)
      fprintf(stderr,"code lengths %d, ",s->numZ-nBytes);
   nBytes = s->numZ;
   selCtr = 0;
   gs = 0;
   while (((Bool)1)) {
      if (gs >= s->nMTF) break;
      ge = gs + 50 - 1;
      if (ge >= s->nMTF) ge = s->nMTF-1;
      { if (!(s->selector[selCtr] < nGroups)) BZ2_bz__AssertH__fail ( 3006 ); };
      if (nGroups == 6 && 50 == ge-gs+1) {
            UInt16 mtfv_i;
            UChar* s_len_sel_selCtr
               = &(s->len[s->selector[selCtr]][0]);
            Int32* s_code_sel_selCtr
               = &(s->code[s->selector[selCtr]][0]);
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
         for (i = gs; i <= ge; i++) {
            bsW ( s,
                  s->len [s->selector[selCtr]] [mtfv[i]],
                  s->code [s->selector[selCtr]] [mtfv[i]] );
         }
      }
      gs = ge+1;
      selCtr++;
   }
   { if (!(selCtr == nSelectors)) BZ2_bz__AssertH__fail ( 3007 ); };
   if (s->verbosity >= 3)
      fprintf(stderr,"codes %d\n",s->numZ-nBytes);
}
void BZ2_compressBlock ( EState* s, Bool is_last_block )
{
   if (s->nblock > 0) {
      { s->blockCRC = ~(s->blockCRC); };
      s->combinedCRC = (s->combinedCRC << 1) | (s->combinedCRC >> 31);
      s->combinedCRC ^= s->blockCRC;
      if (s->blockNo > 1) s->numZ = 0;
      if (s->verbosity >= 2)
         fprintf(stderr,"    block %d: crc = 0x%8x, " "combined CRC = 0x%8x, size = %d\n",s->blockNo,s->blockCRC,s->combinedCRC,s->nblock);
      BZ2_blockSort ( s );
   }
   s->zbits = (UChar*) (&((UChar*)s->arr2)[s->nblock]);
   if (s->blockNo == 1) {
      BZ2_bsInitWrite ( s );
      bsPutUChar ( s, 0x42 );
      bsPutUChar ( s, 0x5a );
      bsPutUChar ( s, 0x68 );
      bsPutUChar ( s, (UChar)(0x30 + s->blockSize100k) );
   }
   if (s->nblock > 0) {
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
      bsPutUChar ( s, 0x17 ); bsPutUChar ( s, 0x72 );
      bsPutUChar ( s, 0x45 ); bsPutUChar ( s, 0x38 );
      bsPutUChar ( s, 0x50 ); bsPutUChar ( s, 0x90 );
      bsPutUInt32 ( s, s->combinedCRC );
      if (s->verbosity >= 2)
         fprintf(stderr,"    final combined CRC = 0x%x\n   ",s->combinedCRC);
      bsFinishWrite ( s );
   }
}
static
void makeMaps_d ( DState* s )
{
   Int32 i;
   s->nInUse = 0;
   for (i = 0; i < 256; i++)
      if (s->inUse[i]) {
         s->seqToUnseq[s->nInUse] = i;
         s->nInUse++;
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
      case 10: s->state = 10; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x42) { retVal = (-5); goto save_state_and_return; };;
      case 11: s->state = 11; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x5a) { retVal = (-5); goto save_state_and_return; };;
      case 12: s->state = 12; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; }
      if (uc != 0x68) { retVal = (-5); goto save_state_and_return; };;
      case 13: s->state = 13; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; s->blockSize100k = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; }
      if (s->blockSize100k < (0x30 + 1) ||
          s->blockSize100k > (0x30 + 9)) { retVal = (-5); goto save_state_and_return; };;
      s->blockSize100k -= 0x30;
      if (s->smallDecompress) {
         s->ll16 = (strm->bzalloc)(strm->opaque,(s->blockSize100k * 100000 * sizeof(UInt16)),1);
         s->ll4 = (strm->bzalloc)(strm->opaque,(((1 + s->blockSize100k * 100000) >> 1) * sizeof(UChar)),1);
         if (s->ll16 == ((void *)0) || s->ll4 == ((void *)0)) { retVal = (-3); goto save_state_and_return; };;
      } else {
         s->tt = (strm->bzalloc)(strm->opaque,(s->blockSize100k * 100000 * sizeof(Int32)),1);
         if (s->tt == ((void *)0)) { retVal = (-3); goto save_state_and_return; };;
      }
      case 14: s->state = 14; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc == 0x17) goto endhdr_2;
      if (uc != 0x31) { retVal = (-4); goto save_state_and_return; };;
      case 15: s->state = 15; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x41) { retVal = (-4); goto save_state_and_return; };;
      case 16: s->state = 16; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x59) { retVal = (-4); goto save_state_and_return; };;
      case 17: s->state = 17; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x26) { retVal = (-4); goto save_state_and_return; };;
      case 18: s->state = 18; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x53) { retVal = (-4); goto save_state_and_return; };;
      case 19: s->state = 19; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x59) { retVal = (-4); goto save_state_and_return; };;
      s->currBlockNo++;
      if (s->verbosity >= 2)
         fprintf(stderr,"\n    [%d: huff+mtf ",s->currBlockNo);
      s->storedBlockCRC = 0;
      case 20: s->state = 20; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
      case 21: s->state = 21; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
      case 22: s->state = 22; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
      case 23: s->state = 23; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
      case 24: s->state = 24; while (((Bool)1)) { if (s->bsLive >= 1) { UInt32 v; v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; s->blockRandomised = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->origPtr = 0;
      case 25: s->state = 25; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->origPtr = (s->origPtr << 8) | ((Int32)uc);
      case 26: s->state = 26; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->origPtr = (s->origPtr << 8) | ((Int32)uc);
      case 27: s->state = 27; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->origPtr = (s->origPtr << 8) | ((Int32)uc);
      if (s->origPtr < 0)
         { retVal = (-4); goto save_state_and_return; };;
      if (s->origPtr > 10 + 100000*s->blockSize100k)
         { retVal = (-4); goto save_state_and_return; };;
      for (i = 0; i < 16; i++) {
         case 28: s->state = 28; while (((Bool)1)) { if (s->bsLive >= 1) { UInt32 v; v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
         if (uc == 1)
            s->inUse16[i] = ((Bool)1); else
            s->inUse16[i] = ((Bool)0);
      }
      for (i = 0; i < 256; i++) s->inUse[i] = ((Bool)0);
      for (i = 0; i < 16; i++)
         if (s->inUse16[i])
            for (j = 0; j < 16; j++) {
               case 29: s->state = 29; while (((Bool)1)) { if (s->bsLive >= 1) { UInt32 v; v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
               if (uc == 1) s->inUse[i * 16 + j] = ((Bool)1);
            }
      makeMaps_d ( s );
      if (s->nInUse == 0) { retVal = (-4); goto save_state_and_return; };;
      alphaSize = s->nInUse+2;
      case 30: s->state = 30; while (((Bool)1)) { if (s->bsLive >= 3) { UInt32 v; v = (s->bsBuff >> (s->bsLive-3)) & ((1 << 3)-1); s->bsLive -= 3; nGroups = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (nGroups < 2 || nGroups > 6) { retVal = (-4); goto save_state_and_return; };;
      case 31: s->state = 31; while (((Bool)1)) { if (s->bsLive >= 15) { UInt32 v; v = (s->bsBuff >> (s->bsLive-15)) & ((1 << 15)-1); s->bsLive -= 15; nSelectors = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (nSelectors < 1) { retVal = (-4); goto save_state_and_return; };;
      for (i = 0; i < nSelectors; i++) {
         j = 0;
         while (((Bool)1)) {
            case 32: s->state = 32; while (((Bool)1)) { if (s->bsLive >= 1) { UInt32 v; v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
            if (uc == 0) break;
            j++;
            if (j >= nGroups) { retVal = (-4); goto save_state_and_return; };;
         }
         s->selectorMtf[i] = j;
      }
      {
         UChar pos[6], tmp, v;
         for (v = 0; v < nGroups; v++) pos[v] = v;
         for (i = 0; i < nSelectors; i++) {
            v = s->selectorMtf[i];
            tmp = pos[v];
            while (v > 0) { pos[v] = pos[v-1]; v--; }
            pos[0] = tmp;
            s->selector[i] = tmp;
         }
      }
      for (t = 0; t < nGroups; t++) {
         case 33: s->state = 33; while (((Bool)1)) { if (s->bsLive >= 5) { UInt32 v; v = (s->bsBuff >> (s->bsLive-5)) & ((1 << 5)-1); s->bsLive -= 5; curr = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
         for (i = 0; i < alphaSize; i++) {
            while (((Bool)1)) {
               if (curr < 1 || curr > 20) { retVal = (-4); goto save_state_and_return; };;
               case 34: s->state = 34; while (((Bool)1)) { if (s->bsLive >= 1) { UInt32 v; v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
               if (uc == 0) break;
               case 35: s->state = 35; while (((Bool)1)) { if (s->bsLive >= 1) { UInt32 v; v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
               if (uc == 0) curr++; else curr--;
            }
            s->len[t][i] = curr;
         }
      }
      for (t = 0; t < nGroups; t++) {
         minLen = 32;
         maxLen = 0;
         for (i = 0; i < alphaSize; i++) {
            if (s->len[t][i] > maxLen) maxLen = s->len[t][i];
            if (s->len[t][i] < minLen) minLen = s->len[t][i];
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
      for (i = 0; i <= 255; i++) s->unzftab[i] = 0;
      {
         Int32 ii, jj, kk;
         kk = 4096 -1;
         for (ii = 256 / 16 - 1; ii >= 0; ii--) {
            for (jj = 16 -1; jj >= 0; jj--) {
               s->mtfa[kk] = (UChar)(ii * 16 + jj);
               kk--;
            }
            s->mtfbase[ii] = kk + 1;
         }
      }
      nblock = 0;
      { if (groupPos == 0) { groupNo++; if (groupNo >= nSelectors) { retVal = (-4); goto save_state_and_return; };; groupPos = 50; gSel = s->selector[groupNo]; gMinlen = s->minLens[gSel]; gLimit = &(s->limit[gSel][0]); gPerm = &(s->perm[gSel][0]); gBase = &(s->base[gSel][0]); } groupPos--; zn = gMinlen; case 36: s->state = 36; while (((Bool)1)) { if (s->bsLive >= zn) { UInt32 v; v = (s->bsBuff >> (s->bsLive-zn)) & ((1 << zn)-1); s->bsLive -= zn; zvec = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; }; while (1) { if (zn > 20 ) { retVal = (-4); goto save_state_and_return; };; if (zvec <= gLimit[zn]) break; zn++; case 37: s->state = 37; while (((Bool)1)) { if (s->bsLive >= 1) { UInt32 v; v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; zj = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; }; zvec = (zvec << 1) | zj; }; if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) { retVal = (-4); goto save_state_and_return; };; nextSym = gPerm[zvec - gBase[zn]]; };
      while (((Bool)1)) {
         if (nextSym == EOB) break;
         if (nextSym == 0 || nextSym == 1) {
            es = -1;
            N = 1;
            do {
               if (nextSym == 0) es = es + (0+1) * N; else
               if (nextSym == 1) es = es + (1+1) * N;
               N = N * 2;
               { if (groupPos == 0) { groupNo++; if (groupNo >= nSelectors) { retVal = (-4); goto save_state_and_return; };; groupPos = 50; gSel = s->selector[groupNo]; gMinlen = s->minLens[gSel]; gLimit = &(s->limit[gSel][0]); gPerm = &(s->perm[gSel][0]); gBase = &(s->base[gSel][0]); } groupPos--; zn = gMinlen; case 38: s->state = 38; while (((Bool)1)) { if (s->bsLive >= zn) { UInt32 v; v = (s->bsBuff >> (s->bsLive-zn)) & ((1 << zn)-1); s->bsLive -= zn; zvec = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; }; while (1) { if (zn > 20 ) { retVal = (-4); goto save_state_and_return; };; if (zvec <= gLimit[zn]) break; zn++; case 39: s->state = 39; while (((Bool)1)) { if (s->bsLive >= 1) { UInt32 v; v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; zj = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; }; zvec = (zvec << 1) | zj; }; if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) { retVal = (-4); goto save_state_and_return; };; nextSym = gPerm[zvec - gBase[zn]]; };
            }
               while (nextSym == 0 || nextSym == 1);
            es++;
            uc = s->seqToUnseq[ s->mtfa[s->mtfbase[0]] ];
            s->unzftab[uc] += es;
            if (s->smallDecompress)
               while (es > 0) {
                  if (nblock >= nblockMAX) { retVal = (-4); goto save_state_and_return; };;
                  s->ll16[nblock] = (UInt16)uc;
                  nblock++;
                  es--;
               }
            else
               while (es > 0) {
                  if (nblock >= nblockMAX) { retVal = (-4); goto save_state_and_return; };;
                  s->tt[nblock] = (UInt32)uc;
                  nblock++;
                  es--;
               };
            continue;
         } else {
            if (nblock >= nblockMAX) { retVal = (-4); goto save_state_and_return; };;
            {
               Int32 ii, jj, kk, pp, lno, off;
               UInt32 nn;
               nn = (UInt32)(nextSym - 1);
               if (nn < 16) {
                  pp = s->mtfbase[0];
                  uc = s->mtfa[pp+nn];
                  while (nn > 3) {
                     Int32 z = pp+nn;
                     s->mtfa[(z) ] = s->mtfa[(z)-1];
                     s->mtfa[(z)-1] = s->mtfa[(z)-2];
                     s->mtfa[(z)-2] = s->mtfa[(z)-3];
                     s->mtfa[(z)-3] = s->mtfa[(z)-4];
                     nn -= 4;
                  }
                  while (nn > 0) {
                     s->mtfa[(pp+nn)] = s->mtfa[(pp+nn)-1]; nn--;
                  };
                  s->mtfa[pp] = uc;
               } else {
                  lno = nn / 16;
                  off = nn % 16;
                  pp = s->mtfbase[lno] + off;
                  uc = s->mtfa[pp];
                  while (pp > s->mtfbase[lno]) {
                     s->mtfa[pp] = s->mtfa[pp-1]; pp--;
                  };
                  s->mtfbase[lno]++;
                  while (lno > 0) {
                     s->mtfbase[lno]--;
                     s->mtfa[s->mtfbase[lno]]
                        = s->mtfa[s->mtfbase[lno-1] + 16 - 1];
                     lno--;
                  }
                  s->mtfbase[0]--;
                  s->mtfa[s->mtfbase[0]] = uc;
                  if (s->mtfbase[0] == 0) {
                     kk = 4096 -1;
                     for (ii = 256 / 16 -1; ii >= 0; ii--) {
                        for (jj = 16 -1; jj >= 0; jj--) {
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
               s->ll16[nblock] = (UInt16)(s->seqToUnseq[uc]); else
               s->tt[nblock] = (UInt32)(s->seqToUnseq[uc]);
            nblock++;
            { if (groupPos == 0) { groupNo++; if (groupNo >= nSelectors) { retVal = (-4); goto save_state_and_return; };; groupPos = 50; gSel = s->selector[groupNo]; gMinlen = s->minLens[gSel]; gLimit = &(s->limit[gSel][0]); gPerm = &(s->perm[gSel][0]); gBase = &(s->base[gSel][0]); } groupPos--; zn = gMinlen; case 40: s->state = 40; while (((Bool)1)) { if (s->bsLive >= zn) { UInt32 v; v = (s->bsBuff >> (s->bsLive-zn)) & ((1 << zn)-1); s->bsLive -= zn; zvec = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; }; while (1) { if (zn > 20 ) { retVal = (-4); goto save_state_and_return; };; if (zvec <= gLimit[zn]) break; zn++; case 41: s->state = 41; while (((Bool)1)) { if (s->bsLive >= 1) { UInt32 v; v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; zj = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; }; zvec = (zvec << 1) | zj; }; if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) { retVal = (-4); goto save_state_and_return; };; nextSym = gPerm[zvec - gBase[zn]]; };
            continue;
         }
      }
      if (s->origPtr < 0 || s->origPtr >= nblock)
         { retVal = (-4); goto save_state_and_return; };;
      s->state_out_len = 0;
      s->state_out_ch = 0;
      { s->calculatedBlockCRC = 0xffffffffL; };
      s->state = 2;
      if (s->verbosity >= 2) fprintf(stderr,"rt+rld");
      s->cftab[0] = 0;
      for (i = 1; i <= 256; i++) s->cftab[i] = s->unzftab[i-1];
      for (i = 1; i <= 256; i++) s->cftab[i] += s->cftab[i-1];
      if (s->smallDecompress) {
         for (i = 0; i <= 256; i++) s->cftabCopy[i] = s->cftab[i];
         for (i = 0; i < nblock; i++) {
            uc = (UChar)(s->ll16[i]);
            { s->ll16[i] = (UInt16)(s->cftabCopy[uc] & 0x0000ffff); { if (((i) & 0x1) == 0) s->ll4[(i) >> 1] = (s->ll4[(i) >> 1] & 0xf0) | (s->cftabCopy[uc] >> 16); else s->ll4[(i) >> 1] = (s->ll4[(i) >> 1] & 0x0f) | ((s->cftabCopy[uc] >> 16) << 4); }; };
            s->cftabCopy[uc]++;
         }
         i = s->origPtr;
         j = (((UInt32)s->ll16[i]) | (((((UInt32)(s->ll4[(i) >> 1])) >> (((i) << 2) & 0x4)) & 0xF) << 16));
         do {
            Int32 tmp = (((UInt32)s->ll16[j]) | (((((UInt32)(s->ll4[(j) >> 1])) >> (((j) << 2) & 0x4)) & 0xF) << 16));
            { s->ll16[j] = (UInt16)(i & 0x0000ffff); { if (((j) & 0x1) == 0) s->ll4[(j) >> 1] = (s->ll4[(j) >> 1] & 0xf0) | (i >> 16); else s->ll4[(j) >> 1] = (s->ll4[(j) >> 1] & 0x0f) | ((i >> 16) << 4); }; };
            i = j;
            j = tmp;
         }
            while (i != s->origPtr);
         s->tPos = s->origPtr;
         s->nblock_used = 0;
         if (s->blockRandomised) {
            s->rNToGo = 0; s->rTPos = 0;
            s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
            if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;; s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
         } else {
            s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
         }
      } else {
         for (i = 0; i < nblock; i++) {
            uc = (UChar)(s->tt[i] & 0xff);
            s->tt[s->cftab[uc]] |= (i << 8);
            s->cftab[uc]++;
         }
         s->tPos = s->tt[s->origPtr] >> 8;
         s->nblock_used = 0;
         if (s->blockRandomised) {
            s->rNToGo = 0; s->rTPos = 0;
            s->tPos = s->tt[s->tPos]; s->k0 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; s->nblock_used++;
            if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;; s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
         } else {
            s->tPos = s->tt[s->tPos]; s->k0 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; s->nblock_used++;
         }
      }
      { retVal = 0; goto save_state_and_return; };;
    endhdr_2:
      case 42: s->state = 42; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x72) { retVal = (-4); goto save_state_and_return; };;
      case 43: s->state = 43; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x45) { retVal = (-4); goto save_state_and_return; };;
      case 44: s->state = 44; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x38) { retVal = (-4); goto save_state_and_return; };;
      case 45: s->state = 45; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x50) { retVal = (-4); goto save_state_and_return; };;
      case 46: s->state = 46; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      if (uc != 0x90) { retVal = (-4); goto save_state_and_return; };;
      s->storedCombinedCRC = 0;
      case 47: s->state = 47; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
      case 48: s->state = 48; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
      case 49: s->state = 49; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
      case 50: s->state = 50; while (((Bool)1)) { if (s->bsLive >= 8) { UInt32 v; v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break; } if (s->strm->avail_in == 0) { retVal = 0; goto save_state_and_return; };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++; };
      s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
      s->state = 1;
      { retVal = 4; goto save_state_and_return; };;
      default: { if (!(((Bool)0))) BZ2_bz__AssertH__fail ( 4001 ); };
   }
   { if (!(((Bool)0))) BZ2_bz__AssertH__fail ( 4002 ); };
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
   if (sizeof(int) != 4) return 0;
   if (sizeof(short) != 2) return 0;
   if (sizeof(char) != 1) return 0;
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
   if (addr != ((void *)0)) free ( addr );
}
static
void prepare_new_block ( EState* s )
{
   Int32 i;
   s->nblock = 0;
   s->numZ = 0;
   s->state_out_pos = 0;
   { s->blockCRC = 0xffffffffL; };
   for (i = 0; i < 256; i++) s->inUse[i] = ((Bool)0);
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
      return ((Bool)0); else
      return ((Bool)1);
}
int BZ2_bzCompressInit
                    ( bz_stream* strm,
                     int blockSize100k,
                     int verbosity,
                     int workFactor )
{
   Int32 n;
   EState* s;
   if (!bz_config_ok()) return (-9);
   if (strm == ((void *)0) ||
       blockSize100k < 1 || blockSize100k > 9 ||
       workFactor < 0 || workFactor > 250)
     return (-2);
   if (workFactor == 0) workFactor = 30;
   if (strm->bzalloc == ((void *)0)) strm->bzalloc = default_bzalloc;
   if (strm->bzfree == ((void *)0)) strm->bzfree = default_bzfree;
   s = (strm->bzalloc)(strm->opaque,(sizeof(EState)),1);
   if (s == ((void *)0)) return (-3);
   s->strm = strm;
   s->arr1 = ((void *)0);
   s->arr2 = ((void *)0);
   s->ftab = ((void *)0);
   n = 100000 * blockSize100k;
   s->arr1 = (strm->bzalloc)(strm->opaque,(n * sizeof(UInt32)),1);
   s->arr2 = (strm->bzalloc)(strm->opaque,((n+(2 + 12 + 18 + 2)) * sizeof(UInt32)),1);
   s->ftab = (strm->bzalloc)(strm->opaque,(65537 * sizeof(UInt32)),1);
   if (s->arr1 == ((void *)0) || s->arr2 == ((void *)0) || s->ftab == ((void *)0)) {
      if (s->arr1 != ((void *)0)) (strm->bzfree)(strm->opaque,(s->arr1));
      if (s->arr2 != ((void *)0)) (strm->bzfree)(strm->opaque,(s->arr2));
      if (s->ftab != ((void *)0)) (strm->bzfree)(strm->opaque,(s->ftab));
      if (s != ((void *)0)) (strm->bzfree)(strm->opaque,(s));
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
      { s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar)ch)]; };
   }
   s->inUse[s->state_in_ch] = ((Bool)1);
   switch (s->state_in_len) {
      case 1:
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         break;
      case 2:
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         break;
      case 3:
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         s->block[s->nblock] = (UChar)ch; s->nblock++;
         break;
      default:
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
   if (s->state_in_ch < 256) add_pair_to_block ( s );
   init_RL ( s );
}
static
Bool copy_input_until_stop ( EState* s )
{
   Bool progress_in = ((Bool)0);
   if (s->mode == 2) {
      while (((Bool)1)) {
         if (s->nblock >= s->nblockMAX) break;
         if (s->strm->avail_in == 0) break;
         progress_in = ((Bool)1);
         { UInt32 zchh = (UInt32)((UInt32)(*((UChar*)(s->strm->next_in)))); if (zchh != s->state_in_ch && s->state_in_len == 1) { UChar ch = (UChar)(s->state_in_ch); { s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar)ch)]; }; s->inUse[s->state_in_ch] = ((Bool)1); s->block[s->nblock] = (UChar)ch; s->nblock++; s->state_in_ch = zchh; } else if (zchh != s->state_in_ch || s->state_in_len == 255) { if (s->state_in_ch < 256) add_pair_to_block ( s ); s->state_in_ch = zchh; s->state_in_len = 1; } else { s->state_in_len++; } };
         s->strm->next_in++;
         s->strm->avail_in--;
         s->strm->total_in_lo32++;
         if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++;
      }
   } else {
      while (((Bool)1)) {
         if (s->nblock >= s->nblockMAX) break;
         if (s->strm->avail_in == 0) break;
         if (s->avail_in_expect == 0) break;
         progress_in = ((Bool)1);
         { UInt32 zchh = (UInt32)((UInt32)(*((UChar*)(s->strm->next_in)))); if (zchh != s->state_in_ch && s->state_in_len == 1) { UChar ch = (UChar)(s->state_in_ch); { s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar)ch)]; }; s->inUse[s->state_in_ch] = ((Bool)1); s->block[s->nblock] = (UChar)ch; s->nblock++; s->state_in_ch = zchh; } else if (zchh != s->state_in_ch || s->state_in_len == 255) { if (s->state_in_ch < 256) add_pair_to_block ( s ); s->state_in_ch = zchh; s->state_in_len = 1; } else { s->state_in_len++; } };
         s->strm->next_in++;
         s->strm->avail_in--;
         s->strm->total_in_lo32++;
         if (s->strm->total_in_lo32 == 0) s->strm->total_in_hi32++;
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
      if (s->strm->avail_out == 0) break;
      if (s->state_out_pos >= s->numZ) break;
      progress_out = ((Bool)1);
      *(s->strm->next_out) = s->zbits[s->state_out_pos];
      s->state_out_pos++;
      s->strm->avail_out--;
      s->strm->next_out++;
      s->strm->total_out_lo32++;
      if (s->strm->total_out_lo32 == 0) s->strm->total_out_hi32++;
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
      if (s->state == 1) {
         progress_out |= copy_output_until_stop ( s );
         if (s->state_out_pos < s->numZ) break;
         if (s->mode == 4 &&
             s->avail_in_expect == 0 &&
             isempty_RL(s)) break;
         prepare_new_block ( s );
         s->state = 2;
         if (s->mode == 3 &&
             s->avail_in_expect == 0 &&
             isempty_RL(s)) break;
      }
      if (s->state == 2) {
         progress_in |= copy_input_until_stop ( s );
         if (s->mode != 2 && s->avail_in_expect == 0) {
            flush_RL ( s );
            BZ2_compressBlock ( s, (Bool)(s->mode == 4) );
            s->state = 1;
         }
         else
         if (s->nblock >= s->nblockMAX) {
            BZ2_compressBlock ( s, ((Bool)0) );
            s->state = 1;
         }
         else
         if (s->strm->avail_in == 0) {
            break;
         }
      }
   }
   return progress_in || progress_out;
}
int BZ2_bzCompress ( bz_stream *strm, int action )
{
   Bool progress;
   EState* s;
   if (strm == ((void *)0)) return (-2);
   s = strm->state;
   if (s == ((void *)0)) return (-2);
   if (s->strm != strm) return (-2);
   preswitch:
   switch (s->mode) {
      case 1:
         return (-1);
      case 2:
         if (action == 0) {
            progress = handle_compress ( strm );
            return progress ? 1 : (-2);
         }
         else
  if (action == 1) {
            s->avail_in_expect = strm->avail_in;
            s->mode = 3;
            goto preswitch;
         }
         else
         if (action == 2) {
            s->avail_in_expect = strm->avail_in;
            s->mode = 4;
            goto preswitch;
         }
         else
            return (-2);
      case 3:
         if (action != 1) return (-1);
         if (s->avail_in_expect != s->strm->avail_in)
            return (-1);
         progress = handle_compress ( strm );
         if (s->avail_in_expect > 0 || !isempty_RL(s) ||
             s->state_out_pos < s->numZ) return 2;
         s->mode = 2;
         return 1;
      case 4:
         if (action != 2) return (-1);
         if (s->avail_in_expect != s->strm->avail_in)
            return (-1);
         progress = handle_compress ( strm );
         if (!progress) return (-1);
         if (s->avail_in_expect > 0 || !isempty_RL(s) ||
             s->state_out_pos < s->numZ) return 3;
         s->mode = 1;
         return 4;
   }
   return 0;
}
int BZ2_bzCompressEnd ( bz_stream *strm )
{
   EState* s;
   if (strm == ((void *)0)) return (-2);
   s = strm->state;
   if (s == ((void *)0)) return (-2);
   if (s->strm != strm) return (-2);
   if (s->arr1 != ((void *)0)) (strm->bzfree)(strm->opaque,(s->arr1));
   if (s->arr2 != ((void *)0)) (strm->bzfree)(strm->opaque,(s->arr2));
   if (s->ftab != ((void *)0)) (strm->bzfree)(strm->opaque,(s->ftab));
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
   if (!bz_config_ok()) return (-9);
   if (strm == ((void *)0)) return (-2);
   if (small != 0 && small != 1) return (-2);
   if (verbosity < 0 || verbosity > 4) return (-2);
   if (strm->bzalloc == ((void *)0)) strm->bzalloc = default_bzalloc;
   if (strm->bzfree == ((void *)0)) strm->bzfree = default_bzfree;
   s = (strm->bzalloc)(strm->opaque,(sizeof(DState)),1);
   if (s == ((void *)0)) return (-3);
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
      while (((Bool)1)) {
         while (((Bool)1)) {
            if (s->strm->avail_out == 0) return;
            if (s->state_out_len == 0) break;
            *( (UChar*)(s->strm->next_out) ) = s->state_out_ch;
            { s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar)s->state_out_ch)]; };
            s->state_out_len--;
            s->strm->next_out++;
            s->strm->avail_out--;
            s->strm->total_out_lo32++;
            if (s->strm->total_out_lo32 == 0) s->strm->total_out_hi32++;
         }
         if (s->nblock_used == s->save_nblock+1) return;
         s->state_out_len = 1;
         s->state_out_ch = s->k0;
         s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
         k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
         if (s->nblock_used == s->save_nblock+1) continue;
         if (k1 != s->k0) { s->k0 = k1; continue; };
         s->state_out_len = 2;
         s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
         k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
         if (s->nblock_used == s->save_nblock+1) continue;
         if (k1 != s->k0) { s->k0 = k1; continue; };
         s->state_out_len = 3;
         s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
         k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
         if (s->nblock_used == s->save_nblock+1) continue;
         if (k1 != s->k0) { s->k0 = k1; continue; };
         s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
         k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
         s->state_out_len = ((Int32)k1) + 4;
         s->tPos = s->tt[s->tPos]; s->k0 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
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
      while (((Bool)1)) {
         if (c_state_out_len > 0) {
            while (((Bool)1)) {
               if (cs_avail_out == 0) goto return_notr;
               if (c_state_out_len == 1) break;
               *( (UChar*)(cs_next_out) ) = c_state_out_ch;
               { c_calculatedBlockCRC = (c_calculatedBlockCRC << 8) ^ BZ2_crc32Table[(c_calculatedBlockCRC >> 24) ^ ((UChar)c_state_out_ch)]; };
               c_state_out_len--;
               cs_next_out++;
               cs_avail_out--;
            }
            s_state_out_len_eq_one:
            {
               if (cs_avail_out == 0) {
                  c_state_out_len = 1; goto return_notr;
               };
               *( (UChar*)(cs_next_out) ) = c_state_out_ch;
               { c_calculatedBlockCRC = (c_calculatedBlockCRC << 8) ^ BZ2_crc32Table[(c_calculatedBlockCRC >> 24) ^ ((UChar)c_state_out_ch)]; };
               cs_next_out++;
               cs_avail_out--;
            }
         }
         if (c_nblock_used == s_save_nblockPP) {
            c_state_out_len = 0; goto return_notr;
         };
         c_state_out_ch = c_k0;
         c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
         if (k1 != c_k0) {
            c_k0 = k1; goto s_state_out_len_eq_one;
         };
         if (c_nblock_used == s_save_nblockPP)
            goto s_state_out_len_eq_one;
         c_state_out_len = 2;
         c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
         if (c_nblock_used == s_save_nblockPP) continue;
         if (k1 != c_k0) { c_k0 = k1; continue; };
         c_state_out_len = 3;
         c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
         if (c_nblock_used == s_save_nblockPP) continue;
         if (k1 != c_k0) { c_k0 = k1; continue; };
         c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
         c_state_out_len = ((Int32)k1) + 4;
         c_tPos = c_tt[c_tPos]; c_k0 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
      }
      return_notr:
      total_out_lo32_old = s->strm->total_out_lo32;
      s->strm->total_out_lo32 += (avail_out_INIT - cs_avail_out);
      if (s->strm->total_out_lo32 < total_out_lo32_old)
         s->strm->total_out_hi32++;
      s->calculatedBlockCRC = c_calculatedBlockCRC;
      s->state_out_ch = c_state_out_ch;
      s->state_out_len = c_state_out_len;
      s->nblock_used = c_nblock_used;
      s->k0 = c_k0;
      s->tt = c_tt;
      s->tPos = c_tPos;
      s->strm->next_out = cs_next_out;
      s->strm->avail_out = cs_avail_out;
   }
}
Int32 BZ2_indexIntoF ( Int32 indx, Int32 *cftab )
{
   Int32 nb, na, mid;
   nb = 0;
   na = 256;
   do {
      mid = (nb + na) >> 1;
      if (indx >= cftab[mid]) nb = mid; else na = mid;
   }
   while (na - nb != 1);
   return nb;
}
static
void unRLE_obuf_to_output_SMALL ( DState* s )
{
   UChar k1;
   if (s->blockRandomised) {
      while (((Bool)1)) {
         while (((Bool)1)) {
            if (s->strm->avail_out == 0) return;
            if (s->state_out_len == 0) break;
            *( (UChar*)(s->strm->next_out) ) = s->state_out_ch;
            { s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar)s->state_out_ch)]; };
            s->state_out_len--;
            s->strm->next_out++;
            s->strm->avail_out--;
            s->strm->total_out_lo32++;
            if (s->strm->total_out_lo32 == 0) s->strm->total_out_hi32++;
         }
         if (s->nblock_used == s->save_nblock+1) return;
         s->state_out_len = 1;
         s->state_out_ch = s->k0;
         k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
         k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
         if (s->nblock_used == s->save_nblock+1) continue;
         if (k1 != s->k0) { s->k0 = k1; continue; };
         s->state_out_len = 2;
         k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
         k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
         if (s->nblock_used == s->save_nblock+1) continue;
         if (k1 != s->k0) { s->k0 = k1; continue; };
         s->state_out_len = 3;
         k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
         k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
         if (s->nblock_used == s->save_nblock+1) continue;
         if (k1 != s->k0) { s->k0 = k1; continue; };
         k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
         k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
         s->state_out_len = ((Int32)k1) + 4;
         s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) { s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512) s->rTPos = 0; } s->rNToGo--;;
         s->k0 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
      }
   } else {
      while (((Bool)1)) {
         while (((Bool)1)) {
            if (s->strm->avail_out == 0) return;
            if (s->state_out_len == 0) break;
            *( (UChar*)(s->strm->next_out) ) = s->state_out_ch;
            { s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar)s->state_out_ch)]; };
            s->state_out_len--;
            s->strm->next_out++;
            s->strm->avail_out--;
            s->strm->total_out_lo32++;
            if (s->strm->total_out_lo32 == 0) s->strm->total_out_hi32++;
         }
         if (s->nblock_used == s->save_nblock+1) return;
         s->state_out_len = 1;
         s->state_out_ch = s->k0;
         k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
         if (s->nblock_used == s->save_nblock+1) continue;
         if (k1 != s->k0) { s->k0 = k1; continue; };
         s->state_out_len = 2;
         k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
         if (s->nblock_used == s->save_nblock+1) continue;
         if (k1 != s->k0) { s->k0 = k1; continue; };
         s->state_out_len = 3;
         k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
         if (s->nblock_used == s->save_nblock+1) continue;
         if (k1 != s->k0) { s->k0 = k1; continue; };
         k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
         s->state_out_len = ((Int32)k1) + 4;
         s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
      }
   }
}
int BZ2_bzDecompress ( bz_stream *strm )
{
   DState* s;
   if (strm == ((void *)0)) return (-2);
   s = strm->state;
   if (s == ((void *)0)) return (-2);
   if (s->strm != strm) return (-2);
   while (((Bool)1)) {
      if (s->state == 1) return (-1);
      if (s->state == 2) {
         if (s->smallDecompress)
            unRLE_obuf_to_output_SMALL ( s ); else
            unRLE_obuf_to_output_FAST ( s );
         if (s->nblock_used == s->save_nblock+1 && s->state_out_len == 0) {
            { s->calculatedBlockCRC = ~(s->calculatedBlockCRC); };
            if (s->verbosity >= 3)
               fprintf(stderr," {0x%x, 0x%x}",s->storedBlockCRC,s->calculatedBlockCRC);
            if (s->verbosity >= 2) fprintf(stderr,"]");
            if (s->calculatedBlockCRC != s->storedBlockCRC)
               return (-4);
            s->calculatedCombinedCRC
               = (s->calculatedCombinedCRC << 1) |
                    (s->calculatedCombinedCRC >> 31);
            s->calculatedCombinedCRC ^= s->calculatedBlockCRC;
            s->state = 14;
         } else {
            return 0;
         }
      }
      if (s->state >= 10) {
         Int32 r = BZ2_decompress ( s );
         if (r == 4) {
            if (s->verbosity >= 3)
               fprintf(stderr,"\n    combined CRCs: stored = 0x%x, computed = 0x%x",s->storedCombinedCRC,s->calculatedCombinedCRC);
            if (s->calculatedCombinedCRC != s->storedCombinedCRC)
               return (-4);
            return r;
         }
         if (s->state != 2) return r;
      }
   }
   { if (!(0)) BZ2_bz__AssertH__fail ( 6001 ); };
   return 0;
}
int BZ2_bzDecompressEnd ( bz_stream *strm )
{
   DState* s;
   if (strm == ((void *)0)) return (-2);
   s = strm->state;
   if (s == ((void *)0)) return (-2);
   if (s->strm != strm) return (-2);
   if (s->tt != ((void *)0)) (strm->bzfree)(strm->opaque,(s->tt));
   if (s->ll16 != ((void *)0)) (strm->bzfree)(strm->opaque,(s->ll16));
   if (s->ll4 != ((void *)0)) (strm->bzfree)(strm->opaque,(s->ll4));
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
   if (c == (-1)) return ((Bool)1);
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
   { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; };
   if (f == ((void *)0) ||
       (blockSize100k < 1 || blockSize100k > 9) ||
       (workFactor < 0 || workFactor > 250) ||
       (verbosity < 0 || verbosity > 4))
      { { if (bzerror != ((void *)0)) *bzerror = (-2); if (bzf != ((void *)0)) bzf->lastErr = (-2); }; return ((void *)0); };
   if (ferror(f))
      { { if (bzerror != ((void *)0)) *bzerror = (-6); if (bzf != ((void *)0)) bzf->lastErr = (-6); }; return ((void *)0); };
   bzf = malloc ( sizeof(bzFile) );
   if (bzf == ((void *)0))
      { { if (bzerror != ((void *)0)) *bzerror = (-3); if (bzf != ((void *)0)) bzf->lastErr = (-3); }; return ((void *)0); };
   { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; };
   bzf->initialisedOk = ((Bool)0);
   bzf->bufN = 0;
   bzf->handle = f;
   bzf->writing = ((Bool)1);
   bzf->strm.bzalloc = ((void *)0);
   bzf->strm.bzfree = ((void *)0);
   bzf->strm.opaque = ((void *)0);
   if (workFactor == 0) workFactor = 30;
   ret = BZ2_bzCompressInit ( &(bzf->strm), blockSize100k,
                              verbosity, workFactor );
   if (ret != 0)
      { { if (bzerror != ((void *)0)) *bzerror = ret; if (bzf != ((void *)0)) bzf->lastErr = ret; }; free(bzf); return ((void *)0); };
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
   { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; };
   if (bzf == ((void *)0) || buf == ((void *)0) || len < 0)
      { { if (bzerror != ((void *)0)) *bzerror = (-2); if (bzf != ((void *)0)) bzf->lastErr = (-2); }; return; };
   if (!(bzf->writing))
      { { if (bzerror != ((void *)0)) *bzerror = (-1); if (bzf != ((void *)0)) bzf->lastErr = (-1); }; return; };
   if (ferror(bzf->handle))
      { { if (bzerror != ((void *)0)) *bzerror = (-6); if (bzf != ((void *)0)) bzf->lastErr = (-6); }; return; };
   if (len == 0)
      { { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; }; return; };
   bzf->strm.avail_in = len;
   bzf->strm.next_in = buf;
   while (((Bool)1)) {
      bzf->strm.avail_out = 5000;
      bzf->strm.next_out = bzf->buf;
      ret = BZ2_bzCompress ( &(bzf->strm), 0 );
      if (ret != 1)
         { { if (bzerror != ((void *)0)) *bzerror = ret; if (bzf != ((void *)0)) bzf->lastErr = ret; }; return; };
      if (bzf->strm.avail_out < 5000) {
         n = 5000 - bzf->strm.avail_out;
         n2 = fwrite ( (void*)(bzf->buf), sizeof(UChar),
                       n, bzf->handle );
         if (n != n2 || ferror(bzf->handle))
            { { if (bzerror != ((void *)0)) *bzerror = (-6); if (bzf != ((void *)0)) bzf->lastErr = (-6); }; return; };
      }
      if (bzf->strm.avail_in == 0)
         { { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; }; return; };
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
      { { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; }; return; };
   if (!(bzf->writing))
      { { if (bzerror != ((void *)0)) *bzerror = (-1); if (bzf != ((void *)0)) bzf->lastErr = (-1); }; return; };
   if (ferror(bzf->handle))
      { { if (bzerror != ((void *)0)) *bzerror = (-6); if (bzf != ((void *)0)) bzf->lastErr = (-6); }; return; };
   if (nbytes_in_lo32 != ((void *)0)) *nbytes_in_lo32 = 0;
   if (nbytes_in_hi32 != ((void *)0)) *nbytes_in_hi32 = 0;
   if (nbytes_out_lo32 != ((void *)0)) *nbytes_out_lo32 = 0;
   if (nbytes_out_hi32 != ((void *)0)) *nbytes_out_hi32 = 0;
   if ((!abandon) && bzf->lastErr == 0) {
      while (((Bool)1)) {
         bzf->strm.avail_out = 5000;
         bzf->strm.next_out = bzf->buf;
         ret = BZ2_bzCompress ( &(bzf->strm), 2 );
         if (ret != 3 && ret != 4)
            { { if (bzerror != ((void *)0)) *bzerror = ret; if (bzf != ((void *)0)) bzf->lastErr = ret; }; return; };
         if (bzf->strm.avail_out < 5000) {
            n = 5000 - bzf->strm.avail_out;
            n2 = fwrite ( (void*)(bzf->buf), sizeof(UChar),
                          n, bzf->handle );
            if (n != n2 || ferror(bzf->handle))
               { { if (bzerror != ((void *)0)) *bzerror = (-6); if (bzf != ((void *)0)) bzf->lastErr = (-6); }; return; };
         }
         if (ret == 4) break;
      }
   }
   if ( !abandon && !ferror ( bzf->handle ) ) {
      fflush ( bzf->handle );
      if (ferror(bzf->handle))
         { { if (bzerror != ((void *)0)) *bzerror = (-6); if (bzf != ((void *)0)) bzf->lastErr = (-6); }; return; };
   }
   if (nbytes_in_lo32 != ((void *)0))
      *nbytes_in_lo32 = bzf->strm.total_in_lo32;
   if (nbytes_in_hi32 != ((void *)0))
      *nbytes_in_hi32 = bzf->strm.total_in_hi32;
   if (nbytes_out_lo32 != ((void *)0))
      *nbytes_out_lo32 = bzf->strm.total_out_lo32;
   if (nbytes_out_hi32 != ((void *)0))
      *nbytes_out_hi32 = bzf->strm.total_out_hi32;
   { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; };
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
   { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; };
   if (f == ((void *)0) ||
       (small != 0 && small != 1) ||
       (verbosity < 0 || verbosity > 4) ||
       (unused == ((void *)0) && nUnused != 0) ||
       (unused != ((void *)0) && (nUnused < 0 || nUnused > 5000)))
      { { if (bzerror != ((void *)0)) *bzerror = (-2); if (bzf != ((void *)0)) bzf->lastErr = (-2); }; return ((void *)0); };
   if (ferror(f))
      { { if (bzerror != ((void *)0)) *bzerror = (-6); if (bzf != ((void *)0)) bzf->lastErr = (-6); }; return ((void *)0); };
   bzf = malloc ( sizeof(bzFile) );
   if (bzf == ((void *)0))
      { { if (bzerror != ((void *)0)) *bzerror = (-3); if (bzf != ((void *)0)) bzf->lastErr = (-3); }; return ((void *)0); };
   { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; };
   bzf->initialisedOk = ((Bool)0);
   bzf->handle = f;
   bzf->bufN = 0;
   bzf->writing = ((Bool)0);
   bzf->strm.bzalloc = ((void *)0);
   bzf->strm.bzfree = ((void *)0);
   bzf->strm.opaque = ((void *)0);
   while (nUnused > 0) {
      bzf->buf[bzf->bufN] = *((UChar*)(unused)); bzf->bufN++;
      unused = ((void*)( 1 + ((UChar*)(unused)) ));
      nUnused--;
   }
   ret = BZ2_bzDecompressInit ( &(bzf->strm), verbosity, small );
   if (ret != 0)
      { { if (bzerror != ((void *)0)) *bzerror = ret; if (bzf != ((void *)0)) bzf->lastErr = ret; }; free(bzf); return ((void *)0); };
   bzf->strm.avail_in = bzf->bufN;
   bzf->strm.next_in = bzf->buf;
   bzf->initialisedOk = ((Bool)1);
   return bzf;
}
void BZ2_bzReadClose ( int *bzerror, BZFILE *b )
{
   bzFile* bzf = (bzFile*)b;
   { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; };
   if (bzf == ((void *)0))
      { { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; }; return; };
   if (bzf->writing)
      { { if (bzerror != ((void *)0)) *bzerror = (-1); if (bzf != ((void *)0)) bzf->lastErr = (-1); }; return; };
   if (bzf->initialisedOk)
      (void)BZ2_bzDecompressEnd ( &(bzf->strm) );
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
   { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; };
   if (bzf == ((void *)0) || buf == ((void *)0) || len < 0)
      { { if (bzerror != ((void *)0)) *bzerror = (-2); if (bzf != ((void *)0)) bzf->lastErr = (-2); }; return 0; };
   if (bzf->writing)
      { { if (bzerror != ((void *)0)) *bzerror = (-1); if (bzf != ((void *)0)) bzf->lastErr = (-1); }; return 0; };
   if (len == 0)
      { { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; }; return 0; };
   bzf->strm.avail_out = len;
   bzf->strm.next_out = buf;
   while (((Bool)1)) {
      if (ferror(bzf->handle))
         { { if (bzerror != ((void *)0)) *bzerror = (-6); if (bzf != ((void *)0)) bzf->lastErr = (-6); }; return 0; };
      if (bzf->strm.avail_in == 0 && !myfeof(bzf->handle)) {
         n = fread ( bzf->buf, sizeof(UChar),
                     5000, bzf->handle );
         if (ferror(bzf->handle))
            { { if (bzerror != ((void *)0)) *bzerror = (-6); if (bzf != ((void *)0)) bzf->lastErr = (-6); }; return 0; };
         bzf->bufN = n;
         bzf->strm.avail_in = bzf->bufN;
         bzf->strm.next_in = bzf->buf;
      }
      ret = BZ2_bzDecompress ( &(bzf->strm) );
      if (ret != 0 && ret != 4)
         { { if (bzerror != ((void *)0)) *bzerror = ret; if (bzf != ((void *)0)) bzf->lastErr = ret; }; return 0; };
      if (ret == 0 && myfeof(bzf->handle) &&
          bzf->strm.avail_in == 0 && bzf->strm.avail_out > 0)
         { { if (bzerror != ((void *)0)) *bzerror = (-7); if (bzf != ((void *)0)) bzf->lastErr = (-7); }; return 0; };
      if (ret == 4)
         { { if (bzerror != ((void *)0)) *bzerror = 4; if (bzf != ((void *)0)) bzf->lastErr = 4; };
           return len - bzf->strm.avail_out; };
      if (bzf->strm.avail_out == 0)
         { { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; }; return len; };
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
      { { if (bzerror != ((void *)0)) *bzerror = (-2); if (bzf != ((void *)0)) bzf->lastErr = (-2); }; return; };
   if (bzf->lastErr != 4)
      { { if (bzerror != ((void *)0)) *bzerror = (-1); if (bzf != ((void *)0)) bzf->lastErr = (-1); }; return; };
   if (unused == ((void *)0) || nUnused == ((void *)0))
      { { if (bzerror != ((void *)0)) *bzerror = (-2); if (bzf != ((void *)0)) bzf->lastErr = (-2); }; return; };
   { if (bzerror != ((void *)0)) *bzerror = 0; if (bzf != ((void *)0)) bzf->lastErr = 0; };
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
      return (-2);
   if (workFactor == 0) workFactor = 30;
   strm.bzalloc = ((void *)0);
   strm.bzfree = ((void *)0);
   strm.opaque = ((void *)0);
   ret = BZ2_bzCompressInit ( &strm, blockSize100k,
                              verbosity, workFactor );
   if (ret != 0) return ret;
   strm.next_in = source;
   strm.next_out = dest;
   strm.avail_in = sourceLen;
   strm.avail_out = *destLen;
   ret = BZ2_bzCompress ( &strm, 2 );
   if (ret == 3) goto output_overflow;
   if (ret != 4) goto errhandler;
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
          return (-2);
   strm.bzalloc = ((void *)0);
   strm.bzfree = ((void *)0);
   strm.opaque = ((void *)0);
   ret = BZ2_bzDecompressInit ( &strm, verbosity, small );
   if (ret != 0) return ret;
   strm.next_in = source;
   strm.next_out = dest;
   strm.avail_in = sourceLen;
   strm.avail_out = *destLen;
   ret = BZ2_bzDecompress ( &strm );
   if (ret == 0) goto output_overflow_or_eof;
   if (ret != 4) goto errhandler;
   *destLen -= strm.avail_out;
   BZ2_bzDecompressEnd ( &strm );
   return 0;
   output_overflow_or_eof:
   if (strm.avail_out > 0) {
      BZ2_bzDecompressEnd ( &strm );
      return (-7);
   } else {
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
   if (mode == ((void *)0)) return ((void *)0);
   while (*mode) {
      switch (*mode) {
      case 'r':
         writing = 0; break;
      case 'w':
         writing = 1; break;
      case 's':
         smallMode = 1; break;
      default:
         if (((*__ctype_b_loc ())[(int) (((int)(*mode)))] & (unsigned short int) _ISdigit)) {
            blockSize100k = *mode-0x30;
         }
      }
      mode++;
   }
   strcat(mode2, writing ? "w" : "r" );
   strcat(mode2,"b");
   if (open_mode==0) {
      if (path==((void *)0) || strcmp(path,"")==0) {
        fp = (writing ? stdout : stdin);
      } else {
        fp = fopen(path,mode2);
      }
   } else {
      fp = fdopen(fd,mode2);
   }
   if (fp == ((void *)0)) return ((void *)0);
   if (writing) {
      if (blockSize100k < 1) blockSize100k = 1;
      if (blockSize100k > 9) blockSize100k = 9;
      bzfp = BZ2_bzWriteOpen(&bzerr,fp,blockSize100k,
                             verbosity,workFactor);
   } else {
      bzfp = BZ2_bzReadOpen(&bzerr,fp,verbosity,smallMode,
                            unused,nUnused);
   }
   if (bzfp == ((void *)0)) {
      if (fp != stdin && fp != stdout) fclose(fp);
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
   if (((bzFile*)b)->lastErr == 4) return 0;
   nread = BZ2_bzRead(&bzerr,b,buf,len);
   if (bzerr == 0 || bzerr == 4) {
      return nread;
   } else {
      return -1;
   }
}
int BZ2_bzwrite (BZFILE* b, void* buf, int len )
{
   int bzerr;
   BZ2_bzWrite(&bzerr,b,buf,len);
   if(bzerr == 0){
      return len;
   }else{
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
   if (b==((void *)0)) {return;}
   if(((bzFile*)b)->writing){
      BZ2_bzWriteClose(&bzerr,b,0,((void *)0),((void *)0));
      if(bzerr != 0){
         BZ2_bzWriteClose(((void *)0),b,1,((void *)0),((void *)0));
      }
   }else{
      BZ2_bzReadClose(&bzerr,b);
   }
   if(fp!=stdin && fp!=stdout){
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
   if(err>0) err = 0;
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
      if (n->b[i] != 0) return 0;
   return 1;
}
static
Int32 uInt64_qrm10 ( UInt64* n )
{
   UInt32 rem, tmp;
   Int32 i;
   rem = 0;
   for (i = 7; i >= 0; i--) {
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
      q = uInt64_qrm10 ( &n_copy );
      buf[nBuf] = q + '0';
      nBuf++;
   } while (!uInt64_isZero(&n_copy));
   outbuf[nBuf] = 0;
   for (i = 0; i < nBuf; i++)
      outbuf[i] = buf[nBuf-i-1];
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
   if (ferror(stream)) goto errhandler_io;
   if (ferror(zStream)) goto errhandler_io;
   bzf = BZ2_bzWriteOpen ( &bzerr, zStream,
                           blockSize100k, verbosity, workFactor );
   if (bzerr != 0) goto errhandler;
   if (verbosity >= 2) fprintf ( stderr, "\n" );
   while (((Bool)1)) {
      if (myfeof(stream)) break;
      nIbuf = fread ( ibuf, sizeof(UChar), 5000, stream );
      if (ferror(stream)) goto errhandler_io;
      if (nIbuf > 0) BZ2_bzWrite ( &bzerr, bzf, (void*)ibuf, nIbuf );
      if (bzerr != 0) goto errhandler;
   }
   BZ2_bzWriteClose64 ( &bzerr, bzf, 0,
                        &nbytes_in_lo32, &nbytes_in_hi32,
                        &nbytes_out_lo32, &nbytes_out_hi32 );
   if (bzerr != 0) goto errhandler;
   if (ferror(zStream)) goto errhandler_io;
   ret = fflush ( zStream );
   if (ret == (-1)) goto errhandler_io;
   if (zStream != stdout) {
      ret = fclose ( zStream );
      outputHandleJustInCase = ((void *)0);
      if (ret == (-1)) goto errhandler_io;
   }
   outputHandleJustInCase = ((void *)0);
   if (ferror(stream)) goto errhandler_io;
   ret = fclose ( stream );
   if (ret == (-1)) goto errhandler_io;
   if (verbosity >= 1) {
      if (nbytes_in_lo32 == 0 && nbytes_in_hi32 == 0) {
  fprintf ( stderr, " no data compressed.\n");
      } else {
  Char buf_nin[32], buf_nout[32];
  UInt64 nbytes_in, nbytes_out;
  double nbytes_in_d, nbytes_out_d;
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
         configError(); break;
      case (-3):
         outOfMemory (); break;
      case (-6):
         errhandler_io:
         ioError(); break;
      default:
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
   if (ferror(stream)) goto errhandler_io;
   if (ferror(zStream)) goto errhandler_io;
   while (((Bool)1)) {
      bzf = BZ2_bzReadOpen (
               &bzerr, zStream, verbosity,
               (int)smallMode, unused, nUnused
            );
      if (bzf == ((void *)0) || bzerr != 0) goto errhandler;
      streamNo++;
      while (bzerr == 0) {
         nread = BZ2_bzRead ( &bzerr, bzf, obuf, 5000 );
         if (bzerr == (-5)) goto trycat;
         if ((bzerr == 0 || bzerr == 4) && nread > 0)
            fwrite ( obuf, sizeof(UChar), nread, stream );
         if (ferror(stream)) goto errhandler_io;
      }
      if (bzerr != 4) goto errhandler;
      BZ2_bzReadGetUnused ( &bzerr, bzf, (void**)(&unusedTmp), &nUnused );
      if (bzerr != 0) panic ( "decompress:bzReadGetUnused" );
      for (i = 0; i < nUnused; i++) unused[i] = unusedTmp[i];
      BZ2_bzReadClose ( &bzerr, bzf );
      if (bzerr != 0) panic ( "decompress:bzReadGetUnused" );
      if (nUnused == 0 && myfeof(zStream)) break;
   }
   closeok:
   if (ferror(zStream)) goto errhandler_io;
   ret = fclose ( zStream );
   if (ret == (-1)) goto errhandler_io;
   if (ferror(stream)) goto errhandler_io;
   ret = fflush ( stream );
   if (ret != 0) goto errhandler_io;
   if (stream != stdout) {
      ret = fclose ( stream );
      outputHandleJustInCase = ((void *)0);
      if (ret == (-1)) goto errhandler_io;
   }
   outputHandleJustInCase = ((void *)0);
   if (verbosity >= 2) fprintf ( stderr, "\n    " );
   return ((Bool)1);
   trycat:
   if (forceOverwrite) {
      rewind(zStream);
      while (((Bool)1)) {
        if (myfeof(zStream)) break;
        nread = fread ( obuf, sizeof(UChar), 5000, zStream );
        if (ferror(zStream)) goto errhandler_io;
        if (nread > 0) fwrite ( obuf, sizeof(UChar), nread, stream );
        if (ferror(stream)) goto errhandler_io;
      }
      goto closeok;
   }
   errhandler:
   BZ2_bzReadClose ( &bzerr_dummy, bzf );
   switch (bzerr) {
      case (-9):
         configError(); break;
      case (-6):
         errhandler_io:
         ioError(); break;
      case (-4):
         crcError();
      case (-3):
         outOfMemory();
      case (-7):
         compressedStreamEOF();
      case (-5):
         if (zStream != stdin) fclose(zStream);
         if (stream != stdout) fclose(stream);
         if (streamNo == 1) {
            return ((Bool)0);
         } else {
            if (noisy)
            fprintf ( stderr,
                      "\n%s: %s: trailing garbage after EOF ignored\n",
                      progName, inName );
            return ((Bool)1);
         }
      default:
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
   if (ferror(zStream)) goto errhandler_io;
   while (((Bool)1)) {
      bzf = BZ2_bzReadOpen (
               &bzerr, zStream, verbosity,
               (int)smallMode, unused, nUnused
            );
      if (bzf == ((void *)0) || bzerr != 0) goto errhandler;
      streamNo++;
      while (bzerr == 0) {
         nread = BZ2_bzRead ( &bzerr, bzf, obuf, 5000 );
         if (bzerr == (-5)) goto errhandler;
      }
      if (bzerr != 4) goto errhandler;
      BZ2_bzReadGetUnused ( &bzerr, bzf, (void**)(&unusedTmp), &nUnused );
      if (bzerr != 0) panic ( "test:bzReadGetUnused" );
      for (i = 0; i < nUnused; i++) unused[i] = unusedTmp[i];
      BZ2_bzReadClose ( &bzerr, bzf );
      if (bzerr != 0) panic ( "test:bzReadGetUnused" );
      if (nUnused == 0 && myfeof(zStream)) break;
   }
   if (ferror(zStream)) goto errhandler_io;
   ret = fclose ( zStream );
   if (ret == (-1)) goto errhandler_io;
   if (verbosity >= 2) fprintf ( stderr, "\n    " );
   return ((Bool)1);
   errhandler:
   BZ2_bzReadClose ( &bzerr_dummy, bzf );
   if (verbosity == 0)
      fprintf ( stderr, "%s: %s: ", progName, inName );
   switch (bzerr) {
      case (-9):
         configError(); break;
      case (-6):
         errhandler_io:
         ioError(); break;
      case (-4):
         fprintf ( stderr,
                   "data integrity (CRC) error in data\n" );
         return ((Bool)0);
      case (-3):
         outOfMemory();
      case (-7):
         fprintf ( stderr,
                   "file ends unexpectedly\n" );
         return ((Bool)0);
      case (-5):
         if (zStream != stdin) fclose(zStream);
         if (streamNo == 1) {
          fprintf ( stderr,
                    "bad magic number (file not created by bzip2)\n" );
            return ((Bool)0);
         } else {
            if (noisy)
            fprintf ( stderr,
                      "trailing garbage after EOF ignored\n" );
            return ((Bool)1);
         }
      default:
         panic ( "test:unexpected error" );
   }
   panic ( "test:end" );
   return ((Bool)1);
}
static
void setExit ( Int32 v )
{
   if (v > exitValue) exitValue = v;
}
static
void cadvise ( void )
{
   if (noisy)
   fprintf (
      stderr,
      "\nIt is possible that the compressed file(s) have become corrupted.\n"
        "You can use the -tvv option to test integrity of such files.\n\n"
        "You can use the `bzip2recover' program to attempt to recover\n"
        "data from undamaged sections of corrupted files.\n\n"
    );
}
static
void showFileNames ( void )
{
   if (noisy)
   fprintf (
      stderr,
      "\tInput file = %s, output file = %s\n",
      inName, outName
   );
}
static
void cleanUpAndFail ( Int32 ec )
{
   IntNative retVal;
   struct stat statBuf;
   if ( srcMode == 3
        && opMode != 3
        && deleteOutputOnInterrupt ) {
      retVal = stat ( inName, &statBuf );
      if (retVal == 0) {
         if (noisy)
            fprintf ( stderr,
                      "%s: Deleting output file %s, if it exists.\n",
                      progName, outName );
         if (outputHandleJustInCase != ((void *)0))
            fclose ( outputHandleJustInCase );
         retVal = remove ( outName );
         if (retVal != 0)
            fprintf ( stderr,
                      "%s: WARNING: deletion of output file "
                      "(apparently) failed.\n",
                      progName );
      } else {
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
      else
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
   showFileNames();
   if (opMode == 1)
      cleanUpAndFail( 3 ); else
      { cadvise(); cleanUpAndFail( 2 ); }
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
   if ( (Int32)strlen(s) >= longestFileName ) return;
   for (i = 1; i <= longestFileName - (Int32)strlen(s); i++)
      fprintf ( stderr, " " );
}
static
void copyFileName ( Char* to, Char* from )
{
   if ( strlen(from) > 1034 -10 ) {
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
   if (tmp != ((void *)0)) fclose ( tmp );
   return exists;
}
FILE* fopen_output_safely ( Char* name, const char* mode )
{
   FILE* fp;
   IntNative fh;
   fh = open(name, 01|0100|0200, 0200|0400);
   if (fh == -1) return ((void *)0);
   fp = fdopen(fh, mode);
   if (fp == ((void *)0)) close(fh);
   return fp;
}
static
Bool notAStandardFile ( Char* name )
{
   IntNative i;
   struct stat statBuf;
   i = lstat ( name, &statBuf );
   if (i != 0) return ((Bool)1);
   if (((((statBuf.st_mode)) & 0170000) == (0100000))) return ((Bool)0);
   return ((Bool)1);
}
static
Int32 countHardLinks ( Char* name )
{
   IntNative i;
   struct stat statBuf;
   i = lstat ( name, &statBuf );
   if (i != 0) return 0;
   return (statBuf.st_nlink - 1);
}
static
struct stat fileMetaInfo;
static
void saveInputFileMetaInfo ( Char *srcName )
{
   IntNative retVal;
   retVal = stat( srcName, &fileMetaInfo );
   { if ((retVal) != 0) ioError(); };
}
static
void applySavedMetaInfoToOutputFile ( Char *dstName )
{
   IntNative retVal;
   struct utimbuf uTimBuf;
   uTimBuf.actime = fileMetaInfo.st_atime;
   uTimBuf.modtime = fileMetaInfo.st_mtime;
   retVal = chmod ( dstName, fileMetaInfo.st_mode );
   { if ((retVal) != 0) ioError(); };
   retVal = utime ( dstName, &uTimBuf );
   { if ((retVal) != 0) ioError(); };
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
   if (ns < nx) return ((Bool)0);
   if (strcmp(s + ns - nx, suffix) == 0) return ((Bool)1);
   return ((Bool)0);
}
static
Bool mapSuffix ( Char* name,
                 Char* oldSuffix, Char* newSuffix )
{
   if (!hasSuffix(name,oldSuffix)) return ((Bool)0);
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
      panic ( "compress: bad modes\n" );
   switch (srcMode) {
      case 1:
         copyFileName ( inName, "(stdin)" );
         copyFileName ( outName, "(stdout)" );
         break;
      case 3:
         copyFileName ( inName, name );
         copyFileName ( outName, name );
         strcat ( outName, ".bz2" );
         break;
      case 2:
         copyFileName ( inName, name );
         copyFileName ( outName, "(stdout)" );
         break;
   }
   if ( srcMode != 1 && containsDubiousChars ( inName ) ) {
      if (noisy)
      fprintf ( stderr, "%s: There are no files matching `%s'.\n",
                progName, inName );
      setExit(1);
      return;
   }
   if ( srcMode != 1 && !fileExists ( inName ) ) {
      fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                progName, inName, strerror((*__errno_location ())) );
      setExit(1);
      return;
   }
   for (i = 0; i < 4; i++) {
      if (hasSuffix(inName, zSuffix[i])) {
         if (noisy)
         fprintf ( stderr,
                   "%s: Input file %s already has %s suffix.\n",
                   progName, inName, zSuffix[i] );
         setExit(1);
         return;
      }
   }
   if ( srcMode == 3 || srcMode == 2 ) {
      stat(inName, &statBuf);
      if ( ((((statBuf.st_mode)) & 0170000) == (0040000)) ) {
         fprintf( stderr,
                  "%s: Input file %s is a directory.\n",
                  progName,inName);
         setExit(1);
         return;
      }
   }
   if ( srcMode == 3 && !forceOverwrite && notAStandardFile ( inName )) {
      if (noisy)
      fprintf ( stderr, "%s: Input file %s is not a normal file.\n",
                progName, inName );
      setExit(1);
      return;
   }
   if ( srcMode == 3 && fileExists ( outName ) ) {
      if (forceOverwrite) {
  remove(outName);
      } else {
  fprintf ( stderr, "%s: Output file %s already exists.\n",
     progName, outName );
  setExit(1);
  return;
      }
   }
   if ( srcMode == 3 && !forceOverwrite &&
        (n=countHardLinks ( inName )) > 0) {
      fprintf ( stderr, "%s: Input file %s has %d other link%s.\n",
                progName, inName, n, n > 1 ? "s" : "" );
      setExit(1);
      return;
   }
   if ( srcMode == 3 ) {
      saveInputFileMetaInfo ( inName );
   }
   switch ( srcMode ) {
      case 1:
         inStr = stdin;
         outStr = stdout;
         if ( isatty ( fileno ( stdout ) ) ) {
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
         inStr = fopen ( inName, "rb" );
         outStr = stdout;
         if ( isatty ( fileno ( stdout ) ) ) {
            fprintf ( stderr,
                      "%s: I won't write compressed data to a terminal.\n",
                      progName );
            fprintf ( stderr, "%s: For help, type: `%s --help'.\n",
                              progName, progName );
            if ( inStr != ((void *)0) ) fclose ( inStr );
            setExit(1);
            return;
         };
         if ( inStr == ((void *)0) ) {
            fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                      progName, inName, strerror((*__errno_location ())) );
            setExit(1);
            return;
         };
         break;
      case 3:
         inStr = fopen ( inName, "rb" );
         outStr = fopen_output_safely ( outName, "wb" );
         if ( outStr == ((void *)0)) {
            fprintf ( stderr, "%s: Can't create output file %s: %s.\n",
                      progName, outName, strerror((*__errno_location ())) );
            if ( inStr != ((void *)0) ) fclose ( inStr );
            setExit(1);
            return;
         }
         if ( inStr == ((void *)0) ) {
            fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                      progName, inName, strerror((*__errno_location ())) );
            if ( outStr != ((void *)0) ) fclose ( outStr );
            setExit(1);
            return;
         };
         break;
      default:
         panic ( "compress: bad srcMode" );
         break;
   }
   if (verbosity >= 1) {
      fprintf ( stderr, "  %s: ", inName );
      pad ( inName );
      fflush ( stderr );
   }
   outputHandleJustInCase = outStr;
   deleteOutputOnInterrupt = ((Bool)1);
   compressStream ( inStr, outStr );
   outputHandleJustInCase = ((void *)0);
   if ( srcMode == 3 ) {
      applySavedMetaInfoToOutputFile ( outName );
      deleteOutputOnInterrupt = ((Bool)0);
      if ( !keepInputFiles ) {
         IntNative retVal = remove ( inName );
         { if ((retVal) != 0) ioError(); };
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
      panic ( "uncompress: bad modes\n" );
   cantGuess = ((Bool)0);
   switch (srcMode) {
      case 1:
         copyFileName ( inName, "(stdin)" );
         copyFileName ( outName, "(stdout)" );
         break;
      case 3:
         copyFileName ( inName, name );
         copyFileName ( outName, name );
         for (i = 0; i < 4; i++)
            if (mapSuffix(outName,zSuffix[i],unzSuffix[i]))
               goto zzz;
         cantGuess = ((Bool)1);
         strcat ( outName, ".out" );
         break;
      case 2:
         copyFileName ( inName, name );
         copyFileName ( outName, "(stdout)" );
         break;
   }
   zzz:
   if ( srcMode != 1 && containsDubiousChars ( inName ) ) {
      if (noisy)
      fprintf ( stderr, "%s: There are no files matching `%s'.\n",
                progName, inName );
      setExit(1);
      return;
   }
   if ( srcMode != 1 && !fileExists ( inName ) ) {
      fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                progName, inName, strerror((*__errno_location ())) );
      setExit(1);
      return;
   }
   if ( srcMode == 3 || srcMode == 2 ) {
      stat(inName, &statBuf);
      if ( ((((statBuf.st_mode)) & 0170000) == (0040000)) ) {
         fprintf( stderr,
                  "%s: Input file %s is a directory.\n",
                  progName,inName);
         setExit(1);
         return;
      }
   }
   if ( srcMode == 3 && !forceOverwrite && notAStandardFile ( inName )) {
      if (noisy)
      fprintf ( stderr, "%s: Input file %s is not a normal file.\n",
                progName, inName );
      setExit(1);
      return;
   }
   if ( cantGuess ) {
      if (noisy)
      fprintf ( stderr,
                "%s: Can't guess original name for %s -- using %s\n",
                progName, inName, outName );
   }
   if ( srcMode == 3 && fileExists ( outName ) ) {
      if (forceOverwrite) {
 remove(outName);
      } else {
        fprintf ( stderr, "%s: Output file %s already exists.\n",
                  progName, outName );
        setExit(1);
        return;
      }
   }
   if ( srcMode == 3 && !forceOverwrite &&
        (n=countHardLinks ( inName ) ) > 0) {
      fprintf ( stderr, "%s: Input file %s has %d other link%s.\n",
                progName, inName, n, n > 1 ? "s" : "" );
      setExit(1);
      return;
   }
   if ( srcMode == 3 ) {
      saveInputFileMetaInfo ( inName );
   }
   switch ( srcMode ) {
      case 1:
         inStr = stdin;
         outStr = stdout;
         if ( isatty ( fileno ( stdin ) ) ) {
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
         inStr = fopen ( inName, "rb" );
         outStr = stdout;
         if ( inStr == ((void *)0) ) {
            fprintf ( stderr, "%s: Can't open input file %s:%s.\n",
                      progName, inName, strerror((*__errno_location ())) );
            if ( inStr != ((void *)0) ) fclose ( inStr );
            setExit(1);
            return;
         };
         break;
      case 3:
         inStr = fopen ( inName, "rb" );
         outStr = fopen_output_safely ( outName, "wb" );
         if ( outStr == ((void *)0)) {
            fprintf ( stderr, "%s: Can't create output file %s: %s.\n",
                      progName, outName, strerror((*__errno_location ())) );
            if ( inStr != ((void *)0) ) fclose ( inStr );
            setExit(1);
            return;
         }
         if ( inStr == ((void *)0) ) {
            fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
                      progName, inName, strerror((*__errno_location ())) );
            if ( outStr != ((void *)0) ) fclose ( outStr );
            setExit(1);
            return;
         };
         break;
      default:
         panic ( "uncompress: bad srcMode" );
         break;
   }
   if (verbosity >= 1) {
      fprintf ( stderr, "  %s: ", inName );
      pad ( inName );
      fflush ( stderr );
   }
   outputHandleJustInCase = outStr;
   deleteOutputOnInterrupt = ((Bool)1);
   magicNumberOK = uncompressStream ( inStr, outStr );
   outputHandleJustInCase = ((void *)0);
   if ( magicNumberOK ) {
      if ( srcMode == 3 ) {
         applySavedMetaInfoToOutputFile ( outName );
         deleteOutputOnInterrupt = ((Bool)0);
         if ( !keepInputFiles ) {
            IntNative retVal = remove ( inName );
            { if ((retVal) != 0) ioError(); };
         }
      }
   } else {
      unzFailsExist = ((Bool)1);
      deleteOutputOnInterrupt = ((Bool)0);
      if ( srcMode == 3 ) {
         IntNative retVal = remove ( outName );
         { if ((retVal) != 0) ioError(); };
      }
   }
   deleteOutputOnInterrupt = ((Bool)0);
   if ( magicNumberOK ) {
      if (verbosity >= 1)
         fprintf ( stderr, "done\n" );
   } else {
      setExit(2);
      if (verbosity >= 1)
         fprintf ( stderr, "not a bzip2 file.\n" ); else
         fprintf ( stderr,
                   "%s: %s is not a bzip2 file.\n",
                   progName, inName );
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
      panic ( "testf: bad modes\n" );
   copyFileName ( outName, "(none)" );
   switch (srcMode) {
      case 1: copyFileName ( inName, "(stdin)" ); break;
      case 3: copyFileName ( inName, name ); break;
      case 2: copyFileName ( inName, name ); break;
   }
   if ( srcMode != 1 && containsDubiousChars ( inName ) ) {
      if (noisy)
      fprintf ( stderr, "%s: There are no files matching `%s'.\n",
                progName, inName );
      setExit(1);
      return;
   }
   if ( srcMode != 1 && !fileExists ( inName ) ) {
      fprintf ( stderr, "%s: Can't open input %s: %s.\n",
                progName, inName, strerror((*__errno_location ())) );
      setExit(1);
      return;
   }
   if ( srcMode != 1 ) {
      stat(inName, &statBuf);
      if ( ((((statBuf.st_mode)) & 0170000) == (0040000)) ) {
         fprintf( stderr,
                  "%s: Input file %s is a directory.\n",
                  progName,inName);
         setExit(1);
         return;
      }
   }
   switch ( srcMode ) {
      case 1:
         if ( isatty ( fileno ( stdin ) ) ) {
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
      case 2: case 3:
         inStr = fopen ( inName, "rb" );
         if ( inStr == ((void *)0) ) {
            fprintf ( stderr, "%s: Can't open input file %s:%s.\n",
                      progName, inName, strerror((*__errno_location ())) );
            setExit(1);
            return;
         };
         break;
      default:
         panic ( "testf: bad srcMode" );
         break;
   }
   if (verbosity >= 1) {
      fprintf ( stderr, "  %s: ", inName );
      pad ( inName );
      fflush ( stderr );
   }
   outputHandleJustInCase = ((void *)0);
   allOK = testStream ( inStr );
   if (allOK && verbosity >= 1) fprintf ( stderr, "ok\n" );
   if (!allOK) testFailsExist = ((Bool)1);
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
   if (p == ((void *)0)) outOfMemory ();
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
      tmp->name = (Char*) myMalloc ( 5 + strlen(name) );
      strcpy ( tmp->name, name );
      return tmp;
   } else {
      Cell *tmp = root;
      while (tmp->link != ((void *)0)) tmp = tmp->link;
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
      p = envbase;
      i = 0;
      while (((Bool)1)) {
         if (p[i] == 0) break;
         p += i;
         i = 0;
         while (((*__ctype_b_loc ())[(int) (((Int32)(p[0])))] & (unsigned short int) _ISspace)) p++;
         while (p[i] != 0 && !((*__ctype_b_loc ())[(int) (((Int32)(p[i])))] & (unsigned short int) _ISspace)) i++;
         if (i > 0) {
            k = i; if (k > 1034 -10) k = 1034 -10;
            for (j = 0; j < k; j++) tmpName[j] = p[j];
            tmpName[k] = 0;
            *argList=snocString((*argList), (tmpName));
         }
      }
   }
}
IntNative main ( IntNative argc, Char *argv[] )
{
   void* lol = &track; //
   Int32 i, j;
   Char *tmp;
   Cell *argList;
   Cell *aa;
   Bool decode;

   init(); //

   if (sizeof(Int32) != 4 || sizeof(UInt32) != 4 ||
       sizeof(Int16) != 2 || sizeof(UInt16) != 2 ||
       sizeof(Char) != 1 || sizeof(UChar) != 1)
      configError();
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
      if (*tmp == '/') progName = tmp + 1;
   argList = ((void *)0);
   addFlagsFromEnvVar ( &argList, "BZIP2" );
   addFlagsFromEnvVar ( &argList, "BZIP" );
   for (i = 1; i <= argc-1; i++)
      argList=snocString((argList), (argv[i]));
   longestFileName = 7;
   numFileNames = 0;
   decode = ((Bool)1);
   for (aa = argList; aa != ((void *)0); aa = aa->link) {
      if ((strcmp(aa->name, ("--"))==0)) { decode = ((Bool)0); continue; }
      if (aa->name[0] == '-' && decode) continue;
      numFileNames++;
      if (longestFileName < (Int32)strlen(aa->name) )
         longestFileName = (Int32)strlen(aa->name);
   }
   if (numFileNames == 0)
      srcMode = 1; else srcMode = 3;
   opMode = 1;
   if ( (strstr ( progName, "unzip" ) != 0) ||
        (strstr ( progName, "UNZIP" ) != 0) )
      opMode = 2;
   if ( (strstr ( progName, "z2cat" ) != 0) ||
        (strstr ( progName, "Z2CAT" ) != 0) ||
        (strstr ( progName, "zcat" ) != 0) ||
        (strstr ( progName, "ZCAT" ) != 0) ) {
      opMode = 2;
      srcMode = (numFileNames == 0) ? 1 : 2;
   }
   for (aa = argList; aa != ((void *)0); aa = aa->link) {
      if ((strcmp(aa->name, ("--"))==0)) break;
      if (aa->name[0] == '-' && aa->name[1] != '-') {
         for (j = 1; aa->name[j] != '\0'; j++) {
            switch (aa->name[j]) {
               case 'c': srcMode = 2; break;
               case 'd': opMode = 2; break;
               case 'z': opMode = 1; break;
               case 'f': forceOverwrite = ((Bool)1); break;
               case 't': opMode = 3; break;
               case 'k': keepInputFiles = ((Bool)1); break;
               case 's': smallMode = ((Bool)1); break;
               case 'q': noisy = ((Bool)0); break;
               case '1': blockSize100k = 1; break;
               case '2': blockSize100k = 2; break;
               case '3': blockSize100k = 3; break;
               case '4': blockSize100k = 4; break;
               case '5': blockSize100k = 5; break;
               case '6': blockSize100k = 6; break;
               case '7': blockSize100k = 7; break;
               case '8': blockSize100k = 8; break;
               case '9': blockSize100k = 9; break;
               case 'V':
               case 'L': license(); break;
               case 'v': verbosity++; break;
               case 'h': usage ( progName );
                         exit ( 0 );
                         break;
               default: fprintf ( stderr, "%s: Bad flag `%s'\n",
                                   progName, aa->name );
                         usage ( progName );
                         exit ( 1 );
                         break;
            }
         }
      }
   }
   for (aa = argList; aa != ((void *)0); aa = aa->link) {
      if ((strcmp(aa->name, ("--"))==0)) break;
      if ((strcmp(aa->name, ("--stdout"))==0)) srcMode = 2; else
      if ((strcmp(aa->name, ("--decompress"))==0)) opMode = 2; else
      if ((strcmp(aa->name, ("--compress"))==0)) opMode = 1; else
      if ((strcmp(aa->name, ("--force"))==0)) forceOverwrite = ((Bool)1); else
      if ((strcmp(aa->name, ("--test"))==0)) opMode = 3; else
      if ((strcmp(aa->name, ("--keep"))==0)) keepInputFiles = ((Bool)1); else
      if ((strcmp(aa->name, ("--small"))==0)) smallMode = ((Bool)1); else
      if ((strcmp(aa->name, ("--quiet"))==0)) noisy = ((Bool)0); else
      if ((strcmp(aa->name, ("--version"))==0)) license(); else
      if ((strcmp(aa->name, ("--license"))==0)) license(); else
      if ((strcmp(aa->name, ("--exponential"))==0)) workFactor = 1; else
      if ((strcmp(aa->name, ("--repetitive-best"))==0)) redundant(aa->name); else
      if ((strcmp(aa->name, ("--repetitive-fast"))==0)) redundant(aa->name); else
      if ((strcmp(aa->name, ("--fast"))==0)) blockSize100k = 1; else
      if ((strcmp(aa->name, ("--best"))==0)) blockSize100k = 9; else
      if ((strcmp(aa->name, ("--verbose"))==0)) verbosity++; else
      if ((strcmp(aa->name, ("--help"))==0)) { usage ( progName ); exit ( 0 ); }
         else
         if (strncmp ( aa->name, "--", 2) == 0) {
            fprintf ( stderr, "%s: Bad flag `%s'\n", progName, aa->name );
            usage ( progName );
            exit ( 1 );
         }
   }
   if (verbosity > 4) verbosity = 4;
   if (opMode == 1 && smallMode && blockSize100k > 2)
      blockSize100k = 2;
   if (opMode == 3 && srcMode == 2) {
      fprintf ( stderr, "%s: -c and -t cannot be used together.\n",
                progName );
      exit ( 1 );
   }
   if (srcMode == 2 && numFileNames == 0)
      srcMode = 1;
   if (opMode != 1) blockSize100k = 0;
   if (srcMode == 3) {
      signal (2, mySignalCatcher);
      signal (15, mySignalCatcher);
      signal (1, mySignalCatcher);
   }
   if (opMode == 1) {
     if (srcMode == 1) {
        compress ( ((void *)0) );
     } else {
        decode = ((Bool)1);
        for (aa = argList; aa != ((void *)0); aa = aa->link) {
           if ((strcmp(aa->name, ("--"))==0)) { decode = ((Bool)0); continue; }
           if (aa->name[0] == '-' && decode) continue;
           numFilesProcessed++;
           compress ( aa->name );
        }
     }
   }
   else
   if (opMode == 2) {
      unzFailsExist = ((Bool)0);
      if (srcMode == 1) {
         uncompress ( ((void *)0) );
      } else {
         decode = ((Bool)1);
         for (aa = argList; aa != ((void *)0); aa = aa->link) {
            if ((strcmp(aa->name, ("--"))==0)) { decode = ((Bool)0); continue; }
            if (aa->name[0] == '-' && decode) continue;
            numFilesProcessed++;
            uncompress ( aa->name );
         }
      }
      if (unzFailsExist) {
         setExit(2);
         exit(exitValue);
      }
   }
   else {
      testFailsExist = ((Bool)0);
      if (srcMode == 1) {
         testf ( ((void *)0) );
      } else {
         decode = ((Bool)1);
         for (aa = argList; aa != ((void *)0); aa = aa->link) {
     if ((strcmp(aa->name, ("--"))==0)) { decode = ((Bool)0); continue; }
            if (aa->name[0] == '-' && decode) continue;
            numFilesProcessed++;
            testf ( aa->name );
  }
      }
      if (testFailsExist && noisy) {
         fprintf ( stderr,
           "\n"
           "You can use the `bzip2recover' program to attempt to recover\n"
           "data from undamaged sections of corrupted files.\n\n"
         );
         setExit(2);
         exit(exitValue);
      }
   }
   aa = argList;
   while (aa != ((void *)0)) {
      Cell* aa2 = aa->link;
      if (aa->name != ((void *)0)) free(aa->name);
      free(aa);
      aa = aa2;
   }
   report(); //
   return exitValue;
}
static void report()
{
  printf("Branches taken: %d\n", coverage.count);
}
static void track(int start, int end)
{
  __asm__( "movl	%0, %%edi\n\t"
    "mov        $144, %%al\n\t"
    "movl	%1, %%ecx\n\t"
    "rep 	stosb\n\t"
    :
    : "r" (start), "r"(end-start)
    : "edi", "al", "ecx"
    );
  coverage.count++;
}

[NotInstrumented]
static void init()
{
  void *addr = (void*)&main;
  long length = sysconf(_SC_PAGESIZE);
  unsigned long *d = (unsigned long *) ((int) addr &~(length-1));
  if (mprotect(d, 134084, 0x1 | 0x2 | 0x4) != 0) {
    exit(1);
  }
  memset(&coverage, 0, sizeof(coverage));
}
