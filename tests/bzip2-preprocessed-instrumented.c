
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

extern FILE *fdopen (int __fd, __const char *__modes) ;

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

extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);

extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);

extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);

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

extern int fileno (FILE *__stream) ;
extern char *ctermid (char *__s) ;
extern void flockfile (FILE *__stream) ;
extern int ftrylockfile (FILE *__stream) ;
extern void funlockfile (FILE *__stream) ;

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

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
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

typedef __sigset_t sigset_t;
typedef void (*__sighandler_t) (int);
extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
  ;

extern __sighandler_t signal (int __sig, __sighandler_t __handler) __asm__ ("" "__sysv_signal") ;

extern int kill (__pid_t __pid, int __sig) ;

extern int raise (int __sig) ;

extern int __sigpause (int __sig_or_mask, int __is_sig);
extern int sigemptyset (sigset_t *__set) ;
extern int sigfillset (sigset_t *__set) ;
extern int sigaddset (sigset_t *__set, int __signo) ;
extern int sigdelset (sigset_t *__set, int __signo) ;
extern int sigismember (__const sigset_t *__set, int __signo)
  ;
struct sigaction
{
  __sighandler_t sa_handler;
  __sigset_t sa_mask;
  int sa_flags;
  void (*sa_restorer) (void);
};
extern int sigprocmask (int __how, __const sigset_t *__restrict __set,
			sigset_t *__restrict __oset) ;
extern int sigsuspend (__const sigset_t *__set) ;
extern int sigaction (int __sig, __const struct sigaction *__restrict __act,
		      struct sigaction *__restrict __oact) ;
extern int sigpending (sigset_t *__set) ;
extern int sigwait (__const sigset_t *__restrict __set, int *__restrict __sig)
  ;
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

extern int rand_r (unsigned int *__seed) ;

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
    __asm__("TRACK3_BEGIN: nop\n\t" 
	    "   lea	TRACK3_BEGIN, %%eax\n\t"   
	    "   lea	TRACK3_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK3_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    for ( i = hi-4; i >= lo; i-- ) {
      __asm__("TRACK2_BEGIN: nop\n\t" 
	      "   lea	TRACK2_BEGIN, %%eax\n\t"   
	      "   lea	TRACK2_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK2_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      tmp = fmap[i];
      ec_tmp = eclass[tmp];
      for ( j = i+4; j <= hi && ec_tmp > eclass[fmap[j]]; j += 4 )
	{
	  __asm__("TRACK1_BEGIN: nop\n\t" 
		  "   lea	TRACK1_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fmap[j-4] = fmap[j];
	}
      fmap[j-4] = tmp;
    }
  }
  for ( i = hi-1; i >= lo; i-- ) {
    __asm__("TRACK5_BEGIN: nop\n\t" 
	    "   lea	TRACK5_BEGIN, %%eax\n\t"   
	    "   lea	TRACK5_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK5_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    tmp = fmap[i];
    ec_tmp = eclass[tmp];
    for ( j = i+1; j <= hi && ec_tmp > eclass[fmap[j]]; j++ )
      {
	__asm__("TRACK4_BEGIN: nop\n\t" 
  		"   lea	TRACK4_BEGIN, %%eax\n\t"   
  		"   lea	TRACK4_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK4_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
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
    __asm__("TRACK21_BEGIN: nop\n\t" 
	    "   lea	TRACK21_BEGIN, %%eax\n\t"   
	    "   lea	TRACK21_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK21_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    { if (!(sp < 100))  {
	__asm__("TRACK6_BEGIN: nop\n\t" 
  		"   lea	TRACK6_BEGIN, %%eax\n\t"   
  		"   lea	TRACK6_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK6_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 1004 );
      } };
    { sp--; lo = stackLo[sp]; hi = stackHi[sp]; };
    if (hi - lo < 10) {
      __asm__("TRACK7_BEGIN: nop\n\t" 
	      "   lea	TRACK7_BEGIN, %%eax\n\t"   
	      "   lea	TRACK7_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK7_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fallbackSimpleSort ( fmap, eclass, lo, hi );
      continue;
    }
    r = ((r * 7621) + 1) % 32768;
    r3 = r % 3;
    if (r3 == 0)  {
      __asm__("TRACK8_BEGIN: nop\n\t" 
	      "   lea	TRACK8_BEGIN, %%eax\n\t"   
	      "   lea	TRACK8_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK8_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      med = eclass[fmap[lo]];
    } else
      {
	__asm__("TRACK11_BEGIN: nop\n\t" 
  		"   lea	TRACK11_BEGIN, %%eax\n\t"   
  		"   lea	TRACK11_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK11_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	if (r3 == 1)  {
	  __asm__("TRACK9_BEGIN: nop\n\t" 
		  "   lea	TRACK9_BEGIN, %%eax\n\t"   
		  "   lea	TRACK9_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK9_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  med = eclass[fmap[(lo+hi)>>1]];
	} else
	  {
	    __asm__("TRACK10_BEGIN: nop\n\t" 
		    "   lea	TRACK10_BEGIN, %%eax\n\t"   
		    "   lea	TRACK10_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK10_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    med = eclass[fmap[hi]];
	  }
      }
    unLo = ltLo = lo;
    unHi = gtHi = hi;
    while (1) {
      __asm__("TRACK16_BEGIN: nop\n\t" 
	      "   lea	TRACK16_BEGIN, %%eax\n\t"   
	      "   lea	TRACK16_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK16_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      while (1) {
	__asm__("TRACK13_BEGIN: nop\n\t" 
      		"   lea	TRACK13_BEGIN, %%eax\n\t"   
      		"   lea	TRACK13_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK13_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	if (unLo > unHi) break;
	n = (Int32)eclass[fmap[unLo]] - (Int32)med;
	if (n == 0) {
	  __asm__("TRACK12_BEGIN: nop\n\t" 
		  "   lea	TRACK12_BEGIN, %%eax\n\t"   
		  "   lea	TRACK12_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK12_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  { Int32 zztmp = fmap[unLo]; fmap[unLo] = fmap[ltLo]; fmap[ltLo] = zztmp; };
	  ltLo++; unLo++;
	  continue;
	};
	if (n > 0) break;
	unLo++;
      }
      while (1) {
	__asm__("TRACK15_BEGIN: nop\n\t" 
      		"   lea	TRACK15_BEGIN, %%eax\n\t"   
      		"   lea	TRACK15_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK15_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	if (unLo > unHi) break;
	n = (Int32)eclass[fmap[unHi]] - (Int32)med;
	if (n == 0) {
	  __asm__("TRACK14_BEGIN: nop\n\t" 
		  "   lea	TRACK14_BEGIN, %%eax\n\t"   
		  "   lea	TRACK14_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK14_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
    n = ((ltLo-lo) < (unLo-ltLo)) ? (ltLo-lo) : (unLo-ltLo); { Int32 yyp1 = (lo); Int32 yyp2 = (unLo-n); Int32 yyn = (n); while (yyn > 0) {
        __asm__("TRACK17_BEGIN: nop\n\t" 
    		"   lea	TRACK17_BEGIN, %%eax\n\t"   
    		"   lea	TRACK17_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK17_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ Int32 zztmp = fmap[yyp1]; fmap[yyp1] = fmap[yyp2]; fmap[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--;
      } };
    m = ((hi-gtHi) < (gtHi-unHi)) ? (hi-gtHi) : (gtHi-unHi); { Int32 yyp1 = (unLo); Int32 yyp2 = (hi-m+1); Int32 yyn = (m); while (yyn > 0) {
        __asm__("TRACK18_BEGIN: nop\n\t" 
    		"   lea	TRACK18_BEGIN, %%eax\n\t"   
    		"   lea	TRACK18_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK18_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ Int32 zztmp = fmap[yyp1]; fmap[yyp1] = fmap[yyp2]; fmap[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--;
      } };
    n = lo + unLo - ltLo - 1;
    m = hi - (gtHi - unHi) + 1;
    if (n - lo > hi - m) {
      __asm__("TRACK19_BEGIN: nop\n\t" 
	      "   lea	TRACK19_BEGIN, %%eax\n\t"   
	      "   lea	TRACK19_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK19_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { stackLo[sp] = lo; stackHi[sp] = n; sp++; };
      { stackLo[sp] = m; stackHi[sp] = hi; sp++; };
    } else {
      __asm__("TRACK20_BEGIN: nop\n\t" 
	      "   lea	TRACK20_BEGIN, %%eax\n\t"   
	      "   lea	TRACK20_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK20_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK22_BEGIN: nop\n\t" 
	      "   lea	TRACK22_BEGIN, %%eax\n\t"   
	      "   lea	TRACK22_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK22_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf(stderr,"        bucket sorting ...\n");
    }
  for (i = 0; i < 257; i++)  {
    __asm__("TRACK23_BEGIN: nop\n\t" 
	    "   lea	TRACK23_BEGIN, %%eax\n\t"   
	    "   lea	TRACK23_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK23_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    ftab[i] = 0;
  }
  for (i = 0; i < nblock; i++)  {
    __asm__("TRACK24_BEGIN: nop\n\t" 
	    "   lea	TRACK24_BEGIN, %%eax\n\t"   
	    "   lea	TRACK24_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK24_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    ftab[eclass8[i]]++;
  }
  for (i = 0; i < 256; i++)  {
    __asm__("TRACK25_BEGIN: nop\n\t" 
	    "   lea	TRACK25_BEGIN, %%eax\n\t"   
	    "   lea	TRACK25_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK25_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    ftabCopy[i] = ftab[i];
  }
  for (i = 1; i < 257; i++)  {
    __asm__("TRACK26_BEGIN: nop\n\t" 
	    "   lea	TRACK26_BEGIN, %%eax\n\t"   
	    "   lea	TRACK26_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK26_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    ftab[i] += ftab[i-1];
  }
  for (i = 0; i < nblock; i++) {
    __asm__("TRACK27_BEGIN: nop\n\t" 
	    "   lea	TRACK27_BEGIN, %%eax\n\t"   
	    "   lea	TRACK27_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK27_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    j = eclass8[i];
    k = ftab[j] - 1;
    ftab[j] = k;
    fmap[k] = i;
  }
  nBhtab = 2 + (nblock / 32);
  for (i = 0; i < nBhtab; i++)  {
    __asm__("TRACK28_BEGIN: nop\n\t" 
	    "   lea	TRACK28_BEGIN, %%eax\n\t"   
	    "   lea	TRACK28_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK28_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bhtab[i] = 0;
  }
  for (i = 0; i < 256; i++)  {
    __asm__("TRACK29_BEGIN: nop\n\t" 
	    "   lea	TRACK29_BEGIN, %%eax\n\t"   
	    "   lea	TRACK29_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK29_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bhtab[(ftab[i]) >> 5] |= (1 << ((ftab[i]) & 31));
  }
  for (i = 0; i < 32; i++) {
    __asm__("TRACK30_BEGIN: nop\n\t" 
	    "   lea	TRACK30_BEGIN, %%eax\n\t"   
	    "   lea	TRACK30_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK30_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bhtab[(nblock + 2*i) >> 5] |= (1 << ((nblock + 2*i) & 31));
    bhtab[(nblock + 2*i + 1) >> 5] &= ~(1 << ((nblock + 2*i + 1) & 31));
  }
  H = 1;
  while (1) {
    __asm__("TRACK48_BEGIN: nop\n\t" 
	    "   lea	TRACK48_BEGIN, %%eax\n\t"   
	    "   lea	TRACK48_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK48_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (verb >= 4)
      {
	__asm__("TRACK31_BEGIN: nop\n\t" 
  		"   lea	TRACK31_BEGIN, %%eax\n\t"   
  		"   lea	TRACK31_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK31_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf(stderr,"        depth %6d has ",H);
      }
    j = 0;
    for (i = 0; i < nblock; i++) {
      __asm__("TRACK34_BEGIN: nop\n\t" 
	      "   lea	TRACK34_BEGIN, %%eax\n\t"   
	      "   lea	TRACK34_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK34_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if ((bhtab[(i) >> 5] & (1 << ((i) & 31))))  {
        __asm__("TRACK32_BEGIN: nop\n\t" 
    		"   lea	TRACK32_BEGIN, %%eax\n\t"   
    		"   lea	TRACK32_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK32_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	j = i;
      }
      k = fmap[i] - H; if (k < 0)  {
        __asm__("TRACK33_BEGIN: nop\n\t" 
    		"   lea	TRACK33_BEGIN, %%eax\n\t"   
    		"   lea	TRACK33_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK33_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	k += nblock;
      }
      eclass[k] = j;
    }
    nNotDone = 0;
    r = -1;
    while (1) {
      __asm__("TRACK46_BEGIN: nop\n\t" 
	      "   lea	TRACK46_BEGIN, %%eax\n\t"   
	      "   lea	TRACK46_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK46_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      k = r + 1;
      while ((bhtab[(k) >> 5] & (1 << ((k) & 31))) && ((k) & 0x01f))  {
        __asm__("TRACK35_BEGIN: nop\n\t" 
    		"   lea	TRACK35_BEGIN, %%eax\n\t"   
    		"   lea	TRACK35_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK35_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	k++;
      }
      if ((bhtab[(k) >> 5] & (1 << ((k) & 31)))) {
	__asm__("TRACK38_BEGIN: nop\n\t" 
      		"   lea	TRACK38_BEGIN, %%eax\n\t"   
      		"   lea	TRACK38_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK38_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	while (bhtab[(k) >> 5] == 0xffffffff)  {
          __asm__("TRACK36_BEGIN: nop\n\t" 
		  "   lea	TRACK36_BEGIN, %%eax\n\t"   
		  "   lea	TRACK36_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK36_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  k += 32;
	}
	while ((bhtab[(k) >> 5] & (1 << ((k) & 31))))  {
          __asm__("TRACK37_BEGIN: nop\n\t" 
		  "   lea	TRACK37_BEGIN, %%eax\n\t"   
		  "   lea	TRACK37_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK37_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  k++;
	}
      }
      l = k - 1;
      if (l >= nblock) break;
      while (!(bhtab[(k) >> 5] & (1 << ((k) & 31))) && ((k) & 0x01f))  {
        __asm__("TRACK39_BEGIN: nop\n\t" 
    		"   lea	TRACK39_BEGIN, %%eax\n\t"   
    		"   lea	TRACK39_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK39_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	k++;
      }
      if (!(bhtab[(k) >> 5] & (1 << ((k) & 31)))) {
	__asm__("TRACK42_BEGIN: nop\n\t" 
      		"   lea	TRACK42_BEGIN, %%eax\n\t"   
      		"   lea	TRACK42_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK42_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	while (bhtab[(k) >> 5] == 0x00000000)  {
          __asm__("TRACK40_BEGIN: nop\n\t" 
		  "   lea	TRACK40_BEGIN, %%eax\n\t"   
		  "   lea	TRACK40_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK40_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  k += 32;
	}
	while (!(bhtab[(k) >> 5] & (1 << ((k) & 31))))  {
          __asm__("TRACK41_BEGIN: nop\n\t" 
		  "   lea	TRACK41_BEGIN, %%eax\n\t"   
		  "   lea	TRACK41_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK41_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  k++;
	}
      }
      r = k - 1;
      if (r >= nblock) break;
      if (r > l) {
	__asm__("TRACK45_BEGIN: nop\n\t" 
      		"   lea	TRACK45_BEGIN, %%eax\n\t"   
      		"   lea	TRACK45_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK45_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	nNotDone += (r - l + 1);
	fallbackQSort3 ( fmap, eclass, l, r );
	cc = -1;
	for (i = l; i <= r; i++) {
	  __asm__("TRACK44_BEGIN: nop\n\t" 
		  "   lea	TRACK44_BEGIN, %%eax\n\t"   
		  "   lea	TRACK44_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK44_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  cc1 = eclass[fmap[i]];
	  if (cc != cc1) {
	    __asm__("TRACK43_BEGIN: nop\n\t" 
		    "   lea	TRACK43_BEGIN, %%eax\n\t"   
		    "   lea	TRACK43_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK43_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    bhtab[(i) >> 5] |= (1 << ((i) & 31)); cc = cc1;
	  };
	}
      }
    }
    if (verb >= 4)
      {
	__asm__("TRACK47_BEGIN: nop\n\t" 
  		"   lea	TRACK47_BEGIN, %%eax\n\t"   
  		"   lea	TRACK47_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK47_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf(stderr,"%6d unresolved strings\n",nNotDone);
      }
    H *= 2;
    if (H > nblock || nNotDone == 0) break;
  }
  if (verb >= 4)
    {
      __asm__("TRACK49_BEGIN: nop\n\t" 
	      "   lea	TRACK49_BEGIN, %%eax\n\t"   
	      "   lea	TRACK49_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK49_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf(stderr,"        reconstructing block ...\n");
    }
  j = 0;
  for (i = 0; i < nblock; i++) {
    __asm__("TRACK51_BEGIN: nop\n\t" 
	    "   lea	TRACK51_BEGIN, %%eax\n\t"   
	    "   lea	TRACK51_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK51_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    while (ftabCopy[j] == 0)  {
      __asm__("TRACK50_BEGIN: nop\n\t" 
	      "   lea	TRACK50_BEGIN, %%eax\n\t"   
	      "   lea	TRACK50_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK50_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      j++;
    }
    ftabCopy[j]--;
    eclass8[fmap[i]] = (UChar)j;
  }
  { if (!(j < 256))  {
      __asm__("TRACK52_BEGIN: nop\n\t" 
	      "   lea	TRACK52_BEGIN, %%eax\n\t"   
	      "   lea	TRACK52_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK52_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK55_BEGIN: nop\n\t" 
	    "   lea	TRACK55_BEGIN, %%eax\n\t"   
	    "   lea	TRACK55_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK55_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    if (i1 >= nblock)  {
      __asm__("TRACK53_BEGIN: nop\n\t" 
	      "   lea	TRACK53_BEGIN, %%eax\n\t"   
	      "   lea	TRACK53_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK53_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      i1 -= nblock;
    }
    if (i2 >= nblock)  {
      __asm__("TRACK54_BEGIN: nop\n\t" 
	      "   lea	TRACK54_BEGIN, %%eax\n\t"   
	      "   lea	TRACK54_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK54_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
  if (bigN < 2) return;
  hp = 0;
  while (incs[hp] < bigN)  {
    __asm__("TRACK56_BEGIN: nop\n\t" 
	    "   lea	TRACK56_BEGIN, %%eax\n\t"   
	    "   lea	TRACK56_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK56_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    hp++;
  }
  hp--;
  for (; hp >= 0; hp--) {
    __asm__("TRACK61_BEGIN: nop\n\t" 
	    "   lea	TRACK61_BEGIN, %%eax\n\t"   
	    "   lea	TRACK61_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK61_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    h = incs[hp];
    i = lo + h;
    while (((Bool)1)) {
      __asm__("TRACK60_BEGIN: nop\n\t" 
	      "   lea	TRACK60_BEGIN, %%eax\n\t"   
	      "   lea	TRACK60_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK60_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (i > hi) break;
      v = ptr[i];
      j = i;
      while ( mainGtU (
		       ptr[j-h]+d, v+d, block, quadrant, nblock, budget
		       ) ) {
	__asm__("TRACK57_BEGIN: nop\n\t" 
      		"   lea	TRACK57_BEGIN, %%eax\n\t"   
      		"   lea	TRACK57_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK57_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
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
	__asm__("TRACK58_BEGIN: nop\n\t" 
      		"   lea	TRACK58_BEGIN, %%eax\n\t"   
      		"   lea	TRACK58_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK58_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
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
	__asm__("TRACK59_BEGIN: nop\n\t" 
      		"   lea	TRACK59_BEGIN, %%eax\n\t"   
      		"   lea	TRACK59_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK59_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
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
  if (a > b) {
    __asm__("TRACK62_BEGIN: nop\n\t" 
	    "   lea	TRACK62_BEGIN, %%eax\n\t"   
	    "   lea	TRACK62_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK62_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    t = a; a = b; b = t;
  };
  if (b > c) {
    __asm__("TRACK64_BEGIN: nop\n\t" 
	    "   lea	TRACK64_BEGIN, %%eax\n\t"   
	    "   lea	TRACK64_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK64_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    b = c;
    if (a > b)  {
      __asm__("TRACK63_BEGIN: nop\n\t" 
	      "   lea	TRACK63_BEGIN, %%eax\n\t"   
	      "   lea	TRACK63_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK63_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK78_BEGIN: nop\n\t" 
	    "   lea	TRACK78_BEGIN, %%eax\n\t"   
	    "   lea	TRACK78_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK78_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    { if (!(sp < 100))  {
	__asm__("TRACK65_BEGIN: nop\n\t" 
  		"   lea	TRACK65_BEGIN, %%eax\n\t"   
  		"   lea	TRACK65_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK65_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 1001 );
      } };
    { sp--; lo = stackLo[sp]; hi = stackHi[sp]; d = stackD [sp]; };
    if (hi - lo < 20 ||
	d > (2 + 12)) {
      __asm__("TRACK66_BEGIN: nop\n\t" 
	      "   lea	TRACK66_BEGIN, %%eax\n\t"   
	      "   lea	TRACK66_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK66_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK71_BEGIN: nop\n\t" 
	      "   lea	TRACK71_BEGIN, %%eax\n\t"   
	      "   lea	TRACK71_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK71_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      while (((Bool)1)) {
	__asm__("TRACK68_BEGIN: nop\n\t" 
      		"   lea	TRACK68_BEGIN, %%eax\n\t"   
      		"   lea	TRACK68_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK68_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	if (unLo > unHi) break;
	n = ((Int32)block[ptr[unLo]+d]) - med;
	if (n == 0) {
	  __asm__("TRACK67_BEGIN: nop\n\t" 
		  "   lea	TRACK67_BEGIN, %%eax\n\t"   
		  "   lea	TRACK67_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK67_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  { Int32 zztmp = ptr[unLo]; ptr[unLo] = ptr[ltLo]; ptr[ltLo] = zztmp; };
	  ltLo++; unLo++; continue;
	};
	if (n > 0) break;
	unLo++;
      }
      while (((Bool)1)) {
	__asm__("TRACK70_BEGIN: nop\n\t" 
      		"   lea	TRACK70_BEGIN, %%eax\n\t"   
      		"   lea	TRACK70_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK70_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	if (unLo > unHi) break;
	n = ((Int32)block[ptr[unHi]+d]) - med;
	if (n == 0) {
	  __asm__("TRACK69_BEGIN: nop\n\t" 
		  "   lea	TRACK69_BEGIN, %%eax\n\t"   
		  "   lea	TRACK69_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK69_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
      __asm__("TRACK72_BEGIN: nop\n\t" 
	      "   lea	TRACK72_BEGIN, %%eax\n\t"   
	      "   lea	TRACK72_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK72_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { stackLo[sp] = lo; stackHi[sp] = hi; stackD [sp] = d+1; sp++; };
      continue;
    }
    n = ((ltLo-lo) < (unLo-ltLo)) ? (ltLo-lo) : (unLo-ltLo); { Int32 yyp1 = (lo); Int32 yyp2 = (unLo-n); Int32 yyn = (n); while (yyn > 0) {
        __asm__("TRACK73_BEGIN: nop\n\t" 
    		"   lea	TRACK73_BEGIN, %%eax\n\t"   
    		"   lea	TRACK73_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK73_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ Int32 zztmp = ptr[yyp1]; ptr[yyp1] = ptr[yyp2]; ptr[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--;
      } };
    m = ((hi-gtHi) < (gtHi-unHi)) ? (hi-gtHi) : (gtHi-unHi); { Int32 yyp1 = (unLo); Int32 yyp2 = (hi-m+1); Int32 yyn = (m); while (yyn > 0) {
        __asm__("TRACK74_BEGIN: nop\n\t" 
    		"   lea	TRACK74_BEGIN, %%eax\n\t"   
    		"   lea	TRACK74_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK74_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ Int32 zztmp = ptr[yyp1]; ptr[yyp1] = ptr[yyp2]; ptr[yyp2] = zztmp; }; yyp1++; yyp2++; yyn--;
      } };
    n = lo + unLo - ltLo - 1;
    m = hi - (gtHi - unHi) + 1;
    nextLo[0] = lo; nextHi[0] = n; nextD[0] = d;
    nextLo[1] = m; nextHi[1] = hi; nextD[1] = d;
    nextLo[2] = n+1; nextHi[2] = m-1; nextD[2] = d+1;
    if ((nextHi[0]-nextLo[0]) < (nextHi[1]-nextLo[1])) {
      __asm__("TRACK75_BEGIN: nop\n\t" 
	      "   lea	TRACK75_BEGIN, %%eax\n\t"   
	      "   lea	TRACK75_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK75_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      Int32 tz;
      tz = nextLo[0]; nextLo[0] = nextLo[1]; nextLo[1] = tz; tz = nextHi[0]; nextHi[0] = nextHi[1]; nextHi[1] = tz; tz = nextD [0]; nextD [0] = nextD [1]; nextD [1] = tz;
    };
    if ((nextHi[1]-nextLo[1]) < (nextHi[2]-nextLo[2])) {
      __asm__("TRACK76_BEGIN: nop\n\t" 
	      "   lea	TRACK76_BEGIN, %%eax\n\t"   
	      "   lea	TRACK76_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK76_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      Int32 tz;
      tz = nextLo[1]; nextLo[1] = nextLo[2]; nextLo[2] = tz; tz = nextHi[1]; nextHi[1] = nextHi[2]; nextHi[2] = tz; tz = nextD [1]; nextD [1] = nextD [2]; nextD [2] = tz;
    };
    if ((nextHi[0]-nextLo[0]) < (nextHi[1]-nextLo[1])) {
      __asm__("TRACK77_BEGIN: nop\n\t" 
	      "   lea	TRACK77_BEGIN, %%eax\n\t"   
	      "   lea	TRACK77_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK77_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      Int32 tz;
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
    __asm__("TRACK79_BEGIN: nop\n\t" 
	    "   lea	TRACK79_BEGIN, %%eax\n\t"   
	    "   lea	TRACK79_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK79_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf(stderr,"        main sort initialise ...\n");
  }
  for (i = 65536; i >= 0; i--)  {
    __asm__("TRACK80_BEGIN: nop\n\t" 
	    "   lea	TRACK80_BEGIN, %%eax\n\t"   
	    "   lea	TRACK80_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK80_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    ftab[i] = 0;
  }
  j = block[0] << 8;
  i = nblock-1;
  for (; i >= 3; i -= 4) {
    __asm__("TRACK81_BEGIN: nop\n\t" 
	    "   lea	TRACK81_BEGIN, %%eax\n\t"   
	    "   lea	TRACK81_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK81_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK82_BEGIN: nop\n\t" 
	    "   lea	TRACK82_BEGIN, %%eax\n\t"   
	    "   lea	TRACK82_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK82_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    quadrant[i] = 0;
    j = (j >> 8) | ( ((UInt16)block[i]) << 8);
    ftab[j]++;
  }
  for (i = 0; i < (2 + 12 + 18 + 2); i++) {
    __asm__("TRACK83_BEGIN: nop\n\t" 
	    "   lea	TRACK83_BEGIN, %%eax\n\t"   
	    "   lea	TRACK83_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK83_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    block [nblock+i] = block[i];
    quadrant[nblock+i] = 0;
  }
  if (verb >= 4)  {
    __asm__("TRACK84_BEGIN: nop\n\t" 
	    "   lea	TRACK84_BEGIN, %%eax\n\t"   
	    "   lea	TRACK84_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK84_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf(stderr,"        bucket sorting ...\n");
  }
  for (i = 1; i <= 65536; i++)  {
    __asm__("TRACK85_BEGIN: nop\n\t" 
	    "   lea	TRACK85_BEGIN, %%eax\n\t"   
	    "   lea	TRACK85_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK85_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    ftab[i] += ftab[i-1];
  }
  s = block[0] << 8;
  i = nblock-1;
  for (; i >= 3; i -= 4) {
    __asm__("TRACK86_BEGIN: nop\n\t" 
	    "   lea	TRACK86_BEGIN, %%eax\n\t"   
	    "   lea	TRACK86_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK86_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK87_BEGIN: nop\n\t" 
	    "   lea	TRACK87_BEGIN, %%eax\n\t"   
	    "   lea	TRACK87_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK87_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s = (s >> 8) | (block[i] << 8);
    j = ftab[s] -1;
    ftab[s] = j;
    ptr[j] = i;
  }
  for (i = 0; i <= 255; i++) {
    __asm__("TRACK88_BEGIN: nop\n\t" 
	    "   lea	TRACK88_BEGIN, %%eax\n\t"   
	    "   lea	TRACK88_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK88_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bigDone [i] = ((Bool)0);
    runningOrder[i] = i;
  }
  {
    Int32 vv;
    Int32 h = 1;
    do  {
      __asm__("TRACK89_BEGIN: nop\n\t" 
	      "   lea	TRACK89_BEGIN, %%eax\n\t"   
	      "   lea	TRACK89_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK89_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      h = 3 * h + 1;
    } while (h <= 256);
    do {
      __asm__("TRACK93_BEGIN: nop\n\t" 
	      "   lea	TRACK93_BEGIN, %%eax\n\t"   
	      "   lea	TRACK93_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK93_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      h = h / 3;
      for (i = h; i <= 255; i++) {
        __asm__("TRACK92_BEGIN: nop\n\t" 
    		"   lea	TRACK92_BEGIN, %%eax\n\t"   
    		"   lea	TRACK92_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK92_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	vv = runningOrder[i];
	j = i;
	while ( (ftab[((runningOrder[j-h])+1) << 8] - ftab[(runningOrder[j-h]) << 8]) > (ftab[((vv)+1) << 8] - ftab[(vv) << 8]) ) {
          __asm__("TRACK90_BEGIN: nop\n\t" 
		  "   lea	TRACK90_BEGIN, %%eax\n\t"   
		  "   lea	TRACK90_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK90_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  runningOrder[j] = runningOrder[j-h];
	  j = j - h;
	  if (j <= (h - 1)) goto zero;
	}
      zero:
	{
	  __asm__("TRACK91_BEGIN: nop\n\t" 
		  "   lea	TRACK91_BEGIN, %%eax\n\t"   
		  "   lea	TRACK91_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK91_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  runningOrder[j] = vv;
	}
      }
    } while (h != 1);
  }
  numQSorted = 0;
  for (i = 0; i <= 255; i++) {
    __asm__("TRACK114_BEGIN: nop\n\t" 
	    "   lea	TRACK114_BEGIN, %%eax\n\t"   
	    "   lea	TRACK114_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK114_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    ss = runningOrder[i];
    for (j = 0; j <= 255; j++) {
      __asm__("TRACK98_BEGIN: nop\n\t" 
	      "   lea	TRACK98_BEGIN, %%eax\n\t"   
	      "   lea	TRACK98_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK98_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (j != ss) {
	__asm__("TRACK97_BEGIN: nop\n\t" 
      		"   lea	TRACK97_BEGIN, %%eax\n\t"   
      		"   lea	TRACK97_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK97_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	sb = (ss << 8) + j;
	if ( ! (ftab[sb] & (1 << 21)) ) {
	  __asm__("TRACK96_BEGIN: nop\n\t" 
		  "   lea	TRACK96_BEGIN, %%eax\n\t"   
		  "   lea	TRACK96_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK96_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  Int32 lo = ftab[sb] & (~((1 << 21)));
	  Int32 hi = (ftab[sb+1] & (~((1 << 21)))) - 1;
	  if (hi > lo) {
	    __asm__("TRACK95_BEGIN: nop\n\t" 
		    "   lea	TRACK95_BEGIN, %%eax\n\t"   
		    "   lea	TRACK95_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK95_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if (verb >= 4)
	      {
		__asm__("TRACK94_BEGIN: nop\n\t" 
          		"   lea	TRACK94_BEGIN, %%eax\n\t"   
          		"   lea	TRACK94_END, %%ecx\n\t" 
          		"   mov	%%eax, (%%esp)\n\t" 
          		"   mov    %%ecx, 4(%%esp)\n\t" 
          		" calll track\n\t" 
          		"TRACK94_END: nop\n\t" 
          		: 
          		: 
          		: "eax", "ecx", "esp");
		fprintf(stderr,"        qsort [0x%x, 0x%x]   " "done %d   this %d\n",ss,j,numQSorted,hi - lo + 1);
	      }
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
    { if (!(!bigDone[ss]))  {
	__asm__("TRACK99_BEGIN: nop\n\t" 
  		"   lea	TRACK99_BEGIN, %%eax\n\t"   
  		"   lea	TRACK99_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK99_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 1006 );
      } };
    {
      for (j = 0; j <= 255; j++) {
        __asm__("TRACK100_BEGIN: nop\n\t" 
    		"   lea	TRACK100_BEGIN, %%eax\n\t"   
    		"   lea	TRACK100_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK100_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	copyStart[j] = ftab[(j << 8) + ss] & (~((1 << 21)));
	copyEnd [j] = (ftab[(j << 8) + ss + 1] & (~((1 << 21)))) - 1;
      }
      for (j = ftab[ss << 8] & (~((1 << 21))); j < copyStart[ss]; j++) {
        __asm__("TRACK103_BEGIN: nop\n\t" 
    		"   lea	TRACK103_BEGIN, %%eax\n\t"   
    		"   lea	TRACK103_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK103_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	k = ptr[j]-1; if (k < 0)  {
	  __asm__("TRACK101_BEGIN: nop\n\t" 
		  "   lea	TRACK101_BEGIN, %%eax\n\t"   
		  "   lea	TRACK101_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK101_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  k += nblock;
	}
	c1 = block[k];
	if (!bigDone[c1])
	  {
	    __asm__("TRACK102_BEGIN: nop\n\t" 
		    "   lea	TRACK102_BEGIN, %%eax\n\t"   
		    "   lea	TRACK102_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK102_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    ptr[ copyStart[c1]++ ] = k;
	  }
      }
      for (j = (ftab[(ss+1) << 8] & (~((1 << 21)))) - 1; j > copyEnd[ss]; j--) {
        __asm__("TRACK106_BEGIN: nop\n\t" 
    		"   lea	TRACK106_BEGIN, %%eax\n\t"   
    		"   lea	TRACK106_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK106_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	k = ptr[j]-1; if (k < 0)  {
	  __asm__("TRACK104_BEGIN: nop\n\t" 
		  "   lea	TRACK104_BEGIN, %%eax\n\t"   
		  "   lea	TRACK104_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK104_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  k += nblock;
	}
	c1 = block[k];
	if (!bigDone[c1])
	  {
	    __asm__("TRACK105_BEGIN: nop\n\t" 
		    "   lea	TRACK105_BEGIN, %%eax\n\t"   
		    "   lea	TRACK105_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK105_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    ptr[ copyEnd[c1]-- ] = k;
	  }
      }
    }
    { if (!((copyStart[ss]-1 == copyEnd[ss]) || (copyStart[ss] == 0 && copyEnd[ss] == nblock-1)))  {
	__asm__("TRACK107_BEGIN: nop\n\t" 
  		"   lea	TRACK107_BEGIN, %%eax\n\t"   
  		"   lea	TRACK107_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK107_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 1007 );
      } }
    for (j = 0; j <= 255; j++)  {
      __asm__("TRACK108_BEGIN: nop\n\t" 
	      "   lea	TRACK108_BEGIN, %%eax\n\t"   
	      "   lea	TRACK108_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK108_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      ftab[(j << 8) + ss] |= (1 << 21);
    }
    bigDone[ss] = ((Bool)1);
    if (i < 255) {
      __asm__("TRACK113_BEGIN: nop\n\t" 
	      "   lea	TRACK113_BEGIN, %%eax\n\t"   
	      "   lea	TRACK113_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK113_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      Int32 bbStart = ftab[ss << 8] & (~((1 << 21)));
      Int32 bbSize = (ftab[(ss+1) << 8] & (~((1 << 21)))) - bbStart;
      Int32 shifts = 0;
      while ((bbSize >> shifts) > 65534)  {
        __asm__("TRACK109_BEGIN: nop\n\t" 
    		"   lea	TRACK109_BEGIN, %%eax\n\t"   
    		"   lea	TRACK109_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK109_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	shifts++;
      }
      for (j = bbSize-1; j >= 0; j--) {
	__asm__("TRACK111_BEGIN: nop\n\t" 
      		"   lea	TRACK111_BEGIN, %%eax\n\t"   
      		"   lea	TRACK111_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK111_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	Int32 a2update = ptr[bbStart + j];
	UInt16 qVal = (UInt16)(j >> shifts);
	quadrant[a2update] = qVal;
	if (a2update < (2 + 12 + 18 + 2))
	  {
	    __asm__("TRACK110_BEGIN: nop\n\t" 
		    "   lea	TRACK110_BEGIN, %%eax\n\t"   
		    "   lea	TRACK110_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK110_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    quadrant[a2update + nblock] = qVal;
	  }
      }
      { if (!(((bbSize-1) >> shifts) <= 65535))  {
	  __asm__("TRACK112_BEGIN: nop\n\t" 
		  "   lea	TRACK112_BEGIN, %%eax\n\t"   
		  "   lea	TRACK112_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK112_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  BZ2_bz__AssertH__fail ( 1002 );
	} };
    }
  }
  if (verb >= 4)
    {
      __asm__("TRACK115_BEGIN: nop\n\t" 
	      "   lea	TRACK115_BEGIN, %%eax\n\t"   
	      "   lea	TRACK115_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK115_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK116_BEGIN: nop\n\t" 
	    "   lea	TRACK116_BEGIN, %%eax\n\t"   
	    "   lea	TRACK116_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK116_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fallbackSort ( s->arr1, s->arr2, ftab, nblock, verb );
  } else {
    __asm__("TRACK123_BEGIN: nop\n\t" 
	    "   lea	TRACK123_BEGIN, %%eax\n\t"   
	    "   lea	TRACK123_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK123_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    i = nblock+(2 + 12 + 18 + 2);
    if (i & 1)  {
      __asm__("TRACK117_BEGIN: nop\n\t" 
	      "   lea	TRACK117_BEGIN, %%eax\n\t"   
	      "   lea	TRACK117_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK117_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      i++;
    }
    quadrant = (UInt16*)(&(block[i]));
    if (wfact < 1 )  {
      __asm__("TRACK118_BEGIN: nop\n\t" 
	      "   lea	TRACK118_BEGIN, %%eax\n\t"   
	      "   lea	TRACK118_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK118_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      wfact = 1;
    }
    if (wfact > 100)  {
      __asm__("TRACK119_BEGIN: nop\n\t" 
	      "   lea	TRACK119_BEGIN, %%eax\n\t"   
	      "   lea	TRACK119_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK119_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      wfact = 100;
    }
    budgetInit = nblock * ((wfact-1) / 3);
    budget = budgetInit;
    mainSort ( ptr, block, quadrant, ftab, nblock, verb, &budget );
    if (verb >= 3)
      {
	__asm__("TRACK120_BEGIN: nop\n\t" 
  		"   lea	TRACK120_BEGIN, %%eax\n\t"   
  		"   lea	TRACK120_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK120_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf(stderr,"      %d work, %d block, ratio %5.2f\n",budgetInit - budget,nblock,(float)(budgetInit - budget) / (float)(nblock==0 ? 1 : nblock));
      }
    if (budget < 0) {
      __asm__("TRACK122_BEGIN: nop\n\t" 
	      "   lea	TRACK122_BEGIN, %%eax\n\t"   
	      "   lea	TRACK122_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK122_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (verb >= 2)
	{
	  __asm__("TRACK121_BEGIN: nop\n\t" 
		  "   lea	TRACK121_BEGIN, %%eax\n\t"   
		  "   lea	TRACK121_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK121_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fprintf(stderr,"    too repetitive; using fallback" " sorting algorithm\n");
	}
      fallbackSort ( s->arr1, s->arr2, ftab, nblock, verb );
    }
  }
  s->origPtr = -1;
  for (i = 0; i < s->nblock; i++)
    {
      __asm__("TRACK125_BEGIN: nop\n\t" 
	      "   lea	TRACK125_BEGIN, %%eax\n\t"   
	      "   lea	TRACK125_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK125_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (ptr[i] == 0)
	{
	  __asm__("TRACK124_BEGIN: nop\n\t" 
		  "   lea	TRACK124_BEGIN, %%eax\n\t"   
		  "   lea	TRACK124_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK124_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->origPtr = i; break;
	}
    };
  { if (!(s->origPtr != -1))  {
      __asm__("TRACK126_BEGIN: nop\n\t" 
	      "   lea	TRACK126_BEGIN, %%eax\n\t"   
	      "   lea	TRACK126_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK126_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK127_BEGIN: nop\n\t" 
	      "   lea	TRACK127_BEGIN, %%eax\n\t"   
	      "   lea	TRACK127_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK127_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      weight[i+1] = (freq[i] == 0 ? 1 : freq[i]) << 8;
    }
  while (((Bool)1)) {
    __asm__("TRACK142_BEGIN: nop\n\t" 
	    "   lea	TRACK142_BEGIN, %%eax\n\t"   
	    "   lea	TRACK142_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK142_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    nNodes = alphaSize;
    nHeap = 0;
    heap[0] = 0;
    weight[0] = 0;
    parent[0] = -2;
    for (i = 1; i <= alphaSize; i++) {
      __asm__("TRACK129_BEGIN: nop\n\t" 
	      "   lea	TRACK129_BEGIN, %%eax\n\t"   
	      "   lea	TRACK129_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK129_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      parent[i] = -1;
      nHeap++;
      heap[nHeap] = i;
      { Int32 zz, tmp; zz = nHeap; tmp = heap[zz]; while (weight[tmp] < weight[heap[zz >> 1]]) {
          __asm__("TRACK128_BEGIN: nop\n\t" 
		  "   lea	TRACK128_BEGIN, %%eax\n\t"   
		  "   lea	TRACK128_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK128_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  heap[zz] = heap[zz >> 1]; zz >>= 1;
	} heap[zz] = tmp; };
    }
    { if (!(nHeap < (258 +2)))  {
	__asm__("TRACK130_BEGIN: nop\n\t" 
  		"   lea	TRACK130_BEGIN, %%eax\n\t"   
  		"   lea	TRACK130_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK130_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 2001 );
      } };
    while (nHeap > 1) {
      __asm__("TRACK136_BEGIN: nop\n\t" 
	      "   lea	TRACK136_BEGIN, %%eax\n\t"   
	      "   lea	TRACK136_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK136_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      n1 = heap[1]; heap[1] = heap[nHeap]; nHeap--; { Int32 zz, yy, tmp; zz = 1; tmp = heap[zz]; while (((Bool)1)) {
          __asm__("TRACK132_BEGIN: nop\n\t" 
		  "   lea	TRACK132_BEGIN, %%eax\n\t"   
		  "   lea	TRACK132_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK132_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  yy = zz << 1; if (yy > nHeap) break; if (yy < nHeap && weight[heap[yy+1]] < weight[heap[yy]])  {
	    __asm__("TRACK131_BEGIN: nop\n\t" 
		    "   lea	TRACK131_BEGIN, %%eax\n\t"   
		    "   lea	TRACK131_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK131_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    yy++;
	  } if (weight[tmp] < weight[heap[yy]]) break; heap[zz] = heap[yy]; zz = yy;
	} heap[zz] = tmp; };
      n2 = heap[1]; heap[1] = heap[nHeap]; nHeap--; { Int32 zz, yy, tmp; zz = 1; tmp = heap[zz]; while (((Bool)1)) {
          __asm__("TRACK134_BEGIN: nop\n\t" 
		  "   lea	TRACK134_BEGIN, %%eax\n\t"   
		  "   lea	TRACK134_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK134_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  yy = zz << 1; if (yy > nHeap) break; if (yy < nHeap && weight[heap[yy+1]] < weight[heap[yy]])  {
	    __asm__("TRACK133_BEGIN: nop\n\t" 
		    "   lea	TRACK133_BEGIN, %%eax\n\t"   
		    "   lea	TRACK133_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK133_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    yy++;
	  } if (weight[tmp] < weight[heap[yy]]) break; heap[zz] = heap[yy]; zz = yy;
	} heap[zz] = tmp; };
      nNodes++;
      parent[n1] = parent[n2] = nNodes;
      weight[nNodes] = (((weight[n1]) & 0xffffff00)+((weight[n2]) & 0xffffff00)) | (1 + ((((weight[n1]) & 0x000000ff)) > (((weight[n2]) & 0x000000ff)) ? (((weight[n1]) & 0x000000ff)) : (((weight[n2]) & 0x000000ff))));
      parent[nNodes] = -1;
      nHeap++;
      heap[nHeap] = nNodes;
      { Int32 zz, tmp; zz = nHeap; tmp = heap[zz]; while (weight[tmp] < weight[heap[zz >> 1]]) {
          __asm__("TRACK135_BEGIN: nop\n\t" 
		  "   lea	TRACK135_BEGIN, %%eax\n\t"   
		  "   lea	TRACK135_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK135_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  heap[zz] = heap[zz >> 1]; zz >>= 1;
	} heap[zz] = tmp; };
    }
    { if (!(nNodes < (258 * 2)))  {
	__asm__("TRACK137_BEGIN: nop\n\t" 
  		"   lea	TRACK137_BEGIN, %%eax\n\t"   
  		"   lea	TRACK137_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK137_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 2002 );
      } };
    tooLong = ((Bool)0);
    for (i = 1; i <= alphaSize; i++) {
      __asm__("TRACK140_BEGIN: nop\n\t" 
	      "   lea	TRACK140_BEGIN, %%eax\n\t"   
	      "   lea	TRACK140_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK140_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      j = 0;
      k = i;
      while (parent[k] >= 0) {
	__asm__("TRACK138_BEGIN: nop\n\t" 
      		"   lea	TRACK138_BEGIN, %%eax\n\t"   
      		"   lea	TRACK138_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK138_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	k = parent[k]; j++;
      }
      len[i-1] = j;
      if (j > maxLen)  {
        __asm__("TRACK139_BEGIN: nop\n\t" 
    		"   lea	TRACK139_BEGIN, %%eax\n\t"   
    		"   lea	TRACK139_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK139_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	tooLong = ((Bool)1);
      }
    }
    if (! tooLong) break;
    for (i = 1; i < alphaSize; i++) {
      __asm__("TRACK141_BEGIN: nop\n\t" 
	      "   lea	TRACK141_BEGIN, %%eax\n\t"   
	      "   lea	TRACK141_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK141_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK145_BEGIN: nop\n\t" 
	    "   lea	TRACK145_BEGIN, %%eax\n\t"   
	    "   lea	TRACK145_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK145_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    for (i = 0; i < alphaSize; i++)
      {
	__asm__("TRACK144_BEGIN: nop\n\t" 
  		"   lea	TRACK144_BEGIN, %%eax\n\t"   
  		"   lea	TRACK144_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK144_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	if (length[i] == n) {
	  __asm__("TRACK143_BEGIN: nop\n\t" 
		  "   lea	TRACK143_BEGIN, %%eax\n\t"   
		  "   lea	TRACK143_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK143_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
      __asm__("TRACK148_BEGIN: nop\n\t" 
	      "   lea	TRACK148_BEGIN, %%eax\n\t"   
	      "   lea	TRACK148_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK148_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      for (j = 0; j < alphaSize; j++)
	{
	  __asm__("TRACK147_BEGIN: nop\n\t" 
		  "   lea	TRACK147_BEGIN, %%eax\n\t"   
		  "   lea	TRACK147_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK147_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (length[j] == i) {
	    __asm__("TRACK146_BEGIN: nop\n\t" 
		    "   lea	TRACK146_BEGIN, %%eax\n\t"   
		    "   lea	TRACK146_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK146_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    perm[pp] = j; pp++;
	  }
	}
    };
  for (i = 0; i < 23; i++)  {
    __asm__("TRACK149_BEGIN: nop\n\t" 
	    "   lea	TRACK149_BEGIN, %%eax\n\t"   
	    "   lea	TRACK149_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK149_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    base[i] = 0;
  }
  for (i = 0; i < alphaSize; i++)  {
    __asm__("TRACK150_BEGIN: nop\n\t" 
	    "   lea	TRACK150_BEGIN, %%eax\n\t"   
	    "   lea	TRACK150_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK150_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    base[length[i]+1]++;
  }
  for (i = 1; i < 23; i++)  {
    __asm__("TRACK151_BEGIN: nop\n\t" 
	    "   lea	TRACK151_BEGIN, %%eax\n\t"   
	    "   lea	TRACK151_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK151_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    base[i] += base[i-1];
  }
  for (i = 0; i < 23; i++)  {
    __asm__("TRACK152_BEGIN: nop\n\t" 
	    "   lea	TRACK152_BEGIN, %%eax\n\t"   
	    "   lea	TRACK152_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK152_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    limit[i] = 0;
  }
  vec = 0;
  for (i = minLen; i <= maxLen; i++) {
    __asm__("TRACK153_BEGIN: nop\n\t" 
	    "   lea	TRACK153_BEGIN, %%eax\n\t"   
	    "   lea	TRACK153_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK153_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    vec += (base[i+1] - base[i]);
    limit[i] = vec-1;
    vec <<= 1;
  }
  for (i = minLen + 1; i <= maxLen; i++)
    {
      __asm__("TRACK154_BEGIN: nop\n\t" 
	      "   lea	TRACK154_BEGIN, %%eax\n\t"   
	      "   lea	TRACK154_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK154_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK155_BEGIN: nop\n\t" 
	    "   lea	TRACK155_BEGIN, %%eax\n\t"   
	    "   lea	TRACK155_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK155_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
      __asm__("TRACK156_BEGIN: nop\n\t" 
	      "   lea	TRACK156_BEGIN, %%eax\n\t"   
	      "   lea	TRACK156_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK156_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK158_BEGIN: nop\n\t" 
	      "   lea	TRACK158_BEGIN, %%eax\n\t"   
	      "   lea	TRACK158_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK158_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->inUse[i]) {
	__asm__("TRACK157_BEGIN: nop\n\t" 
  		"   lea	TRACK157_BEGIN, %%eax\n\t"   
  		"   lea	TRACK157_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK157_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
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
    __asm__("TRACK159_BEGIN: nop\n\t" 
	    "   lea	TRACK159_BEGIN, %%eax\n\t"   
	    "   lea	TRACK159_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK159_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->mtfFreq[i] = 0;
  }
  wr = 0;
  zPend = 0;
  for (i = 0; i < s->nInUse; i++)  {
    __asm__("TRACK160_BEGIN: nop\n\t" 
	    "   lea	TRACK160_BEGIN, %%eax\n\t"   
	    "   lea	TRACK160_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK160_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    yy[i] = (UChar) i;
  }
  for (i = 0; i < s->nblock; i++) {
    __asm__("TRACK169_BEGIN: nop\n\t" 
	    "   lea	TRACK169_BEGIN, %%eax\n\t"   
	    "   lea	TRACK169_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK169_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    UChar ll_i;
    ;
    j = ptr[i]-1; if (j < 0)  {
      __asm__("TRACK161_BEGIN: nop\n\t" 
	      "   lea	TRACK161_BEGIN, %%eax\n\t"   
	      "   lea	TRACK161_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK161_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      j += s->nblock;
    }
    ll_i = s->unseqToSeq[block[j]];
    ;
    if (yy[0] == ll_i) {
      __asm__("TRACK162_BEGIN: nop\n\t" 
	      "   lea	TRACK162_BEGIN, %%eax\n\t"   
	      "   lea	TRACK162_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK162_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      zPend++;
    } else {
      __asm__("TRACK168_BEGIN: nop\n\t" 
	      "   lea	TRACK168_BEGIN, %%eax\n\t"   
	      "   lea	TRACK168_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK168_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (zPend > 0) {
	__asm__("TRACK166_BEGIN: nop\n\t" 
      		"   lea	TRACK166_BEGIN, %%eax\n\t"   
      		"   lea	TRACK166_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK166_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	zPend--;
	while (((Bool)1)) {
	  __asm__("TRACK165_BEGIN: nop\n\t" 
		  "   lea	TRACK165_BEGIN, %%eax\n\t"   
		  "   lea	TRACK165_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK165_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (zPend & 1) {
	    __asm__("TRACK163_BEGIN: nop\n\t" 
		    "   lea	TRACK163_BEGIN, %%eax\n\t"   
		    "   lea	TRACK163_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK163_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    mtfv[wr] = 1; wr++;
	    s->mtfFreq[1]++;
	  } else {
	    __asm__("TRACK164_BEGIN: nop\n\t" 
		    "   lea	TRACK164_BEGIN, %%eax\n\t"   
		    "   lea	TRACK164_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK164_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
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
          __asm__("TRACK167_BEGIN: nop\n\t" 
		  "   lea	TRACK167_BEGIN, %%eax\n\t"   
		  "   lea	TRACK167_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK167_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
    __asm__("TRACK173_BEGIN: nop\n\t" 
	    "   lea	TRACK173_BEGIN, %%eax\n\t"   
	    "   lea	TRACK173_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK173_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    zPend--;
    while (((Bool)1)) {
      __asm__("TRACK172_BEGIN: nop\n\t" 
	      "   lea	TRACK172_BEGIN, %%eax\n\t"   
	      "   lea	TRACK172_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK172_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (zPend & 1) {
	__asm__("TRACK170_BEGIN: nop\n\t" 
      		"   lea	TRACK170_BEGIN, %%eax\n\t"   
      		"   lea	TRACK170_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK170_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	mtfv[wr] = 1; wr++;
	s->mtfFreq[1]++;
      } else {
	__asm__("TRACK171_BEGIN: nop\n\t" 
      		"   lea	TRACK171_BEGIN, %%eax\n\t"   
      		"   lea	TRACK171_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK171_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
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
    {
      __asm__("TRACK174_BEGIN: nop\n\t" 
	      "   lea	TRACK174_BEGIN, %%eax\n\t"   
	      "   lea	TRACK174_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK174_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf(stderr,"      %d in block, %d after MTF & 1-2 coding, " "%d+2 syms in use\n",s->nblock,s->nMTF,s->nInUse);
    }
  alphaSize = s->nInUse+2;
  for (t = 0; t < 6; t++)
    {
      __asm__("TRACK176_BEGIN: nop\n\t" 
	      "   lea	TRACK176_BEGIN, %%eax\n\t"   
	      "   lea	TRACK176_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK176_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      for (v = 0; v < alphaSize; v++)
	{
	  __asm__("TRACK175_BEGIN: nop\n\t" 
		  "   lea	TRACK175_BEGIN, %%eax\n\t"   
		  "   lea	TRACK175_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK175_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->len[t][v] = 15;
	}
    }
  { if (!(s->nMTF > 0))  {
      __asm__("TRACK177_BEGIN: nop\n\t" 
	      "   lea	TRACK177_BEGIN, %%eax\n\t"   
	      "   lea	TRACK177_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK177_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      BZ2_bz__AssertH__fail ( 3001 );
    } };
  if (s->nMTF < 200)  {
    __asm__("TRACK178_BEGIN: nop\n\t" 
	    "   lea	TRACK178_BEGIN, %%eax\n\t"   
	    "   lea	TRACK178_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK178_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    nGroups = 2;
  } else
    {
      __asm__("TRACK185_BEGIN: nop\n\t" 
	      "   lea	TRACK185_BEGIN, %%eax\n\t"   
	      "   lea	TRACK185_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK185_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->nMTF < 600)  {
	__asm__("TRACK179_BEGIN: nop\n\t" 
		"   lea	TRACK179_BEGIN, %%eax\n\t"   
		"   lea	TRACK179_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK179_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	nGroups = 3;
      } else
	{
	  __asm__("TRACK184_BEGIN: nop\n\t" 
		  "   lea	TRACK184_BEGIN, %%eax\n\t"   
		  "   lea	TRACK184_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK184_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (s->nMTF < 1200)  {
	    __asm__("TRACK180_BEGIN: nop\n\t" 
		    "   lea	TRACK180_BEGIN, %%eax\n\t"   
		    "   lea	TRACK180_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK180_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    nGroups = 4;
	  } else
	    {
	      __asm__("TRACK183_BEGIN: nop\n\t" 
		      "   lea	TRACK183_BEGIN, %%eax\n\t"   
		      "   lea	TRACK183_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK183_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      if (s->nMTF < 2400)  {
		__asm__("TRACK181_BEGIN: nop\n\t" 
			"   lea	TRACK181_BEGIN, %%eax\n\t"   
			"   lea	TRACK181_END, %%ecx\n\t" 
			"   mov	%%eax, (%%esp)\n\t" 
			"   mov    %%ecx, 4(%%esp)\n\t" 
			" calll track\n\t" 
			"TRACK181_END: nop\n\t" 
			: 
			: 
			: "eax", "ecx", "esp");
		nGroups = 5;
	      } else
		{
		  __asm__("TRACK182_BEGIN: nop\n\t" 
			  "   lea	TRACK182_BEGIN, %%eax\n\t"   
			  "   lea	TRACK182_END, %%ecx\n\t" 
			  "   mov	%%eax, (%%esp)\n\t" 
			  "   mov    %%ecx, 4(%%esp)\n\t" 
			  " calll track\n\t" 
			  "TRACK182_END: nop\n\t" 
			  : 
			  : 
			  : "eax", "ecx", "esp");
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
      __asm__("TRACK192_BEGIN: nop\n\t" 
	      "   lea	TRACK192_BEGIN, %%eax\n\t"   
	      "   lea	TRACK192_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK192_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      tFreq = remF / nPart;
      ge = gs-1;
      aFreq = 0;
      while (aFreq < tFreq && ge < alphaSize-1) {
        __asm__("TRACK186_BEGIN: nop\n\t" 
    		"   lea	TRACK186_BEGIN, %%eax\n\t"   
    		"   lea	TRACK186_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK186_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	ge++;
	aFreq += s->mtfFreq[ge];
      }
      if (ge > gs
	  && nPart != nGroups && nPart != 1
	  && ((nGroups-nPart) % 2 == 1)) {
        __asm__("TRACK187_BEGIN: nop\n\t" 
    		"   lea	TRACK187_BEGIN, %%eax\n\t"   
    		"   lea	TRACK187_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK187_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	aFreq -= s->mtfFreq[ge];
	ge--;
      }
      if (s->verbosity >= 3)
	{
	  __asm__("TRACK188_BEGIN: nop\n\t" 
		  "   lea	TRACK188_BEGIN, %%eax\n\t"   
		  "   lea	TRACK188_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK188_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fprintf(stderr,"      initial group %d, [%d .. %d], " "has %d syms (%4.1f%%)\n",nPart,gs,ge,aFreq,(100.0 * (float)aFreq) / (float)(s->nMTF));
	}
      for (v = 0; v < alphaSize; v++)
	{
	  __asm__("TRACK191_BEGIN: nop\n\t" 
		  "   lea	TRACK191_BEGIN, %%eax\n\t"   
		  "   lea	TRACK191_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK191_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (v >= gs && v <= ge)
	    {
	      __asm__("TRACK189_BEGIN: nop\n\t" 
		      "   lea	TRACK189_BEGIN, %%eax\n\t"   
		      "   lea	TRACK189_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK189_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->len[nPart-1][v] = 0;
	    } else
	    {
	      __asm__("TRACK190_BEGIN: nop\n\t" 
		      "   lea	TRACK190_BEGIN, %%eax\n\t"   
		      "   lea	TRACK190_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK190_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->len[nPart-1][v] = 15;
	    }
	}
      nPart--;
      gs = ge+1;
      remF -= aFreq;
    }
  }
  for (iter = 0; iter < 4; iter++) {
    __asm__("TRACK213_BEGIN: nop\n\t" 
	    "   lea	TRACK213_BEGIN, %%eax\n\t"   
	    "   lea	TRACK213_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK213_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    for (t = 0; t < nGroups; t++)  {
      __asm__("TRACK193_BEGIN: nop\n\t" 
	      "   lea	TRACK193_BEGIN, %%eax\n\t"   
	      "   lea	TRACK193_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK193_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fave[t] = 0;
    }
    for (t = 0; t < nGroups; t++)
      {
	__asm__("TRACK195_BEGIN: nop\n\t" 
  		"   lea	TRACK195_BEGIN, %%eax\n\t"   
  		"   lea	TRACK195_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK195_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	for (v = 0; v < alphaSize; v++)
	  {
	    __asm__("TRACK194_BEGIN: nop\n\t" 
		    "   lea	TRACK194_BEGIN, %%eax\n\t"   
		    "   lea	TRACK194_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK194_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->rfreq[t][v] = 0;
	  }
      }
    if (nGroups == 6) {
      __asm__("TRACK197_BEGIN: nop\n\t" 
	      "   lea	TRACK197_BEGIN, %%eax\n\t"   
	      "   lea	TRACK197_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK197_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      for (v = 0; v < alphaSize; v++) {
	__asm__("TRACK196_BEGIN: nop\n\t" 
      		"   lea	TRACK196_BEGIN, %%eax\n\t"   
      		"   lea	TRACK196_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK196_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->len_pack[v][0] = (s->len[1][v] << 16) | s->len[0][v];
	s->len_pack[v][1] = (s->len[3][v] << 16) | s->len[2][v];
	s->len_pack[v][2] = (s->len[5][v] << 16) | s->len[4][v];
      }
    }
    nSelectors = 0;
    totc = 0;
    gs = 0;
    while (((Bool)1)) {
      __asm__("TRACK209_BEGIN: nop\n\t" 
	      "   lea	TRACK209_BEGIN, %%eax\n\t"   
	      "   lea	TRACK209_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK209_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (gs >= s->nMTF) break;
      ge = gs + 50 - 1;
      if (ge >= s->nMTF)  {
        __asm__("TRACK198_BEGIN: nop\n\t" 
    		"   lea	TRACK198_BEGIN, %%eax\n\t"   
    		"   lea	TRACK198_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK198_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	ge = s->nMTF-1;
      }
      for (t = 0; t < nGroups; t++)  {
        __asm__("TRACK199_BEGIN: nop\n\t" 
    		"   lea	TRACK199_BEGIN, %%eax\n\t"   
    		"   lea	TRACK199_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK199_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	cost[t] = 0;
      }
      if (nGroups == 6 && 50 == ge-gs+1) {
	__asm__("TRACK200_BEGIN: nop\n\t" 
      		"   lea	TRACK200_BEGIN, %%eax\n\t"   
      		"   lea	TRACK200_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK200_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
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
	__asm__("TRACK203_BEGIN: nop\n\t" 
      		"   lea	TRACK203_BEGIN, %%eax\n\t"   
      		"   lea	TRACK203_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK203_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	for (i = gs; i <= ge; i++) {
	  __asm__("TRACK202_BEGIN: nop\n\t" 
		  "   lea	TRACK202_BEGIN, %%eax\n\t"   
		  "   lea	TRACK202_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK202_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  UInt16 icv = mtfv[i];
	  for (t = 0; t < nGroups; t++)  {
            __asm__("TRACK201_BEGIN: nop\n\t" 
		    "   lea	TRACK201_BEGIN, %%eax\n\t"   
		    "   lea	TRACK201_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK201_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    cost[t] += s->len[t][icv];
	  }
	}
      }
      bc = 999999999; bt = -1;
      for (t = 0; t < nGroups; t++)
	{
	  __asm__("TRACK205_BEGIN: nop\n\t" 
		  "   lea	TRACK205_BEGIN, %%eax\n\t"   
		  "   lea	TRACK205_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK205_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (cost[t] < bc) {
	    __asm__("TRACK204_BEGIN: nop\n\t" 
		    "   lea	TRACK204_BEGIN, %%eax\n\t"   
		    "   lea	TRACK204_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK204_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    bc = cost[t]; bt = t;
	  }
	};
      totc += bc;
      fave[bt]++;
      s->selector[nSelectors] = bt;
      nSelectors++;
      if (nGroups == 6 && 50 == ge-gs+1) {
	__asm__("TRACK206_BEGIN: nop\n\t" 
      		"   lea	TRACK206_BEGIN, %%eax\n\t"   
      		"   lea	TRACK206_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK206_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
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
	__asm__("TRACK208_BEGIN: nop\n\t" 
      		"   lea	TRACK208_BEGIN, %%eax\n\t"   
      		"   lea	TRACK208_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK208_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	for (i = gs; i <= ge; i++)
	  {
	    __asm__("TRACK207_BEGIN: nop\n\t" 
		    "   lea	TRACK207_BEGIN, %%eax\n\t"   
		    "   lea	TRACK207_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK207_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->rfreq[bt][ mtfv[i] ]++;
	  }
      }
      gs = ge+1;
    }
    if (s->verbosity >= 3) {
      __asm__("TRACK211_BEGIN: nop\n\t" 
	      "   lea	TRACK211_BEGIN, %%eax\n\t"   
	      "   lea	TRACK211_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK211_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf(stderr,"      pass %d: size is %d, grp uses are ",iter+1,totc/8);
      for (t = 0; t < nGroups; t++)
	{
	  __asm__("TRACK210_BEGIN: nop\n\t" 
		  "   lea	TRACK210_BEGIN, %%eax\n\t"   
		  "   lea	TRACK210_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK210_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fprintf(stderr,"%d ",fave[t]);
	}
      fprintf(stderr,"\n");
    }
    for (t = 0; t < nGroups; t++)
      {
	__asm__("TRACK212_BEGIN: nop\n\t" 
  		"   lea	TRACK212_BEGIN, %%eax\n\t"   
  		"   lea	TRACK212_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK212_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_hbMakeCodeLengths ( &(s->len[t][0]), &(s->rfreq[t][0]),
				alphaSize, 20 );
      }
  }
  { if (!(nGroups < 8))  {
      __asm__("TRACK214_BEGIN: nop\n\t" 
	      "   lea	TRACK214_BEGIN, %%eax\n\t"   
	      "   lea	TRACK214_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK214_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      BZ2_bz__AssertH__fail ( 3002 );
    } };
  { if (!(nSelectors < 32768 && nSelectors <= (2 + (900000 / 50))))  {
      __asm__("TRACK215_BEGIN: nop\n\t" 
	      "   lea	TRACK215_BEGIN, %%eax\n\t"   
	      "   lea	TRACK215_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK215_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      BZ2_bz__AssertH__fail ( 3003 );
    } };
  {
    UChar pos[6], ll_i, tmp2, tmp;
    for (i = 0; i < nGroups; i++)  {
      __asm__("TRACK216_BEGIN: nop\n\t" 
	      "   lea	TRACK216_BEGIN, %%eax\n\t"   
	      "   lea	TRACK216_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK216_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      pos[i] = i;
    }
    for (i = 0; i < nSelectors; i++) {
      __asm__("TRACK218_BEGIN: nop\n\t" 
	      "   lea	TRACK218_BEGIN, %%eax\n\t"   
	      "   lea	TRACK218_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK218_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      ll_i = s->selector[i];
      j = 0;
      tmp = pos[j];
      while ( ll_i != tmp ) {
        __asm__("TRACK217_BEGIN: nop\n\t" 
    		"   lea	TRACK217_BEGIN, %%eax\n\t"   
    		"   lea	TRACK217_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK217_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
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
    __asm__("TRACK224_BEGIN: nop\n\t" 
	    "   lea	TRACK224_BEGIN, %%eax\n\t"   
	    "   lea	TRACK224_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK224_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    minLen = 32;
    maxLen = 0;
    for (i = 0; i < alphaSize; i++) {
      __asm__("TRACK221_BEGIN: nop\n\t" 
	      "   lea	TRACK221_BEGIN, %%eax\n\t"   
	      "   lea	TRACK221_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK221_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->len[t][i] > maxLen)  {
        __asm__("TRACK219_BEGIN: nop\n\t" 
    		"   lea	TRACK219_BEGIN, %%eax\n\t"   
    		"   lea	TRACK219_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK219_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	maxLen = s->len[t][i];
      }
      if (s->len[t][i] < minLen)  {
        __asm__("TRACK220_BEGIN: nop\n\t" 
    		"   lea	TRACK220_BEGIN, %%eax\n\t"   
    		"   lea	TRACK220_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK220_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	minLen = s->len[t][i];
      }
    }
    { if (!(!(maxLen > 20)))  {
	__asm__("TRACK222_BEGIN: nop\n\t" 
  		"   lea	TRACK222_BEGIN, %%eax\n\t"   
  		"   lea	TRACK222_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK222_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 3004 );
      } };
    { if (!(!(minLen < 1)))  {
	__asm__("TRACK223_BEGIN: nop\n\t" 
  		"   lea	TRACK223_BEGIN, %%eax\n\t"   
  		"   lea	TRACK223_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK223_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 3005 );
      } };
    BZ2_hbAssignCodes ( &(s->code[t][0]), &(s->len[t][0]),
			minLen, maxLen, alphaSize );
  }
  {
    Bool inUse16[16];
    for (i = 0; i < 16; i++) {
      __asm__("TRACK227_BEGIN: nop\n\t" 
	      "   lea	TRACK227_BEGIN, %%eax\n\t"   
	      "   lea	TRACK227_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK227_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      inUse16[i] = ((Bool)0);
      for (j = 0; j < 16; j++)
	{
	  __asm__("TRACK226_BEGIN: nop\n\t" 
		  "   lea	TRACK226_BEGIN, %%eax\n\t"   
		  "   lea	TRACK226_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK226_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (s->inUse[i * 16 + j])  {
	    __asm__("TRACK225_BEGIN: nop\n\t" 
		    "   lea	TRACK225_BEGIN, %%eax\n\t"   
		    "   lea	TRACK225_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK225_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    inUse16[i] = ((Bool)1);
	  }
	}
    }
    nBytes = s->numZ;
    for (i = 0; i < 16; i++)
      {
	__asm__("TRACK230_BEGIN: nop\n\t" 
		"   lea	TRACK230_BEGIN, %%eax\n\t"   
		"   lea	TRACK230_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK230_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	if (inUse16[i])  {
	  __asm__("TRACK228_BEGIN: nop\n\t" 
		  "   lea	TRACK228_BEGIN, %%eax\n\t"   
		  "   lea	TRACK228_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK228_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bsW(s,1,1);
	} else  {
	  __asm__("TRACK229_BEGIN: nop\n\t" 
		  "   lea	TRACK229_BEGIN, %%eax\n\t"   
		  "   lea	TRACK229_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK229_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bsW(s,1,0);
	}
      }
    for (i = 0; i < 16; i++)
      {
	__asm__("TRACK235_BEGIN: nop\n\t" 
		"   lea	TRACK235_BEGIN, %%eax\n\t"   
		"   lea	TRACK235_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK235_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	if (inUse16[i])
	  {
	    __asm__("TRACK234_BEGIN: nop\n\t" 
		    "   lea	TRACK234_BEGIN, %%eax\n\t"   
		    "   lea	TRACK234_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK234_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    for (j = 0; j < 16; j++) {
	      __asm__("TRACK233_BEGIN: nop\n\t" 
		      "   lea	TRACK233_BEGIN, %%eax\n\t"   
		      "   lea	TRACK233_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK233_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      if (s->inUse[i * 16 + j])  {
		__asm__("TRACK231_BEGIN: nop\n\t" 
			"   lea	TRACK231_BEGIN, %%eax\n\t"   
			"   lea	TRACK231_END, %%ecx\n\t" 
			"   mov	%%eax, (%%esp)\n\t" 
			"   mov    %%ecx, 4(%%esp)\n\t" 
			" calll track\n\t" 
			"TRACK231_END: nop\n\t" 
			: 
			: 
			: "eax", "ecx", "esp");
		bsW(s,1,1);
	      } else  {
		__asm__("TRACK232_BEGIN: nop\n\t" 
			"   lea	TRACK232_BEGIN, %%eax\n\t"   
			"   lea	TRACK232_END, %%ecx\n\t" 
			"   mov	%%eax, (%%esp)\n\t" 
			"   mov    %%ecx, 4(%%esp)\n\t" 
			" calll track\n\t" 
			"TRACK232_END: nop\n\t" 
			: 
			: 
			: "eax", "ecx", "esp");
		bsW(s,1,0);
	      }
	    }
	  }
      }
    if (s->verbosity >= 3)
      {
	__asm__("TRACK236_BEGIN: nop\n\t" 
		"   lea	TRACK236_BEGIN, %%eax\n\t"   
		"   lea	TRACK236_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK236_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	fprintf(stderr,"      bytes: mapping %d, ",s->numZ-nBytes);
      }
  }
  nBytes = s->numZ;
  bsW ( s, 3, nGroups );
  bsW ( s, 15, nSelectors );
  for (i = 0; i < nSelectors; i++) {
    __asm__("TRACK238_BEGIN: nop\n\t" 
	    "   lea	TRACK238_BEGIN, %%eax\n\t"   
	    "   lea	TRACK238_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK238_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    for (j = 0; j < s->selectorMtf[i]; j++)  {
      __asm__("TRACK237_BEGIN: nop\n\t" 
	      "   lea	TRACK237_BEGIN, %%eax\n\t"   
	      "   lea	TRACK237_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK237_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      bsW(s,1,1);
    }
    bsW(s,1,0);
  }
  if (s->verbosity >= 3)
    {
      __asm__("TRACK239_BEGIN: nop\n\t" 
	      "   lea	TRACK239_BEGIN, %%eax\n\t"   
	      "   lea	TRACK239_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK239_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf(stderr,"selectors %d, ",s->numZ-nBytes);
    }
  nBytes = s->numZ;
  for (t = 0; t < nGroups; t++) {
    __asm__("TRACK243_BEGIN: nop\n\t" 
	    "   lea	TRACK243_BEGIN, %%eax\n\t"   
	    "   lea	TRACK243_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK243_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    Int32 curr = s->len[t][0];
    bsW ( s, 5, curr );
    for (i = 0; i < alphaSize; i++) {
      __asm__("TRACK242_BEGIN: nop\n\t" 
	      "   lea	TRACK242_BEGIN, %%eax\n\t"   
	      "   lea	TRACK242_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK242_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      while (curr < s->len[t][i]) {
	__asm__("TRACK240_BEGIN: nop\n\t" 
      		"   lea	TRACK240_BEGIN, %%eax\n\t"   
      		"   lea	TRACK240_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK240_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	bsW(s,2,2); curr++;
      };
      while (curr > s->len[t][i]) {
	__asm__("TRACK241_BEGIN: nop\n\t" 
      		"   lea	TRACK241_BEGIN, %%eax\n\t"   
      		"   lea	TRACK241_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK241_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	bsW(s,2,3); curr--;
      };
      bsW ( s, 1, 0 );
    }
  }
  if (s->verbosity >= 3)
    {
      __asm__("TRACK244_BEGIN: nop\n\t" 
	      "   lea	TRACK244_BEGIN, %%eax\n\t"   
	      "   lea	TRACK244_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK244_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf(stderr,"code lengths %d, ",s->numZ-nBytes);
    }
  nBytes = s->numZ;
  selCtr = 0;
  gs = 0;
  while (((Bool)1)) {
    __asm__("TRACK250_BEGIN: nop\n\t" 
	    "   lea	TRACK250_BEGIN, %%eax\n\t"   
	    "   lea	TRACK250_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK250_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (gs >= s->nMTF) break;
    ge = gs + 50 - 1;
    if (ge >= s->nMTF)  {
      __asm__("TRACK245_BEGIN: nop\n\t" 
	      "   lea	TRACK245_BEGIN, %%eax\n\t"   
	      "   lea	TRACK245_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK245_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      ge = s->nMTF-1;
    }
    { if (!(s->selector[selCtr] < nGroups))  {
	__asm__("TRACK246_BEGIN: nop\n\t" 
  		"   lea	TRACK246_BEGIN, %%eax\n\t"   
  		"   lea	TRACK246_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK246_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 3006 );
      } };
    if (nGroups == 6 && 50 == ge-gs+1) {
      __asm__("TRACK247_BEGIN: nop\n\t" 
	      "   lea	TRACK247_BEGIN, %%eax\n\t"   
	      "   lea	TRACK247_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK247_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK249_BEGIN: nop\n\t" 
	      "   lea	TRACK249_BEGIN, %%eax\n\t"   
	      "   lea	TRACK249_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK249_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      for (i = gs; i <= ge; i++) {
	__asm__("TRACK248_BEGIN: nop\n\t" 
      		"   lea	TRACK248_BEGIN, %%eax\n\t"   
      		"   lea	TRACK248_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK248_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	bsW ( s,
	      s->len [s->selector[selCtr]] [mtfv[i]],
	      s->code [s->selector[selCtr]] [mtfv[i]] );
      }
    }
    gs = ge+1;
    selCtr++;
  }
  { if (!(selCtr == nSelectors))  {
      __asm__("TRACK251_BEGIN: nop\n\t" 
	      "   lea	TRACK251_BEGIN, %%eax\n\t"   
	      "   lea	TRACK251_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK251_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      BZ2_bz__AssertH__fail ( 3007 );
    } };
  if (s->verbosity >= 3)
    {
      __asm__("TRACK252_BEGIN: nop\n\t" 
	      "   lea	TRACK252_BEGIN, %%eax\n\t"   
	      "   lea	TRACK252_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK252_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf(stderr,"codes %d\n",s->numZ-nBytes);
    }
}
void BZ2_compressBlock ( EState* s, Bool is_last_block )
{
  if (s->nblock > 0) {
    __asm__("TRACK255_BEGIN: nop\n\t" 
	    "   lea	TRACK255_BEGIN, %%eax\n\t"   
	    "   lea	TRACK255_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK255_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    { s->blockCRC = ~(s->blockCRC); };
    s->combinedCRC = (s->combinedCRC << 1) | (s->combinedCRC >> 31);
    s->combinedCRC ^= s->blockCRC;
    if (s->blockNo > 1)  {
      __asm__("TRACK253_BEGIN: nop\n\t" 
	      "   lea	TRACK253_BEGIN, %%eax\n\t"   
	      "   lea	TRACK253_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK253_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->numZ = 0;
    }
    if (s->verbosity >= 2)
      {
	__asm__("TRACK254_BEGIN: nop\n\t" 
  		"   lea	TRACK254_BEGIN, %%eax\n\t"   
  		"   lea	TRACK254_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK254_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf(stderr,"    block %d: crc = 0x%8x, " "combined CRC = 0x%8x, size = %d\n",s->blockNo,s->blockCRC,s->combinedCRC,s->nblock);
      }
    BZ2_blockSort ( s );
  }
  s->zbits = (UChar*) (&((UChar*)s->arr2)[s->nblock]);
  if (s->blockNo == 1) {
    __asm__("TRACK256_BEGIN: nop\n\t" 
	    "   lea	TRACK256_BEGIN, %%eax\n\t"   
	    "   lea	TRACK256_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK256_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    BZ2_bsInitWrite ( s );
    bsPutUChar ( s, 0x42 );
    bsPutUChar ( s, 0x5a );
    bsPutUChar ( s, 0x68 );
    bsPutUChar ( s, (UChar)(0x30 + s->blockSize100k) );
  }
  if (s->nblock > 0) {
    __asm__("TRACK257_BEGIN: nop\n\t" 
	    "   lea	TRACK257_BEGIN, %%eax\n\t"   
	    "   lea	TRACK257_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK257_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK259_BEGIN: nop\n\t" 
	    "   lea	TRACK259_BEGIN, %%eax\n\t"   
	    "   lea	TRACK259_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK259_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bsPutUChar ( s, 0x17 ); bsPutUChar ( s, 0x72 );
    bsPutUChar ( s, 0x45 ); bsPutUChar ( s, 0x38 );
    bsPutUChar ( s, 0x50 ); bsPutUChar ( s, 0x90 );
    bsPutUInt32 ( s, s->combinedCRC );
    if (s->verbosity >= 2)
      {
	__asm__("TRACK258_BEGIN: nop\n\t" 
  		"   lea	TRACK258_BEGIN, %%eax\n\t"   
  		"   lea	TRACK258_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK258_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
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
      __asm__("TRACK261_BEGIN: nop\n\t" 
	      "   lea	TRACK261_BEGIN, %%eax\n\t"   
	      "   lea	TRACK261_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK261_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->inUse[i]) {
	__asm__("TRACK260_BEGIN: nop\n\t" 
  		"   lea	TRACK260_BEGIN, %%eax\n\t"   
  		"   lea	TRACK260_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK260_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
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
    __asm__("TRACK262_BEGIN: nop\n\t" 
	    "   lea	TRACK262_BEGIN, %%eax\n\t"   
	    "   lea	TRACK262_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK262_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK263_BEGIN: nop\n\t" 
	    "   lea	TRACK263_BEGIN, %%eax\n\t"   
	    "   lea	TRACK263_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK263_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 10; while (((Bool)1)) {
      __asm__("TRACK267_BEGIN: nop\n\t" 
	      "   lea	TRACK267_BEGIN, %%eax\n\t"   
	      "   lea	TRACK267_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK267_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK264_BEGIN: nop\n\t" 
    		"   lea	TRACK264_BEGIN, %%eax\n\t"   
    		"   lea	TRACK264_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK264_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK265_BEGIN: nop\n\t" 
    		"   lea	TRACK265_BEGIN, %%eax\n\t"   
    		"   lea	TRACK265_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK265_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK266_BEGIN: nop\n\t" 
  		"   lea	TRACK266_BEGIN, %%eax\n\t"   
  		"   lea	TRACK266_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK266_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x42) {
      __asm__("TRACK268_BEGIN: nop\n\t" 
	      "   lea	TRACK268_BEGIN, %%eax\n\t"   
	      "   lea	TRACK268_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK268_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-5); goto save_state_and_return;
    };;
       
  case 11:
    __asm__("TRACK269_BEGIN: nop\n\t" 
	    "   lea	TRACK269_BEGIN, %%eax\n\t"   
	    "   lea	TRACK269_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK269_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 11; while (((Bool)1)) {
      __asm__("TRACK273_BEGIN: nop\n\t" 
	      "   lea	TRACK273_BEGIN, %%eax\n\t"   
	      "   lea	TRACK273_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK273_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK270_BEGIN: nop\n\t" 
    		"   lea	TRACK270_BEGIN, %%eax\n\t"   
    		"   lea	TRACK270_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK270_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK271_BEGIN: nop\n\t" 
    		"   lea	TRACK271_BEGIN, %%eax\n\t"   
    		"   lea	TRACK271_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK271_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK272_BEGIN: nop\n\t" 
  		"   lea	TRACK272_BEGIN, %%eax\n\t"   
  		"   lea	TRACK272_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK272_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x5a) {
      __asm__("TRACK274_BEGIN: nop\n\t" 
	      "   lea	TRACK274_BEGIN, %%eax\n\t"   
	      "   lea	TRACK274_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK274_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-5); goto save_state_and_return;
    };;
       
  case 12:
    __asm__("TRACK275_BEGIN: nop\n\t" 
	    "   lea	TRACK275_BEGIN, %%eax\n\t"   
	    "   lea	TRACK275_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK275_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 12; while (((Bool)1)) {
      __asm__("TRACK279_BEGIN: nop\n\t" 
	      "   lea	TRACK279_BEGIN, %%eax\n\t"   
	      "   lea	TRACK279_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK279_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK276_BEGIN: nop\n\t" 
    		"   lea	TRACK276_BEGIN, %%eax\n\t"   
    		"   lea	TRACK276_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK276_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK277_BEGIN: nop\n\t" 
    		"   lea	TRACK277_BEGIN, %%eax\n\t"   
    		"   lea	TRACK277_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK277_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK278_BEGIN: nop\n\t" 
  		"   lea	TRACK278_BEGIN, %%eax\n\t"   
  		"   lea	TRACK278_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK278_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    }
    if (uc != 0x68) {
      __asm__("TRACK280_BEGIN: nop\n\t" 
	      "   lea	TRACK280_BEGIN, %%eax\n\t"   
	      "   lea	TRACK280_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK280_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-5); goto save_state_and_return;
    };;
       
  case 13:
    __asm__("TRACK281_BEGIN: nop\n\t" 
	    "   lea	TRACK281_BEGIN, %%eax\n\t"   
	    "   lea	TRACK281_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK281_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 13; while (((Bool)1)) {
      __asm__("TRACK285_BEGIN: nop\n\t" 
	      "   lea	TRACK285_BEGIN, %%eax\n\t"   
	      "   lea	TRACK285_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK285_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK282_BEGIN: nop\n\t" 
    		"   lea	TRACK282_BEGIN, %%eax\n\t"   
    		"   lea	TRACK282_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK282_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; s->blockSize100k = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK283_BEGIN: nop\n\t" 
    		"   lea	TRACK283_BEGIN, %%eax\n\t"   
    		"   lea	TRACK283_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK283_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK284_BEGIN: nop\n\t" 
  		"   lea	TRACK284_BEGIN, %%eax\n\t"   
  		"   lea	TRACK284_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK284_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    }
    if (s->blockSize100k < (0x30 + 1) ||
	s->blockSize100k > (0x30 + 9)) {
      __asm__("TRACK286_BEGIN: nop\n\t" 
	      "   lea	TRACK286_BEGIN, %%eax\n\t"   
	      "   lea	TRACK286_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK286_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-5); goto save_state_and_return;
    };;
    s->blockSize100k -= 0x30;
    if (s->smallDecompress) {
      __asm__("TRACK288_BEGIN: nop\n\t" 
	      "   lea	TRACK288_BEGIN, %%eax\n\t"   
	      "   lea	TRACK288_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK288_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->ll16 = (strm->bzalloc)(strm->opaque,(s->blockSize100k * 100000 * sizeof(UInt16)),1);
      s->ll4 = (strm->bzalloc)(strm->opaque,(((1 + s->blockSize100k * 100000) >> 1) * sizeof(UChar)),1);
      if (s->ll16 == ((void *)0) || s->ll4 == ((void *)0)) {
        __asm__("TRACK287_BEGIN: nop\n\t" 
    		"   lea	TRACK287_BEGIN, %%eax\n\t"   
    		"   lea	TRACK287_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK287_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = (-3); goto save_state_and_return;
      };;
    } else {
      __asm__("TRACK290_BEGIN: nop\n\t" 
	      "   lea	TRACK290_BEGIN, %%eax\n\t"   
	      "   lea	TRACK290_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK290_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->tt = (strm->bzalloc)(strm->opaque,(s->blockSize100k * 100000 * sizeof(Int32)),1);
      if (s->tt == ((void *)0)) {
        __asm__("TRACK289_BEGIN: nop\n\t" 
    		"   lea	TRACK289_BEGIN, %%eax\n\t"   
    		"   lea	TRACK289_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK289_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = (-3); goto save_state_and_return;
      };;
    }
       
  case 14:
    __asm__("TRACK291_BEGIN: nop\n\t" 
	    "   lea	TRACK291_BEGIN, %%eax\n\t"   
	    "   lea	TRACK291_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK291_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 14; while (((Bool)1)) {
      __asm__("TRACK295_BEGIN: nop\n\t" 
	      "   lea	TRACK295_BEGIN, %%eax\n\t"   
	      "   lea	TRACK295_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK295_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK292_BEGIN: nop\n\t" 
    		"   lea	TRACK292_BEGIN, %%eax\n\t"   
    		"   lea	TRACK292_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK292_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK293_BEGIN: nop\n\t" 
    		"   lea	TRACK293_BEGIN, %%eax\n\t"   
    		"   lea	TRACK293_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK293_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK294_BEGIN: nop\n\t" 
  		"   lea	TRACK294_BEGIN, %%eax\n\t"   
  		"   lea	TRACK294_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK294_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc == 0x17) goto endhdr_2;
    if (uc != 0x31) {
      __asm__("TRACK296_BEGIN: nop\n\t" 
	      "   lea	TRACK296_BEGIN, %%eax\n\t"   
	      "   lea	TRACK296_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK296_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 15:
    __asm__("TRACK297_BEGIN: nop\n\t" 
	    "   lea	TRACK297_BEGIN, %%eax\n\t"   
	    "   lea	TRACK297_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK297_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 15; while (((Bool)1)) {
      __asm__("TRACK301_BEGIN: nop\n\t" 
	      "   lea	TRACK301_BEGIN, %%eax\n\t"   
	      "   lea	TRACK301_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK301_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK298_BEGIN: nop\n\t" 
    		"   lea	TRACK298_BEGIN, %%eax\n\t"   
    		"   lea	TRACK298_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK298_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK299_BEGIN: nop\n\t" 
    		"   lea	TRACK299_BEGIN, %%eax\n\t"   
    		"   lea	TRACK299_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK299_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK300_BEGIN: nop\n\t" 
  		"   lea	TRACK300_BEGIN, %%eax\n\t"   
  		"   lea	TRACK300_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK300_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x41) {
      __asm__("TRACK302_BEGIN: nop\n\t" 
	      "   lea	TRACK302_BEGIN, %%eax\n\t"   
	      "   lea	TRACK302_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK302_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 16:
    __asm__("TRACK303_BEGIN: nop\n\t" 
	    "   lea	TRACK303_BEGIN, %%eax\n\t"   
	    "   lea	TRACK303_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK303_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 16; while (((Bool)1)) {
      __asm__("TRACK307_BEGIN: nop\n\t" 
	      "   lea	TRACK307_BEGIN, %%eax\n\t"   
	      "   lea	TRACK307_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK307_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK304_BEGIN: nop\n\t" 
    		"   lea	TRACK304_BEGIN, %%eax\n\t"   
    		"   lea	TRACK304_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK304_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK305_BEGIN: nop\n\t" 
    		"   lea	TRACK305_BEGIN, %%eax\n\t"   
    		"   lea	TRACK305_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK305_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK306_BEGIN: nop\n\t" 
  		"   lea	TRACK306_BEGIN, %%eax\n\t"   
  		"   lea	TRACK306_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK306_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x59) {
      __asm__("TRACK308_BEGIN: nop\n\t" 
	      "   lea	TRACK308_BEGIN, %%eax\n\t"   
	      "   lea	TRACK308_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK308_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 17:
    __asm__("TRACK309_BEGIN: nop\n\t" 
	    "   lea	TRACK309_BEGIN, %%eax\n\t"   
	    "   lea	TRACK309_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK309_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 17; while (((Bool)1)) {
      __asm__("TRACK313_BEGIN: nop\n\t" 
	      "   lea	TRACK313_BEGIN, %%eax\n\t"   
	      "   lea	TRACK313_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK313_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK310_BEGIN: nop\n\t" 
    		"   lea	TRACK310_BEGIN, %%eax\n\t"   
    		"   lea	TRACK310_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK310_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK311_BEGIN: nop\n\t" 
    		"   lea	TRACK311_BEGIN, %%eax\n\t"   
    		"   lea	TRACK311_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK311_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK312_BEGIN: nop\n\t" 
  		"   lea	TRACK312_BEGIN, %%eax\n\t"   
  		"   lea	TRACK312_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK312_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x26) {
      __asm__("TRACK314_BEGIN: nop\n\t" 
	      "   lea	TRACK314_BEGIN, %%eax\n\t"   
	      "   lea	TRACK314_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK314_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 18:
    __asm__("TRACK315_BEGIN: nop\n\t" 
	    "   lea	TRACK315_BEGIN, %%eax\n\t"   
	    "   lea	TRACK315_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK315_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 18; while (((Bool)1)) {
      __asm__("TRACK319_BEGIN: nop\n\t" 
	      "   lea	TRACK319_BEGIN, %%eax\n\t"   
	      "   lea	TRACK319_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK319_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK316_BEGIN: nop\n\t" 
    		"   lea	TRACK316_BEGIN, %%eax\n\t"   
    		"   lea	TRACK316_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK316_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK317_BEGIN: nop\n\t" 
    		"   lea	TRACK317_BEGIN, %%eax\n\t"   
    		"   lea	TRACK317_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK317_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK318_BEGIN: nop\n\t" 
  		"   lea	TRACK318_BEGIN, %%eax\n\t"   
  		"   lea	TRACK318_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK318_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x53) {
      __asm__("TRACK320_BEGIN: nop\n\t" 
	      "   lea	TRACK320_BEGIN, %%eax\n\t"   
	      "   lea	TRACK320_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK320_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 19:
    __asm__("TRACK321_BEGIN: nop\n\t" 
	    "   lea	TRACK321_BEGIN, %%eax\n\t"   
	    "   lea	TRACK321_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK321_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 19; while (((Bool)1)) {
      __asm__("TRACK325_BEGIN: nop\n\t" 
	      "   lea	TRACK325_BEGIN, %%eax\n\t"   
	      "   lea	TRACK325_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK325_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK322_BEGIN: nop\n\t" 
    		"   lea	TRACK322_BEGIN, %%eax\n\t"   
    		"   lea	TRACK322_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK322_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK323_BEGIN: nop\n\t" 
    		"   lea	TRACK323_BEGIN, %%eax\n\t"   
    		"   lea	TRACK323_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK323_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK324_BEGIN: nop\n\t" 
  		"   lea	TRACK324_BEGIN, %%eax\n\t"   
  		"   lea	TRACK324_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK324_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x59) {
      __asm__("TRACK326_BEGIN: nop\n\t" 
	      "   lea	TRACK326_BEGIN, %%eax\n\t"   
	      "   lea	TRACK326_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK326_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
    s->currBlockNo++;
    if (s->verbosity >= 2)
      {
	__asm__("TRACK327_BEGIN: nop\n\t" 
		"   lea	TRACK327_BEGIN, %%eax\n\t"   
		"   lea	TRACK327_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK327_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	fprintf(stderr,"\n    [%d: huff+mtf ",s->currBlockNo);
      }
    s->storedBlockCRC = 0;
       
  case 20:
    __asm__("TRACK328_BEGIN: nop\n\t" 
	    "   lea	TRACK328_BEGIN, %%eax\n\t"   
	    "   lea	TRACK328_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK328_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 20; while (((Bool)1)) {
      __asm__("TRACK332_BEGIN: nop\n\t" 
	      "   lea	TRACK332_BEGIN, %%eax\n\t"   
	      "   lea	TRACK332_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK332_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK329_BEGIN: nop\n\t" 
    		"   lea	TRACK329_BEGIN, %%eax\n\t"   
    		"   lea	TRACK329_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK329_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK330_BEGIN: nop\n\t" 
    		"   lea	TRACK330_BEGIN, %%eax\n\t"   
    		"   lea	TRACK330_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK330_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK331_BEGIN: nop\n\t" 
  		"   lea	TRACK331_BEGIN, %%eax\n\t"   
  		"   lea	TRACK331_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK331_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
       
  case 21:
    __asm__("TRACK333_BEGIN: nop\n\t" 
	    "   lea	TRACK333_BEGIN, %%eax\n\t"   
	    "   lea	TRACK333_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK333_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 21; while (((Bool)1)) {
      __asm__("TRACK337_BEGIN: nop\n\t" 
	      "   lea	TRACK337_BEGIN, %%eax\n\t"   
	      "   lea	TRACK337_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK337_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK334_BEGIN: nop\n\t" 
    		"   lea	TRACK334_BEGIN, %%eax\n\t"   
    		"   lea	TRACK334_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK334_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK335_BEGIN: nop\n\t" 
    		"   lea	TRACK335_BEGIN, %%eax\n\t"   
    		"   lea	TRACK335_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK335_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK336_BEGIN: nop\n\t" 
  		"   lea	TRACK336_BEGIN, %%eax\n\t"   
  		"   lea	TRACK336_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK336_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
       
  case 22:
    __asm__("TRACK338_BEGIN: nop\n\t" 
	    "   lea	TRACK338_BEGIN, %%eax\n\t"   
	    "   lea	TRACK338_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK338_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 22; while (((Bool)1)) {
      __asm__("TRACK342_BEGIN: nop\n\t" 
	      "   lea	TRACK342_BEGIN, %%eax\n\t"   
	      "   lea	TRACK342_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK342_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK339_BEGIN: nop\n\t" 
    		"   lea	TRACK339_BEGIN, %%eax\n\t"   
    		"   lea	TRACK339_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK339_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK340_BEGIN: nop\n\t" 
    		"   lea	TRACK340_BEGIN, %%eax\n\t"   
    		"   lea	TRACK340_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK340_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK341_BEGIN: nop\n\t" 
  		"   lea	TRACK341_BEGIN, %%eax\n\t"   
  		"   lea	TRACK341_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK341_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
       
  case 23:
    __asm__("TRACK343_BEGIN: nop\n\t" 
	    "   lea	TRACK343_BEGIN, %%eax\n\t"   
	    "   lea	TRACK343_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK343_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 23; while (((Bool)1)) {
      __asm__("TRACK347_BEGIN: nop\n\t" 
	      "   lea	TRACK347_BEGIN, %%eax\n\t"   
	      "   lea	TRACK347_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK347_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK344_BEGIN: nop\n\t" 
    		"   lea	TRACK344_BEGIN, %%eax\n\t"   
    		"   lea	TRACK344_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK344_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK345_BEGIN: nop\n\t" 
    		"   lea	TRACK345_BEGIN, %%eax\n\t"   
    		"   lea	TRACK345_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK345_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK346_BEGIN: nop\n\t" 
  		"   lea	TRACK346_BEGIN, %%eax\n\t"   
  		"   lea	TRACK346_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK346_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->storedBlockCRC = (s->storedBlockCRC << 8) | ((UInt32)uc);
       
  case 24:
    __asm__("TRACK348_BEGIN: nop\n\t" 
	    "   lea	TRACK348_BEGIN, %%eax\n\t"   
	    "   lea	TRACK348_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK348_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 24; while (((Bool)1)) {
      __asm__("TRACK352_BEGIN: nop\n\t" 
	      "   lea	TRACK352_BEGIN, %%eax\n\t"   
	      "   lea	TRACK352_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK352_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 1) {
        __asm__("TRACK349_BEGIN: nop\n\t" 
    		"   lea	TRACK349_BEGIN, %%eax\n\t"   
    		"   lea	TRACK349_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK349_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; s->blockRandomised = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK350_BEGIN: nop\n\t" 
    		"   lea	TRACK350_BEGIN, %%eax\n\t"   
    		"   lea	TRACK350_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK350_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK351_BEGIN: nop\n\t" 
  		"   lea	TRACK351_BEGIN, %%eax\n\t"   
  		"   lea	TRACK351_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK351_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->origPtr = 0;
       
  case 25:
    __asm__("TRACK353_BEGIN: nop\n\t" 
	    "   lea	TRACK353_BEGIN, %%eax\n\t"   
	    "   lea	TRACK353_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK353_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 25; while (((Bool)1)) {
      __asm__("TRACK357_BEGIN: nop\n\t" 
	      "   lea	TRACK357_BEGIN, %%eax\n\t"   
	      "   lea	TRACK357_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK357_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK354_BEGIN: nop\n\t" 
    		"   lea	TRACK354_BEGIN, %%eax\n\t"   
    		"   lea	TRACK354_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK354_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK355_BEGIN: nop\n\t" 
    		"   lea	TRACK355_BEGIN, %%eax\n\t"   
    		"   lea	TRACK355_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK355_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK356_BEGIN: nop\n\t" 
  		"   lea	TRACK356_BEGIN, %%eax\n\t"   
  		"   lea	TRACK356_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK356_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->origPtr = (s->origPtr << 8) | ((Int32)uc);
       
  case 26:
    __asm__("TRACK358_BEGIN: nop\n\t" 
	    "   lea	TRACK358_BEGIN, %%eax\n\t"   
	    "   lea	TRACK358_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK358_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 26; while (((Bool)1)) {
      __asm__("TRACK362_BEGIN: nop\n\t" 
	      "   lea	TRACK362_BEGIN, %%eax\n\t"   
	      "   lea	TRACK362_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK362_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK359_BEGIN: nop\n\t" 
    		"   lea	TRACK359_BEGIN, %%eax\n\t"   
    		"   lea	TRACK359_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK359_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK360_BEGIN: nop\n\t" 
    		"   lea	TRACK360_BEGIN, %%eax\n\t"   
    		"   lea	TRACK360_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK360_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK361_BEGIN: nop\n\t" 
  		"   lea	TRACK361_BEGIN, %%eax\n\t"   
  		"   lea	TRACK361_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK361_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->origPtr = (s->origPtr << 8) | ((Int32)uc);
       
  case 27:
    __asm__("TRACK363_BEGIN: nop\n\t" 
	    "   lea	TRACK363_BEGIN, %%eax\n\t"   
	    "   lea	TRACK363_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK363_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 27; while (((Bool)1)) {
      __asm__("TRACK367_BEGIN: nop\n\t" 
	      "   lea	TRACK367_BEGIN, %%eax\n\t"   
	      "   lea	TRACK367_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK367_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK364_BEGIN: nop\n\t" 
    		"   lea	TRACK364_BEGIN, %%eax\n\t"   
    		"   lea	TRACK364_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK364_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK365_BEGIN: nop\n\t" 
    		"   lea	TRACK365_BEGIN, %%eax\n\t"   
    		"   lea	TRACK365_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK365_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK366_BEGIN: nop\n\t" 
  		"   lea	TRACK366_BEGIN, %%eax\n\t"   
  		"   lea	TRACK366_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK366_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->origPtr = (s->origPtr << 8) | ((Int32)uc);
    if (s->origPtr < 0)
      {
	__asm__("TRACK368_BEGIN: nop\n\t" 
  		"   lea	TRACK368_BEGIN, %%eax\n\t"   
  		"   lea	TRACK368_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK368_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	retVal = (-4); goto save_state_and_return;
      };;
    if (s->origPtr > 10 + 100000*s->blockSize100k)
      {
	__asm__("TRACK369_BEGIN: nop\n\t" 
  		"   lea	TRACK369_BEGIN, %%eax\n\t"   
  		"   lea	TRACK369_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK369_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	retVal = (-4); goto save_state_and_return;
      };;
    for (i = 0; i < 16; i++) {
      __asm__("TRACK377_BEGIN: nop\n\t" 
	      "   lea	TRACK377_BEGIN, %%eax\n\t"   
	      "   lea	TRACK377_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK377_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
   
    case 28:
      __asm__("TRACK370_BEGIN: nop\n\t" 
	      "   lea	TRACK370_BEGIN, %%eax\n\t"   
	      "   lea	TRACK370_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK370_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->state = 28; while (((Bool)1)) {
        __asm__("TRACK374_BEGIN: nop\n\t" 
    		"   lea	TRACK374_BEGIN, %%eax\n\t"   
    		"   lea	TRACK374_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK374_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	if (s->bsLive >= 1) {
          __asm__("TRACK371_BEGIN: nop\n\t" 
		  "   lea	TRACK371_BEGIN, %%eax\n\t"   
		  "   lea	TRACK371_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK371_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  UInt32 v;
	  v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
	} if (s->strm->avail_in == 0) {
          __asm__("TRACK372_BEGIN: nop\n\t" 
		  "   lea	TRACK372_BEGIN, %%eax\n\t"   
		  "   lea	TRACK372_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK372_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  retVal = 0; goto save_state_and_return;
	};; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	  __asm__("TRACK373_BEGIN: nop\n\t" 
		  "   lea	TRACK373_BEGIN, %%eax\n\t"   
		  "   lea	TRACK373_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK373_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->strm->total_in_hi32++;
	}
      };
      if (uc == 1)
	{
	  __asm__("TRACK375_BEGIN: nop\n\t" 
		  "   lea	TRACK375_BEGIN, %%eax\n\t"   
		  "   lea	TRACK375_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK375_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->inUse16[i] = ((Bool)1);
	} else
	{
	  __asm__("TRACK376_BEGIN: nop\n\t" 
		  "   lea	TRACK376_BEGIN, %%eax\n\t"   
		  "   lea	TRACK376_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK376_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->inUse16[i] = ((Bool)0);
	}
    }
    for (i = 0; i < 256; i++)  {
      __asm__("TRACK378_BEGIN: nop\n\t" 
	      "   lea	TRACK378_BEGIN, %%eax\n\t"   
	      "   lea	TRACK378_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK378_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->inUse[i] = ((Bool)0);
    }
    for (i = 0; i < 16; i++)
      {
	__asm__("TRACK387_BEGIN: nop\n\t" 
		"   lea	TRACK387_BEGIN, %%eax\n\t"   
		"   lea	TRACK387_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK387_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	if (s->inUse16[i])
	  {
	    __asm__("TRACK386_BEGIN: nop\n\t" 
		    "   lea	TRACK386_BEGIN, %%eax\n\t"   
		    "   lea	TRACK386_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK386_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    for (j = 0; j < 16; j++) {
	      __asm__("TRACK385_BEGIN: nop\n\t" 
		      "   lea	TRACK385_BEGIN, %%eax\n\t"   
		      "   lea	TRACK385_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK385_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
   
	    case 29:
	      __asm__("TRACK379_BEGIN: nop\n\t" 
		      "   lea	TRACK379_BEGIN, %%eax\n\t"   
		      "   lea	TRACK379_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK379_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->state = 29; while (((Bool)1)) {
		__asm__("TRACK383_BEGIN: nop\n\t" 
			"   lea	TRACK383_BEGIN, %%eax\n\t"   
			"   lea	TRACK383_END, %%ecx\n\t" 
			"   mov	%%eax, (%%esp)\n\t" 
			"   mov    %%ecx, 4(%%esp)\n\t" 
			" calll track\n\t" 
			"TRACK383_END: nop\n\t" 
			: 
			: 
			: "eax", "ecx", "esp");
		if (s->bsLive >= 1) {
		  __asm__("TRACK380_BEGIN: nop\n\t" 
			  "   lea	TRACK380_BEGIN, %%eax\n\t"   
			  "   lea	TRACK380_END, %%ecx\n\t" 
			  "   mov	%%eax, (%%esp)\n\t" 
			  "   mov    %%ecx, 4(%%esp)\n\t" 
			  " calll track\n\t" 
			  "TRACK380_END: nop\n\t" 
			  : 
			  : 
			  : "eax", "ecx", "esp");
		  UInt32 v;
		  v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
		} if (s->strm->avail_in == 0) {
		  __asm__("TRACK381_BEGIN: nop\n\t" 
			  "   lea	TRACK381_BEGIN, %%eax\n\t"   
			  "   lea	TRACK381_END, %%ecx\n\t" 
			  "   mov	%%eax, (%%esp)\n\t" 
			  "   mov    %%ecx, 4(%%esp)\n\t" 
			  " calll track\n\t" 
			  "TRACK381_END: nop\n\t" 
			  : 
			  : 
			  : "eax", "ecx", "esp");
		  retVal = 0; goto save_state_and_return;
		};; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
		  __asm__("TRACK382_BEGIN: nop\n\t" 
			  "   lea	TRACK382_BEGIN, %%eax\n\t"   
			  "   lea	TRACK382_END, %%ecx\n\t" 
			  "   mov	%%eax, (%%esp)\n\t" 
			  "   mov    %%ecx, 4(%%esp)\n\t" 
			  " calll track\n\t" 
			  "TRACK382_END: nop\n\t" 
			  : 
			  : 
			  : "eax", "ecx", "esp");
		  s->strm->total_in_hi32++;
		}
	      };
	      if (uc == 1)  {
		__asm__("TRACK384_BEGIN: nop\n\t" 
			"   lea	TRACK384_BEGIN, %%eax\n\t"   
			"   lea	TRACK384_END, %%ecx\n\t" 
			"   mov	%%eax, (%%esp)\n\t" 
			"   mov    %%ecx, 4(%%esp)\n\t" 
			" calll track\n\t" 
			"TRACK384_END: nop\n\t" 
			: 
			: 
			: "eax", "ecx", "esp");
		s->inUse[i * 16 + j] = ((Bool)1);
	      }
	    }
	  }
      }
    makeMaps_d ( s );
    if (s->nInUse == 0) {
      __asm__("TRACK388_BEGIN: nop\n\t" 
	      "   lea	TRACK388_BEGIN, %%eax\n\t"   
	      "   lea	TRACK388_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK388_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
    alphaSize = s->nInUse+2;
       
  case 30:
    __asm__("TRACK389_BEGIN: nop\n\t" 
	    "   lea	TRACK389_BEGIN, %%eax\n\t"   
	    "   lea	TRACK389_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK389_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 30; while (((Bool)1)) {
      __asm__("TRACK393_BEGIN: nop\n\t" 
	      "   lea	TRACK393_BEGIN, %%eax\n\t"   
	      "   lea	TRACK393_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK393_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 3) {
        __asm__("TRACK390_BEGIN: nop\n\t" 
    		"   lea	TRACK390_BEGIN, %%eax\n\t"   
    		"   lea	TRACK390_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK390_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-3)) & ((1 << 3)-1); s->bsLive -= 3; nGroups = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK391_BEGIN: nop\n\t" 
    		"   lea	TRACK391_BEGIN, %%eax\n\t"   
    		"   lea	TRACK391_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK391_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK392_BEGIN: nop\n\t" 
  		"   lea	TRACK392_BEGIN, %%eax\n\t"   
  		"   lea	TRACK392_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK392_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (nGroups < 2 || nGroups > 6) {
      __asm__("TRACK394_BEGIN: nop\n\t" 
	      "   lea	TRACK394_BEGIN, %%eax\n\t"   
	      "   lea	TRACK394_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK394_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 31:
    __asm__("TRACK395_BEGIN: nop\n\t" 
	    "   lea	TRACK395_BEGIN, %%eax\n\t"   
	    "   lea	TRACK395_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK395_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 31; while (((Bool)1)) {
      __asm__("TRACK399_BEGIN: nop\n\t" 
	      "   lea	TRACK399_BEGIN, %%eax\n\t"   
	      "   lea	TRACK399_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK399_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 15) {
        __asm__("TRACK396_BEGIN: nop\n\t" 
    		"   lea	TRACK396_BEGIN, %%eax\n\t"   
    		"   lea	TRACK396_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK396_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-15)) & ((1 << 15)-1); s->bsLive -= 15; nSelectors = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK397_BEGIN: nop\n\t" 
    		"   lea	TRACK397_BEGIN, %%eax\n\t"   
    		"   lea	TRACK397_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK397_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK398_BEGIN: nop\n\t" 
  		"   lea	TRACK398_BEGIN, %%eax\n\t"   
  		"   lea	TRACK398_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK398_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (nSelectors < 1) {
      __asm__("TRACK400_BEGIN: nop\n\t" 
	      "   lea	TRACK400_BEGIN, %%eax\n\t"   
	      "   lea	TRACK400_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK400_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
    for (i = 0; i < nSelectors; i++) {
      __asm__("TRACK408_BEGIN: nop\n\t" 
	      "   lea	TRACK408_BEGIN, %%eax\n\t"   
	      "   lea	TRACK408_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK408_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      j = 0;
      while (((Bool)1)) {
        __asm__("TRACK407_BEGIN: nop\n\t" 
    		"   lea	TRACK407_BEGIN, %%eax\n\t"   
    		"   lea	TRACK407_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK407_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
     
      case 32:
	__asm__("TRACK401_BEGIN: nop\n\t" 
		"   lea	TRACK401_BEGIN, %%eax\n\t"   
		"   lea	TRACK401_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK401_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
    	s->state = 32; while (((Bool)1)) {
          __asm__("TRACK405_BEGIN: nop\n\t" 
		  "   lea	TRACK405_BEGIN, %%eax\n\t"   
		  "   lea	TRACK405_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK405_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (s->bsLive >= 1) {
            __asm__("TRACK402_BEGIN: nop\n\t" 
		    "   lea	TRACK402_BEGIN, %%eax\n\t"   
		    "   lea	TRACK402_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK402_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    UInt32 v;
	    v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
	  } if (s->strm->avail_in == 0) {
            __asm__("TRACK403_BEGIN: nop\n\t" 
		    "   lea	TRACK403_BEGIN, %%eax\n\t"   
		    "   lea	TRACK403_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK403_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    retVal = 0; goto save_state_and_return;
	  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	    __asm__("TRACK404_BEGIN: nop\n\t" 
		    "   lea	TRACK404_BEGIN, %%eax\n\t"   
		    "   lea	TRACK404_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK404_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->strm->total_in_hi32++;
	  }
	};
	if (uc == 0) break;
	j++;
	if (j >= nGroups) {
          __asm__("TRACK406_BEGIN: nop\n\t" 
		  "   lea	TRACK406_BEGIN, %%eax\n\t"   
		  "   lea	TRACK406_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK406_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  retVal = (-4); goto save_state_and_return;
	};;
      }
      s->selectorMtf[i] = j;
    }
    {
      UChar pos[6], tmp, v;
      for (v = 0; v < nGroups; v++)  {
	__asm__("TRACK409_BEGIN: nop\n\t" 
		"   lea	TRACK409_BEGIN, %%eax\n\t"   
		"   lea	TRACK409_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK409_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	pos[v] = v;
      }
      for (i = 0; i < nSelectors; i++) {
	__asm__("TRACK411_BEGIN: nop\n\t" 
  		"   lea	TRACK411_BEGIN, %%eax\n\t"   
  		"   lea	TRACK411_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK411_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	v = s->selectorMtf[i];
	tmp = pos[v];
	while (v > 0) {
	  __asm__("TRACK410_BEGIN: nop\n\t" 
		  "   lea	TRACK410_BEGIN, %%eax\n\t"   
		  "   lea	TRACK410_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK410_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  pos[v] = pos[v-1]; v--;
	}
	pos[0] = tmp;
	s->selector[i] = tmp;
      }
    }
    for (t = 0; t < nGroups; t++) {
      __asm__("TRACK432_BEGIN: nop\n\t" 
	      "   lea	TRACK432_BEGIN, %%eax\n\t"   
	      "   lea	TRACK432_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK432_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
   
    case 33:
      __asm__("TRACK412_BEGIN: nop\n\t" 
	      "   lea	TRACK412_BEGIN, %%eax\n\t"   
	      "   lea	TRACK412_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK412_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->state = 33; while (((Bool)1)) {
        __asm__("TRACK416_BEGIN: nop\n\t" 
    		"   lea	TRACK416_BEGIN, %%eax\n\t"   
    		"   lea	TRACK416_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK416_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	if (s->bsLive >= 5) {
          __asm__("TRACK413_BEGIN: nop\n\t" 
		  "   lea	TRACK413_BEGIN, %%eax\n\t"   
		  "   lea	TRACK413_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK413_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  UInt32 v;
	  v = (s->bsBuff >> (s->bsLive-5)) & ((1 << 5)-1); s->bsLive -= 5; curr = v; break;
	} if (s->strm->avail_in == 0) {
          __asm__("TRACK414_BEGIN: nop\n\t" 
		  "   lea	TRACK414_BEGIN, %%eax\n\t"   
		  "   lea	TRACK414_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK414_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  retVal = 0; goto save_state_and_return;
	};; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	  __asm__("TRACK415_BEGIN: nop\n\t" 
		  "   lea	TRACK415_BEGIN, %%eax\n\t"   
		  "   lea	TRACK415_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK415_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->strm->total_in_hi32++;
	}
      };
      for (i = 0; i < alphaSize; i++) {
        __asm__("TRACK431_BEGIN: nop\n\t" 
    		"   lea	TRACK431_BEGIN, %%eax\n\t"   
    		"   lea	TRACK431_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK431_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	while (((Bool)1)) {
          __asm__("TRACK430_BEGIN: nop\n\t" 
		  "   lea	TRACK430_BEGIN, %%eax\n\t"   
		  "   lea	TRACK430_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK430_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (curr < 1 || curr > 20) {
            __asm__("TRACK417_BEGIN: nop\n\t" 
		    "   lea	TRACK417_BEGIN, %%eax\n\t"   
		    "   lea	TRACK417_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK417_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    retVal = (-4); goto save_state_and_return;
	  };;
                      
        case 34:
	  __asm__("TRACK418_BEGIN: nop\n\t" 
		  "   lea	TRACK418_BEGIN, %%eax\n\t"   
		  "   lea	TRACK418_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK418_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->state = 34; while (((Bool)1)) {
            __asm__("TRACK422_BEGIN: nop\n\t" 
		    "   lea	TRACK422_BEGIN, %%eax\n\t"   
		    "   lea	TRACK422_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK422_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if (s->bsLive >= 1) {
              __asm__("TRACK419_BEGIN: nop\n\t" 
		      "   lea	TRACK419_BEGIN, %%eax\n\t"   
		      "   lea	TRACK419_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK419_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      UInt32 v;
	      v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
	    } if (s->strm->avail_in == 0) {
              __asm__("TRACK420_BEGIN: nop\n\t" 
		      "   lea	TRACK420_BEGIN, %%eax\n\t"   
		      "   lea	TRACK420_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK420_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      retVal = 0; goto save_state_and_return;
	    };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	      __asm__("TRACK421_BEGIN: nop\n\t" 
		      "   lea	TRACK421_BEGIN, %%eax\n\t"   
		      "   lea	TRACK421_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK421_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->strm->total_in_hi32++;
	    }
	  };
	  if (uc == 0) break;
                      
        case 35:
	  __asm__("TRACK423_BEGIN: nop\n\t" 
		  "   lea	TRACK423_BEGIN, %%eax\n\t"   
		  "   lea	TRACK423_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK423_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->state = 35; while (((Bool)1)) {
            __asm__("TRACK427_BEGIN: nop\n\t" 
		    "   lea	TRACK427_BEGIN, %%eax\n\t"   
		    "   lea	TRACK427_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK427_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if (s->bsLive >= 1) {
              __asm__("TRACK424_BEGIN: nop\n\t" 
		      "   lea	TRACK424_BEGIN, %%eax\n\t"   
		      "   lea	TRACK424_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK424_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      UInt32 v;
	      v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; uc = v; break;
	    } if (s->strm->avail_in == 0) {
              __asm__("TRACK425_BEGIN: nop\n\t" 
		      "   lea	TRACK425_BEGIN, %%eax\n\t"   
		      "   lea	TRACK425_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK425_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      retVal = 0; goto save_state_and_return;
	    };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	      __asm__("TRACK426_BEGIN: nop\n\t" 
		      "   lea	TRACK426_BEGIN, %%eax\n\t"   
		      "   lea	TRACK426_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK426_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->strm->total_in_hi32++;
	    }
	  };
	  if (uc == 0)  {
	    __asm__("TRACK428_BEGIN: nop\n\t" 
		    "   lea	TRACK428_BEGIN, %%eax\n\t"   
		    "   lea	TRACK428_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK428_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    curr++;
	  } else  {
	    __asm__("TRACK429_BEGIN: nop\n\t" 
		    "   lea	TRACK429_BEGIN, %%eax\n\t"   
		    "   lea	TRACK429_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK429_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    curr--;
	  }
	}
	s->len[t][i] = curr;
      }
    }
    for (t = 0; t < nGroups; t++) {
      __asm__("TRACK436_BEGIN: nop\n\t" 
	      "   lea	TRACK436_BEGIN, %%eax\n\t"   
	      "   lea	TRACK436_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK436_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      minLen = 32;
      maxLen = 0;
      for (i = 0; i < alphaSize; i++) {
        __asm__("TRACK435_BEGIN: nop\n\t" 
    		"   lea	TRACK435_BEGIN, %%eax\n\t"   
    		"   lea	TRACK435_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK435_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	if (s->len[t][i] > maxLen)  {
	  __asm__("TRACK433_BEGIN: nop\n\t" 
		  "   lea	TRACK433_BEGIN, %%eax\n\t"   
		  "   lea	TRACK433_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK433_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  maxLen = s->len[t][i];
	}
	if (s->len[t][i] < minLen)  {
	  __asm__("TRACK434_BEGIN: nop\n\t" 
		  "   lea	TRACK434_BEGIN, %%eax\n\t"   
		  "   lea	TRACK434_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK434_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
      __asm__("TRACK437_BEGIN: nop\n\t" 
	      "   lea	TRACK437_BEGIN, %%eax\n\t"   
	      "   lea	TRACK437_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK437_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->unzftab[i] = 0;
    }
    {
      Int32 ii, jj, kk;
      kk = 4096 -1;
      for (ii = 256 / 16 - 1; ii >= 0; ii--) {
	__asm__("TRACK439_BEGIN: nop\n\t" 
  		"   lea	TRACK439_BEGIN, %%eax\n\t"   
  		"   lea	TRACK439_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK439_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	for (jj = 16 -1; jj >= 0; jj--) {
	  __asm__("TRACK438_BEGIN: nop\n\t" 
		  "   lea	TRACK438_BEGIN, %%eax\n\t"   
		  "   lea	TRACK438_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK438_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->mtfa[kk] = (UChar)(ii * 16 + jj);
	  kk--;
	}
	s->mtfbase[ii] = kk + 1;
      }
    }
    nblock = 0;
    { if (groupPos == 0) {
	__asm__("TRACK441_BEGIN: nop\n\t" 
  		"   lea	TRACK441_BEGIN, %%eax\n\t"   
  		"   lea	TRACK441_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK441_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	groupNo++; if (groupNo >= nSelectors) {
	  __asm__("TRACK440_BEGIN: nop\n\t" 
		  "   lea	TRACK440_BEGIN, %%eax\n\t"   
		  "   lea	TRACK440_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK440_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  retVal = (-4); goto save_state_and_return;
	};; groupPos = 50; gSel = s->selector[groupNo]; gMinlen = s->minLens[gSel]; gLimit = &(s->limit[gSel][0]); gPerm = &(s->perm[gSel][0]); gBase = &(s->base[gSel][0]);
      } groupPos--; zn = gMinlen;  
    case 36:
      __asm__("TRACK442_BEGIN: nop\n\t" 
	      "   lea	TRACK442_BEGIN, %%eax\n\t"   
	      "   lea	TRACK442_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK442_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->state = 36; while (((Bool)1)) {
	__asm__("TRACK446_BEGIN: nop\n\t" 
  		"   lea	TRACK446_BEGIN, %%eax\n\t"   
  		"   lea	TRACK446_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK446_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	if (s->bsLive >= zn) {
	  __asm__("TRACK443_BEGIN: nop\n\t" 
		  "   lea	TRACK443_BEGIN, %%eax\n\t"   
		  "   lea	TRACK443_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK443_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  UInt32 v;
	  v = (s->bsBuff >> (s->bsLive-zn)) & ((1 << zn)-1); s->bsLive -= zn; zvec = v; break;
	} if (s->strm->avail_in == 0) {
	  __asm__("TRACK444_BEGIN: nop\n\t" 
		  "   lea	TRACK444_BEGIN, %%eax\n\t"   
		  "   lea	TRACK444_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK444_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  retVal = 0; goto save_state_and_return;
	};; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	  __asm__("TRACK445_BEGIN: nop\n\t" 
		  "   lea	TRACK445_BEGIN, %%eax\n\t"   
		  "   lea	TRACK445_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK445_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->strm->total_in_hi32++;
	}
      }; while (1) {
	__asm__("TRACK453_BEGIN: nop\n\t" 
  		"   lea	TRACK453_BEGIN, %%eax\n\t"   
  		"   lea	TRACK453_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK453_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	if (zn > 20 ) {
	  __asm__("TRACK447_BEGIN: nop\n\t" 
		  "   lea	TRACK447_BEGIN, %%eax\n\t"   
		  "   lea	TRACK447_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK447_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  retVal = (-4); goto save_state_and_return;
	};; if (zvec <= gLimit[zn]) break; zn++;  
      case 37:
	__asm__("TRACK448_BEGIN: nop\n\t" 
		"   lea	TRACK448_BEGIN, %%eax\n\t"   
		"   lea	TRACK448_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK448_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
  	s->state = 37; while (((Bool)1)) {
	  __asm__("TRACK452_BEGIN: nop\n\t" 
		  "   lea	TRACK452_BEGIN, %%eax\n\t"   
		  "   lea	TRACK452_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK452_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (s->bsLive >= 1) {
	    __asm__("TRACK449_BEGIN: nop\n\t" 
		    "   lea	TRACK449_BEGIN, %%eax\n\t"   
		    "   lea	TRACK449_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK449_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    UInt32 v;
	    v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; zj = v; break;
	  } if (s->strm->avail_in == 0) {
	    __asm__("TRACK450_BEGIN: nop\n\t" 
		    "   lea	TRACK450_BEGIN, %%eax\n\t"   
		    "   lea	TRACK450_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK450_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    retVal = 0; goto save_state_and_return;
	  };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	    __asm__("TRACK451_BEGIN: nop\n\t" 
		    "   lea	TRACK451_BEGIN, %%eax\n\t"   
		    "   lea	TRACK451_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK451_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->strm->total_in_hi32++;
	  }
	}; zvec = (zvec << 1) | zj;
      }; if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) {
	__asm__("TRACK454_BEGIN: nop\n\t" 
  		"   lea	TRACK454_BEGIN, %%eax\n\t"   
  		"   lea	TRACK454_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK454_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	retVal = (-4); goto save_state_and_return;
      };; nextSym = gPerm[zvec - gBase[zn]]; };
    while (((Bool)1)) {
      __asm__("TRACK509_BEGIN: nop\n\t" 
	      "   lea	TRACK509_BEGIN, %%eax\n\t"   
	      "   lea	TRACK509_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK509_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (nextSym == EOB) break;
      if (nextSym == 0 || nextSym == 1) {
        __asm__("TRACK480_BEGIN: nop\n\t" 
    		"   lea	TRACK480_BEGIN, %%eax\n\t"   
    		"   lea	TRACK480_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK480_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	es = -1;
	N = 1;
	do {
          __asm__("TRACK473_BEGIN: nop\n\t" 
		  "   lea	TRACK473_BEGIN, %%eax\n\t"   
		  "   lea	TRACK473_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK473_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (nextSym == 0)  {
	    __asm__("TRACK455_BEGIN: nop\n\t" 
		    "   lea	TRACK455_BEGIN, %%eax\n\t"   
		    "   lea	TRACK455_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK455_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    es = es + (0+1) * N;
	  } else
	    {
	      __asm__("TRACK457_BEGIN: nop\n\t" 
		      "   lea	TRACK457_BEGIN, %%eax\n\t"   
		      "   lea	TRACK457_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK457_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      if (nextSym == 1)  {
		__asm__("TRACK456_BEGIN: nop\n\t" 
			"   lea	TRACK456_BEGIN, %%eax\n\t"   
			"   lea	TRACK456_END, %%ecx\n\t" 
			"   mov	%%eax, (%%esp)\n\t" 
			"   mov    %%ecx, 4(%%esp)\n\t" 
			" calll track\n\t" 
			"TRACK456_END: nop\n\t" 
			: 
			: 
			: "eax", "ecx", "esp");
		es = es + (1+1) * N;
	      }
	    }
	  N = N * 2;
	  { if (groupPos == 0) {
	      __asm__("TRACK459_BEGIN: nop\n\t" 
		      "   lea	TRACK459_BEGIN, %%eax\n\t"   
		      "   lea	TRACK459_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK459_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      groupNo++; if (groupNo >= nSelectors) {
		__asm__("TRACK458_BEGIN: nop\n\t" 
          		"   lea	TRACK458_BEGIN, %%eax\n\t"   
          		"   lea	TRACK458_END, %%ecx\n\t" 
          		"   mov	%%eax, (%%esp)\n\t" 
          		"   mov    %%ecx, 4(%%esp)\n\t" 
          		" calll track\n\t" 
          		"TRACK458_END: nop\n\t" 
          		: 
          		: 
          		: "eax", "ecx", "esp");
		retVal = (-4); goto save_state_and_return;
	      };; groupPos = 50; gSel = s->selector[groupNo]; gMinlen = s->minLens[gSel]; gLimit = &(s->limit[gSel][0]); gPerm = &(s->perm[gSel][0]); gBase = &(s->base[gSel][0]);
	    } groupPos--; zn = gMinlen;  
	  case 38:
      	    __asm__("TRACK460_BEGIN: nop\n\t" 
		    "   lea	TRACK460_BEGIN, %%eax\n\t"   
		    "   lea	TRACK460_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK460_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->state = 38; while (((Bool)1)) {
	      __asm__("TRACK464_BEGIN: nop\n\t" 
		      "   lea	TRACK464_BEGIN, %%eax\n\t"   
		      "   lea	TRACK464_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK464_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      if (s->bsLive >= zn) {
		__asm__("TRACK461_BEGIN: nop\n\t" 
          		"   lea	TRACK461_BEGIN, %%eax\n\t"   
          		"   lea	TRACK461_END, %%ecx\n\t" 
          		"   mov	%%eax, (%%esp)\n\t" 
          		"   mov    %%ecx, 4(%%esp)\n\t" 
          		" calll track\n\t" 
          		"TRACK461_END: nop\n\t" 
          		: 
          		: 
          		: "eax", "ecx", "esp");
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive-zn)) & ((1 << zn)-1); s->bsLive -= zn; zvec = v; break;
	      } if (s->strm->avail_in == 0) {
		__asm__("TRACK462_BEGIN: nop\n\t" 
          		"   lea	TRACK462_BEGIN, %%eax\n\t"   
          		"   lea	TRACK462_END, %%ecx\n\t" 
          		"   mov	%%eax, (%%esp)\n\t" 
          		"   mov    %%ecx, 4(%%esp)\n\t" 
          		" calll track\n\t" 
          		"TRACK462_END: nop\n\t" 
          		: 
          		: 
          		: "eax", "ecx", "esp");
		retVal = 0; goto save_state_and_return;
	      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
		__asm__("TRACK463_BEGIN: nop\n\t" 
        		"   lea	TRACK463_BEGIN, %%eax\n\t"   
        		"   lea	TRACK463_END, %%ecx\n\t" 
        		"   mov	%%eax, (%%esp)\n\t" 
        		"   mov    %%ecx, 4(%%esp)\n\t" 
        		" calll track\n\t" 
        		"TRACK463_END: nop\n\t" 
        		: 
        		: 
        		: "eax", "ecx", "esp");
		s->strm->total_in_hi32++;
	      }
	    }; while (1) {
	      __asm__("TRACK471_BEGIN: nop\n\t" 
		      "   lea	TRACK471_BEGIN, %%eax\n\t"   
		      "   lea	TRACK471_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK471_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      if (zn > 20 ) {
		__asm__("TRACK465_BEGIN: nop\n\t" 
          		"   lea	TRACK465_BEGIN, %%eax\n\t"   
          		"   lea	TRACK465_END, %%ecx\n\t" 
          		"   mov	%%eax, (%%esp)\n\t" 
          		"   mov    %%ecx, 4(%%esp)\n\t" 
          		" calll track\n\t" 
          		"TRACK465_END: nop\n\t" 
          		: 
          		: 
          		: "eax", "ecx", "esp");
		retVal = (-4); goto save_state_and_return;
	      };; if (zvec <= gLimit[zn]) break; zn++;  
	    case 39:
	      __asm__("TRACK466_BEGIN: nop\n\t" 
		      "   lea	TRACK466_BEGIN, %%eax\n\t"   
		      "   lea	TRACK466_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK466_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->state = 39; while (((Bool)1)) {
		__asm__("TRACK470_BEGIN: nop\n\t" 
          		"   lea	TRACK470_BEGIN, %%eax\n\t"   
          		"   lea	TRACK470_END, %%ecx\n\t" 
          		"   mov	%%eax, (%%esp)\n\t" 
          		"   mov    %%ecx, 4(%%esp)\n\t" 
          		" calll track\n\t" 
          		"TRACK470_END: nop\n\t" 
          		: 
          		: 
          		: "eax", "ecx", "esp");
		if (s->bsLive >= 1) {
		  __asm__("TRACK467_BEGIN: nop\n\t" 
			  "   lea	TRACK467_BEGIN, %%eax\n\t"   
			  "   lea	TRACK467_END, %%ecx\n\t" 
			  "   mov	%%eax, (%%esp)\n\t" 
			  "   mov    %%ecx, 4(%%esp)\n\t" 
			  " calll track\n\t" 
			  "TRACK467_END: nop\n\t" 
			  : 
			  : 
			  : "eax", "ecx", "esp");
		  UInt32 v;
		  v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; zj = v; break;
		} if (s->strm->avail_in == 0) {
		  __asm__("TRACK468_BEGIN: nop\n\t" 
			  "   lea	TRACK468_BEGIN, %%eax\n\t"   
			  "   lea	TRACK468_END, %%ecx\n\t" 
			  "   mov	%%eax, (%%esp)\n\t" 
			  "   mov    %%ecx, 4(%%esp)\n\t" 
			  " calll track\n\t" 
			  "TRACK468_END: nop\n\t" 
			  : 
			  : 
			  : "eax", "ecx", "esp");
		  retVal = 0; goto save_state_and_return;
		};; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
		  __asm__("TRACK469_BEGIN: nop\n\t" 
			  "   lea	TRACK469_BEGIN, %%eax\n\t"   
			  "   lea	TRACK469_END, %%ecx\n\t" 
			  "   mov	%%eax, (%%esp)\n\t" 
			  "   mov    %%ecx, 4(%%esp)\n\t" 
			  " calll track\n\t" 
			  "TRACK469_END: nop\n\t" 
			  : 
			  : 
			  : "eax", "ecx", "esp");
		  s->strm->total_in_hi32++;
		}
	      }; zvec = (zvec << 1) | zj;
	    }; if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) {
	      __asm__("TRACK472_BEGIN: nop\n\t" 
		      "   lea	TRACK472_BEGIN, %%eax\n\t"   
		      "   lea	TRACK472_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK472_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      retVal = (-4); goto save_state_and_return;
	    };; nextSym = gPerm[zvec - gBase[zn]]; };
	}
	while (nextSym == 0 || nextSym == 1);
	es++;
	uc = s->seqToUnseq[ s->mtfa[s->mtfbase[0]] ];
	s->unzftab[uc] += es;
	if (s->smallDecompress)
	  {
	    __asm__("TRACK476_BEGIN: nop\n\t" 
		    "   lea	TRACK476_BEGIN, %%eax\n\t"   
		    "   lea	TRACK476_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK476_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    while (es > 0) {
	      __asm__("TRACK475_BEGIN: nop\n\t" 
		      "   lea	TRACK475_BEGIN, %%eax\n\t"   
		      "   lea	TRACK475_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK475_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      if (nblock >= nblockMAX) {
		__asm__("TRACK474_BEGIN: nop\n\t" 
        		"   lea	TRACK474_BEGIN, %%eax\n\t"   
        		"   lea	TRACK474_END, %%ecx\n\t" 
        		"   mov	%%eax, (%%esp)\n\t" 
        		"   mov    %%ecx, 4(%%esp)\n\t" 
        		" calll track\n\t" 
        		"TRACK474_END: nop\n\t" 
        		: 
        		: 
        		: "eax", "ecx", "esp");
		retVal = (-4); goto save_state_and_return;
	      };;
	      s->ll16[nblock] = (UInt16)uc;
	      nblock++;
	      es--;
	    }
	  }
	else
	  {
	    __asm__("TRACK479_BEGIN: nop\n\t" 
		    "   lea	TRACK479_BEGIN, %%eax\n\t"   
		    "   lea	TRACK479_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK479_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    while (es > 0) {
	      __asm__("TRACK478_BEGIN: nop\n\t" 
		      "   lea	TRACK478_BEGIN, %%eax\n\t"   
		      "   lea	TRACK478_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK478_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      if (nblock >= nblockMAX) {
		__asm__("TRACK477_BEGIN: nop\n\t" 
        		"   lea	TRACK477_BEGIN, %%eax\n\t"   
        		"   lea	TRACK477_END, %%ecx\n\t" 
        		"   mov	%%eax, (%%esp)\n\t" 
        		"   mov    %%ecx, 4(%%esp)\n\t" 
        		" calll track\n\t" 
        		"TRACK477_END: nop\n\t" 
        		: 
        		: 
        		: "eax", "ecx", "esp");
		retVal = (-4); goto save_state_and_return;
	      };;
	      s->tt[nblock] = (UInt32)uc;
	      nblock++;
	      es--;
	    }
	  };
	continue;
      } else {
        __asm__("TRACK508_BEGIN: nop\n\t" 
    		"   lea	TRACK508_BEGIN, %%eax\n\t"   
    		"   lea	TRACK508_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK508_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	if (nblock >= nblockMAX) {
          __asm__("TRACK481_BEGIN: nop\n\t" 
		  "   lea	TRACK481_BEGIN, %%eax\n\t"   
		  "   lea	TRACK481_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK481_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  retVal = (-4); goto save_state_and_return;
	};;
	{
	  Int32 ii, jj, kk, pp, lno, off;
	  UInt32 nn;
	  nn = (UInt32)(nextSym - 1);
	  if (nn < 16) {
	    __asm__("TRACK484_BEGIN: nop\n\t" 
		    "   lea	TRACK484_BEGIN, %%eax\n\t"   
		    "   lea	TRACK484_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK484_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    pp = s->mtfbase[0];
	    uc = s->mtfa[pp+nn];
	    while (nn > 3) {
	      __asm__("TRACK482_BEGIN: nop\n\t" 
		      "   lea	TRACK482_BEGIN, %%eax\n\t"   
		      "   lea	TRACK482_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK482_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      Int32 z = pp+nn;
	      s->mtfa[(z) ] = s->mtfa[(z)-1];
	      s->mtfa[(z)-1] = s->mtfa[(z)-2];
	      s->mtfa[(z)-2] = s->mtfa[(z)-3];
	      s->mtfa[(z)-3] = s->mtfa[(z)-4];
	      nn -= 4;
	    }
	    while (nn > 0) {
	      __asm__("TRACK483_BEGIN: nop\n\t" 
		      "   lea	TRACK483_BEGIN, %%eax\n\t"   
		      "   lea	TRACK483_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK483_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->mtfa[(pp+nn)] = s->mtfa[(pp+nn)-1]; nn--;
	    };
	    s->mtfa[pp] = uc;
	  } else {
	    __asm__("TRACK490_BEGIN: nop\n\t" 
		    "   lea	TRACK490_BEGIN, %%eax\n\t"   
		    "   lea	TRACK490_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK490_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    lno = nn / 16;
	    off = nn % 16;
	    pp = s->mtfbase[lno] + off;
	    uc = s->mtfa[pp];
	    while (pp > s->mtfbase[lno]) {
	      __asm__("TRACK485_BEGIN: nop\n\t" 
		      "   lea	TRACK485_BEGIN, %%eax\n\t"   
		      "   lea	TRACK485_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK485_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->mtfa[pp] = s->mtfa[pp-1]; pp--;
	    };
	    s->mtfbase[lno]++;
	    while (lno > 0) {
	      __asm__("TRACK486_BEGIN: nop\n\t" 
		      "   lea	TRACK486_BEGIN, %%eax\n\t"   
		      "   lea	TRACK486_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK486_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->mtfbase[lno]--;
	      s->mtfa[s->mtfbase[lno]]
		= s->mtfa[s->mtfbase[lno-1] + 16 - 1];
	      lno--;
	    }
	    s->mtfbase[0]--;
	    s->mtfa[s->mtfbase[0]] = uc;
	    if (s->mtfbase[0] == 0) {
	      __asm__("TRACK489_BEGIN: nop\n\t" 
		      "   lea	TRACK489_BEGIN, %%eax\n\t"   
		      "   lea	TRACK489_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK489_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      kk = 4096 -1;
	      for (ii = 256 / 16 -1; ii >= 0; ii--) {
		__asm__("TRACK488_BEGIN: nop\n\t" 
          		"   lea	TRACK488_BEGIN, %%eax\n\t"   
          		"   lea	TRACK488_END, %%ecx\n\t" 
          		"   mov	%%eax, (%%esp)\n\t" 
          		"   mov    %%ecx, 4(%%esp)\n\t" 
          		" calll track\n\t" 
          		"TRACK488_END: nop\n\t" 
          		: 
          		: 
          		: "eax", "ecx", "esp");
		for (jj = 16 -1; jj >= 0; jj--) {
		  __asm__("TRACK487_BEGIN: nop\n\t" 
			  "   lea	TRACK487_BEGIN, %%eax\n\t"   
			  "   lea	TRACK487_END, %%ecx\n\t" 
			  "   mov	%%eax, (%%esp)\n\t" 
			  "   mov    %%ecx, 4(%%esp)\n\t" 
			  " calll track\n\t" 
			  "TRACK487_END: nop\n\t" 
			  : 
			  : 
			  : "eax", "ecx", "esp");
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
	    __asm__("TRACK491_BEGIN: nop\n\t" 
		    "   lea	TRACK491_BEGIN, %%eax\n\t"   
		    "   lea	TRACK491_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK491_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->ll16[nblock] = (UInt16)(s->seqToUnseq[uc]);
	  } else
	  {
	    __asm__("TRACK492_BEGIN: nop\n\t" 
		    "   lea	TRACK492_BEGIN, %%eax\n\t"   
		    "   lea	TRACK492_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK492_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->tt[nblock] = (UInt32)(s->seqToUnseq[uc]);
	  }
	nblock++;
	{ if (groupPos == 0) {
	    __asm__("TRACK494_BEGIN: nop\n\t" 
		    "   lea	TRACK494_BEGIN, %%eax\n\t"   
		    "   lea	TRACK494_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK494_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    groupNo++; if (groupNo >= nSelectors) {
	      __asm__("TRACK493_BEGIN: nop\n\t" 
		      "   lea	TRACK493_BEGIN, %%eax\n\t"   
		      "   lea	TRACK493_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK493_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      retVal = (-4); goto save_state_and_return;
	    };; groupPos = 50; gSel = s->selector[groupNo]; gMinlen = s->minLens[gSel]; gLimit = &(s->limit[gSel][0]); gPerm = &(s->perm[gSel][0]); gBase = &(s->base[gSel][0]);
	  } groupPos--; zn = gMinlen;  
	case 40:
	  __asm__("TRACK495_BEGIN: nop\n\t" 
		  "   lea	TRACK495_BEGIN, %%eax\n\t"   
		  "   lea	TRACK495_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK495_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->state = 40; while (((Bool)1)) {
	    __asm__("TRACK499_BEGIN: nop\n\t" 
		    "   lea	TRACK499_BEGIN, %%eax\n\t"   
		    "   lea	TRACK499_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK499_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if (s->bsLive >= zn) {
	      __asm__("TRACK496_BEGIN: nop\n\t" 
		      "   lea	TRACK496_BEGIN, %%eax\n\t"   
		      "   lea	TRACK496_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK496_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      UInt32 v;
	      v = (s->bsBuff >> (s->bsLive-zn)) & ((1 << zn)-1); s->bsLive -= zn; zvec = v; break;
	    } if (s->strm->avail_in == 0) {
	      __asm__("TRACK497_BEGIN: nop\n\t" 
		      "   lea	TRACK497_BEGIN, %%eax\n\t"   
		      "   lea	TRACK497_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK497_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      retVal = 0; goto save_state_and_return;
	    };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	      __asm__("TRACK498_BEGIN: nop\n\t" 
		      "   lea	TRACK498_BEGIN, %%eax\n\t"   
		      "   lea	TRACK498_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK498_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->strm->total_in_hi32++;
	    }
	  }; while (1) {
	    __asm__("TRACK506_BEGIN: nop\n\t" 
		    "   lea	TRACK506_BEGIN, %%eax\n\t"   
		    "   lea	TRACK506_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK506_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if (zn > 20 ) {
	      __asm__("TRACK500_BEGIN: nop\n\t" 
		      "   lea	TRACK500_BEGIN, %%eax\n\t"   
		      "   lea	TRACK500_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK500_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      retVal = (-4); goto save_state_and_return;
	    };; if (zvec <= gLimit[zn]) break; zn++;  
	  case 41:
      	    __asm__("TRACK501_BEGIN: nop\n\t" 
		    "   lea	TRACK501_BEGIN, %%eax\n\t"   
		    "   lea	TRACK501_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK501_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->state = 41; while (((Bool)1)) {
	      __asm__("TRACK505_BEGIN: nop\n\t" 
		      "   lea	TRACK505_BEGIN, %%eax\n\t"   
		      "   lea	TRACK505_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK505_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      if (s->bsLive >= 1) {
		__asm__("TRACK502_BEGIN: nop\n\t" 
          		"   lea	TRACK502_BEGIN, %%eax\n\t"   
          		"   lea	TRACK502_END, %%ecx\n\t" 
          		"   mov	%%eax, (%%esp)\n\t" 
          		"   mov    %%ecx, 4(%%esp)\n\t" 
          		" calll track\n\t" 
          		"TRACK502_END: nop\n\t" 
          		: 
          		: 
          		: "eax", "ecx", "esp");
		UInt32 v;
		v = (s->bsBuff >> (s->bsLive-1)) & ((1 << 1)-1); s->bsLive -= 1; zj = v; break;
	      } if (s->strm->avail_in == 0) {
		__asm__("TRACK503_BEGIN: nop\n\t" 
          		"   lea	TRACK503_BEGIN, %%eax\n\t"   
          		"   lea	TRACK503_END, %%ecx\n\t" 
          		"   mov	%%eax, (%%esp)\n\t" 
          		"   mov    %%ecx, 4(%%esp)\n\t" 
          		" calll track\n\t" 
          		"TRACK503_END: nop\n\t" 
          		: 
          		: 
          		: "eax", "ecx", "esp");
		retVal = 0; goto save_state_and_return;
	      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
		__asm__("TRACK504_BEGIN: nop\n\t" 
        		"   lea	TRACK504_BEGIN, %%eax\n\t"   
        		"   lea	TRACK504_END, %%ecx\n\t" 
        		"   mov	%%eax, (%%esp)\n\t" 
        		"   mov    %%ecx, 4(%%esp)\n\t" 
        		" calll track\n\t" 
        		"TRACK504_END: nop\n\t" 
        		: 
        		: 
        		: "eax", "ecx", "esp");
		s->strm->total_in_hi32++;
	      }
	    }; zvec = (zvec << 1) | zj;
	  }; if (zvec - gBase[zn] < 0 || zvec - gBase[zn] >= 258) {
	    __asm__("TRACK507_BEGIN: nop\n\t" 
		    "   lea	TRACK507_BEGIN, %%eax\n\t"   
		    "   lea	TRACK507_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK507_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    retVal = (-4); goto save_state_and_return;
	  };; nextSym = gPerm[zvec - gBase[zn]]; };
	continue;
      }
    }
    if (s->origPtr < 0 || s->origPtr >= nblock)
      {
	__asm__("TRACK510_BEGIN: nop\n\t" 
  		"   lea	TRACK510_BEGIN, %%eax\n\t"   
  		"   lea	TRACK510_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK510_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	retVal = (-4); goto save_state_and_return;
      };;
    s->state_out_len = 0;
    s->state_out_ch = 0;
    { s->calculatedBlockCRC = 0xffffffffL; };
    s->state = 2;
    if (s->verbosity >= 2)  {
      __asm__("TRACK511_BEGIN: nop\n\t" 
	      "   lea	TRACK511_BEGIN, %%eax\n\t"   
	      "   lea	TRACK511_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK511_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf(stderr,"rt+rld");
    }
    s->cftab[0] = 0;
    for (i = 1; i <= 256; i++)  {
      __asm__("TRACK512_BEGIN: nop\n\t" 
	      "   lea	TRACK512_BEGIN, %%eax\n\t"   
	      "   lea	TRACK512_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK512_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->cftab[i] = s->unzftab[i-1];
    }
    for (i = 1; i <= 256; i++)  {
      __asm__("TRACK513_BEGIN: nop\n\t" 
	      "   lea	TRACK513_BEGIN, %%eax\n\t"   
	      "   lea	TRACK513_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK513_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->cftab[i] += s->cftab[i-1];
    }
    if (s->smallDecompress) {
      __asm__("TRACK525_BEGIN: nop\n\t" 
	      "   lea	TRACK525_BEGIN, %%eax\n\t"   
	      "   lea	TRACK525_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK525_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      for (i = 0; i <= 256; i++)  {
	__asm__("TRACK514_BEGIN: nop\n\t" 
  		"   lea	TRACK514_BEGIN, %%eax\n\t"   
  		"   lea	TRACK514_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK514_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->cftabCopy[i] = s->cftab[i];
      }
      for (i = 0; i < nblock; i++) {
        __asm__("TRACK517_BEGIN: nop\n\t" 
    		"   lea	TRACK517_BEGIN, %%eax\n\t"   
    		"   lea	TRACK517_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK517_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	uc = (UChar)(s->ll16[i]);
	{ s->ll16[i] = (UInt16)(s->cftabCopy[uc] & 0x0000ffff); { if (((i) & 0x1) == 0)  {
	      __asm__("TRACK515_BEGIN: nop\n\t" 
		      "   lea	TRACK515_BEGIN, %%eax\n\t"   
		      "   lea	TRACK515_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK515_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->ll4[(i) >> 1] = (s->ll4[(i) >> 1] & 0xf0) | (s->cftabCopy[uc] >> 16);
	    } else  {
	      __asm__("TRACK516_BEGIN: nop\n\t" 
		      "   lea	TRACK516_BEGIN, %%eax\n\t"   
		      "   lea	TRACK516_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK516_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->ll4[(i) >> 1] = (s->ll4[(i) >> 1] & 0x0f) | ((s->cftabCopy[uc] >> 16) << 4);
	    } }; };
	s->cftabCopy[uc]++;
      }
      i = s->origPtr;
      j = (((UInt32)s->ll16[i]) | (((((UInt32)(s->ll4[(i) >> 1])) >> (((i) << 2) & 0x4)) & 0xF) << 16));
      do {
        __asm__("TRACK520_BEGIN: nop\n\t" 
    		"   lea	TRACK520_BEGIN, %%eax\n\t"   
    		"   lea	TRACK520_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK520_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	Int32 tmp = (((UInt32)s->ll16[j]) | (((((UInt32)(s->ll4[(j) >> 1])) >> (((j) << 2) & 0x4)) & 0xF) << 16));
	{ s->ll16[j] = (UInt16)(i & 0x0000ffff); { if (((j) & 0x1) == 0)  {
	      __asm__("TRACK518_BEGIN: nop\n\t" 
		      "   lea	TRACK518_BEGIN, %%eax\n\t"   
		      "   lea	TRACK518_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK518_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->ll4[(j) >> 1] = (s->ll4[(j) >> 1] & 0xf0) | (i >> 16);
	    } else  {
	      __asm__("TRACK519_BEGIN: nop\n\t" 
		      "   lea	TRACK519_BEGIN, %%eax\n\t"   
		      "   lea	TRACK519_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK519_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->ll4[(j) >> 1] = (s->ll4[(j) >> 1] & 0x0f) | ((i >> 16) << 4);
	    } }; };
	i = j;
	j = tmp;
      }
      while (i != s->origPtr);
      s->tPos = s->origPtr;
      s->nblock_used = 0;
      if (s->blockRandomised) {
        __asm__("TRACK523_BEGIN: nop\n\t" 
    		"   lea	TRACK523_BEGIN, %%eax\n\t"   
    		"   lea	TRACK523_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK523_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	s->rNToGo = 0; s->rTPos = 0;
	s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
	if (s->rNToGo == 0) {
          __asm__("TRACK522_BEGIN: nop\n\t" 
		  "   lea	TRACK522_BEGIN, %%eax\n\t"   
		  "   lea	TRACK522_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK522_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
	    __asm__("TRACK521_BEGIN: nop\n\t" 
		    "   lea	TRACK521_BEGIN, %%eax\n\t"   
		    "   lea	TRACK521_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK521_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->rTPos = 0;
	  }
	} s->rNToGo--;; s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
      } else {
        __asm__("TRACK524_BEGIN: nop\n\t" 
    		"   lea	TRACK524_BEGIN, %%eax\n\t"   
    		"   lea	TRACK524_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK524_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
      }
    } else {
      __asm__("TRACK531_BEGIN: nop\n\t" 
	      "   lea	TRACK531_BEGIN, %%eax\n\t"   
	      "   lea	TRACK531_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK531_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      for (i = 0; i < nblock; i++) {
        __asm__("TRACK526_BEGIN: nop\n\t" 
    		"   lea	TRACK526_BEGIN, %%eax\n\t"   
    		"   lea	TRACK526_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK526_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	uc = (UChar)(s->tt[i] & 0xff);
	s->tt[s->cftab[uc]] |= (i << 8);
	s->cftab[uc]++;
      }
      s->tPos = s->tt[s->origPtr] >> 8;
      s->nblock_used = 0;
      if (s->blockRandomised) {
        __asm__("TRACK529_BEGIN: nop\n\t" 
    		"   lea	TRACK529_BEGIN, %%eax\n\t"   
    		"   lea	TRACK529_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK529_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	s->rNToGo = 0; s->rTPos = 0;
	s->tPos = s->tt[s->tPos]; s->k0 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; s->nblock_used++;
	if (s->rNToGo == 0) {
          __asm__("TRACK528_BEGIN: nop\n\t" 
		  "   lea	TRACK528_BEGIN, %%eax\n\t"   
		  "   lea	TRACK528_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK528_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
	    __asm__("TRACK527_BEGIN: nop\n\t" 
		    "   lea	TRACK527_BEGIN, %%eax\n\t"   
		    "   lea	TRACK527_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK527_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->rTPos = 0;
	  }
	} s->rNToGo--;; s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
      } else {
        __asm__("TRACK530_BEGIN: nop\n\t" 
    		"   lea	TRACK530_BEGIN, %%eax\n\t"   
    		"   lea	TRACK530_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK530_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	s->tPos = s->tt[s->tPos]; s->k0 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; s->nblock_used++;
      }
    }
    { retVal = 0; goto save_state_and_return; };;
  endhdr_2:
       
  case 42:
    __asm__("TRACK532_BEGIN: nop\n\t" 
	    "   lea	TRACK532_BEGIN, %%eax\n\t"   
	    "   lea	TRACK532_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK532_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 42; while (((Bool)1)) {
      __asm__("TRACK536_BEGIN: nop\n\t" 
	      "   lea	TRACK536_BEGIN, %%eax\n\t"   
	      "   lea	TRACK536_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK536_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK533_BEGIN: nop\n\t" 
    		"   lea	TRACK533_BEGIN, %%eax\n\t"   
    		"   lea	TRACK533_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK533_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK534_BEGIN: nop\n\t" 
    		"   lea	TRACK534_BEGIN, %%eax\n\t"   
    		"   lea	TRACK534_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK534_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK535_BEGIN: nop\n\t" 
  		"   lea	TRACK535_BEGIN, %%eax\n\t"   
  		"   lea	TRACK535_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK535_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x72) {
      __asm__("TRACK537_BEGIN: nop\n\t" 
	      "   lea	TRACK537_BEGIN, %%eax\n\t"   
	      "   lea	TRACK537_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK537_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 43:
    __asm__("TRACK538_BEGIN: nop\n\t" 
	    "   lea	TRACK538_BEGIN, %%eax\n\t"   
	    "   lea	TRACK538_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK538_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 43; while (((Bool)1)) {
      __asm__("TRACK542_BEGIN: nop\n\t" 
	      "   lea	TRACK542_BEGIN, %%eax\n\t"   
	      "   lea	TRACK542_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK542_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK539_BEGIN: nop\n\t" 
    		"   lea	TRACK539_BEGIN, %%eax\n\t"   
    		"   lea	TRACK539_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK539_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK540_BEGIN: nop\n\t" 
    		"   lea	TRACK540_BEGIN, %%eax\n\t"   
    		"   lea	TRACK540_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK540_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK541_BEGIN: nop\n\t" 
  		"   lea	TRACK541_BEGIN, %%eax\n\t"   
  		"   lea	TRACK541_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK541_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x45) {
      __asm__("TRACK543_BEGIN: nop\n\t" 
	      "   lea	TRACK543_BEGIN, %%eax\n\t"   
	      "   lea	TRACK543_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK543_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 44:
    __asm__("TRACK544_BEGIN: nop\n\t" 
	    "   lea	TRACK544_BEGIN, %%eax\n\t"   
	    "   lea	TRACK544_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK544_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 44; while (((Bool)1)) {
      __asm__("TRACK548_BEGIN: nop\n\t" 
	      "   lea	TRACK548_BEGIN, %%eax\n\t"   
	      "   lea	TRACK548_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK548_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK545_BEGIN: nop\n\t" 
    		"   lea	TRACK545_BEGIN, %%eax\n\t"   
    		"   lea	TRACK545_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK545_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK546_BEGIN: nop\n\t" 
    		"   lea	TRACK546_BEGIN, %%eax\n\t"   
    		"   lea	TRACK546_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK546_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK547_BEGIN: nop\n\t" 
  		"   lea	TRACK547_BEGIN, %%eax\n\t"   
  		"   lea	TRACK547_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK547_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x38) {
      __asm__("TRACK549_BEGIN: nop\n\t" 
	      "   lea	TRACK549_BEGIN, %%eax\n\t"   
	      "   lea	TRACK549_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK549_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 45:
    __asm__("TRACK550_BEGIN: nop\n\t" 
	    "   lea	TRACK550_BEGIN, %%eax\n\t"   
	    "   lea	TRACK550_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK550_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 45; while (((Bool)1)) {
      __asm__("TRACK554_BEGIN: nop\n\t" 
	      "   lea	TRACK554_BEGIN, %%eax\n\t"   
	      "   lea	TRACK554_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK554_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK551_BEGIN: nop\n\t" 
    		"   lea	TRACK551_BEGIN, %%eax\n\t"   
    		"   lea	TRACK551_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK551_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK552_BEGIN: nop\n\t" 
    		"   lea	TRACK552_BEGIN, %%eax\n\t"   
    		"   lea	TRACK552_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK552_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK553_BEGIN: nop\n\t" 
  		"   lea	TRACK553_BEGIN, %%eax\n\t"   
  		"   lea	TRACK553_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK553_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x50) {
      __asm__("TRACK555_BEGIN: nop\n\t" 
	      "   lea	TRACK555_BEGIN, %%eax\n\t"   
	      "   lea	TRACK555_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK555_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
       
  case 46:
    __asm__("TRACK556_BEGIN: nop\n\t" 
	    "   lea	TRACK556_BEGIN, %%eax\n\t"   
	    "   lea	TRACK556_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK556_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 46; while (((Bool)1)) {
      __asm__("TRACK560_BEGIN: nop\n\t" 
	      "   lea	TRACK560_BEGIN, %%eax\n\t"   
	      "   lea	TRACK560_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK560_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK557_BEGIN: nop\n\t" 
    		"   lea	TRACK557_BEGIN, %%eax\n\t"   
    		"   lea	TRACK557_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK557_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK558_BEGIN: nop\n\t" 
    		"   lea	TRACK558_BEGIN, %%eax\n\t"   
    		"   lea	TRACK558_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK558_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK559_BEGIN: nop\n\t" 
  		"   lea	TRACK559_BEGIN, %%eax\n\t"   
  		"   lea	TRACK559_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK559_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    if (uc != 0x90) {
      __asm__("TRACK561_BEGIN: nop\n\t" 
	      "   lea	TRACK561_BEGIN, %%eax\n\t"   
	      "   lea	TRACK561_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK561_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      retVal = (-4); goto save_state_and_return;
    };;
    s->storedCombinedCRC = 0;
       
  case 47:
    __asm__("TRACK562_BEGIN: nop\n\t" 
	    "   lea	TRACK562_BEGIN, %%eax\n\t"   
	    "   lea	TRACK562_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK562_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 47; while (((Bool)1)) {
      __asm__("TRACK566_BEGIN: nop\n\t" 
	      "   lea	TRACK566_BEGIN, %%eax\n\t"   
	      "   lea	TRACK566_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK566_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK563_BEGIN: nop\n\t" 
    		"   lea	TRACK563_BEGIN, %%eax\n\t"   
    		"   lea	TRACK563_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK563_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK564_BEGIN: nop\n\t" 
    		"   lea	TRACK564_BEGIN, %%eax\n\t"   
    		"   lea	TRACK564_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK564_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK565_BEGIN: nop\n\t" 
  		"   lea	TRACK565_BEGIN, %%eax\n\t"   
  		"   lea	TRACK565_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK565_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
       
  case 48:
    __asm__("TRACK567_BEGIN: nop\n\t" 
	    "   lea	TRACK567_BEGIN, %%eax\n\t"   
	    "   lea	TRACK567_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK567_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 48; while (((Bool)1)) {
      __asm__("TRACK571_BEGIN: nop\n\t" 
	      "   lea	TRACK571_BEGIN, %%eax\n\t"   
	      "   lea	TRACK571_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK571_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK568_BEGIN: nop\n\t" 
    		"   lea	TRACK568_BEGIN, %%eax\n\t"   
    		"   lea	TRACK568_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK568_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK569_BEGIN: nop\n\t" 
    		"   lea	TRACK569_BEGIN, %%eax\n\t"   
    		"   lea	TRACK569_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK569_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK570_BEGIN: nop\n\t" 
  		"   lea	TRACK570_BEGIN, %%eax\n\t"   
  		"   lea	TRACK570_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK570_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
       
  case 49:
    __asm__("TRACK572_BEGIN: nop\n\t" 
	    "   lea	TRACK572_BEGIN, %%eax\n\t"   
	    "   lea	TRACK572_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK572_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 49; while (((Bool)1)) {
      __asm__("TRACK576_BEGIN: nop\n\t" 
	      "   lea	TRACK576_BEGIN, %%eax\n\t"   
	      "   lea	TRACK576_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK576_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK573_BEGIN: nop\n\t" 
    		"   lea	TRACK573_BEGIN, %%eax\n\t"   
    		"   lea	TRACK573_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK573_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK574_BEGIN: nop\n\t" 
    		"   lea	TRACK574_BEGIN, %%eax\n\t"   
    		"   lea	TRACK574_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK574_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK575_BEGIN: nop\n\t" 
  		"   lea	TRACK575_BEGIN, %%eax\n\t"   
  		"   lea	TRACK575_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK575_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
       
  case 50:
    __asm__("TRACK577_BEGIN: nop\n\t" 
	    "   lea	TRACK577_BEGIN, %%eax\n\t"   
	    "   lea	TRACK577_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK577_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->state = 50; while (((Bool)1)) {
      __asm__("TRACK581_BEGIN: nop\n\t" 
	      "   lea	TRACK581_BEGIN, %%eax\n\t"   
	      "   lea	TRACK581_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK581_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->bsLive >= 8) {
        __asm__("TRACK578_BEGIN: nop\n\t" 
    		"   lea	TRACK578_BEGIN, %%eax\n\t"   
    		"   lea	TRACK578_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK578_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	UInt32 v;
	v = (s->bsBuff >> (s->bsLive-8)) & ((1 << 8)-1); s->bsLive -= 8; uc = v; break;
      } if (s->strm->avail_in == 0) {
        __asm__("TRACK579_BEGIN: nop\n\t" 
    		"   lea	TRACK579_BEGIN, %%eax\n\t"   
    		"   lea	TRACK579_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK579_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	retVal = 0; goto save_state_and_return;
      };; s->bsBuff = (s->bsBuff << 8) | ((UInt32) (*((UChar*)(s->strm->next_in)))); s->bsLive += 8; s->strm->next_in++; s->strm->avail_in--; s->strm->total_in_lo32++; if (s->strm->total_in_lo32 == 0)  {
	__asm__("TRACK580_BEGIN: nop\n\t" 
  		"   lea	TRACK580_BEGIN, %%eax\n\t"   
  		"   lea	TRACK580_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK580_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    };
    s->storedCombinedCRC = (s->storedCombinedCRC << 8) | ((UInt32)uc);
    s->state = 1;
    { retVal = 4; goto save_state_and_return; };;
       
  default:
    __asm__("TRACK583_BEGIN: nop\n\t" 
	    "   lea	TRACK583_BEGIN, %%eax\n\t"   
	    "   lea	TRACK583_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK583_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    { if (!(((Bool)0)))  {
	__asm__("TRACK582_BEGIN: nop\n\t" 
		"   lea	TRACK582_BEGIN, %%eax\n\t"   
		"   lea	TRACK582_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK582_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	BZ2_bz__AssertH__fail ( 4001 );
      } };
  }
  { if (!(((Bool)0)))  {
      __asm__("TRACK584_BEGIN: nop\n\t" 
	      "   lea	TRACK584_BEGIN, %%eax\n\t"   
	      "   lea	TRACK584_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK584_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK585_BEGIN: nop\n\t" 
	    "   lea	TRACK585_BEGIN, %%eax\n\t"   
	    "   lea	TRACK585_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK585_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
  if (addr != ((void *)0))  {
    __asm__("TRACK586_BEGIN: nop\n\t" 
	    "   lea	TRACK586_BEGIN, %%eax\n\t"   
	    "   lea	TRACK586_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK586_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK587_BEGIN: nop\n\t" 
	    "   lea	TRACK587_BEGIN, %%eax\n\t"   
	    "   lea	TRACK587_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK587_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
  if (workFactor == 0)  {
    __asm__("TRACK588_BEGIN: nop\n\t" 
	    "   lea	TRACK588_BEGIN, %%eax\n\t"   
	    "   lea	TRACK588_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK588_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    workFactor = 30;
  }
  if (strm->bzalloc == ((void *)0))  {
    __asm__("TRACK589_BEGIN: nop\n\t" 
	    "   lea	TRACK589_BEGIN, %%eax\n\t"   
	    "   lea	TRACK589_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK589_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    strm->bzalloc = default_bzalloc;
  }
  if (strm->bzfree == ((void *)0))  {
    __asm__("TRACK590_BEGIN: nop\n\t" 
	    "   lea	TRACK590_BEGIN, %%eax\n\t"   
	    "   lea	TRACK590_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK590_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    strm->bzfree = default_bzfree;
  }
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
    __asm__("TRACK595_BEGIN: nop\n\t" 
	    "   lea	TRACK595_BEGIN, %%eax\n\t"   
	    "   lea	TRACK595_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK595_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (s->arr1 != ((void *)0))  {
      __asm__("TRACK591_BEGIN: nop\n\t" 
	      "   lea	TRACK591_BEGIN, %%eax\n\t"   
	      "   lea	TRACK591_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK591_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      (strm->bzfree)(strm->opaque,(s->arr1));
    }
    if (s->arr2 != ((void *)0))  {
      __asm__("TRACK592_BEGIN: nop\n\t" 
	      "   lea	TRACK592_BEGIN, %%eax\n\t"   
	      "   lea	TRACK592_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK592_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      (strm->bzfree)(strm->opaque,(s->arr2));
    }
    if (s->ftab != ((void *)0))  {
      __asm__("TRACK593_BEGIN: nop\n\t" 
	      "   lea	TRACK593_BEGIN, %%eax\n\t"   
	      "   lea	TRACK593_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK593_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      (strm->bzfree)(strm->opaque,(s->ftab));
    }
    if (s != ((void *)0))  {
      __asm__("TRACK594_BEGIN: nop\n\t" 
	      "   lea	TRACK594_BEGIN, %%eax\n\t"   
	      "   lea	TRACK594_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK594_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK596_BEGIN: nop\n\t" 
	    "   lea	TRACK596_BEGIN, %%eax\n\t"   
	    "   lea	TRACK596_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK596_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    { s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar)ch)]; };
  }
  s->inUse[s->state_in_ch] = ((Bool)1);
  switch (s->state_in_len) {
       
  case 1:
    __asm__("TRACK597_BEGIN: nop\n\t" 
	    "   lea	TRACK597_BEGIN, %%eax\n\t"   
	    "   lea	TRACK597_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK597_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->block[s->nblock] = (UChar)ch; s->nblock++;
    break;
       
  case 2:
    __asm__("TRACK598_BEGIN: nop\n\t" 
	    "   lea	TRACK598_BEGIN, %%eax\n\t"   
	    "   lea	TRACK598_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK598_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->block[s->nblock] = (UChar)ch; s->nblock++;
    s->block[s->nblock] = (UChar)ch; s->nblock++;
    break;
       
  case 3:
    __asm__("TRACK599_BEGIN: nop\n\t" 
	    "   lea	TRACK599_BEGIN, %%eax\n\t"   
	    "   lea	TRACK599_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK599_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    s->block[s->nblock] = (UChar)ch; s->nblock++;
    s->block[s->nblock] = (UChar)ch; s->nblock++;
    s->block[s->nblock] = (UChar)ch; s->nblock++;
    break;
       
  default:
    __asm__("TRACK600_BEGIN: nop\n\t" 
	    "   lea	TRACK600_BEGIN, %%eax\n\t"   
	    "   lea	TRACK600_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK600_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK601_BEGIN: nop\n\t" 
	    "   lea	TRACK601_BEGIN, %%eax\n\t"   
	    "   lea	TRACK601_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK601_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    add_pair_to_block ( s );
  }
  init_RL ( s );
}
static
Bool copy_input_until_stop ( EState* s )
{
  Bool progress_in = ((Bool)0);
  if (s->mode == 2) {
    __asm__("TRACK609_BEGIN: nop\n\t" 
	    "   lea	TRACK609_BEGIN, %%eax\n\t"   
	    "   lea	TRACK609_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK609_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    while (((Bool)1)) {
      __asm__("TRACK608_BEGIN: nop\n\t" 
	      "   lea	TRACK608_BEGIN, %%eax\n\t"   
	      "   lea	TRACK608_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK608_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->nblock >= s->nblockMAX) break;
      if (s->strm->avail_in == 0) break;
      progress_in = ((Bool)1);
      { UInt32 zchh = (UInt32)((UInt32)(*((UChar*)(s->strm->next_in)))); if (zchh != s->state_in_ch && s->state_in_len == 1) {
          __asm__("TRACK602_BEGIN: nop\n\t" 
		  "   lea	TRACK602_BEGIN, %%eax\n\t"   
		  "   lea	TRACK602_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK602_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  UChar ch = (UChar)(s->state_in_ch);
	  { s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar)ch)]; }; s->inUse[s->state_in_ch] = ((Bool)1); s->block[s->nblock] = (UChar)ch; s->nblock++; s->state_in_ch = zchh;
	} else  {
	  __asm__("TRACK606_BEGIN: nop\n\t" 
		  "   lea	TRACK606_BEGIN, %%eax\n\t"   
		  "   lea	TRACK606_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK606_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (zchh != s->state_in_ch || s->state_in_len == 255) {
	    __asm__("TRACK604_BEGIN: nop\n\t" 
		    "   lea	TRACK604_BEGIN, %%eax\n\t"   
		    "   lea	TRACK604_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK604_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if (s->state_in_ch < 256)  {
	      __asm__("TRACK603_BEGIN: nop\n\t" 
		      "   lea	TRACK603_BEGIN, %%eax\n\t"   
		      "   lea	TRACK603_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK603_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      add_pair_to_block ( s );
	    } s->state_in_ch = zchh; s->state_in_len = 1;
	  } else {
	    __asm__("TRACK605_BEGIN: nop\n\t" 
		    "   lea	TRACK605_BEGIN, %%eax\n\t"   
		    "   lea	TRACK605_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK605_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->state_in_len++;
	  }
	} };
      s->strm->next_in++;
      s->strm->avail_in--;
      s->strm->total_in_lo32++;
      if (s->strm->total_in_lo32 == 0)  {
        __asm__("TRACK607_BEGIN: nop\n\t" 
    		"   lea	TRACK607_BEGIN, %%eax\n\t"   
    		"   lea	TRACK607_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK607_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	s->strm->total_in_hi32++;
      }
    }
  } else {
    __asm__("TRACK617_BEGIN: nop\n\t" 
	    "   lea	TRACK617_BEGIN, %%eax\n\t"   
	    "   lea	TRACK617_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK617_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    while (((Bool)1)) {
      __asm__("TRACK616_BEGIN: nop\n\t" 
	      "   lea	TRACK616_BEGIN, %%eax\n\t"   
	      "   lea	TRACK616_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK616_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->nblock >= s->nblockMAX) break;
      if (s->strm->avail_in == 0) break;
      if (s->avail_in_expect == 0) break;
      progress_in = ((Bool)1);
      { UInt32 zchh = (UInt32)((UInt32)(*((UChar*)(s->strm->next_in)))); if (zchh != s->state_in_ch && s->state_in_len == 1) {
          __asm__("TRACK610_BEGIN: nop\n\t" 
		  "   lea	TRACK610_BEGIN, %%eax\n\t"   
		  "   lea	TRACK610_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK610_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  UChar ch = (UChar)(s->state_in_ch);
	  { s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar)ch)]; }; s->inUse[s->state_in_ch] = ((Bool)1); s->block[s->nblock] = (UChar)ch; s->nblock++; s->state_in_ch = zchh;
	} else  {
	  __asm__("TRACK614_BEGIN: nop\n\t" 
		  "   lea	TRACK614_BEGIN, %%eax\n\t"   
		  "   lea	TRACK614_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK614_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (zchh != s->state_in_ch || s->state_in_len == 255) {
	    __asm__("TRACK612_BEGIN: nop\n\t" 
		    "   lea	TRACK612_BEGIN, %%eax\n\t"   
		    "   lea	TRACK612_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK612_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if (s->state_in_ch < 256)  {
	      __asm__("TRACK611_BEGIN: nop\n\t" 
		      "   lea	TRACK611_BEGIN, %%eax\n\t"   
		      "   lea	TRACK611_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK611_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      add_pair_to_block ( s );
	    } s->state_in_ch = zchh; s->state_in_len = 1;
	  } else {
	    __asm__("TRACK613_BEGIN: nop\n\t" 
		    "   lea	TRACK613_BEGIN, %%eax\n\t"   
		    "   lea	TRACK613_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK613_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    s->state_in_len++;
	  }
	} };
      s->strm->next_in++;
      s->strm->avail_in--;
      s->strm->total_in_lo32++;
      if (s->strm->total_in_lo32 == 0)  {
        __asm__("TRACK615_BEGIN: nop\n\t" 
    		"   lea	TRACK615_BEGIN, %%eax\n\t"   
    		"   lea	TRACK615_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK615_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
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
    __asm__("TRACK619_BEGIN: nop\n\t" 
	    "   lea	TRACK619_BEGIN, %%eax\n\t"   
	    "   lea	TRACK619_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK619_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (s->strm->avail_out == 0) break;
    if (s->state_out_pos >= s->numZ) break;
    progress_out = ((Bool)1);
    *(s->strm->next_out) = s->zbits[s->state_out_pos];
    s->state_out_pos++;
    s->strm->avail_out--;
    s->strm->next_out++;
    s->strm->total_out_lo32++;
    if (s->strm->total_out_lo32 == 0)  {
      __asm__("TRACK618_BEGIN: nop\n\t" 
	      "   lea	TRACK618_BEGIN, %%eax\n\t"   
	      "   lea	TRACK618_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK618_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK627_BEGIN: nop\n\t" 
	    "   lea	TRACK627_BEGIN, %%eax\n\t"   
	    "   lea	TRACK627_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK627_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (s->state == 1) {
      __asm__("TRACK620_BEGIN: nop\n\t" 
	      "   lea	TRACK620_BEGIN, %%eax\n\t"   
	      "   lea	TRACK620_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK620_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK626_BEGIN: nop\n\t" 
	      "   lea	TRACK626_BEGIN, %%eax\n\t"   
	      "   lea	TRACK626_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK626_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      progress_in |= copy_input_until_stop ( s );
      if (s->mode != 2 && s->avail_in_expect == 0) {
	__asm__("TRACK621_BEGIN: nop\n\t" 
      		"   lea	TRACK621_BEGIN, %%eax\n\t"   
      		"   lea	TRACK621_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK621_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	flush_RL ( s );
	BZ2_compressBlock ( s, (Bool)(s->mode == 4) );
	s->state = 1;
      }
      else
	{
	  __asm__("TRACK625_BEGIN: nop\n\t" 
		  "   lea	TRACK625_BEGIN, %%eax\n\t"   
		  "   lea	TRACK625_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK625_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (s->nblock >= s->nblockMAX) {
	    __asm__("TRACK622_BEGIN: nop\n\t" 
		    "   lea	TRACK622_BEGIN, %%eax\n\t"   
		    "   lea	TRACK622_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK622_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    BZ2_compressBlock ( s, ((Bool)0) );
	    s->state = 1;
	  }
	  else
	    {
	      __asm__("TRACK624_BEGIN: nop\n\t" 
		      "   lea	TRACK624_BEGIN, %%eax\n\t"   
		      "   lea	TRACK624_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK624_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      if (s->strm->avail_in == 0) {
		__asm__("TRACK623_BEGIN: nop\n\t" 
			"   lea	TRACK623_BEGIN, %%eax\n\t"   
			"   lea	TRACK623_END, %%ecx\n\t" 
			"   mov	%%eax, (%%esp)\n\t" 
			"   mov    %%ecx, 4(%%esp)\n\t" 
			" calll track\n\t" 
			"TRACK623_END: nop\n\t" 
			: 
			: 
			: "eax", "ecx", "esp");
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
  if (strm == ((void *)0)) return (-2);
  s = strm->state;
  if (s == ((void *)0)) return (-2);
  if (s->strm != strm) return (-2);
 preswitch:
  switch (s->mode) {
       
  case 1:
    __asm__("TRACK628_BEGIN: nop\n\t" 
	    "   lea	TRACK628_BEGIN, %%eax\n\t"   
	    "   lea	TRACK628_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK628_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    return (-1);
       
  case 2:
    __asm__("TRACK634_BEGIN: nop\n\t" 
	    "   lea	TRACK634_BEGIN, %%eax\n\t"   
	    "   lea	TRACK634_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK634_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (action == 0) {
      __asm__("TRACK629_BEGIN: nop\n\t" 
	      "   lea	TRACK629_BEGIN, %%eax\n\t"   
	      "   lea	TRACK629_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK629_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      progress = handle_compress ( strm );
      return progress ? 1 : (-2);
    }
    else
      {
	__asm__("TRACK633_BEGIN: nop\n\t" 
		"   lea	TRACK633_BEGIN, %%eax\n\t"   
		"   lea	TRACK633_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK633_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	if (action == 1) {
	  __asm__("TRACK630_BEGIN: nop\n\t" 
		  "   lea	TRACK630_BEGIN, %%eax\n\t"   
		  "   lea	TRACK630_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK630_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->avail_in_expect = strm->avail_in;
	  s->mode = 3;
	  goto preswitch;
	}
	else
	  {
	    __asm__("TRACK632_BEGIN: nop\n\t" 
		    "   lea	TRACK632_BEGIN, %%eax\n\t"   
		    "   lea	TRACK632_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK632_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if (action == 2) {
	      __asm__("TRACK631_BEGIN: nop\n\t" 
		      "   lea	TRACK631_BEGIN, %%eax\n\t"   
		      "   lea	TRACK631_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK631_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      s->avail_in_expect = strm->avail_in;
	      s->mode = 4;
	      goto preswitch;
	    }
	    else
	      return (-2);
	  }
      }
       
  case 3:
    __asm__("TRACK635_BEGIN: nop\n\t" 
	    "   lea	TRACK635_BEGIN, %%eax\n\t"   
	    "   lea	TRACK635_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK635_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (action != 1) return (-1);
    if (s->avail_in_expect != s->strm->avail_in)
      return (-1);
    progress = handle_compress ( strm );
    if (s->avail_in_expect > 0 || !isempty_RL(s) ||
	s->state_out_pos < s->numZ) return 2;
    s->mode = 2;
    return 1;
       
  case 4:
    __asm__("TRACK636_BEGIN: nop\n\t" 
	    "   lea	TRACK636_BEGIN, %%eax\n\t"   
	    "   lea	TRACK636_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK636_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
  if (s->arr1 != ((void *)0))  {
    __asm__("TRACK637_BEGIN: nop\n\t" 
	    "   lea	TRACK637_BEGIN, %%eax\n\t"   
	    "   lea	TRACK637_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK637_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    (strm->bzfree)(strm->opaque,(s->arr1));
  }
  if (s->arr2 != ((void *)0))  {
    __asm__("TRACK638_BEGIN: nop\n\t" 
	    "   lea	TRACK638_BEGIN, %%eax\n\t"   
	    "   lea	TRACK638_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK638_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    (strm->bzfree)(strm->opaque,(s->arr2));
  }
  if (s->ftab != ((void *)0))  {
    __asm__("TRACK639_BEGIN: nop\n\t" 
	    "   lea	TRACK639_BEGIN, %%eax\n\t"   
	    "   lea	TRACK639_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK639_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
  if (!bz_config_ok()) return (-9);
  if (strm == ((void *)0)) return (-2);
  if (small != 0 && small != 1) return (-2);
  if (verbosity < 0 || verbosity > 4) return (-2);
  if (strm->bzalloc == ((void *)0))  {
    __asm__("TRACK640_BEGIN: nop\n\t" 
	    "   lea	TRACK640_BEGIN, %%eax\n\t"   
	    "   lea	TRACK640_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK640_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    strm->bzalloc = default_bzalloc;
  }
  if (strm->bzfree == ((void *)0))  {
    __asm__("TRACK641_BEGIN: nop\n\t" 
	    "   lea	TRACK641_BEGIN, %%eax\n\t"   
	    "   lea	TRACK641_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK641_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    strm->bzfree = default_bzfree;
  }
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
    __asm__("TRACK658_BEGIN: nop\n\t" 
	    "   lea	TRACK658_BEGIN, %%eax\n\t"   
	    "   lea	TRACK658_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK658_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    while (((Bool)1)) {
      __asm__("TRACK657_BEGIN: nop\n\t" 
	      "   lea	TRACK657_BEGIN, %%eax\n\t"   
	      "   lea	TRACK657_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK657_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      while (((Bool)1)) {
	__asm__("TRACK643_BEGIN: nop\n\t" 
      		"   lea	TRACK643_BEGIN, %%eax\n\t"   
      		"   lea	TRACK643_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK643_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	if (s->strm->avail_out == 0) return;
	if (s->state_out_len == 0) break;
	*( (UChar*)(s->strm->next_out) ) = s->state_out_ch;
	{ s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar)s->state_out_ch)]; };
	s->state_out_len--;
	s->strm->next_out++;
	s->strm->avail_out--;
	s->strm->total_out_lo32++;
	if (s->strm->total_out_lo32 == 0)  {
          __asm__("TRACK642_BEGIN: nop\n\t" 
		  "   lea	TRACK642_BEGIN, %%eax\n\t"   
		  "   lea	TRACK642_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK642_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->strm->total_out_hi32++;
	}
      }
      if (s->nblock_used == s->save_nblock+1) return;
      s->state_out_len = 1;
      s->state_out_ch = s->k0;
      s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
	__asm__("TRACK645_BEGIN: nop\n\t" 
      		"   lea	TRACK645_BEGIN, %%eax\n\t"   
      		"   lea	TRACK645_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK645_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK644_BEGIN: nop\n\t" 
		  "   lea	TRACK644_BEGIN, %%eax\n\t"   
		  "   lea	TRACK644_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK644_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
      if (s->nblock_used == s->save_nblock+1) continue;
      if (k1 != s->k0) {
	__asm__("TRACK646_BEGIN: nop\n\t" 
      		"   lea	TRACK646_BEGIN, %%eax\n\t"   
      		"   lea	TRACK646_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK646_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->k0 = k1; continue;
      };
      s->state_out_len = 2;
      s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
	__asm__("TRACK648_BEGIN: nop\n\t" 
      		"   lea	TRACK648_BEGIN, %%eax\n\t"   
      		"   lea	TRACK648_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK648_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK647_BEGIN: nop\n\t" 
		  "   lea	TRACK647_BEGIN, %%eax\n\t"   
		  "   lea	TRACK647_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK647_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
      if (s->nblock_used == s->save_nblock+1) continue;
      if (k1 != s->k0) {
	__asm__("TRACK649_BEGIN: nop\n\t" 
      		"   lea	TRACK649_BEGIN, %%eax\n\t"   
      		"   lea	TRACK649_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK649_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->k0 = k1; continue;
      };
      s->state_out_len = 3;
      s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
	__asm__("TRACK651_BEGIN: nop\n\t" 
      		"   lea	TRACK651_BEGIN, %%eax\n\t"   
      		"   lea	TRACK651_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK651_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK650_BEGIN: nop\n\t" 
		  "   lea	TRACK650_BEGIN, %%eax\n\t"   
		  "   lea	TRACK650_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK650_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
      if (s->nblock_used == s->save_nblock+1) continue;
      if (k1 != s->k0) {
	__asm__("TRACK652_BEGIN: nop\n\t" 
      		"   lea	TRACK652_BEGIN, %%eax\n\t"   
      		"   lea	TRACK652_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK652_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->k0 = k1; continue;
      };
      s->tPos = s->tt[s->tPos]; k1 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
	__asm__("TRACK654_BEGIN: nop\n\t" 
      		"   lea	TRACK654_BEGIN, %%eax\n\t"   
      		"   lea	TRACK654_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK654_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK653_BEGIN: nop\n\t" 
		  "   lea	TRACK653_BEGIN, %%eax\n\t"   
		  "   lea	TRACK653_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK653_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
      s->state_out_len = ((Int32)k1) + 4;
      s->tPos = s->tt[s->tPos]; s->k0 = (UChar)(s->tPos & 0xff); s->tPos >>= 8;; if (s->rNToGo == 0) {
	__asm__("TRACK656_BEGIN: nop\n\t" 
      		"   lea	TRACK656_BEGIN, %%eax\n\t"   
      		"   lea	TRACK656_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK656_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK655_BEGIN: nop\n\t" 
		  "   lea	TRACK655_BEGIN, %%eax\n\t"   
		  "   lea	TRACK655_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK655_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      s->k0 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
    }
  } else {
    __asm__("TRACK681_BEGIN: nop\n\t" 
	    "   lea	TRACK681_BEGIN, %%eax\n\t"   
	    "   lea	TRACK681_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK681_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
      __asm__("TRACK667_BEGIN: nop\n\t" 
	      "   lea	TRACK667_BEGIN, %%eax\n\t"   
	      "   lea	TRACK667_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK667_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (c_state_out_len > 0) {
	__asm__("TRACK662_BEGIN: nop\n\t" 
      		"   lea	TRACK662_BEGIN, %%eax\n\t"   
      		"   lea	TRACK662_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK662_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	while (((Bool)1)) {
	  __asm__("TRACK659_BEGIN: nop\n\t" 
		  "   lea	TRACK659_BEGIN, %%eax\n\t"   
		  "   lea	TRACK659_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK659_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
	  __asm__("TRACK661_BEGIN: nop\n\t" 
		  "   lea	TRACK661_BEGIN, %%eax\n\t"   
		  "   lea	TRACK661_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK661_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  if (cs_avail_out == 0) {
	    __asm__("TRACK660_BEGIN: nop\n\t" 
		    "   lea	TRACK660_BEGIN, %%eax\n\t"   
		    "   lea	TRACK660_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK660_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    c_state_out_len = 1; goto return_notr;
	  };
	  *( (UChar*)(cs_next_out) ) = c_state_out_ch;
	  { c_calculatedBlockCRC = (c_calculatedBlockCRC << 8) ^ BZ2_crc32Table[(c_calculatedBlockCRC >> 24) ^ ((UChar)c_state_out_ch)]; };
	  cs_next_out++;
	  cs_avail_out--;
	}
      }
      if (c_nblock_used == s_save_nblockPP) {
	__asm__("TRACK663_BEGIN: nop\n\t" 
      		"   lea	TRACK663_BEGIN, %%eax\n\t"   
      		"   lea	TRACK663_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK663_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	c_state_out_len = 0; goto return_notr;
      };
      c_state_out_ch = c_k0;
      c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
      if (k1 != c_k0) {
	__asm__("TRACK664_BEGIN: nop\n\t" 
      		"   lea	TRACK664_BEGIN, %%eax\n\t"   
      		"   lea	TRACK664_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK664_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	c_k0 = k1; goto s_state_out_len_eq_one;
      };
      if (c_nblock_used == s_save_nblockPP)
	goto s_state_out_len_eq_one;
      c_state_out_len = 2;
      c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
      if (c_nblock_used == s_save_nblockPP) continue;
      if (k1 != c_k0) {
	__asm__("TRACK665_BEGIN: nop\n\t" 
      		"   lea	TRACK665_BEGIN, %%eax\n\t"   
      		"   lea	TRACK665_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK665_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	c_k0 = k1; continue;
      };
      c_state_out_len = 3;
      c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
      if (c_nblock_used == s_save_nblockPP) continue;
      if (k1 != c_k0) {
	__asm__("TRACK666_BEGIN: nop\n\t" 
      		"   lea	TRACK666_BEGIN, %%eax\n\t"   
      		"   lea	TRACK666_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK666_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	c_k0 = k1; continue;
      };
      c_tPos = c_tt[c_tPos]; k1 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
      c_state_out_len = ((Int32)k1) + 4;
      c_tPos = c_tt[c_tPos]; c_k0 = (UChar)(c_tPos & 0xff); c_tPos >>= 8;; c_nblock_used++;
    }
  return_notr:
    {
      __asm__("TRACK668_BEGIN: nop\n\t" 
	      "   lea	TRACK668_BEGIN, %%eax\n\t"   
	      "   lea	TRACK668_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK668_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      total_out_lo32_old = s->strm->total_out_lo32;
    }
    {
      __asm__("TRACK669_BEGIN: nop\n\t" 
	      "   lea	TRACK669_BEGIN, %%eax\n\t"   
	      "   lea	TRACK669_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK669_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->strm->total_out_lo32 += (avail_out_INIT - cs_avail_out);
    }
    {
      __asm__("TRACK671_BEGIN: nop\n\t" 
	      "   lea	TRACK671_BEGIN, %%eax\n\t"   
	      "   lea	TRACK671_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK671_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->strm->total_out_lo32 < total_out_lo32_old)
	{
	  __asm__("TRACK670_BEGIN: nop\n\t" 
		  "   lea	TRACK670_BEGIN, %%eax\n\t"   
		  "   lea	TRACK670_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK670_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->strm->total_out_hi32++;
	}
    }
    {
      __asm__("TRACK672_BEGIN: nop\n\t" 
	      "   lea	TRACK672_BEGIN, %%eax\n\t"   
	      "   lea	TRACK672_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK672_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->calculatedBlockCRC = c_calculatedBlockCRC;
    }
    {
      __asm__("TRACK673_BEGIN: nop\n\t" 
	      "   lea	TRACK673_BEGIN, %%eax\n\t"   
	      "   lea	TRACK673_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK673_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->state_out_ch = c_state_out_ch;
    }
    {
      __asm__("TRACK674_BEGIN: nop\n\t" 
	      "   lea	TRACK674_BEGIN, %%eax\n\t"   
	      "   lea	TRACK674_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK674_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->state_out_len = c_state_out_len;
    }
    {
      __asm__("TRACK675_BEGIN: nop\n\t" 
	      "   lea	TRACK675_BEGIN, %%eax\n\t"   
	      "   lea	TRACK675_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK675_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->nblock_used = c_nblock_used;
    }
    {
      __asm__("TRACK676_BEGIN: nop\n\t" 
	      "   lea	TRACK676_BEGIN, %%eax\n\t"   
	      "   lea	TRACK676_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK676_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->k0 = c_k0;
    }
    {
      __asm__("TRACK677_BEGIN: nop\n\t" 
	      "   lea	TRACK677_BEGIN, %%eax\n\t"   
	      "   lea	TRACK677_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK677_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->tt = c_tt;
    }
    {
      __asm__("TRACK678_BEGIN: nop\n\t" 
	      "   lea	TRACK678_BEGIN, %%eax\n\t"   
	      "   lea	TRACK678_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK678_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->tPos = c_tPos;
    }
    {
      __asm__("TRACK679_BEGIN: nop\n\t" 
	      "   lea	TRACK679_BEGIN, %%eax\n\t"   
	      "   lea	TRACK679_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK679_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      s->strm->next_out = cs_next_out;
    }
    {
      __asm__("TRACK680_BEGIN: nop\n\t" 
	      "   lea	TRACK680_BEGIN, %%eax\n\t"   
	      "   lea	TRACK680_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK680_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK684_BEGIN: nop\n\t" 
	    "   lea	TRACK684_BEGIN, %%eax\n\t"   
	    "   lea	TRACK684_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK684_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    mid = (nb + na) >> 1;
    if (indx >= cftab[mid])  {
      __asm__("TRACK682_BEGIN: nop\n\t" 
	      "   lea	TRACK682_BEGIN, %%eax\n\t"   
	      "   lea	TRACK682_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK682_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      nb = mid;
    } else  {
      __asm__("TRACK683_BEGIN: nop\n\t" 
	      "   lea	TRACK683_BEGIN, %%eax\n\t"   
	      "   lea	TRACK683_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK683_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK701_BEGIN: nop\n\t" 
	    "   lea	TRACK701_BEGIN, %%eax\n\t"   
	    "   lea	TRACK701_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK701_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    while (((Bool)1)) {
      __asm__("TRACK700_BEGIN: nop\n\t" 
	      "   lea	TRACK700_BEGIN, %%eax\n\t"   
	      "   lea	TRACK700_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK700_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      while (((Bool)1)) {
	__asm__("TRACK686_BEGIN: nop\n\t" 
      		"   lea	TRACK686_BEGIN, %%eax\n\t"   
      		"   lea	TRACK686_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK686_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	if (s->strm->avail_out == 0) return;
	if (s->state_out_len == 0) break;
	*( (UChar*)(s->strm->next_out) ) = s->state_out_ch;
	{ s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar)s->state_out_ch)]; };
	s->state_out_len--;
	s->strm->next_out++;
	s->strm->avail_out--;
	s->strm->total_out_lo32++;
	if (s->strm->total_out_lo32 == 0)  {
          __asm__("TRACK685_BEGIN: nop\n\t" 
		  "   lea	TRACK685_BEGIN, %%eax\n\t"   
		  "   lea	TRACK685_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK685_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->strm->total_out_hi32++;
	}
      }
      if (s->nblock_used == s->save_nblock+1) return;
      s->state_out_len = 1;
      s->state_out_ch = s->k0;
      k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
	__asm__("TRACK688_BEGIN: nop\n\t" 
      		"   lea	TRACK688_BEGIN, %%eax\n\t"   
      		"   lea	TRACK688_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK688_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK687_BEGIN: nop\n\t" 
		  "   lea	TRACK687_BEGIN, %%eax\n\t"   
		  "   lea	TRACK687_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK687_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
      if (s->nblock_used == s->save_nblock+1) continue;
      if (k1 != s->k0) {
	__asm__("TRACK689_BEGIN: nop\n\t" 
      		"   lea	TRACK689_BEGIN, %%eax\n\t"   
      		"   lea	TRACK689_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK689_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->k0 = k1; continue;
      };
      s->state_out_len = 2;
      k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
	__asm__("TRACK691_BEGIN: nop\n\t" 
      		"   lea	TRACK691_BEGIN, %%eax\n\t"   
      		"   lea	TRACK691_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK691_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK690_BEGIN: nop\n\t" 
		  "   lea	TRACK690_BEGIN, %%eax\n\t"   
		  "   lea	TRACK690_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK690_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
      if (s->nblock_used == s->save_nblock+1) continue;
      if (k1 != s->k0) {
	__asm__("TRACK692_BEGIN: nop\n\t" 
      		"   lea	TRACK692_BEGIN, %%eax\n\t"   
      		"   lea	TRACK692_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK692_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->k0 = k1; continue;
      };
      s->state_out_len = 3;
      k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
	__asm__("TRACK694_BEGIN: nop\n\t" 
      		"   lea	TRACK694_BEGIN, %%eax\n\t"   
      		"   lea	TRACK694_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK694_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK693_BEGIN: nop\n\t" 
		  "   lea	TRACK693_BEGIN, %%eax\n\t"   
		  "   lea	TRACK693_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK693_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
      if (s->nblock_used == s->save_nblock+1) continue;
      if (k1 != s->k0) {
	__asm__("TRACK695_BEGIN: nop\n\t" 
      		"   lea	TRACK695_BEGIN, %%eax\n\t"   
      		"   lea	TRACK695_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK695_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->k0 = k1; continue;
      };
      k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
	__asm__("TRACK697_BEGIN: nop\n\t" 
      		"   lea	TRACK697_BEGIN, %%eax\n\t"   
      		"   lea	TRACK697_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK697_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK696_BEGIN: nop\n\t" 
		  "   lea	TRACK696_BEGIN, %%eax\n\t"   
		  "   lea	TRACK696_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK696_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      k1 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
      s->state_out_len = ((Int32)k1) + 4;
      s->k0 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; if (s->rNToGo == 0) {
	__asm__("TRACK699_BEGIN: nop\n\t" 
      		"   lea	TRACK699_BEGIN, %%eax\n\t"   
      		"   lea	TRACK699_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK699_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->rNToGo = BZ2_rNums[s->rTPos]; s->rTPos++; if (s->rTPos == 512)  {
          __asm__("TRACK698_BEGIN: nop\n\t" 
		  "   lea	TRACK698_BEGIN, %%eax\n\t"   
		  "   lea	TRACK698_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK698_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->rTPos = 0;
	}
      } s->rNToGo--;;
      s->k0 ^= ((s->rNToGo == 1) ? 1 : 0); s->nblock_used++;
    }
  } else {
    __asm__("TRACK708_BEGIN: nop\n\t" 
	    "   lea	TRACK708_BEGIN, %%eax\n\t"   
	    "   lea	TRACK708_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK708_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    while (((Bool)1)) {
      __asm__("TRACK707_BEGIN: nop\n\t" 
	      "   lea	TRACK707_BEGIN, %%eax\n\t"   
	      "   lea	TRACK707_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK707_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      while (((Bool)1)) {
	__asm__("TRACK703_BEGIN: nop\n\t" 
      		"   lea	TRACK703_BEGIN, %%eax\n\t"   
      		"   lea	TRACK703_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK703_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	if (s->strm->avail_out == 0) return;
	if (s->state_out_len == 0) break;
	*( (UChar*)(s->strm->next_out) ) = s->state_out_ch;
	{ s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar)s->state_out_ch)]; };
	s->state_out_len--;
	s->strm->next_out++;
	s->strm->avail_out--;
	s->strm->total_out_lo32++;
	if (s->strm->total_out_lo32 == 0)  {
          __asm__("TRACK702_BEGIN: nop\n\t" 
		  "   lea	TRACK702_BEGIN, %%eax\n\t"   
		  "   lea	TRACK702_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK702_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  s->strm->total_out_hi32++;
	}
      }
      if (s->nblock_used == s->save_nblock+1) return;
      s->state_out_len = 1;
      s->state_out_ch = s->k0;
      k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
      if (s->nblock_used == s->save_nblock+1) continue;
      if (k1 != s->k0) {
	__asm__("TRACK704_BEGIN: nop\n\t" 
      		"   lea	TRACK704_BEGIN, %%eax\n\t"   
      		"   lea	TRACK704_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK704_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->k0 = k1; continue;
      };
      s->state_out_len = 2;
      k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
      if (s->nblock_used == s->save_nblock+1) continue;
      if (k1 != s->k0) {
	__asm__("TRACK705_BEGIN: nop\n\t" 
      		"   lea	TRACK705_BEGIN, %%eax\n\t"   
      		"   lea	TRACK705_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK705_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	s->k0 = k1; continue;
      };
      s->state_out_len = 3;
      k1 = BZ2_indexIntoF ( s->tPos, s->cftab ); s->tPos = (((UInt32)s->ll16[s->tPos]) | (((((UInt32)(s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));; s->nblock_used++;
      if (s->nblock_used == s->save_nblock+1) continue;
      if (k1 != s->k0) {
	__asm__("TRACK706_BEGIN: nop\n\t" 
      		"   lea	TRACK706_BEGIN, %%eax\n\t"   
      		"   lea	TRACK706_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK706_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
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
  if (strm == ((void *)0)) return (-2);
  s = strm->state;
  if (s == ((void *)0)) return (-2);
  if (s->strm != strm) return (-2);
  while (((Bool)1)) {
    __asm__("TRACK719_BEGIN: nop\n\t" 
	    "   lea	TRACK719_BEGIN, %%eax\n\t"   
	    "   lea	TRACK719_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK719_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (s->state == 1) return (-1);
    if (s->state == 2) {
      __asm__("TRACK715_BEGIN: nop\n\t" 
	      "   lea	TRACK715_BEGIN, %%eax\n\t"   
	      "   lea	TRACK715_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK715_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (s->smallDecompress)
	{
	  __asm__("TRACK709_BEGIN: nop\n\t" 
		  "   lea	TRACK709_BEGIN, %%eax\n\t"   
		  "   lea	TRACK709_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK709_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  unRLE_obuf_to_output_SMALL ( s );
	} else
	{
	  __asm__("TRACK710_BEGIN: nop\n\t" 
		  "   lea	TRACK710_BEGIN, %%eax\n\t"   
		  "   lea	TRACK710_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK710_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  unRLE_obuf_to_output_FAST ( s );
	}
      if (s->nblock_used == s->save_nblock+1 && s->state_out_len == 0) {
	__asm__("TRACK713_BEGIN: nop\n\t" 
      		"   lea	TRACK713_BEGIN, %%eax\n\t"   
      		"   lea	TRACK713_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK713_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	{ s->calculatedBlockCRC = ~(s->calculatedBlockCRC); };
	if (s->verbosity >= 3)
	  {
	    __asm__("TRACK711_BEGIN: nop\n\t" 
		    "   lea	TRACK711_BEGIN, %%eax\n\t"   
		    "   lea	TRACK711_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK711_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    fprintf(stderr," {0x%x, 0x%x}",s->storedBlockCRC,s->calculatedBlockCRC);
	  }
	if (s->verbosity >= 2)  {
          __asm__("TRACK712_BEGIN: nop\n\t" 
		  "   lea	TRACK712_BEGIN, %%eax\n\t"   
		  "   lea	TRACK712_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK712_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fprintf(stderr,"]");
	}
	if (s->calculatedBlockCRC != s->storedBlockCRC)
	  return (-4);
	s->calculatedCombinedCRC
	  = (s->calculatedCombinedCRC << 1) |
	  (s->calculatedCombinedCRC >> 31);
	s->calculatedCombinedCRC ^= s->calculatedBlockCRC;
	s->state = 14;
      } else {
	__asm__("TRACK714_BEGIN: nop\n\t" 
      		"   lea	TRACK714_BEGIN, %%eax\n\t"   
      		"   lea	TRACK714_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK714_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	return 0;
      }
    }
    if (s->state >= 10) {
      __asm__("TRACK718_BEGIN: nop\n\t" 
	      "   lea	TRACK718_BEGIN, %%eax\n\t"   
	      "   lea	TRACK718_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK718_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      Int32 r = BZ2_decompress ( s );
      if (r == 4) {
	__asm__("TRACK717_BEGIN: nop\n\t" 
      		"   lea	TRACK717_BEGIN, %%eax\n\t"   
      		"   lea	TRACK717_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK717_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	if (s->verbosity >= 3)
	  {
	    __asm__("TRACK716_BEGIN: nop\n\t" 
		    "   lea	TRACK716_BEGIN, %%eax\n\t"   
		    "   lea	TRACK716_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK716_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    fprintf(stderr,"\n    combined CRCs: stored = 0x%x, computed = 0x%x",s->storedCombinedCRC,s->calculatedCombinedCRC);
	  }
	if (s->calculatedCombinedCRC != s->storedCombinedCRC)
	  return (-4);
	return r;
      }
      if (s->state != 2) return r;
    }
  }
  { if (!(0))  {
      __asm__("TRACK720_BEGIN: nop\n\t" 
	      "   lea	TRACK720_BEGIN, %%eax\n\t"   
	      "   lea	TRACK720_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK720_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      BZ2_bz__AssertH__fail ( 6001 );
    } };
  return 0;
}
int BZ2_bzDecompressEnd ( bz_stream *strm )
{
  DState* s;
  if (strm == ((void *)0)) return (-2);
  s = strm->state;
  if (s == ((void *)0)) return (-2);
  if (s->strm != strm) return (-2);
  if (s->tt != ((void *)0))  {
    __asm__("TRACK721_BEGIN: nop\n\t" 
	    "   lea	TRACK721_BEGIN, %%eax\n\t"   
	    "   lea	TRACK721_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK721_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    (strm->bzfree)(strm->opaque,(s->tt));
  }
  if (s->ll16 != ((void *)0))  {
    __asm__("TRACK722_BEGIN: nop\n\t" 
	    "   lea	TRACK722_BEGIN, %%eax\n\t"   
	    "   lea	TRACK722_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK722_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    (strm->bzfree)(strm->opaque,(s->ll16));
  }
  if (s->ll4 != ((void *)0))  {
    __asm__("TRACK723_BEGIN: nop\n\t" 
	    "   lea	TRACK723_BEGIN, %%eax\n\t"   
	    "   lea	TRACK723_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK723_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
  { if (bzerror != ((void *)0))  {
      __asm__("TRACK724_BEGIN: nop\n\t" 
	      "   lea	TRACK724_BEGIN, %%eax\n\t"   
	      "   lea	TRACK724_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK724_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *bzerror = 0;
    } if (bzf != ((void *)0))  {
      __asm__("TRACK725_BEGIN: nop\n\t" 
	      "   lea	TRACK725_BEGIN, %%eax\n\t"   
	      "   lea	TRACK725_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK725_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      bzf->lastErr = 0;
    } };
  if (f == ((void *)0) ||
      (blockSize100k < 1 || blockSize100k > 9) ||
      (workFactor < 0 || workFactor > 250) ||
      (verbosity < 0 || verbosity > 4))
    {
      __asm__("TRACK728_BEGIN: nop\n\t" 
	      "   lea	TRACK728_BEGIN, %%eax\n\t"   
	      "   lea	TRACK728_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK728_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK726_BEGIN: nop\n\t" 
		  "   lea	TRACK726_BEGIN, %%eax\n\t"   
		  "   lea	TRACK726_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK726_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-2);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK727_BEGIN: nop\n\t" 
		  "   lea	TRACK727_BEGIN, %%eax\n\t"   
		  "   lea	TRACK727_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK727_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-2);
	} }; return ((void *)0);
    };
  if (ferror(f))
    {
      __asm__("TRACK731_BEGIN: nop\n\t" 
	      "   lea	TRACK731_BEGIN, %%eax\n\t"   
	      "   lea	TRACK731_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK731_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK729_BEGIN: nop\n\t" 
		  "   lea	TRACK729_BEGIN, %%eax\n\t"   
		  "   lea	TRACK729_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK729_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-6);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK730_BEGIN: nop\n\t" 
		  "   lea	TRACK730_BEGIN, %%eax\n\t"   
		  "   lea	TRACK730_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK730_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-6);
	} }; return ((void *)0);
    };
  bzf = malloc ( sizeof(bzFile) );
  if (bzf == ((void *)0))
    {
      __asm__("TRACK734_BEGIN: nop\n\t" 
	      "   lea	TRACK734_BEGIN, %%eax\n\t"   
	      "   lea	TRACK734_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK734_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK732_BEGIN: nop\n\t" 
		  "   lea	TRACK732_BEGIN, %%eax\n\t"   
		  "   lea	TRACK732_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK732_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-3);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK733_BEGIN: nop\n\t" 
		  "   lea	TRACK733_BEGIN, %%eax\n\t"   
		  "   lea	TRACK733_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK733_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-3);
	} }; return ((void *)0);
    };
  { if (bzerror != ((void *)0))  {
      __asm__("TRACK735_BEGIN: nop\n\t" 
	      "   lea	TRACK735_BEGIN, %%eax\n\t"   
	      "   lea	TRACK735_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK735_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *bzerror = 0;
    } if (bzf != ((void *)0))  {
      __asm__("TRACK736_BEGIN: nop\n\t" 
	      "   lea	TRACK736_BEGIN, %%eax\n\t"   
	      "   lea	TRACK736_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK736_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK737_BEGIN: nop\n\t" 
	    "   lea	TRACK737_BEGIN, %%eax\n\t"   
	    "   lea	TRACK737_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK737_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    workFactor = 30;
  }
  ret = BZ2_bzCompressInit ( &(bzf->strm), blockSize100k,
			     verbosity, workFactor );
  if (ret != 0)
    {
      __asm__("TRACK740_BEGIN: nop\n\t" 
	      "   lea	TRACK740_BEGIN, %%eax\n\t"   
	      "   lea	TRACK740_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK740_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK738_BEGIN: nop\n\t" 
		  "   lea	TRACK738_BEGIN, %%eax\n\t"   
		  "   lea	TRACK738_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK738_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = ret;
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK739_BEGIN: nop\n\t" 
		  "   lea	TRACK739_BEGIN, %%eax\n\t"   
		  "   lea	TRACK739_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK739_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
      __asm__("TRACK741_BEGIN: nop\n\t" 
	      "   lea	TRACK741_BEGIN, %%eax\n\t"   
	      "   lea	TRACK741_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK741_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *bzerror = 0;
    } if (bzf != ((void *)0))  {
      __asm__("TRACK742_BEGIN: nop\n\t" 
	      "   lea	TRACK742_BEGIN, %%eax\n\t"   
	      "   lea	TRACK742_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK742_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      bzf->lastErr = 0;
    } };
  if (bzf == ((void *)0) || buf == ((void *)0) || len < 0)
    {
      __asm__("TRACK745_BEGIN: nop\n\t" 
	      "   lea	TRACK745_BEGIN, %%eax\n\t"   
	      "   lea	TRACK745_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK745_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK743_BEGIN: nop\n\t" 
		  "   lea	TRACK743_BEGIN, %%eax\n\t"   
		  "   lea	TRACK743_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK743_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-2);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK744_BEGIN: nop\n\t" 
		  "   lea	TRACK744_BEGIN, %%eax\n\t"   
		  "   lea	TRACK744_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK744_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-2);
	} }; return;
    };
  if (!(bzf->writing))
    {
      __asm__("TRACK748_BEGIN: nop\n\t" 
	      "   lea	TRACK748_BEGIN, %%eax\n\t"   
	      "   lea	TRACK748_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK748_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK746_BEGIN: nop\n\t" 
		  "   lea	TRACK746_BEGIN, %%eax\n\t"   
		  "   lea	TRACK746_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK746_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-1);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK747_BEGIN: nop\n\t" 
		  "   lea	TRACK747_BEGIN, %%eax\n\t"   
		  "   lea	TRACK747_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK747_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-1);
	} }; return;
    };
  if (ferror(bzf->handle))
    {
      __asm__("TRACK751_BEGIN: nop\n\t" 
	      "   lea	TRACK751_BEGIN, %%eax\n\t"   
	      "   lea	TRACK751_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK751_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK749_BEGIN: nop\n\t" 
		  "   lea	TRACK749_BEGIN, %%eax\n\t"   
		  "   lea	TRACK749_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK749_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-6);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK750_BEGIN: nop\n\t" 
		  "   lea	TRACK750_BEGIN, %%eax\n\t"   
		  "   lea	TRACK750_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK750_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-6);
	} }; return;
    };
  if (len == 0)
    {
      __asm__("TRACK754_BEGIN: nop\n\t" 
	      "   lea	TRACK754_BEGIN, %%eax\n\t"   
	      "   lea	TRACK754_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK754_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK752_BEGIN: nop\n\t" 
		  "   lea	TRACK752_BEGIN, %%eax\n\t"   
		  "   lea	TRACK752_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK752_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = 0;
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK753_BEGIN: nop\n\t" 
		  "   lea	TRACK753_BEGIN, %%eax\n\t"   
		  "   lea	TRACK753_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK753_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = 0;
	} }; return;
    };
  bzf->strm.avail_in = len;
  bzf->strm.next_in = buf;
  while (((Bool)1)) {
    __asm__("TRACK765_BEGIN: nop\n\t" 
	    "   lea	TRACK765_BEGIN, %%eax\n\t"   
	    "   lea	TRACK765_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK765_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bzf->strm.avail_out = 5000;
    bzf->strm.next_out = bzf->buf;
    ret = BZ2_bzCompress ( &(bzf->strm), 0 );
    if (ret != 1)
      {
        __asm__("TRACK757_BEGIN: nop\n\t" 
    		"   lea	TRACK757_BEGIN, %%eax\n\t"   
    		"   lea	TRACK757_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK757_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ if (bzerror != ((void *)0))  {
	    __asm__("TRACK755_BEGIN: nop\n\t" 
		    "   lea	TRACK755_BEGIN, %%eax\n\t"   
		    "   lea	TRACK755_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK755_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    *bzerror = ret;
	  } if (bzf != ((void *)0))  {
	    __asm__("TRACK756_BEGIN: nop\n\t" 
		    "   lea	TRACK756_BEGIN, %%eax\n\t"   
		    "   lea	TRACK756_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK756_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    bzf->lastErr = ret;
	  } }; return;
      };
    if (bzf->strm.avail_out < 5000) {
      __asm__("TRACK761_BEGIN: nop\n\t" 
	      "   lea	TRACK761_BEGIN, %%eax\n\t"   
	      "   lea	TRACK761_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK761_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      n = 5000 - bzf->strm.avail_out;
      n2 = fwrite ( (void*)(bzf->buf), sizeof(UChar),
		    n, bzf->handle );
      if (n != n2 || ferror(bzf->handle))
	{
          __asm__("TRACK760_BEGIN: nop\n\t" 
		  "   lea	TRACK760_BEGIN, %%eax\n\t"   
		  "   lea	TRACK760_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK760_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  { if (bzerror != ((void *)0))  {
	      __asm__("TRACK758_BEGIN: nop\n\t" 
		      "   lea	TRACK758_BEGIN, %%eax\n\t"   
		      "   lea	TRACK758_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK758_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      *bzerror = (-6);
	    } if (bzf != ((void *)0))  {
	      __asm__("TRACK759_BEGIN: nop\n\t" 
		      "   lea	TRACK759_BEGIN, %%eax\n\t"   
		      "   lea	TRACK759_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK759_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      bzf->lastErr = (-6);
	    } }; return;
	};
    }
    if (bzf->strm.avail_in == 0)
      {
        __asm__("TRACK764_BEGIN: nop\n\t" 
    		"   lea	TRACK764_BEGIN, %%eax\n\t"   
    		"   lea	TRACK764_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK764_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ if (bzerror != ((void *)0))  {
	    __asm__("TRACK762_BEGIN: nop\n\t" 
		    "   lea	TRACK762_BEGIN, %%eax\n\t"   
		    "   lea	TRACK762_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK762_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    *bzerror = 0;
	  } if (bzf != ((void *)0))  {
	    __asm__("TRACK763_BEGIN: nop\n\t" 
		    "   lea	TRACK763_BEGIN, %%eax\n\t"   
		    "   lea	TRACK763_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK763_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
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
      __asm__("TRACK768_BEGIN: nop\n\t" 
	      "   lea	TRACK768_BEGIN, %%eax\n\t"   
	      "   lea	TRACK768_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK768_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK766_BEGIN: nop\n\t" 
		  "   lea	TRACK766_BEGIN, %%eax\n\t"   
		  "   lea	TRACK766_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK766_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = 0;
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK767_BEGIN: nop\n\t" 
		  "   lea	TRACK767_BEGIN, %%eax\n\t"   
		  "   lea	TRACK767_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK767_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = 0;
	} }; return;
    };
  if (!(bzf->writing))
    {
      __asm__("TRACK771_BEGIN: nop\n\t" 
	      "   lea	TRACK771_BEGIN, %%eax\n\t"   
	      "   lea	TRACK771_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK771_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK769_BEGIN: nop\n\t" 
		  "   lea	TRACK769_BEGIN, %%eax\n\t"   
		  "   lea	TRACK769_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK769_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-1);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK770_BEGIN: nop\n\t" 
		  "   lea	TRACK770_BEGIN, %%eax\n\t"   
		  "   lea	TRACK770_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK770_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-1);
	} }; return;
    };
  if (ferror(bzf->handle))
    {
      __asm__("TRACK774_BEGIN: nop\n\t" 
	      "   lea	TRACK774_BEGIN, %%eax\n\t"   
	      "   lea	TRACK774_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK774_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK772_BEGIN: nop\n\t" 
		  "   lea	TRACK772_BEGIN, %%eax\n\t"   
		  "   lea	TRACK772_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK772_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-6);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK773_BEGIN: nop\n\t" 
		  "   lea	TRACK773_BEGIN, %%eax\n\t"   
		  "   lea	TRACK773_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK773_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-6);
	} }; return;
    };
  if (nbytes_in_lo32 != ((void *)0))  {
    __asm__("TRACK775_BEGIN: nop\n\t" 
	    "   lea	TRACK775_BEGIN, %%eax\n\t"   
	    "   lea	TRACK775_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK775_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    *nbytes_in_lo32 = 0;
  }
  if (nbytes_in_hi32 != ((void *)0))  {
    __asm__("TRACK776_BEGIN: nop\n\t" 
	    "   lea	TRACK776_BEGIN, %%eax\n\t"   
	    "   lea	TRACK776_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK776_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    *nbytes_in_hi32 = 0;
  }
  if (nbytes_out_lo32 != ((void *)0))  {
    __asm__("TRACK777_BEGIN: nop\n\t" 
	    "   lea	TRACK777_BEGIN, %%eax\n\t"   
	    "   lea	TRACK777_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK777_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    *nbytes_out_lo32 = 0;
  }
  if (nbytes_out_hi32 != ((void *)0))  {
    __asm__("TRACK778_BEGIN: nop\n\t" 
	    "   lea	TRACK778_BEGIN, %%eax\n\t"   
	    "   lea	TRACK778_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK778_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    *nbytes_out_hi32 = 0;
  }
  if ((!abandon) && bzf->lastErr == 0) {
    __asm__("TRACK787_BEGIN: nop\n\t" 
	    "   lea	TRACK787_BEGIN, %%eax\n\t"   
	    "   lea	TRACK787_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK787_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    while (((Bool)1)) {
      __asm__("TRACK786_BEGIN: nop\n\t" 
	      "   lea	TRACK786_BEGIN, %%eax\n\t"   
	      "   lea	TRACK786_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK786_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      bzf->strm.avail_out = 5000;
      bzf->strm.next_out = bzf->buf;
      ret = BZ2_bzCompress ( &(bzf->strm), 2 );
      if (ret != 3 && ret != 4)
	{
          __asm__("TRACK781_BEGIN: nop\n\t" 
		  "   lea	TRACK781_BEGIN, %%eax\n\t"   
		  "   lea	TRACK781_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK781_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  { if (bzerror != ((void *)0))  {
	      __asm__("TRACK779_BEGIN: nop\n\t" 
		      "   lea	TRACK779_BEGIN, %%eax\n\t"   
		      "   lea	TRACK779_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK779_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      *bzerror = ret;
	    } if (bzf != ((void *)0))  {
	      __asm__("TRACK780_BEGIN: nop\n\t" 
		      "   lea	TRACK780_BEGIN, %%eax\n\t"   
		      "   lea	TRACK780_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK780_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      bzf->lastErr = ret;
	    } }; return;
	};
      if (bzf->strm.avail_out < 5000) {
	__asm__("TRACK785_BEGIN: nop\n\t" 
      		"   lea	TRACK785_BEGIN, %%eax\n\t"   
      		"   lea	TRACK785_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK785_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	n = 5000 - bzf->strm.avail_out;
	n2 = fwrite ( (void*)(bzf->buf), sizeof(UChar),
		      n, bzf->handle );
	if (n != n2 || ferror(bzf->handle))
	  {
            __asm__("TRACK784_BEGIN: nop\n\t" 
		    "   lea	TRACK784_BEGIN, %%eax\n\t"   
		    "   lea	TRACK784_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK784_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    { if (bzerror != ((void *)0))  {
		__asm__("TRACK782_BEGIN: nop\n\t" 
        		"   lea	TRACK782_BEGIN, %%eax\n\t"   
        		"   lea	TRACK782_END, %%ecx\n\t" 
        		"   mov	%%eax, (%%esp)\n\t" 
        		"   mov    %%ecx, 4(%%esp)\n\t" 
        		" calll track\n\t" 
        		"TRACK782_END: nop\n\t" 
        		: 
        		: 
        		: "eax", "ecx", "esp");
		*bzerror = (-6);
	      } if (bzf != ((void *)0))  {
		__asm__("TRACK783_BEGIN: nop\n\t" 
        		"   lea	TRACK783_BEGIN, %%eax\n\t"   
        		"   lea	TRACK783_END, %%ecx\n\t" 
        		"   mov	%%eax, (%%esp)\n\t" 
        		"   mov    %%ecx, 4(%%esp)\n\t" 
        		" calll track\n\t" 
        		"TRACK783_END: nop\n\t" 
        		: 
        		: 
        		: "eax", "ecx", "esp");
		bzf->lastErr = (-6);
	      } }; return;
	  };
      }
      if (ret == 4) break;
    }
  }
  if ( !abandon && !ferror ( bzf->handle ) ) {
    __asm__("TRACK791_BEGIN: nop\n\t" 
	    "   lea	TRACK791_BEGIN, %%eax\n\t"   
	    "   lea	TRACK791_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK791_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fflush ( bzf->handle );
    if (ferror(bzf->handle))
      {
        __asm__("TRACK790_BEGIN: nop\n\t" 
    		"   lea	TRACK790_BEGIN, %%eax\n\t"   
    		"   lea	TRACK790_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK790_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ if (bzerror != ((void *)0))  {
	    __asm__("TRACK788_BEGIN: nop\n\t" 
		    "   lea	TRACK788_BEGIN, %%eax\n\t"   
		    "   lea	TRACK788_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK788_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    *bzerror = (-6);
	  } if (bzf != ((void *)0))  {
	    __asm__("TRACK789_BEGIN: nop\n\t" 
		    "   lea	TRACK789_BEGIN, %%eax\n\t"   
		    "   lea	TRACK789_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK789_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    bzf->lastErr = (-6);
	  } }; return;
      };
  }
  if (nbytes_in_lo32 != ((void *)0))
    {
      __asm__("TRACK792_BEGIN: nop\n\t" 
	      "   lea	TRACK792_BEGIN, %%eax\n\t"   
	      "   lea	TRACK792_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK792_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *nbytes_in_lo32 = bzf->strm.total_in_lo32;
    }
  if (nbytes_in_hi32 != ((void *)0))
    {
      __asm__("TRACK793_BEGIN: nop\n\t" 
	      "   lea	TRACK793_BEGIN, %%eax\n\t"   
	      "   lea	TRACK793_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK793_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *nbytes_in_hi32 = bzf->strm.total_in_hi32;
    }
  if (nbytes_out_lo32 != ((void *)0))
    {
      __asm__("TRACK794_BEGIN: nop\n\t" 
	      "   lea	TRACK794_BEGIN, %%eax\n\t"   
	      "   lea	TRACK794_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK794_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *nbytes_out_lo32 = bzf->strm.total_out_lo32;
    }
  if (nbytes_out_hi32 != ((void *)0))
    {
      __asm__("TRACK795_BEGIN: nop\n\t" 
	      "   lea	TRACK795_BEGIN, %%eax\n\t"   
	      "   lea	TRACK795_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK795_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *nbytes_out_hi32 = bzf->strm.total_out_hi32;
    }
  { if (bzerror != ((void *)0))  {
      __asm__("TRACK796_BEGIN: nop\n\t" 
	      "   lea	TRACK796_BEGIN, %%eax\n\t"   
	      "   lea	TRACK796_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK796_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *bzerror = 0;
    } if (bzf != ((void *)0))  {
      __asm__("TRACK797_BEGIN: nop\n\t" 
	      "   lea	TRACK797_BEGIN, %%eax\n\t"   
	      "   lea	TRACK797_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK797_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK798_BEGIN: nop\n\t" 
	      "   lea	TRACK798_BEGIN, %%eax\n\t"   
	      "   lea	TRACK798_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK798_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *bzerror = 0;
    } if (bzf != ((void *)0))  {
      __asm__("TRACK799_BEGIN: nop\n\t" 
	      "   lea	TRACK799_BEGIN, %%eax\n\t"   
	      "   lea	TRACK799_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK799_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      bzf->lastErr = 0;
    } };
  if (f == ((void *)0) ||
      (small != 0 && small != 1) ||
      (verbosity < 0 || verbosity > 4) ||
      (unused == ((void *)0) && nUnused != 0) ||
      (unused != ((void *)0) && (nUnused < 0 || nUnused > 5000)))
    {
      __asm__("TRACK802_BEGIN: nop\n\t" 
	      "   lea	TRACK802_BEGIN, %%eax\n\t"   
	      "   lea	TRACK802_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK802_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK800_BEGIN: nop\n\t" 
		  "   lea	TRACK800_BEGIN, %%eax\n\t"   
		  "   lea	TRACK800_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK800_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-2);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK801_BEGIN: nop\n\t" 
		  "   lea	TRACK801_BEGIN, %%eax\n\t"   
		  "   lea	TRACK801_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK801_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-2);
	} }; return ((void *)0);
    };
  if (ferror(f))
    {
      __asm__("TRACK805_BEGIN: nop\n\t" 
	      "   lea	TRACK805_BEGIN, %%eax\n\t"   
	      "   lea	TRACK805_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK805_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK803_BEGIN: nop\n\t" 
		  "   lea	TRACK803_BEGIN, %%eax\n\t"   
		  "   lea	TRACK803_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK803_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-6);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK804_BEGIN: nop\n\t" 
		  "   lea	TRACK804_BEGIN, %%eax\n\t"   
		  "   lea	TRACK804_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK804_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-6);
	} }; return ((void *)0);
    };
  bzf = malloc ( sizeof(bzFile) );
  if (bzf == ((void *)0))
    {
      __asm__("TRACK808_BEGIN: nop\n\t" 
	      "   lea	TRACK808_BEGIN, %%eax\n\t"   
	      "   lea	TRACK808_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK808_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK806_BEGIN: nop\n\t" 
		  "   lea	TRACK806_BEGIN, %%eax\n\t"   
		  "   lea	TRACK806_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK806_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-3);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK807_BEGIN: nop\n\t" 
		  "   lea	TRACK807_BEGIN, %%eax\n\t"   
		  "   lea	TRACK807_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK807_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-3);
	} }; return ((void *)0);
    };
  { if (bzerror != ((void *)0))  {
      __asm__("TRACK809_BEGIN: nop\n\t" 
	      "   lea	TRACK809_BEGIN, %%eax\n\t"   
	      "   lea	TRACK809_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK809_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *bzerror = 0;
    } if (bzf != ((void *)0))  {
      __asm__("TRACK810_BEGIN: nop\n\t" 
	      "   lea	TRACK810_BEGIN, %%eax\n\t"   
	      "   lea	TRACK810_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK810_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK811_BEGIN: nop\n\t" 
	    "   lea	TRACK811_BEGIN, %%eax\n\t"   
	    "   lea	TRACK811_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK811_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bzf->buf[bzf->bufN] = *((UChar*)(unused)); bzf->bufN++;
    unused = ((void*)( 1 + ((UChar*)(unused)) ));
    nUnused--;
  }
  ret = BZ2_bzDecompressInit ( &(bzf->strm), verbosity, small );
  if (ret != 0)
    {
      __asm__("TRACK814_BEGIN: nop\n\t" 
	      "   lea	TRACK814_BEGIN, %%eax\n\t"   
	      "   lea	TRACK814_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK814_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK812_BEGIN: nop\n\t" 
		  "   lea	TRACK812_BEGIN, %%eax\n\t"   
		  "   lea	TRACK812_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK812_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = ret;
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK813_BEGIN: nop\n\t" 
		  "   lea	TRACK813_BEGIN, %%eax\n\t"   
		  "   lea	TRACK813_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK813_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
      __asm__("TRACK815_BEGIN: nop\n\t" 
	      "   lea	TRACK815_BEGIN, %%eax\n\t"   
	      "   lea	TRACK815_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK815_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *bzerror = 0;
    } if (bzf != ((void *)0))  {
      __asm__("TRACK816_BEGIN: nop\n\t" 
	      "   lea	TRACK816_BEGIN, %%eax\n\t"   
	      "   lea	TRACK816_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK816_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      bzf->lastErr = 0;
    } };
  if (bzf == ((void *)0))
    {
      __asm__("TRACK819_BEGIN: nop\n\t" 
	      "   lea	TRACK819_BEGIN, %%eax\n\t"   
	      "   lea	TRACK819_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK819_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK817_BEGIN: nop\n\t" 
		  "   lea	TRACK817_BEGIN, %%eax\n\t"   
		  "   lea	TRACK817_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK817_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = 0;
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK818_BEGIN: nop\n\t" 
		  "   lea	TRACK818_BEGIN, %%eax\n\t"   
		  "   lea	TRACK818_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK818_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = 0;
	} }; return;
    };
  if (bzf->writing)
    {
      __asm__("TRACK822_BEGIN: nop\n\t" 
	      "   lea	TRACK822_BEGIN, %%eax\n\t"   
	      "   lea	TRACK822_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK822_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK820_BEGIN: nop\n\t" 
		  "   lea	TRACK820_BEGIN, %%eax\n\t"   
		  "   lea	TRACK820_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK820_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-1);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK821_BEGIN: nop\n\t" 
		  "   lea	TRACK821_BEGIN, %%eax\n\t"   
		  "   lea	TRACK821_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK821_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-1);
	} }; return;
    };
  if (bzf->initialisedOk)
    {
      __asm__("TRACK823_BEGIN: nop\n\t" 
	      "   lea	TRACK823_BEGIN, %%eax\n\t"   
	      "   lea	TRACK823_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK823_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK824_BEGIN: nop\n\t" 
	      "   lea	TRACK824_BEGIN, %%eax\n\t"   
	      "   lea	TRACK824_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK824_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *bzerror = 0;
    } if (bzf != ((void *)0))  {
      __asm__("TRACK825_BEGIN: nop\n\t" 
	      "   lea	TRACK825_BEGIN, %%eax\n\t"   
	      "   lea	TRACK825_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK825_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      bzf->lastErr = 0;
    } };
  if (bzf == ((void *)0) || buf == ((void *)0) || len < 0)
    {
      __asm__("TRACK828_BEGIN: nop\n\t" 
	      "   lea	TRACK828_BEGIN, %%eax\n\t"   
	      "   lea	TRACK828_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK828_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK826_BEGIN: nop\n\t" 
		  "   lea	TRACK826_BEGIN, %%eax\n\t"   
		  "   lea	TRACK826_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK826_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-2);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK827_BEGIN: nop\n\t" 
		  "   lea	TRACK827_BEGIN, %%eax\n\t"   
		  "   lea	TRACK827_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK827_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-2);
	} }; return 0;
    };
  if (bzf->writing)
    {
      __asm__("TRACK831_BEGIN: nop\n\t" 
	      "   lea	TRACK831_BEGIN, %%eax\n\t"   
	      "   lea	TRACK831_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK831_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK829_BEGIN: nop\n\t" 
		  "   lea	TRACK829_BEGIN, %%eax\n\t"   
		  "   lea	TRACK829_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK829_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-1);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK830_BEGIN: nop\n\t" 
		  "   lea	TRACK830_BEGIN, %%eax\n\t"   
		  "   lea	TRACK830_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK830_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-1);
	} }; return 0;
    };
  if (len == 0)
    {
      __asm__("TRACK834_BEGIN: nop\n\t" 
	      "   lea	TRACK834_BEGIN, %%eax\n\t"   
	      "   lea	TRACK834_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK834_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK832_BEGIN: nop\n\t" 
		  "   lea	TRACK832_BEGIN, %%eax\n\t"   
		  "   lea	TRACK832_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK832_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = 0;
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK833_BEGIN: nop\n\t" 
		  "   lea	TRACK833_BEGIN, %%eax\n\t"   
		  "   lea	TRACK833_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK833_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = 0;
	} }; return 0;
    };
  bzf->strm.avail_out = len;
  bzf->strm.next_out = buf;
  while (((Bool)1)) {
    __asm__("TRACK854_BEGIN: nop\n\t" 
	    "   lea	TRACK854_BEGIN, %%eax\n\t"   
	    "   lea	TRACK854_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK854_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (ferror(bzf->handle))
      {
        __asm__("TRACK837_BEGIN: nop\n\t" 
    		"   lea	TRACK837_BEGIN, %%eax\n\t"   
    		"   lea	TRACK837_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK837_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ if (bzerror != ((void *)0))  {
	    __asm__("TRACK835_BEGIN: nop\n\t" 
		    "   lea	TRACK835_BEGIN, %%eax\n\t"   
		    "   lea	TRACK835_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK835_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    *bzerror = (-6);
	  } if (bzf != ((void *)0))  {
	    __asm__("TRACK836_BEGIN: nop\n\t" 
		    "   lea	TRACK836_BEGIN, %%eax\n\t"   
		    "   lea	TRACK836_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK836_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    bzf->lastErr = (-6);
	  } }; return 0;
      };
    if (bzf->strm.avail_in == 0 && !myfeof(bzf->handle)) {
      __asm__("TRACK841_BEGIN: nop\n\t" 
	      "   lea	TRACK841_BEGIN, %%eax\n\t"   
	      "   lea	TRACK841_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK841_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      n = fread ( bzf->buf, sizeof(UChar),
		  5000, bzf->handle );
      if (ferror(bzf->handle))
	{
          __asm__("TRACK840_BEGIN: nop\n\t" 
		  "   lea	TRACK840_BEGIN, %%eax\n\t"   
		  "   lea	TRACK840_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK840_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  { if (bzerror != ((void *)0))  {
	      __asm__("TRACK838_BEGIN: nop\n\t" 
		      "   lea	TRACK838_BEGIN, %%eax\n\t"   
		      "   lea	TRACK838_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK838_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      *bzerror = (-6);
	    } if (bzf != ((void *)0))  {
	      __asm__("TRACK839_BEGIN: nop\n\t" 
		      "   lea	TRACK839_BEGIN, %%eax\n\t"   
		      "   lea	TRACK839_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK839_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
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
        __asm__("TRACK844_BEGIN: nop\n\t" 
    		"   lea	TRACK844_BEGIN, %%eax\n\t"   
    		"   lea	TRACK844_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK844_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ if (bzerror != ((void *)0))  {
	    __asm__("TRACK842_BEGIN: nop\n\t" 
		    "   lea	TRACK842_BEGIN, %%eax\n\t"   
		    "   lea	TRACK842_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK842_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    *bzerror = ret;
	  } if (bzf != ((void *)0))  {
	    __asm__("TRACK843_BEGIN: nop\n\t" 
		    "   lea	TRACK843_BEGIN, %%eax\n\t"   
		    "   lea	TRACK843_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK843_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    bzf->lastErr = ret;
	  } }; return 0;
      };
    if (ret == 0 && myfeof(bzf->handle) &&
	bzf->strm.avail_in == 0 && bzf->strm.avail_out > 0)
      {
        __asm__("TRACK847_BEGIN: nop\n\t" 
    		"   lea	TRACK847_BEGIN, %%eax\n\t"   
    		"   lea	TRACK847_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK847_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ if (bzerror != ((void *)0))  {
	    __asm__("TRACK845_BEGIN: nop\n\t" 
		    "   lea	TRACK845_BEGIN, %%eax\n\t"   
		    "   lea	TRACK845_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK845_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    *bzerror = (-7);
	  } if (bzf != ((void *)0))  {
	    __asm__("TRACK846_BEGIN: nop\n\t" 
		    "   lea	TRACK846_BEGIN, %%eax\n\t"   
		    "   lea	TRACK846_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK846_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    bzf->lastErr = (-7);
	  } }; return 0;
      };
    if (ret == 4)
      {
        __asm__("TRACK850_BEGIN: nop\n\t" 
    		"   lea	TRACK850_BEGIN, %%eax\n\t"   
    		"   lea	TRACK850_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK850_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ if (bzerror != ((void *)0))  {
	    __asm__("TRACK848_BEGIN: nop\n\t" 
		    "   lea	TRACK848_BEGIN, %%eax\n\t"   
		    "   lea	TRACK848_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK848_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    *bzerror = 4;
	  } if (bzf != ((void *)0))  {
	    __asm__("TRACK849_BEGIN: nop\n\t" 
		    "   lea	TRACK849_BEGIN, %%eax\n\t"   
		    "   lea	TRACK849_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK849_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    bzf->lastErr = 4;
	  } };
	return len - bzf->strm.avail_out;
      };
    if (bzf->strm.avail_out == 0)
      {
        __asm__("TRACK853_BEGIN: nop\n\t" 
    		"   lea	TRACK853_BEGIN, %%eax\n\t"   
    		"   lea	TRACK853_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK853_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	{ if (bzerror != ((void *)0))  {
	    __asm__("TRACK851_BEGIN: nop\n\t" 
		    "   lea	TRACK851_BEGIN, %%eax\n\t"   
		    "   lea	TRACK851_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK851_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    *bzerror = 0;
	  } if (bzf != ((void *)0))  {
	    __asm__("TRACK852_BEGIN: nop\n\t" 
		    "   lea	TRACK852_BEGIN, %%eax\n\t"   
		    "   lea	TRACK852_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK852_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
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
      __asm__("TRACK857_BEGIN: nop\n\t" 
	      "   lea	TRACK857_BEGIN, %%eax\n\t"   
	      "   lea	TRACK857_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK857_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK855_BEGIN: nop\n\t" 
		  "   lea	TRACK855_BEGIN, %%eax\n\t"   
		  "   lea	TRACK855_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK855_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-2);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK856_BEGIN: nop\n\t" 
		  "   lea	TRACK856_BEGIN, %%eax\n\t"   
		  "   lea	TRACK856_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK856_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-2);
	} }; return;
    };
  if (bzf->lastErr != 4)
    {
      __asm__("TRACK860_BEGIN: nop\n\t" 
	      "   lea	TRACK860_BEGIN, %%eax\n\t"   
	      "   lea	TRACK860_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK860_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK858_BEGIN: nop\n\t" 
		  "   lea	TRACK858_BEGIN, %%eax\n\t"   
		  "   lea	TRACK858_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK858_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-1);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK859_BEGIN: nop\n\t" 
		  "   lea	TRACK859_BEGIN, %%eax\n\t"   
		  "   lea	TRACK859_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK859_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-1);
	} }; return;
    };
  if (unused == ((void *)0) || nUnused == ((void *)0))
    {
      __asm__("TRACK863_BEGIN: nop\n\t" 
	      "   lea	TRACK863_BEGIN, %%eax\n\t"   
	      "   lea	TRACK863_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK863_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      { if (bzerror != ((void *)0))  {
	  __asm__("TRACK861_BEGIN: nop\n\t" 
		  "   lea	TRACK861_BEGIN, %%eax\n\t"   
		  "   lea	TRACK861_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK861_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  *bzerror = (-2);
	} if (bzf != ((void *)0))  {
	  __asm__("TRACK862_BEGIN: nop\n\t" 
		  "   lea	TRACK862_BEGIN, %%eax\n\t"   
		  "   lea	TRACK862_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK862_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  bzf->lastErr = (-2);
	} }; return;
    };
  { if (bzerror != ((void *)0))  {
      __asm__("TRACK864_BEGIN: nop\n\t" 
	      "   lea	TRACK864_BEGIN, %%eax\n\t"   
	      "   lea	TRACK864_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK864_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      *bzerror = 0;
    } if (bzf != ((void *)0))  {
      __asm__("TRACK865_BEGIN: nop\n\t" 
	      "   lea	TRACK865_BEGIN, %%eax\n\t"   
	      "   lea	TRACK865_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK865_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    return (-2);
  if (workFactor == 0)  {
    __asm__("TRACK866_BEGIN: nop\n\t" 
	    "   lea	TRACK866_BEGIN, %%eax\n\t"   
	    "   lea	TRACK866_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK866_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    workFactor = 30;
  }
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
    __asm__("TRACK867_BEGIN: nop\n\t" 
	    "   lea	TRACK867_BEGIN, %%eax\n\t"   
	    "   lea	TRACK867_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK867_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    BZ2_bzDecompressEnd ( &strm );
    return (-7);
  } else {
    __asm__("TRACK868_BEGIN: nop\n\t" 
	    "   lea	TRACK868_BEGIN, %%eax\n\t"   
	    "   lea	TRACK868_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK868_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK874_BEGIN: nop\n\t" 
	    "   lea	TRACK874_BEGIN, %%eax\n\t"   
	    "   lea	TRACK874_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK874_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    switch (*mode) {
         
    case 'r':
      __asm__("TRACK869_BEGIN: nop\n\t" 
	      "   lea	TRACK869_BEGIN, %%eax\n\t"   
	      "   lea	TRACK869_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK869_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      writing = 0; break;
         
    case 'w':
      __asm__("TRACK870_BEGIN: nop\n\t" 
	      "   lea	TRACK870_BEGIN, %%eax\n\t"   
	      "   lea	TRACK870_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK870_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      writing = 1; break;
         
    case 's':
      __asm__("TRACK871_BEGIN: nop\n\t" 
	      "   lea	TRACK871_BEGIN, %%eax\n\t"   
	      "   lea	TRACK871_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK871_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      smallMode = 1; break;
         
    default:
      __asm__("TRACK873_BEGIN: nop\n\t" 
	      "   lea	TRACK873_BEGIN, %%eax\n\t"   
	      "   lea	TRACK873_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK873_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (((*__ctype_b_loc ())[(int) (((int)(*mode)))] & (unsigned short int) _ISdigit)) {
	__asm__("TRACK872_BEGIN: nop\n\t" 
		"   lea	TRACK872_BEGIN, %%eax\n\t"   
		"   lea	TRACK872_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK872_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	blockSize100k = *mode-0x30;
      }
    }
    mode++;
  }
  strcat(mode2, writing ? "w" : "r" );
  strcat(mode2,"b");
  if (open_mode==0) {
    __asm__("TRACK877_BEGIN: nop\n\t" 
	    "   lea	TRACK877_BEGIN, %%eax\n\t"   
	    "   lea	TRACK877_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK877_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (path==((void *)0) || strcmp(path,"")==0) {
      __asm__("TRACK875_BEGIN: nop\n\t" 
	      "   lea	TRACK875_BEGIN, %%eax\n\t"   
	      "   lea	TRACK875_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK875_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fp = (writing ? stdout : stdin);
    } else {
      __asm__("TRACK876_BEGIN: nop\n\t" 
	      "   lea	TRACK876_BEGIN, %%eax\n\t"   
	      "   lea	TRACK876_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK876_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fp = fopen(path,mode2);
    }
  } else {
    __asm__("TRACK878_BEGIN: nop\n\t" 
	    "   lea	TRACK878_BEGIN, %%eax\n\t"   
	    "   lea	TRACK878_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK878_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fp = fdopen(fd,mode2);
  }
  if (fp == ((void *)0)) return ((void *)0);
  if (writing) {
    __asm__("TRACK881_BEGIN: nop\n\t" 
	    "   lea	TRACK881_BEGIN, %%eax\n\t"   
	    "   lea	TRACK881_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK881_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (blockSize100k < 1)  {
      __asm__("TRACK879_BEGIN: nop\n\t" 
	      "   lea	TRACK879_BEGIN, %%eax\n\t"   
	      "   lea	TRACK879_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK879_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      blockSize100k = 1;
    }
    if (blockSize100k > 9)  {
      __asm__("TRACK880_BEGIN: nop\n\t" 
	      "   lea	TRACK880_BEGIN, %%eax\n\t"   
	      "   lea	TRACK880_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK880_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      blockSize100k = 9;
    }
    bzfp = BZ2_bzWriteOpen(&bzerr,fp,blockSize100k,
			   verbosity,workFactor);
  } else {
    __asm__("TRACK882_BEGIN: nop\n\t" 
	    "   lea	TRACK882_BEGIN, %%eax\n\t"   
	    "   lea	TRACK882_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK882_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bzfp = BZ2_bzReadOpen(&bzerr,fp,verbosity,smallMode,
			  unused,nUnused);
  }
  if (bzfp == ((void *)0)) {
    __asm__("TRACK884_BEGIN: nop\n\t" 
	    "   lea	TRACK884_BEGIN, %%eax\n\t"   
	    "   lea	TRACK884_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK884_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (fp != stdin && fp != stdout)  {
      __asm__("TRACK883_BEGIN: nop\n\t" 
	      "   lea	TRACK883_BEGIN, %%eax\n\t"   
	      "   lea	TRACK883_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK883_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
  if (((bzFile*)b)->lastErr == 4) return 0;
  nread = BZ2_bzRead(&bzerr,b,buf,len);
  if (bzerr == 0 || bzerr == 4) {
    __asm__("TRACK885_BEGIN: nop\n\t" 
	    "   lea	TRACK885_BEGIN, %%eax\n\t"   
	    "   lea	TRACK885_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK885_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    return nread;
  } else {
    __asm__("TRACK886_BEGIN: nop\n\t" 
	    "   lea	TRACK886_BEGIN, %%eax\n\t"   
	    "   lea	TRACK886_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK886_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    return -1;
  }
}
int BZ2_bzwrite (BZFILE* b, void* buf, int len )
{
  int bzerr;
  BZ2_bzWrite(&bzerr,b,buf,len);
  if(bzerr == 0){
    __asm__("TRACK887_BEGIN: nop\n\t" 
	    "   lea	TRACK887_BEGIN, %%eax\n\t"   
	    "   lea	TRACK887_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK887_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    return len;
  }else{
    __asm__("TRACK888_BEGIN: nop\n\t" 
	    "   lea	TRACK888_BEGIN, %%eax\n\t"   
	    "   lea	TRACK888_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK888_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK889_BEGIN: nop\n\t" 
	    "   lea	TRACK889_BEGIN, %%eax\n\t"   
	    "   lea	TRACK889_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK889_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    return;
  }
  if(((bzFile*)b)->writing){
    __asm__("TRACK891_BEGIN: nop\n\t" 
	    "   lea	TRACK891_BEGIN, %%eax\n\t"   
	    "   lea	TRACK891_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK891_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    BZ2_bzWriteClose(&bzerr,b,0,((void *)0),((void *)0));
    if(bzerr != 0){
      __asm__("TRACK890_BEGIN: nop\n\t" 
	      "   lea	TRACK890_BEGIN, %%eax\n\t"   
	      "   lea	TRACK890_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK890_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      BZ2_bzWriteClose(((void *)0),b,1,((void *)0),((void *)0));
    }
  }else{
    __asm__("TRACK892_BEGIN: nop\n\t" 
	    "   lea	TRACK892_BEGIN, %%eax\n\t"   
	    "   lea	TRACK892_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK892_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    BZ2_bzReadClose(&bzerr,b);
  }
  if(fp!=stdin && fp!=stdout){
    __asm__("TRACK893_BEGIN: nop\n\t" 
	    "   lea	TRACK893_BEGIN, %%eax\n\t"   
	    "   lea	TRACK893_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK893_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK894_BEGIN: nop\n\t" 
	    "   lea	TRACK894_BEGIN, %%eax\n\t"   
	    "   lea	TRACK894_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK894_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK895_BEGIN: nop\n\t" 
	    "   lea	TRACK895_BEGIN, %%eax\n\t"   
	    "   lea	TRACK895_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK895_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
      __asm__("TRACK896_BEGIN: nop\n\t" 
	      "   lea	TRACK896_BEGIN, %%eax\n\t"   
	      "   lea	TRACK896_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK896_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (n->b[i] != 0) return 0;
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
    __asm__("TRACK897_BEGIN: nop\n\t" 
	    "   lea	TRACK897_BEGIN, %%eax\n\t"   
	    "   lea	TRACK897_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK897_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK898_BEGIN: nop\n\t" 
	    "   lea	TRACK898_BEGIN, %%eax\n\t"   
	    "   lea	TRACK898_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK898_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    q = uInt64_qrm10 ( &n_copy );
    buf[nBuf] = q + '0';
    nBuf++;
  } while (!uInt64_isZero(&n_copy));
  outbuf[nBuf] = 0;
  for (i = 0; i < nBuf; i++)
    {
      __asm__("TRACK899_BEGIN: nop\n\t" 
	      "   lea	TRACK899_BEGIN, %%eax\n\t"   
	      "   lea	TRACK899_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK899_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
  if (ferror(stream)) goto errhandler_io;
  if (ferror(zStream)) goto errhandler_io;
  bzf = BZ2_bzWriteOpen ( &bzerr, zStream,
			  blockSize100k, verbosity, workFactor );
  if (bzerr != 0) goto errhandler;
  if (verbosity >= 2)  {
    __asm__("TRACK900_BEGIN: nop\n\t" 
	    "   lea	TRACK900_BEGIN, %%eax\n\t"   
	    "   lea	TRACK900_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK900_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "\n" );
  }
  while (((Bool)1)) {
    __asm__("TRACK902_BEGIN: nop\n\t" 
	    "   lea	TRACK902_BEGIN, %%eax\n\t"   
	    "   lea	TRACK902_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK902_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (myfeof(stream)) break;
    nIbuf = fread ( ibuf, sizeof(UChar), 5000, stream );
    if (ferror(stream)) goto errhandler_io;
    if (nIbuf > 0)  {
      __asm__("TRACK901_BEGIN: nop\n\t" 
	      "   lea	TRACK901_BEGIN, %%eax\n\t"   
	      "   lea	TRACK901_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK901_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      BZ2_bzWrite ( &bzerr, bzf, (void*)ibuf, nIbuf );
    }
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
    __asm__("TRACK903_BEGIN: nop\n\t" 
	    "   lea	TRACK903_BEGIN, %%eax\n\t"   
	    "   lea	TRACK903_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK903_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    ret = fclose ( zStream );
    outputHandleJustInCase = ((void *)0);
    if (ret == (-1)) goto errhandler_io;
  }
  outputHandleJustInCase = ((void *)0);
  if (ferror(stream)) goto errhandler_io;
  ret = fclose ( stream );
  if (ret == (-1)) goto errhandler_io;
  if (verbosity >= 1) {
    __asm__("TRACK906_BEGIN: nop\n\t" 
	    "   lea	TRACK906_BEGIN, %%eax\n\t"   
	    "   lea	TRACK906_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK906_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (nbytes_in_lo32 == 0 && nbytes_in_hi32 == 0) {
      __asm__("TRACK904_BEGIN: nop\n\t" 
	      "   lea	TRACK904_BEGIN, %%eax\n\t"   
	      "   lea	TRACK904_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK904_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, " no data compressed.\n");
    } else {
      __asm__("TRACK905_BEGIN: nop\n\t" 
	      "   lea	TRACK905_BEGIN, %%eax\n\t"   
	      "   lea	TRACK905_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK905_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK907_BEGIN: nop\n\t" 
	    "   lea	TRACK907_BEGIN, %%eax\n\t"   
	    "   lea	TRACK907_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK907_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    configError(); break;
       
  case (-3):
    __asm__("TRACK908_BEGIN: nop\n\t" 
	    "   lea	TRACK908_BEGIN, %%eax\n\t"   
	    "   lea	TRACK908_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK908_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    outOfMemory (); break;
       
  case (-6):
    __asm__("TRACK910_BEGIN: nop\n\t" 
	    "   lea	TRACK910_BEGIN, %%eax\n\t"   
	    "   lea	TRACK910_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK910_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
  errhandler_io:
    {
      __asm__("TRACK909_BEGIN: nop\n\t" 
	      "   lea	TRACK909_BEGIN, %%eax\n\t"   
	      "   lea	TRACK909_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK909_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      ioError();
    } break;
       
  default:
    __asm__("TRACK911_BEGIN: nop\n\t" 
	    "   lea	TRACK911_BEGIN, %%eax\n\t"   
	    "   lea	TRACK911_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK911_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK917_BEGIN: nop\n\t" 
	    "   lea	TRACK917_BEGIN, %%eax\n\t"   
	    "   lea	TRACK917_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK917_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bzf = BZ2_bzReadOpen (
			  &bzerr, zStream, verbosity,
			  (int)smallMode, unused, nUnused
			  );
    if (bzf == ((void *)0) || bzerr != 0) goto errhandler;
    streamNo++;
    while (bzerr == 0) {
      __asm__("TRACK913_BEGIN: nop\n\t" 
	      "   lea	TRACK913_BEGIN, %%eax\n\t"   
	      "   lea	TRACK913_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK913_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      nread = BZ2_bzRead ( &bzerr, bzf, obuf, 5000 );
      if (bzerr == (-5)) goto trycat;
      if ((bzerr == 0 || bzerr == 4) && nread > 0)
	{
	  __asm__("TRACK912_BEGIN: nop\n\t" 
		  "   lea	TRACK912_BEGIN, %%eax\n\t"   
		  "   lea	TRACK912_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK912_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fwrite ( obuf, sizeof(UChar), nread, stream );
	}
      if (ferror(stream)) goto errhandler_io;
    }
    if (bzerr != 4) goto errhandler;
    BZ2_bzReadGetUnused ( &bzerr, bzf, (void**)(&unusedTmp), &nUnused );
    if (bzerr != 0)  {
      __asm__("TRACK914_BEGIN: nop\n\t" 
	      "   lea	TRACK914_BEGIN, %%eax\n\t"   
	      "   lea	TRACK914_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK914_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      panic ( "decompress:bzReadGetUnused" );
    }
    for (i = 0; i < nUnused; i++)  {
      __asm__("TRACK915_BEGIN: nop\n\t" 
	      "   lea	TRACK915_BEGIN, %%eax\n\t"   
	      "   lea	TRACK915_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK915_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      unused[i] = unusedTmp[i];
    }
    BZ2_bzReadClose ( &bzerr, bzf );
    if (bzerr != 0)  {
      __asm__("TRACK916_BEGIN: nop\n\t" 
	      "   lea	TRACK916_BEGIN, %%eax\n\t"   
	      "   lea	TRACK916_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK916_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      panic ( "decompress:bzReadGetUnused" );
    }
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
    __asm__("TRACK918_BEGIN: nop\n\t" 
	    "   lea	TRACK918_BEGIN, %%eax\n\t"   
	    "   lea	TRACK918_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK918_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    ret = fclose ( stream );
    outputHandleJustInCase = ((void *)0);
    if (ret == (-1)) goto errhandler_io;
  }
  outputHandleJustInCase = ((void *)0);
  if (verbosity >= 2)  {
    __asm__("TRACK919_BEGIN: nop\n\t" 
	    "   lea	TRACK919_BEGIN, %%eax\n\t"   
	    "   lea	TRACK919_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK919_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "\n    " );
  }
  return ((Bool)1);
 trycat:
  if (forceOverwrite) {
    __asm__("TRACK922_BEGIN: nop\n\t" 
	    "   lea	TRACK922_BEGIN, %%eax\n\t"   
	    "   lea	TRACK922_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK922_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    rewind(zStream);
    while (((Bool)1)) {
      __asm__("TRACK921_BEGIN: nop\n\t" 
	      "   lea	TRACK921_BEGIN, %%eax\n\t"   
	      "   lea	TRACK921_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK921_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (myfeof(zStream)) break;
      nread = fread ( obuf, sizeof(UChar), 5000, zStream );
      if (ferror(zStream)) goto errhandler_io;
      if (nread > 0)  {
        __asm__("TRACK920_BEGIN: nop\n\t" 
    		"   lea	TRACK920_BEGIN, %%eax\n\t"   
    		"   lea	TRACK920_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK920_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	fwrite ( obuf, sizeof(UChar), nread, stream );
      }
      if (ferror(stream)) goto errhandler_io;
    }
    goto closeok;
  }
 errhandler:
  BZ2_bzReadClose ( &bzerr_dummy, bzf );
  switch (bzerr) {
       
  case (-9):
    __asm__("TRACK923_BEGIN: nop\n\t" 
	    "   lea	TRACK923_BEGIN, %%eax\n\t"   
	    "   lea	TRACK923_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK923_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    configError(); break;
       
  case (-6):
    __asm__("TRACK925_BEGIN: nop\n\t" 
	    "   lea	TRACK925_BEGIN, %%eax\n\t"   
	    "   lea	TRACK925_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK925_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
  errhandler_io:
    {
      __asm__("TRACK924_BEGIN: nop\n\t" 
	      "   lea	TRACK924_BEGIN, %%eax\n\t"   
	      "   lea	TRACK924_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK924_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      ioError();
    } break;
       
  case (-4):
    __asm__("TRACK926_BEGIN: nop\n\t" 
	    "   lea	TRACK926_BEGIN, %%eax\n\t"   
	    "   lea	TRACK926_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK926_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    crcError();
       
  case (-3):
    __asm__("TRACK927_BEGIN: nop\n\t" 
	    "   lea	TRACK927_BEGIN, %%eax\n\t"   
	    "   lea	TRACK927_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK927_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    outOfMemory();
       
  case (-7):
    __asm__("TRACK928_BEGIN: nop\n\t" 
	    "   lea	TRACK928_BEGIN, %%eax\n\t"   
	    "   lea	TRACK928_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK928_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    compressedStreamEOF();
       
  case (-5):
    __asm__("TRACK930_BEGIN: nop\n\t" 
	    "   lea	TRACK930_BEGIN, %%eax\n\t"   
	    "   lea	TRACK930_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK930_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (zStream != stdin)  {
      __asm__("TRACK929_BEGIN: nop\n\t" 
	      "   lea	TRACK929_BEGIN, %%eax\n\t"   
	      "   lea	TRACK929_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK929_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fclose(zStream);
    }
    if (stream != stdout)  {
      __asm__("TRACK931_BEGIN: nop\n\t" 
	      "   lea	TRACK931_BEGIN, %%eax\n\t"   
	      "   lea	TRACK931_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK931_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fclose(stream);
    }
    if (streamNo == 1) {
      __asm__("TRACK932_BEGIN: nop\n\t" 
	      "   lea	TRACK932_BEGIN, %%eax\n\t"   
	      "   lea	TRACK932_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK932_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      return ((Bool)0);
    } else {
      __asm__("TRACK934_BEGIN: nop\n\t" 
	      "   lea	TRACK934_BEGIN, %%eax\n\t"   
	      "   lea	TRACK934_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK934_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (noisy)
	{
	  __asm__("TRACK933_BEGIN: nop\n\t" 
		  "   lea	TRACK933_BEGIN, %%eax\n\t"   
		  "   lea	TRACK933_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK933_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fprintf ( stderr,
		    "\n%s: %s: trailing garbage after EOF ignored\n",
		    progName, inName );
	}
      return ((Bool)1);
    }
       
  default:
    __asm__("TRACK935_BEGIN: nop\n\t" 
	    "   lea	TRACK935_BEGIN, %%eax\n\t"   
	    "   lea	TRACK935_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK935_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK940_BEGIN: nop\n\t" 
	    "   lea	TRACK940_BEGIN, %%eax\n\t"   
	    "   lea	TRACK940_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK940_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    bzf = BZ2_bzReadOpen (
			  &bzerr, zStream, verbosity,
			  (int)smallMode, unused, nUnused
			  );
    if (bzf == ((void *)0) || bzerr != 0) goto errhandler;
    streamNo++;
    while (bzerr == 0) {
      __asm__("TRACK936_BEGIN: nop\n\t" 
	      "   lea	TRACK936_BEGIN, %%eax\n\t"   
	      "   lea	TRACK936_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK936_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      nread = BZ2_bzRead ( &bzerr, bzf, obuf, 5000 );
      if (bzerr == (-5)) goto errhandler;
    }
    if (bzerr != 4) goto errhandler;
    BZ2_bzReadGetUnused ( &bzerr, bzf, (void**)(&unusedTmp), &nUnused );
    if (bzerr != 0)  {
      __asm__("TRACK937_BEGIN: nop\n\t" 
	      "   lea	TRACK937_BEGIN, %%eax\n\t"   
	      "   lea	TRACK937_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK937_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      panic ( "test:bzReadGetUnused" );
    }
    for (i = 0; i < nUnused; i++)  {
      __asm__("TRACK938_BEGIN: nop\n\t" 
	      "   lea	TRACK938_BEGIN, %%eax\n\t"   
	      "   lea	TRACK938_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK938_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      unused[i] = unusedTmp[i];
    }
    BZ2_bzReadClose ( &bzerr, bzf );
    if (bzerr != 0)  {
      __asm__("TRACK939_BEGIN: nop\n\t" 
	      "   lea	TRACK939_BEGIN, %%eax\n\t"   
	      "   lea	TRACK939_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK939_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      panic ( "test:bzReadGetUnused" );
    }
    if (nUnused == 0 && myfeof(zStream)) break;
  }
  if (ferror(zStream)) goto errhandler_io;
  ret = fclose ( zStream );
  if (ret == (-1)) goto errhandler_io;
  if (verbosity >= 2)  {
    __asm__("TRACK941_BEGIN: nop\n\t" 
	    "   lea	TRACK941_BEGIN, %%eax\n\t"   
	    "   lea	TRACK941_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK941_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "\n    " );
  }
  return ((Bool)1);
 errhandler:
  BZ2_bzReadClose ( &bzerr_dummy, bzf );
  if (verbosity == 0)
    {
      __asm__("TRACK942_BEGIN: nop\n\t" 
	      "   lea	TRACK942_BEGIN, %%eax\n\t"   
	      "   lea	TRACK942_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK942_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: %s: ", progName, inName );
    }
  switch (bzerr) {
       
  case (-9):
    __asm__("TRACK943_BEGIN: nop\n\t" 
	    "   lea	TRACK943_BEGIN, %%eax\n\t"   
	    "   lea	TRACK943_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK943_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    configError(); break;
       
  case (-6):
    __asm__("TRACK945_BEGIN: nop\n\t" 
	    "   lea	TRACK945_BEGIN, %%eax\n\t"   
	    "   lea	TRACK945_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK945_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
  errhandler_io:
    {
      __asm__("TRACK944_BEGIN: nop\n\t" 
	      "   lea	TRACK944_BEGIN, %%eax\n\t"   
	      "   lea	TRACK944_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK944_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      ioError();
    } break;
       
  case (-4):
    __asm__("TRACK946_BEGIN: nop\n\t" 
	    "   lea	TRACK946_BEGIN, %%eax\n\t"   
	    "   lea	TRACK946_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK946_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr,
	      "data integrity (CRC) error in data\n" );
    return ((Bool)0);
       
  case (-3):
    __asm__("TRACK947_BEGIN: nop\n\t" 
	    "   lea	TRACK947_BEGIN, %%eax\n\t"   
	    "   lea	TRACK947_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK947_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    outOfMemory();
       
  case (-7):
    __asm__("TRACK948_BEGIN: nop\n\t" 
	    "   lea	TRACK948_BEGIN, %%eax\n\t"   
	    "   lea	TRACK948_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK948_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr,
	      "file ends unexpectedly\n" );
    return ((Bool)0);
       
  case (-5):
    __asm__("TRACK950_BEGIN: nop\n\t" 
	    "   lea	TRACK950_BEGIN, %%eax\n\t"   
	    "   lea	TRACK950_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK950_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (zStream != stdin)  {
      __asm__("TRACK949_BEGIN: nop\n\t" 
	      "   lea	TRACK949_BEGIN, %%eax\n\t"   
	      "   lea	TRACK949_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK949_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fclose(zStream);
    }
    if (streamNo == 1) {
      __asm__("TRACK951_BEGIN: nop\n\t" 
	      "   lea	TRACK951_BEGIN, %%eax\n\t"   
	      "   lea	TRACK951_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK951_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr,
		"bad magic number (file not created by bzip2)\n" );
      return ((Bool)0);
    } else {
      __asm__("TRACK953_BEGIN: nop\n\t" 
	      "   lea	TRACK953_BEGIN, %%eax\n\t"   
	      "   lea	TRACK953_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK953_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (noisy)
	{
	  __asm__("TRACK952_BEGIN: nop\n\t" 
		  "   lea	TRACK952_BEGIN, %%eax\n\t"   
		  "   lea	TRACK952_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK952_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fprintf ( stderr,
		    "trailing garbage after EOF ignored\n" );
	}
      return ((Bool)1);
    }
       
  default:
    __asm__("TRACK954_BEGIN: nop\n\t" 
	    "   lea	TRACK954_BEGIN, %%eax\n\t"   
	    "   lea	TRACK954_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK954_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    panic ( "test:unexpected error" );
  }
  panic ( "test:end" );
  return ((Bool)1);
}
static
void setExit ( Int32 v )
{
  if (v > exitValue)  {
    __asm__("TRACK955_BEGIN: nop\n\t" 
	    "   lea	TRACK955_BEGIN, %%eax\n\t"   
	    "   lea	TRACK955_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK955_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    exitValue = v;
  }
}
static
void cadvise ( void )
{
  if (noisy)
    {
      __asm__("TRACK956_BEGIN: nop\n\t" 
	      "   lea	TRACK956_BEGIN, %%eax\n\t"   
	      "   lea	TRACK956_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK956_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK957_BEGIN: nop\n\t" 
	      "   lea	TRACK957_BEGIN, %%eax\n\t"   
	      "   lea	TRACK957_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK957_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK963_BEGIN: nop\n\t" 
	    "   lea	TRACK963_BEGIN, %%eax\n\t"   
	    "   lea	TRACK963_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK963_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    retVal = stat ( inName, &statBuf );
    if (retVal == 0) {
      __asm__("TRACK961_BEGIN: nop\n\t" 
	      "   lea	TRACK961_BEGIN, %%eax\n\t"   
	      "   lea	TRACK961_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK961_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (noisy)
	{
	  __asm__("TRACK958_BEGIN: nop\n\t" 
		  "   lea	TRACK958_BEGIN, %%eax\n\t"   
		  "   lea	TRACK958_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK958_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fprintf ( stderr,
		    "%s: Deleting output file %s, if it exists.\n",
		    progName, outName );
	}
      if (outputHandleJustInCase != ((void *)0))
	{
	  __asm__("TRACK959_BEGIN: nop\n\t" 
		  "   lea	TRACK959_BEGIN, %%eax\n\t"   
		  "   lea	TRACK959_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK959_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fclose ( outputHandleJustInCase );
	}
      retVal = remove ( outName );
      if (retVal != 0)
	{
	  __asm__("TRACK960_BEGIN: nop\n\t" 
		  "   lea	TRACK960_BEGIN, %%eax\n\t"   
		  "   lea	TRACK960_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK960_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fprintf ( stderr,
		    "%s: WARNING: deletion of output file "
		    "(apparently) failed.\n",
		    progName );
	}
    } else {
      __asm__("TRACK962_BEGIN: nop\n\t" 
	      "   lea	TRACK962_BEGIN, %%eax\n\t"   
	      "   lea	TRACK962_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK962_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK964_BEGIN: nop\n\t" 
	    "   lea	TRACK964_BEGIN, %%eax\n\t"   
	    "   lea	TRACK964_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK964_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK965_BEGIN: nop\n\t" 
	    "   lea	TRACK965_BEGIN, %%eax\n\t"   
	    "   lea	TRACK965_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK965_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
      __asm__("TRACK966_BEGIN: nop\n\t" 
	      "   lea	TRACK966_BEGIN, %%eax\n\t"   
	      "   lea	TRACK966_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK966_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK967_BEGIN: nop\n\t" 
	      "   lea	TRACK967_BEGIN, %%eax\n\t"   
	      "   lea	TRACK967_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK967_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK968_BEGIN: nop\n\t" 
	      "   lea	TRACK968_BEGIN, %%eax\n\t"   
	      "   lea	TRACK968_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK968_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      cleanUpAndFail( 3 );
    } else
    {
      __asm__("TRACK969_BEGIN: nop\n\t" 
	      "   lea	TRACK969_BEGIN, %%eax\n\t"   
	      "   lea	TRACK969_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK969_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
  if ( (Int32)strlen(s) >= longestFileName ) return;
  for (i = 1; i <= longestFileName - (Int32)strlen(s); i++)
    {
      __asm__("TRACK970_BEGIN: nop\n\t" 
	      "   lea	TRACK970_BEGIN, %%eax\n\t"   
	      "   lea	TRACK970_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK970_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, " " );
    }
}
static
void copyFileName ( Char* to, Char* from )
{
  if ( strlen(from) > 1034 -10 ) {
    __asm__("TRACK971_BEGIN: nop\n\t" 
	    "   lea	TRACK971_BEGIN, %%eax\n\t"   
	    "   lea	TRACK971_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK971_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK972_BEGIN: nop\n\t" 
	    "   lea	TRACK972_BEGIN, %%eax\n\t"   
	    "   lea	TRACK972_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK972_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fclose ( tmp );
  }
  return exists;
}
FILE* fopen_output_safely ( Char* name, const char* mode )
{
  FILE* fp;
  IntNative fh;
  fh = open(name, 01|0100|0200, 0200|0400);
  if (fh == -1) return ((void *)0);
  fp = fdopen(fh, mode);
  if (fp == ((void *)0))  {
    __asm__("TRACK973_BEGIN: nop\n\t" 
	    "   lea	TRACK973_BEGIN, %%eax\n\t"   
	    "   lea	TRACK973_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK973_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
  { if ((retVal) != 0)  {
      __asm__("TRACK974_BEGIN: nop\n\t" 
	      "   lea	TRACK974_BEGIN, %%eax\n\t"   
	      "   lea	TRACK974_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK974_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK975_BEGIN: nop\n\t" 
	      "   lea	TRACK975_BEGIN, %%eax\n\t"   
	      "   lea	TRACK975_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK975_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      ioError();
    } };
  retVal = utime ( dstName, &uTimBuf );
  { if ((retVal) != 0)  {
      __asm__("TRACK976_BEGIN: nop\n\t" 
	      "   lea	TRACK976_BEGIN, %%eax\n\t"   
	      "   lea	TRACK976_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK976_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    {
      __asm__("TRACK977_BEGIN: nop\n\t" 
	      "   lea	TRACK977_BEGIN, %%eax\n\t"   
	      "   lea	TRACK977_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK977_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      panic ( "compress: bad modes\n" );
    }
  switch (srcMode) {
       
  case 1:
    __asm__("TRACK978_BEGIN: nop\n\t" 
	    "   lea	TRACK978_BEGIN, %%eax\n\t"   
	    "   lea	TRACK978_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK978_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    copyFileName ( inName, "(stdin)" );
    copyFileName ( outName, "(stdout)" );
    break;
       
  case 3:
    __asm__("TRACK979_BEGIN: nop\n\t" 
	    "   lea	TRACK979_BEGIN, %%eax\n\t"   
	    "   lea	TRACK979_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK979_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    copyFileName ( inName, name );
    copyFileName ( outName, name );
    strcat ( outName, ".bz2" );
    break;
       
  case 2:
    __asm__("TRACK980_BEGIN: nop\n\t" 
	    "   lea	TRACK980_BEGIN, %%eax\n\t"   
	    "   lea	TRACK980_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK980_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    copyFileName ( inName, name );
    copyFileName ( outName, "(stdout)" );
    break;
  }
  if ( srcMode != 1 && containsDubiousChars ( inName ) ) {
    __asm__("TRACK982_BEGIN: nop\n\t" 
	    "   lea	TRACK982_BEGIN, %%eax\n\t"   
	    "   lea	TRACK982_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK982_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (noisy)
      {
	__asm__("TRACK981_BEGIN: nop\n\t" 
  		"   lea	TRACK981_BEGIN, %%eax\n\t"   
  		"   lea	TRACK981_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK981_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf ( stderr, "%s: There are no files matching `%s'.\n",
                  progName, inName );
      }
    setExit(1);
    return;
  }
  if ( srcMode != 1 && !fileExists ( inName ) ) {
    __asm__("TRACK983_BEGIN: nop\n\t" 
	    "   lea	TRACK983_BEGIN, %%eax\n\t"   
	    "   lea	TRACK983_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK983_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
	      progName, inName, strerror((*__errno_location ())) );
    setExit(1);
    return;
  }
  for (i = 0; i < 4; i++) {
    __asm__("TRACK986_BEGIN: nop\n\t" 
	    "   lea	TRACK986_BEGIN, %%eax\n\t"   
	    "   lea	TRACK986_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK986_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (hasSuffix(inName, zSuffix[i])) {
      __asm__("TRACK985_BEGIN: nop\n\t" 
	      "   lea	TRACK985_BEGIN, %%eax\n\t"   
	      "   lea	TRACK985_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK985_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (noisy)
	{
	  __asm__("TRACK984_BEGIN: nop\n\t" 
		  "   lea	TRACK984_BEGIN, %%eax\n\t"   
		  "   lea	TRACK984_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK984_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  fprintf ( stderr,
		    "%s: Input file %s already has %s suffix.\n",
		    progName, inName, zSuffix[i] );
	}
      setExit(1);
      return;
    }
  }
  if ( srcMode == 3 || srcMode == 2 ) {
    __asm__("TRACK988_BEGIN: nop\n\t" 
	    "   lea	TRACK988_BEGIN, %%eax\n\t"   
	    "   lea	TRACK988_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK988_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    stat(inName, &statBuf);
    if ( ((((statBuf.st_mode)) & 0170000) == (0040000)) ) {
      __asm__("TRACK987_BEGIN: nop\n\t" 
	      "   lea	TRACK987_BEGIN, %%eax\n\t"   
	      "   lea	TRACK987_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK987_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf( stderr,
	       "%s: Input file %s is a directory.\n",
	       progName,inName);
      setExit(1);
      return;
    }
  }
  if ( srcMode == 3 && !forceOverwrite && notAStandardFile ( inName )) {
    __asm__("TRACK990_BEGIN: nop\n\t" 
	    "   lea	TRACK990_BEGIN, %%eax\n\t"   
	    "   lea	TRACK990_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK990_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (noisy)
      {
	__asm__("TRACK989_BEGIN: nop\n\t" 
  		"   lea	TRACK989_BEGIN, %%eax\n\t"   
  		"   lea	TRACK989_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK989_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf ( stderr, "%s: Input file %s is not a normal file.\n",
                  progName, inName );
      }
    setExit(1);
    return;
  }
  if ( srcMode == 3 && fileExists ( outName ) ) {
    __asm__("TRACK993_BEGIN: nop\n\t" 
	    "   lea	TRACK993_BEGIN, %%eax\n\t"   
	    "   lea	TRACK993_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK993_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (forceOverwrite) {
      __asm__("TRACK991_BEGIN: nop\n\t" 
	      "   lea	TRACK991_BEGIN, %%eax\n\t"   
	      "   lea	TRACK991_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK991_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      remove(outName);
    } else {
      __asm__("TRACK992_BEGIN: nop\n\t" 
	      "   lea	TRACK992_BEGIN, %%eax\n\t"   
	      "   lea	TRACK992_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK992_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: Output file %s already exists.\n",
		progName, outName );
      setExit(1);
      return;
    }
  }
  if ( srcMode == 3 && !forceOverwrite &&
       (n=countHardLinks ( inName )) > 0) {
    __asm__("TRACK994_BEGIN: nop\n\t" 
	    "   lea	TRACK994_BEGIN, %%eax\n\t"   
	    "   lea	TRACK994_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK994_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "%s: Input file %s has %d other link%s.\n",
	      progName, inName, n, n > 1 ? "s" : "" );
    setExit(1);
    return;
  }
  if ( srcMode == 3 ) {
    __asm__("TRACK995_BEGIN: nop\n\t" 
	    "   lea	TRACK995_BEGIN, %%eax\n\t"   
	    "   lea	TRACK995_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK995_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    saveInputFileMetaInfo ( inName );
  }
  switch ( srcMode ) {
       
  case 1:
    __asm__("TRACK996_BEGIN: nop\n\t" 
	    "   lea	TRACK996_BEGIN, %%eax\n\t"   
	    "   lea	TRACK996_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK996_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    inStr = stdin;
    outStr = stdout;
    if ( isatty ( fileno ( stdout ) ) ) {
      __asm__("TRACK997_BEGIN: nop\n\t" 
	      "   lea	TRACK997_BEGIN, %%eax\n\t"   
	      "   lea	TRACK997_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK997_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK998_BEGIN: nop\n\t" 
	    "   lea	TRACK998_BEGIN, %%eax\n\t"   
	    "   lea	TRACK998_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK998_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    inStr = fopen ( inName, "rb" );
    outStr = stdout;
    if ( isatty ( fileno ( stdout ) ) ) {
      __asm__("TRACK1000_BEGIN: nop\n\t" 
	      "   lea	TRACK1000_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1000_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1000_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr,
		"%s: I won't write compressed data to a terminal.\n",
		progName );
      fprintf ( stderr, "%s: For help, type: `%s --help'.\n",
		progName, progName );
      if ( inStr != ((void *)0) )  {
	__asm__("TRACK999_BEGIN: nop\n\t" 
  		"   lea	TRACK999_BEGIN, %%eax\n\t"   
  		"   lea	TRACK999_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK999_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fclose ( inStr );
      }
      setExit(1);
      return;
    };
    if ( inStr == ((void *)0) ) {
      __asm__("TRACK1001_BEGIN: nop\n\t" 
	      "   lea	TRACK1001_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1001_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1001_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
		progName, inName, strerror((*__errno_location ())) );
      setExit(1);
      return;
    };
    break;
       
  case 3:
    __asm__("TRACK1002_BEGIN: nop\n\t" 
	    "   lea	TRACK1002_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1002_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1002_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    inStr = fopen ( inName, "rb" );
    outStr = fopen_output_safely ( outName, "wb" );
    if ( outStr == ((void *)0)) {
      __asm__("TRACK1004_BEGIN: nop\n\t" 
	      "   lea	TRACK1004_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1004_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1004_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: Can't create output file %s: %s.\n",
		progName, outName, strerror((*__errno_location ())) );
      if ( inStr != ((void *)0) )  {
	__asm__("TRACK1003_BEGIN: nop\n\t" 
  		"   lea	TRACK1003_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1003_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1003_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fclose ( inStr );
      }
      setExit(1);
      return;
    }
    if ( inStr == ((void *)0) ) {
      __asm__("TRACK1006_BEGIN: nop\n\t" 
	      "   lea	TRACK1006_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1006_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1006_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
		progName, inName, strerror((*__errno_location ())) );
      if ( outStr != ((void *)0) )  {
	__asm__("TRACK1005_BEGIN: nop\n\t" 
  		"   lea	TRACK1005_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1005_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1005_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fclose ( outStr );
      }
      setExit(1);
      return;
    };
    break;
       
  default:
    __asm__("TRACK1007_BEGIN: nop\n\t" 
	    "   lea	TRACK1007_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1007_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1007_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    panic ( "compress: bad srcMode" );
    break;
  }
  if (verbosity >= 1) {
    __asm__("TRACK1008_BEGIN: nop\n\t" 
	    "   lea	TRACK1008_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1008_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1008_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "  %s: ", inName );
    pad ( inName );
    fflush ( stderr );
  }
  outputHandleJustInCase = outStr;
  deleteOutputOnInterrupt = ((Bool)1);
  compressStream ( inStr, outStr );
  outputHandleJustInCase = ((void *)0);
  if ( srcMode == 3 ) {
    __asm__("TRACK1011_BEGIN: nop\n\t" 
	    "   lea	TRACK1011_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1011_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1011_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    applySavedMetaInfoToOutputFile ( outName );
    deleteOutputOnInterrupt = ((Bool)0);
    if ( !keepInputFiles ) {
      __asm__("TRACK1010_BEGIN: nop\n\t" 
	      "   lea	TRACK1010_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1010_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1010_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      IntNative retVal = remove ( inName );
      { if ((retVal) != 0)  {
	  __asm__("TRACK1009_BEGIN: nop\n\t" 
		  "   lea	TRACK1009_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1009_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1009_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
      __asm__("TRACK1012_BEGIN: nop\n\t" 
	      "   lea	TRACK1012_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1012_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1012_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      panic ( "uncompress: bad modes\n" );
    }
  cantGuess = ((Bool)0);
  switch (srcMode) {
       
  case 1:
    __asm__("TRACK1013_BEGIN: nop\n\t" 
	    "   lea	TRACK1013_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1013_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1013_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    copyFileName ( inName, "(stdin)" );
    copyFileName ( outName, "(stdout)" );
    break;
       
  case 3:
    __asm__("TRACK1014_BEGIN: nop\n\t" 
	    "   lea	TRACK1014_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1014_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1014_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    copyFileName ( inName, name );
    copyFileName ( outName, name );
    for (i = 0; i < 4; i++)
      {
	__asm__("TRACK1015_BEGIN: nop\n\t" 
		"   lea	TRACK1015_BEGIN, %%eax\n\t"   
		"   lea	TRACK1015_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK1015_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	if (mapSuffix(outName,zSuffix[i],unzSuffix[i]))
	  goto zzz;
      }
    cantGuess = ((Bool)1);
    strcat ( outName, ".out" );
    break;
       
  case 2:
    __asm__("TRACK1016_BEGIN: nop\n\t" 
	    "   lea	TRACK1016_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1016_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1016_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    copyFileName ( inName, name );
    copyFileName ( outName, "(stdout)" );
    break;
  }
 zzz:
  if ( srcMode != 1 && containsDubiousChars ( inName ) ) {
    __asm__("TRACK1018_BEGIN: nop\n\t" 
	    "   lea	TRACK1018_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1018_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1018_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (noisy)
      {
	__asm__("TRACK1017_BEGIN: nop\n\t" 
  		"   lea	TRACK1017_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1017_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1017_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf ( stderr, "%s: There are no files matching `%s'.\n",
                  progName, inName );
      }
    setExit(1);
    return;
  }
  if ( srcMode != 1 && !fileExists ( inName ) ) {
    __asm__("TRACK1019_BEGIN: nop\n\t" 
	    "   lea	TRACK1019_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1019_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1019_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
	      progName, inName, strerror((*__errno_location ())) );
    setExit(1);
    return;
  }
  if ( srcMode == 3 || srcMode == 2 ) {
    __asm__("TRACK1021_BEGIN: nop\n\t" 
	    "   lea	TRACK1021_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1021_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1021_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    stat(inName, &statBuf);
    if ( ((((statBuf.st_mode)) & 0170000) == (0040000)) ) {
      __asm__("TRACK1020_BEGIN: nop\n\t" 
	      "   lea	TRACK1020_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1020_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1020_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf( stderr,
	       "%s: Input file %s is a directory.\n",
	       progName,inName);
      setExit(1);
      return;
    }
  }
  if ( srcMode == 3 && !forceOverwrite && notAStandardFile ( inName )) {
    __asm__("TRACK1023_BEGIN: nop\n\t" 
	    "   lea	TRACK1023_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1023_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1023_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (noisy)
      {
	__asm__("TRACK1022_BEGIN: nop\n\t" 
  		"   lea	TRACK1022_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1022_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1022_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf ( stderr, "%s: Input file %s is not a normal file.\n",
                  progName, inName );
      }
    setExit(1);
    return;
  }
  if ( cantGuess ) {
    __asm__("TRACK1025_BEGIN: nop\n\t" 
	    "   lea	TRACK1025_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1025_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1025_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (noisy)
      {
	__asm__("TRACK1024_BEGIN: nop\n\t" 
  		"   lea	TRACK1024_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1024_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1024_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf ( stderr,
                  "%s: Can't guess original name for %s -- using %s\n",
                  progName, inName, outName );
      }
  }
  if ( srcMode == 3 && fileExists ( outName ) ) {
    __asm__("TRACK1028_BEGIN: nop\n\t" 
	    "   lea	TRACK1028_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1028_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1028_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (forceOverwrite) {
      __asm__("TRACK1026_BEGIN: nop\n\t" 
	      "   lea	TRACK1026_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1026_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1026_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      remove(outName);
    } else {
      __asm__("TRACK1027_BEGIN: nop\n\t" 
	      "   lea	TRACK1027_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1027_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1027_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: Output file %s already exists.\n",
		progName, outName );
      setExit(1);
      return;
    }
  }
  if ( srcMode == 3 && !forceOverwrite &&
       (n=countHardLinks ( inName ) ) > 0) {
    __asm__("TRACK1029_BEGIN: nop\n\t" 
	    "   lea	TRACK1029_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1029_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1029_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "%s: Input file %s has %d other link%s.\n",
	      progName, inName, n, n > 1 ? "s" : "" );
    setExit(1);
    return;
  }
  if ( srcMode == 3 ) {
    __asm__("TRACK1030_BEGIN: nop\n\t" 
	    "   lea	TRACK1030_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1030_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1030_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    saveInputFileMetaInfo ( inName );
  }
  switch ( srcMode ) {
       
  case 1:
    __asm__("TRACK1031_BEGIN: nop\n\t" 
	    "   lea	TRACK1031_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1031_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1031_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    inStr = stdin;
    outStr = stdout;
    if ( isatty ( fileno ( stdin ) ) ) {
      __asm__("TRACK1032_BEGIN: nop\n\t" 
	      "   lea	TRACK1032_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1032_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1032_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK1033_BEGIN: nop\n\t" 
	    "   lea	TRACK1033_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1033_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1033_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    inStr = fopen ( inName, "rb" );
    outStr = stdout;
    if ( inStr == ((void *)0) ) {
      __asm__("TRACK1035_BEGIN: nop\n\t" 
	      "   lea	TRACK1035_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1035_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1035_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: Can't open input file %s:%s.\n",
		progName, inName, strerror((*__errno_location ())) );
      if ( inStr != ((void *)0) )  {
	__asm__("TRACK1034_BEGIN: nop\n\t" 
  		"   lea	TRACK1034_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1034_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1034_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fclose ( inStr );
      }
      setExit(1);
      return;
    };
    break;
       
  case 3:
    __asm__("TRACK1036_BEGIN: nop\n\t" 
	    "   lea	TRACK1036_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1036_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1036_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    inStr = fopen ( inName, "rb" );
    outStr = fopen_output_safely ( outName, "wb" );
    if ( outStr == ((void *)0)) {
      __asm__("TRACK1038_BEGIN: nop\n\t" 
	      "   lea	TRACK1038_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1038_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1038_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: Can't create output file %s: %s.\n",
		progName, outName, strerror((*__errno_location ())) );
      if ( inStr != ((void *)0) )  {
	__asm__("TRACK1037_BEGIN: nop\n\t" 
  		"   lea	TRACK1037_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1037_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1037_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fclose ( inStr );
      }
      setExit(1);
      return;
    }
    if ( inStr == ((void *)0) ) {
      __asm__("TRACK1040_BEGIN: nop\n\t" 
	      "   lea	TRACK1040_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1040_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1040_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: Can't open input file %s: %s.\n",
		progName, inName, strerror((*__errno_location ())) );
      if ( outStr != ((void *)0) )  {
	__asm__("TRACK1039_BEGIN: nop\n\t" 
  		"   lea	TRACK1039_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1039_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1039_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fclose ( outStr );
      }
      setExit(1);
      return;
    };
    break;
       
  default:
    __asm__("TRACK1041_BEGIN: nop\n\t" 
	    "   lea	TRACK1041_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1041_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1041_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    panic ( "uncompress: bad srcMode" );
    break;
  }
  if (verbosity >= 1) {
    __asm__("TRACK1042_BEGIN: nop\n\t" 
	    "   lea	TRACK1042_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1042_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1042_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "  %s: ", inName );
    pad ( inName );
    fflush ( stderr );
  }
  outputHandleJustInCase = outStr;
  deleteOutputOnInterrupt = ((Bool)1);
  magicNumberOK = uncompressStream ( inStr, outStr );
  outputHandleJustInCase = ((void *)0);
  if ( magicNumberOK ) {
    __asm__("TRACK1046_BEGIN: nop\n\t" 
	    "   lea	TRACK1046_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1046_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1046_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if ( srcMode == 3 ) {
      __asm__("TRACK1045_BEGIN: nop\n\t" 
	      "   lea	TRACK1045_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1045_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1045_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      applySavedMetaInfoToOutputFile ( outName );
      deleteOutputOnInterrupt = ((Bool)0);
      if ( !keepInputFiles ) {
	__asm__("TRACK1044_BEGIN: nop\n\t" 
      		"   lea	TRACK1044_BEGIN, %%eax\n\t"   
      		"   lea	TRACK1044_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK1044_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	IntNative retVal = remove ( inName );
	{ if ((retVal) != 0)  {
	    __asm__("TRACK1043_BEGIN: nop\n\t" 
		    "   lea	TRACK1043_BEGIN, %%eax\n\t"   
		    "   lea	TRACK1043_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK1043_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    ioError();
	  } };
      }
    }
  } else {
    __asm__("TRACK1049_BEGIN: nop\n\t" 
	    "   lea	TRACK1049_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1049_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1049_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    unzFailsExist = ((Bool)1);
    deleteOutputOnInterrupt = ((Bool)0);
    if ( srcMode == 3 ) {
      __asm__("TRACK1048_BEGIN: nop\n\t" 
	      "   lea	TRACK1048_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1048_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1048_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      IntNative retVal = remove ( outName );
      { if ((retVal) != 0)  {
	  __asm__("TRACK1047_BEGIN: nop\n\t" 
		  "   lea	TRACK1047_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1047_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1047_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  ioError();
	} };
    }
  }
  deleteOutputOnInterrupt = ((Bool)0);
  if ( magicNumberOK ) {
    __asm__("TRACK1051_BEGIN: nop\n\t" 
	    "   lea	TRACK1051_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1051_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1051_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (verbosity >= 1)
      {
	__asm__("TRACK1050_BEGIN: nop\n\t" 
  		"   lea	TRACK1050_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1050_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1050_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf ( stderr, "done\n" );
      }
  } else {
    __asm__("TRACK1054_BEGIN: nop\n\t" 
	    "   lea	TRACK1054_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1054_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1054_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    setExit(2);
    if (verbosity >= 1)
      {
	__asm__("TRACK1052_BEGIN: nop\n\t" 
  		"   lea	TRACK1052_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1052_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1052_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf ( stderr, "not a bzip2 file.\n" );
      } else
      {
	__asm__("TRACK1053_BEGIN: nop\n\t" 
  		"   lea	TRACK1053_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1053_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1053_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
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
      __asm__("TRACK1055_BEGIN: nop\n\t" 
	      "   lea	TRACK1055_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1055_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1055_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      panic ( "testf: bad modes\n" );
    }
  copyFileName ( outName, "(none)" );
  switch (srcMode) {
       
  case 1:
    __asm__("TRACK1056_BEGIN: nop\n\t" 
	    "   lea	TRACK1056_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1056_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1056_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    copyFileName ( inName, "(stdin)" ); break;
       
  case 3:
    __asm__("TRACK1057_BEGIN: nop\n\t" 
	    "   lea	TRACK1057_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1057_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1057_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    copyFileName ( inName, name ); break;
       
  case 2:
    __asm__("TRACK1058_BEGIN: nop\n\t" 
	    "   lea	TRACK1058_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1058_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1058_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    copyFileName ( inName, name ); break;
  }
  if ( srcMode != 1 && containsDubiousChars ( inName ) ) {
    __asm__("TRACK1060_BEGIN: nop\n\t" 
	    "   lea	TRACK1060_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1060_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1060_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (noisy)
      {
	__asm__("TRACK1059_BEGIN: nop\n\t" 
  		"   lea	TRACK1059_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1059_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1059_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	fprintf ( stderr, "%s: There are no files matching `%s'.\n",
                  progName, inName );
      }
    setExit(1);
    return;
  }
  if ( srcMode != 1 && !fileExists ( inName ) ) {
    __asm__("TRACK1061_BEGIN: nop\n\t" 
	    "   lea	TRACK1061_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1061_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1061_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "%s: Can't open input %s: %s.\n",
	      progName, inName, strerror((*__errno_location ())) );
    setExit(1);
    return;
  }
  if ( srcMode != 1 ) {
    __asm__("TRACK1063_BEGIN: nop\n\t" 
	    "   lea	TRACK1063_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1063_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1063_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    stat(inName, &statBuf);
    if ( ((((statBuf.st_mode)) & 0170000) == (0040000)) ) {
      __asm__("TRACK1062_BEGIN: nop\n\t" 
	      "   lea	TRACK1062_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1062_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1062_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf( stderr,
	       "%s: Input file %s is a directory.\n",
	       progName,inName);
      setExit(1);
      return;
    }
  }
  switch ( srcMode ) {
       
  case 1:
    __asm__("TRACK1065_BEGIN: nop\n\t" 
	    "   lea	TRACK1065_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1065_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1065_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if ( isatty ( fileno ( stdin ) ) ) {
      __asm__("TRACK1064_BEGIN: nop\n\t" 
	      "   lea	TRACK1064_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1064_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1064_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK1067_BEGIN: nop\n\t" 
	    "   lea	TRACK1067_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1067_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1067_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
	 
  case 3:
    __asm__("TRACK1066_BEGIN: nop\n\t" 
	    "   lea	TRACK1066_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1066_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1066_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    inStr = fopen ( inName, "rb" );
    if ( inStr == ((void *)0) ) {
      __asm__("TRACK1068_BEGIN: nop\n\t" 
	      "   lea	TRACK1068_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1068_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1068_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      fprintf ( stderr, "%s: Can't open input file %s:%s.\n",
		progName, inName, strerror((*__errno_location ())) );
      setExit(1);
      return;
    };
    break;
       
  default:
    __asm__("TRACK1069_BEGIN: nop\n\t" 
	    "   lea	TRACK1069_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1069_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1069_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    panic ( "testf: bad srcMode" );
    break;
  }
  if (verbosity >= 1) {
    __asm__("TRACK1070_BEGIN: nop\n\t" 
	    "   lea	TRACK1070_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1070_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1070_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "  %s: ", inName );
    pad ( inName );
    fflush ( stderr );
  }
  outputHandleJustInCase = ((void *)0);
  allOK = testStream ( inStr );
  if (allOK && verbosity >= 1)  {
    __asm__("TRACK1071_BEGIN: nop\n\t" 
	    "   lea	TRACK1071_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1071_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1071_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "ok\n" );
  }
  if (!allOK)  {
    __asm__("TRACK1072_BEGIN: nop\n\t" 
	    "   lea	TRACK1072_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1072_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1072_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK1073_BEGIN: nop\n\t" 
	    "   lea	TRACK1073_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1073_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1073_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
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
    __asm__("TRACK1074_BEGIN: nop\n\t" 
	    "   lea	TRACK1074_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1074_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1074_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    Cell *tmp = mkCell();
    tmp->name = (Char*) myMalloc ( 5 + strlen(name) );
    strcpy ( tmp->name, name );
    return tmp;
  } else {
    __asm__("TRACK1076_BEGIN: nop\n\t" 
	    "   lea	TRACK1076_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1076_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1076_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    Cell *tmp = root;
    while (tmp->link != ((void *)0))  {
      __asm__("TRACK1075_BEGIN: nop\n\t" 
	      "   lea	TRACK1075_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1075_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1075_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
    __asm__("TRACK1083_BEGIN: nop\n\t" 
	    "   lea	TRACK1083_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1083_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1083_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    p = envbase;
    i = 0;
    while (((Bool)1)) {
      __asm__("TRACK1082_BEGIN: nop\n\t" 
	      "   lea	TRACK1082_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1082_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1082_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (p[i] == 0) break;
      p += i;
      i = 0;
      while (((*__ctype_b_loc ())[(int) (((Int32)(p[0])))] & (unsigned short int) _ISspace))  {
        __asm__("TRACK1077_BEGIN: nop\n\t" 
    		"   lea	TRACK1077_BEGIN, %%eax\n\t"   
    		"   lea	TRACK1077_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK1077_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	p++;
      }
      while (p[i] != 0 && !((*__ctype_b_loc ())[(int) (((Int32)(p[i])))] & (unsigned short int) _ISspace))  {
        __asm__("TRACK1078_BEGIN: nop\n\t" 
    		"   lea	TRACK1078_BEGIN, %%eax\n\t"   
    		"   lea	TRACK1078_END, %%ecx\n\t" 
    		"   mov	%%eax, (%%esp)\n\t" 
    		"   mov    %%ecx, 4(%%esp)\n\t" 
    		" calll track\n\t" 
    		"TRACK1078_END: nop\n\t" 
    		: 
    		: 
    		: "eax", "ecx", "esp");
	i++;
      }
      if (i > 0) {
	__asm__("TRACK1081_BEGIN: nop\n\t" 
      		"   lea	TRACK1081_BEGIN, %%eax\n\t"   
      		"   lea	TRACK1081_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK1081_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	k = i; if (k > 1034 -10)  {
          __asm__("TRACK1079_BEGIN: nop\n\t" 
		  "   lea	TRACK1079_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1079_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1079_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  k = 1034 -10;
	}
	for (j = 0; j < k; j++)  {
          __asm__("TRACK1080_BEGIN: nop\n\t" 
		  "   lea	TRACK1080_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1080_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1080_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
  void* lol = &track; //
  init(); //
  if (sizeof(Int32) != 4 || sizeof(UInt32) != 4 ||
      sizeof(Int16) != 2 || sizeof(UInt16) != 2 ||
      sizeof(Char) != 1 || sizeof(UChar) != 1)
    {
      __asm__("TRACK1084_BEGIN: nop\n\t" 
	      "   lea	TRACK1084_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1084_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1084_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
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
      __asm__("TRACK1086_BEGIN: nop\n\t" 
	      "   lea	TRACK1086_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1086_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1086_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (*tmp == '/')  {
	__asm__("TRACK1085_BEGIN: nop\n\t" 
		"   lea	TRACK1085_BEGIN, %%eax\n\t"   
		"   lea	TRACK1085_END, %%ecx\n\t" 
		"   mov	%%eax, (%%esp)\n\t" 
		"   mov    %%ecx, 4(%%esp)\n\t" 
		" calll track\n\t" 
		"TRACK1085_END: nop\n\t" 
		: 
		: 
		: "eax", "ecx", "esp");
	progName = tmp + 1;
      }
    }
  argList = ((void *)0);
  addFlagsFromEnvVar ( &argList, "BZIP2" );
  addFlagsFromEnvVar ( &argList, "BZIP" );
  for (i = 1; i <= argc-1; i++)
    {
      __asm__("TRACK1087_BEGIN: nop\n\t" 
	      "   lea	TRACK1087_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1087_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1087_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      argList=snocString((argList), (argv[i]));
    }
  longestFileName = 7;
  numFileNames = 0;
  decode = ((Bool)1);
  for (aa = argList; aa != ((void *)0); aa = aa->link) {
    __asm__("TRACK1090_BEGIN: nop\n\t" 
	    "   lea	TRACK1090_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1090_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1090_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if ((strcmp(aa->name, ("--"))==0)) {
      __asm__("TRACK1088_BEGIN: nop\n\t" 
	      "   lea	TRACK1088_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1088_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1088_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      decode = ((Bool)0); continue;
    }
    if (aa->name[0] == '-' && decode) continue;
    numFileNames++;
    if (longestFileName < (Int32)strlen(aa->name) )
      {
	__asm__("TRACK1089_BEGIN: nop\n\t" 
  		"   lea	TRACK1089_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1089_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1089_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	longestFileName = (Int32)strlen(aa->name);
      }
  }
  if (numFileNames == 0)
    {
      __asm__("TRACK1091_BEGIN: nop\n\t" 
	      "   lea	TRACK1091_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1091_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1091_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      srcMode = 1;
    } else  {
    __asm__("TRACK1092_BEGIN: nop\n\t" 
	    "   lea	TRACK1092_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1092_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1092_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    srcMode = 3;
  }
  opMode = 1;
  if ( (strstr ( progName, "unzip" ) != 0) ||
       (strstr ( progName, "UNZIP" ) != 0) )
    {
      __asm__("TRACK1093_BEGIN: nop\n\t" 
	      "   lea	TRACK1093_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1093_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1093_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      opMode = 2;
    }
  if ( (strstr ( progName, "z2cat" ) != 0) ||
       (strstr ( progName, "Z2CAT" ) != 0) ||
       (strstr ( progName, "zcat" ) != 0) ||
       (strstr ( progName, "ZCAT" ) != 0) ) {
    __asm__("TRACK1094_BEGIN: nop\n\t" 
	    "   lea	TRACK1094_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1094_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1094_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    opMode = 2;
    srcMode = (numFileNames == 0) ? 1 : 2;
  }
  for (aa = argList; aa != ((void *)0); aa = aa->link) {
    __asm__("TRACK1119_BEGIN: nop\n\t" 
	    "   lea	TRACK1119_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1119_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1119_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if ((strcmp(aa->name, ("--"))==0)) break;
    if (aa->name[0] == '-' && aa->name[1] != '-') {
      __asm__("TRACK1118_BEGIN: nop\n\t" 
	      "   lea	TRACK1118_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1118_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1118_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      for (j = 1; aa->name[j] != '\0'; j++) {
	__asm__("TRACK1117_BEGIN: nop\n\t" 
      		"   lea	TRACK1117_BEGIN, %%eax\n\t"   
      		"   lea	TRACK1117_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK1117_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	switch (aa->name[j]) {
                      
        case 'c':
	  __asm__("TRACK1095_BEGIN: nop\n\t" 
		  "   lea	TRACK1095_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1095_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1095_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  srcMode = 2; break;
                      
        case 'd':
	  __asm__("TRACK1096_BEGIN: nop\n\t" 
		  "   lea	TRACK1096_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1096_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1096_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  opMode = 2; break;
                      
        case 'z':
	  __asm__("TRACK1097_BEGIN: nop\n\t" 
		  "   lea	TRACK1097_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1097_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1097_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  opMode = 1; break;
                      
        case 'f':
	  __asm__("TRACK1098_BEGIN: nop\n\t" 
		  "   lea	TRACK1098_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1098_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1098_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  forceOverwrite = ((Bool)1); break;
                      
        case 't':
	  __asm__("TRACK1099_BEGIN: nop\n\t" 
		  "   lea	TRACK1099_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1099_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1099_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  opMode = 3; break;
                      
        case 'k':
	  __asm__("TRACK1100_BEGIN: nop\n\t" 
		  "   lea	TRACK1100_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1100_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1100_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  keepInputFiles = ((Bool)1); break;
                      
        case 's':
	  __asm__("TRACK1101_BEGIN: nop\n\t" 
		  "   lea	TRACK1101_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1101_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1101_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  smallMode = ((Bool)1); break;
                      
        case 'q':
	  __asm__("TRACK1102_BEGIN: nop\n\t" 
		  "   lea	TRACK1102_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1102_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1102_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  noisy = ((Bool)0); break;
                      
        case '1':
	  __asm__("TRACK1103_BEGIN: nop\n\t" 
		  "   lea	TRACK1103_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1103_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1103_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  blockSize100k = 1; break;
                      
        case '2':
	  __asm__("TRACK1104_BEGIN: nop\n\t" 
		  "   lea	TRACK1104_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1104_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1104_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  blockSize100k = 2; break;
                      
        case '3':
	  __asm__("TRACK1105_BEGIN: nop\n\t" 
		  "   lea	TRACK1105_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1105_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1105_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  blockSize100k = 3; break;
                      
        case '4':
	  __asm__("TRACK1106_BEGIN: nop\n\t" 
		  "   lea	TRACK1106_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1106_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1106_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  blockSize100k = 4; break;
                      
        case '5':
	  __asm__("TRACK1107_BEGIN: nop\n\t" 
		  "   lea	TRACK1107_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1107_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1107_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  blockSize100k = 5; break;
                      
        case '6':
	  __asm__("TRACK1108_BEGIN: nop\n\t" 
		  "   lea	TRACK1108_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1108_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1108_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  blockSize100k = 6; break;
                      
        case '7':
	  __asm__("TRACK1109_BEGIN: nop\n\t" 
		  "   lea	TRACK1109_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1109_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1109_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  blockSize100k = 7; break;
                      
        case '8':
	  __asm__("TRACK1110_BEGIN: nop\n\t" 
		  "   lea	TRACK1110_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1110_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1110_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  blockSize100k = 8; break;
                      
        case '9':
	  __asm__("TRACK1111_BEGIN: nop\n\t" 
		  "   lea	TRACK1111_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1111_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1111_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  blockSize100k = 9; break;
                      
        case 'V':
	  __asm__("TRACK1113_BEGIN: nop\n\t" 
		  "   lea	TRACK1113_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1113_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1113_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
      	 
	case 'L':
	  __asm__("TRACK1112_BEGIN: nop\n\t" 
		  "   lea	TRACK1112_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1112_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1112_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  license(); break;
                      
        case 'v':
	  __asm__("TRACK1114_BEGIN: nop\n\t" 
		  "   lea	TRACK1114_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1114_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1114_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  verbosity++; break;
                      
        case 'h':
	  __asm__("TRACK1115_BEGIN: nop\n\t" 
		  "   lea	TRACK1115_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1115_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1115_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  usage ( progName );
	  exit ( 0 );
	  break;
                      
        default:
	  __asm__("TRACK1116_BEGIN: nop\n\t" 
		  "   lea	TRACK1116_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1116_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1116_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
    __asm__("TRACK1155_BEGIN: nop\n\t" 
	    "   lea	TRACK1155_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1155_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1155_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if ((strcmp(aa->name, ("--"))==0)) break;
    if ((strcmp(aa->name, ("--stdout"))==0))  {
      __asm__("TRACK1120_BEGIN: nop\n\t" 
	      "   lea	TRACK1120_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1120_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1120_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      srcMode = 2;
    } else
      {
	__asm__("TRACK1154_BEGIN: nop\n\t" 
  		"   lea	TRACK1154_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1154_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1154_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	if ((strcmp(aa->name, ("--decompress"))==0))  {
	  __asm__("TRACK1121_BEGIN: nop\n\t" 
		  "   lea	TRACK1121_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1121_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1121_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  opMode = 2;
	} else
	  {
	    __asm__("TRACK1153_BEGIN: nop\n\t" 
		    "   lea	TRACK1153_BEGIN, %%eax\n\t"   
		    "   lea	TRACK1153_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK1153_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if ((strcmp(aa->name, ("--compress"))==0))  {
	      __asm__("TRACK1122_BEGIN: nop\n\t" 
		      "   lea	TRACK1122_BEGIN, %%eax\n\t"   
		      "   lea	TRACK1122_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK1122_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      opMode = 1;
	    } else
	      {
		__asm__("TRACK1152_BEGIN: nop\n\t" 
			"   lea	TRACK1152_BEGIN, %%eax\n\t"   
			"   lea	TRACK1152_END, %%ecx\n\t" 
			"   mov	%%eax, (%%esp)\n\t" 
			"   mov    %%ecx, 4(%%esp)\n\t" 
			" calll track\n\t" 
			"TRACK1152_END: nop\n\t" 
			: 
			: 
			: "eax", "ecx", "esp");
		if ((strcmp(aa->name, ("--force"))==0))  {
		  __asm__("TRACK1123_BEGIN: nop\n\t" 
			  "   lea	TRACK1123_BEGIN, %%eax\n\t"   
			  "   lea	TRACK1123_END, %%ecx\n\t" 
			  "   mov	%%eax, (%%esp)\n\t" 
			  "   mov    %%ecx, 4(%%esp)\n\t" 
			  " calll track\n\t" 
			  "TRACK1123_END: nop\n\t" 
			  : 
			  : 
			  : "eax", "ecx", "esp");
		  forceOverwrite = ((Bool)1);
		} else
		  {
		    __asm__("TRACK1151_BEGIN: nop\n\t" 
			    "   lea	TRACK1151_BEGIN, %%eax\n\t"   
			    "   lea	TRACK1151_END, %%ecx\n\t" 
			    "   mov	%%eax, (%%esp)\n\t" 
			    "   mov    %%ecx, 4(%%esp)\n\t" 
			    " calll track\n\t" 
			    "TRACK1151_END: nop\n\t" 
			    : 
			    : 
			    : "eax", "ecx", "esp");
		    if ((strcmp(aa->name, ("--test"))==0))  {
		      __asm__("TRACK1124_BEGIN: nop\n\t" 
			      "   lea	TRACK1124_BEGIN, %%eax\n\t"   
			      "   lea	TRACK1124_END, %%ecx\n\t" 
			      "   mov	%%eax, (%%esp)\n\t" 
			      "   mov    %%ecx, 4(%%esp)\n\t" 
			      " calll track\n\t" 
			      "TRACK1124_END: nop\n\t" 
			      : 
			      : 
			      : "eax", "ecx", "esp");
		      opMode = 3;
		    } else
		      {
			__asm__("TRACK1150_BEGIN: nop\n\t" 
				"   lea	TRACK1150_BEGIN, %%eax\n\t"   
				"   lea	TRACK1150_END, %%ecx\n\t" 
				"   mov	%%eax, (%%esp)\n\t" 
				"   mov    %%ecx, 4(%%esp)\n\t" 
				" calll track\n\t" 
				"TRACK1150_END: nop\n\t" 
				: 
				: 
				: "eax", "ecx", "esp");
			if ((strcmp(aa->name, ("--keep"))==0))  {
			  __asm__("TRACK1125_BEGIN: nop\n\t" 
				  "   lea	TRACK1125_BEGIN, %%eax\n\t"   
				  "   lea	TRACK1125_END, %%ecx\n\t" 
				  "   mov	%%eax, (%%esp)\n\t" 
				  "   mov    %%ecx, 4(%%esp)\n\t" 
				  " calll track\n\t" 
				  "TRACK1125_END: nop\n\t" 
				  : 
				  : 
				  : "eax", "ecx", "esp");
			  keepInputFiles = ((Bool)1);
			} else
			  {
			    __asm__("TRACK1149_BEGIN: nop\n\t" 
				    "   lea	TRACK1149_BEGIN, %%eax\n\t"   
				    "   lea	TRACK1149_END, %%ecx\n\t" 
				    "   mov	%%eax, (%%esp)\n\t" 
				    "   mov    %%ecx, 4(%%esp)\n\t" 
				    " calll track\n\t" 
				    "TRACK1149_END: nop\n\t" 
				    : 
				    : 
				    : "eax", "ecx", "esp");
			    if ((strcmp(aa->name, ("--small"))==0))  {
			      __asm__("TRACK1126_BEGIN: nop\n\t" 
				      "   lea	TRACK1126_BEGIN, %%eax\n\t"   
				      "   lea	TRACK1126_END, %%ecx\n\t" 
				      "   mov	%%eax, (%%esp)\n\t" 
				      "   mov    %%ecx, 4(%%esp)\n\t" 
				      " calll track\n\t" 
				      "TRACK1126_END: nop\n\t" 
				      : 
				      : 
				      : "eax", "ecx", "esp");
			      smallMode = ((Bool)1);
			    } else
			      {
				__asm__("TRACK1148_BEGIN: nop\n\t" 
					"   lea	TRACK1148_BEGIN, %%eax\n\t"   
					"   lea	TRACK1148_END, %%ecx\n\t" 
					"   mov	%%eax, (%%esp)\n\t" 
					"   mov    %%ecx, 4(%%esp)\n\t" 
					" calll track\n\t" 
					"TRACK1148_END: nop\n\t" 
					: 
					: 
					: "eax", "ecx", "esp");
				if ((strcmp(aa->name, ("--quiet"))==0))  {
				  __asm__("TRACK1127_BEGIN: nop\n\t" 
					  "   lea	TRACK1127_BEGIN, %%eax\n\t"   
					  "   lea	TRACK1127_END, %%ecx\n\t" 
					  "   mov	%%eax, (%%esp)\n\t" 
					  "   mov    %%ecx, 4(%%esp)\n\t" 
					  " calll track\n\t" 
					  "TRACK1127_END: nop\n\t" 
					  : 
					  : 
					  : "eax", "ecx", "esp");
				  noisy = ((Bool)0);
				} else
				  {
				    __asm__("TRACK1147_BEGIN: nop\n\t" 
					    "   lea	TRACK1147_BEGIN, %%eax\n\t"   
					    "   lea	TRACK1147_END, %%ecx\n\t" 
					    "   mov	%%eax, (%%esp)\n\t" 
					    "   mov    %%ecx, 4(%%esp)\n\t" 
					    " calll track\n\t" 
					    "TRACK1147_END: nop\n\t" 
					    : 
					    : 
					    : "eax", "ecx", "esp");
				    if ((strcmp(aa->name, ("--version"))==0))  {
				      __asm__("TRACK1128_BEGIN: nop\n\t" 
					      "   lea	TRACK1128_BEGIN, %%eax\n\t"   
					      "   lea	TRACK1128_END, %%ecx\n\t" 
					      "   mov	%%eax, (%%esp)\n\t" 
					      "   mov    %%ecx, 4(%%esp)\n\t" 
					      " calll track\n\t" 
					      "TRACK1128_END: nop\n\t" 
					      : 
					      : 
					      : "eax", "ecx", "esp");
				      license();
				    } else
				      {
					__asm__("TRACK1146_BEGIN: nop\n\t" 
						"   lea	TRACK1146_BEGIN, %%eax\n\t"   
						"   lea	TRACK1146_END, %%ecx\n\t" 
						"   mov	%%eax, (%%esp)\n\t" 
						"   mov    %%ecx, 4(%%esp)\n\t" 
						" calll track\n\t" 
						"TRACK1146_END: nop\n\t" 
						: 
						: 
						: "eax", "ecx", "esp");
					if ((strcmp(aa->name, ("--license"))==0))  {
					  __asm__("TRACK1129_BEGIN: nop\n\t" 
						  "   lea	TRACK1129_BEGIN, %%eax\n\t"   
						  "   lea	TRACK1129_END, %%ecx\n\t" 
						  "   mov	%%eax, (%%esp)\n\t" 
						  "   mov    %%ecx, 4(%%esp)\n\t" 
						  " calll track\n\t" 
						  "TRACK1129_END: nop\n\t" 
						  : 
						  : 
						  : "eax", "ecx", "esp");
					  license();
					} else
					  {
					    __asm__("TRACK1145_BEGIN: nop\n\t" 
						    "   lea	TRACK1145_BEGIN, %%eax\n\t"   
						    "   lea	TRACK1145_END, %%ecx\n\t" 
						    "   mov	%%eax, (%%esp)\n\t" 
						    "   mov    %%ecx, 4(%%esp)\n\t" 
						    " calll track\n\t" 
						    "TRACK1145_END: nop\n\t" 
						    : 
						    : 
						    : "eax", "ecx", "esp");
					    if ((strcmp(aa->name, ("--exponential"))==0))  {
					      __asm__("TRACK1130_BEGIN: nop\n\t" 
						      "   lea	TRACK1130_BEGIN, %%eax\n\t"   
						      "   lea	TRACK1130_END, %%ecx\n\t" 
						      "   mov	%%eax, (%%esp)\n\t" 
						      "   mov    %%ecx, 4(%%esp)\n\t" 
						      " calll track\n\t" 
						      "TRACK1130_END: nop\n\t" 
						      : 
						      : 
						      : "eax", "ecx", "esp");
					      workFactor = 1;
					    } else
					      {
						__asm__("TRACK1144_BEGIN: nop\n\t" 
							"   lea	TRACK1144_BEGIN, %%eax\n\t"   
							"   lea	TRACK1144_END, %%ecx\n\t" 
							"   mov	%%eax, (%%esp)\n\t" 
							"   mov    %%ecx, 4(%%esp)\n\t" 
							" calll track\n\t" 
							"TRACK1144_END: nop\n\t" 
							: 
							: 
							: "eax", "ecx", "esp");
						if ((strcmp(aa->name, ("--repetitive-best"))==0))  {
						  __asm__("TRACK1131_BEGIN: nop\n\t" 
							  "   lea	TRACK1131_BEGIN, %%eax\n\t"   
							  "   lea	TRACK1131_END, %%ecx\n\t" 
							  "   mov	%%eax, (%%esp)\n\t" 
							  "   mov    %%ecx, 4(%%esp)\n\t" 
							  " calll track\n\t" 
							  "TRACK1131_END: nop\n\t" 
							  : 
							  : 
							  : "eax", "ecx", "esp");
						  redundant(aa->name);
						} else
						  {
						    __asm__("TRACK1143_BEGIN: nop\n\t" 
							    "   lea	TRACK1143_BEGIN, %%eax\n\t"   
							    "   lea	TRACK1143_END, %%ecx\n\t" 
							    "   mov	%%eax, (%%esp)\n\t" 
							    "   mov    %%ecx, 4(%%esp)\n\t" 
							    " calll track\n\t" 
							    "TRACK1143_END: nop\n\t" 
							    : 
							    : 
							    : "eax", "ecx", "esp");
						    if ((strcmp(aa->name, ("--repetitive-fast"))==0))  {
						      __asm__("TRACK1132_BEGIN: nop\n\t" 
							      "   lea	TRACK1132_BEGIN, %%eax\n\t"   
							      "   lea	TRACK1132_END, %%ecx\n\t" 
							      "   mov	%%eax, (%%esp)\n\t" 
							      "   mov    %%ecx, 4(%%esp)\n\t" 
							      " calll track\n\t" 
							      "TRACK1132_END: nop\n\t" 
							      : 
							      : 
							      : "eax", "ecx", "esp");
						      redundant(aa->name);
						    } else
						      {
							__asm__("TRACK1142_BEGIN: nop\n\t" 
								"   lea	TRACK1142_BEGIN, %%eax\n\t"   
								"   lea	TRACK1142_END, %%ecx\n\t" 
								"   mov	%%eax, (%%esp)\n\t" 
								"   mov    %%ecx, 4(%%esp)\n\t" 
								" calll track\n\t" 
								"TRACK1142_END: nop\n\t" 
								: 
								: 
								: "eax", "ecx", "esp");
							if ((strcmp(aa->name, ("--fast"))==0))  {
							  __asm__("TRACK1133_BEGIN: nop\n\t" 
								  "   lea	TRACK1133_BEGIN, %%eax\n\t"   
								  "   lea	TRACK1133_END, %%ecx\n\t" 
								  "   mov	%%eax, (%%esp)\n\t" 
								  "   mov    %%ecx, 4(%%esp)\n\t" 
								  " calll track\n\t" 
								  "TRACK1133_END: nop\n\t" 
								  : 
								  : 
								  : "eax", "ecx", "esp");
							  blockSize100k = 1;
							} else
							  {
							    __asm__("TRACK1141_BEGIN: nop\n\t" 
								    "   lea	TRACK1141_BEGIN, %%eax\n\t"   
								    "   lea	TRACK1141_END, %%ecx\n\t" 
								    "   mov	%%eax, (%%esp)\n\t" 
								    "   mov    %%ecx, 4(%%esp)\n\t" 
								    " calll track\n\t" 
								    "TRACK1141_END: nop\n\t" 
								    : 
								    : 
								    : "eax", "ecx", "esp");
							    if ((strcmp(aa->name, ("--best"))==0))  {
							      __asm__("TRACK1134_BEGIN: nop\n\t" 
								      "   lea	TRACK1134_BEGIN, %%eax\n\t"   
								      "   lea	TRACK1134_END, %%ecx\n\t" 
								      "   mov	%%eax, (%%esp)\n\t" 
								      "   mov    %%ecx, 4(%%esp)\n\t" 
								      " calll track\n\t" 
								      "TRACK1134_END: nop\n\t" 
								      : 
								      : 
								      : "eax", "ecx", "esp");
							      blockSize100k = 9;
							    } else
							      {
								__asm__("TRACK1140_BEGIN: nop\n\t" 
									"   lea	TRACK1140_BEGIN, %%eax\n\t"   
									"   lea	TRACK1140_END, %%ecx\n\t" 
									"   mov	%%eax, (%%esp)\n\t" 
									"   mov    %%ecx, 4(%%esp)\n\t" 
									" calll track\n\t" 
									"TRACK1140_END: nop\n\t" 
									: 
									: 
									: "eax", "ecx", "esp");
								if ((strcmp(aa->name, ("--verbose"))==0))  {
								  __asm__("TRACK1135_BEGIN: nop\n\t" 
									  "   lea	TRACK1135_BEGIN, %%eax\n\t"   
									  "   lea	TRACK1135_END, %%ecx\n\t" 
									  "   mov	%%eax, (%%esp)\n\t" 
									  "   mov    %%ecx, 4(%%esp)\n\t" 
									  " calll track\n\t" 
									  "TRACK1135_END: nop\n\t" 
									  : 
									  : 
									  : "eax", "ecx", "esp");
								  verbosity++;
								} else
								  {
								    __asm__("TRACK1139_BEGIN: nop\n\t" 
									    "   lea	TRACK1139_BEGIN, %%eax\n\t"   
									    "   lea	TRACK1139_END, %%ecx\n\t" 
									    "   mov	%%eax, (%%esp)\n\t" 
									    "   mov    %%ecx, 4(%%esp)\n\t" 
									    " calll track\n\t" 
									    "TRACK1139_END: nop\n\t" 
									    : 
									    : 
									    : "eax", "ecx", "esp");
								    if ((strcmp(aa->name, ("--help"))==0)) {
								      __asm__("TRACK1136_BEGIN: nop\n\t" 
									      "   lea	TRACK1136_BEGIN, %%eax\n\t"   
									      "   lea	TRACK1136_END, %%ecx\n\t" 
									      "   mov	%%eax, (%%esp)\n\t" 
									      "   mov    %%ecx, 4(%%esp)\n\t" 
									      " calll track\n\t" 
									      "TRACK1136_END: nop\n\t" 
									      : 
									      : 
									      : "eax", "ecx", "esp");
								      usage ( progName ); exit ( 0 );
								    }
								    else
								      {
									__asm__("TRACK1138_BEGIN: nop\n\t" 
										"   lea	TRACK1138_BEGIN, %%eax\n\t"   
										"   lea	TRACK1138_END, %%ecx\n\t" 
										"   mov	%%eax, (%%esp)\n\t" 
										"   mov    %%ecx, 4(%%esp)\n\t" 
										" calll track\n\t" 
										"TRACK1138_END: nop\n\t" 
										: 
										: 
										: "eax", "ecx", "esp");
									if (strncmp ( aa->name, "--", 2) == 0) {
									  __asm__("TRACK1137_BEGIN: nop\n\t" 
										  "   lea	TRACK1137_BEGIN, %%eax\n\t"   
										  "   lea	TRACK1137_END, %%ecx\n\t" 
										  "   mov	%%eax, (%%esp)\n\t" 
										  "   mov    %%ecx, 4(%%esp)\n\t" 
										  " calll track\n\t" 
										  "TRACK1137_END: nop\n\t" 
										  : 
										  : 
										  : "eax", "ecx", "esp");
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
    __asm__("TRACK1156_BEGIN: nop\n\t" 
	    "   lea	TRACK1156_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1156_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1156_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    verbosity = 4;
  }
  if (opMode == 1 && smallMode && blockSize100k > 2)
    {
      __asm__("TRACK1157_BEGIN: nop\n\t" 
	      "   lea	TRACK1157_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1157_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1157_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      blockSize100k = 2;
    }
  if (opMode == 3 && srcMode == 2) {
    __asm__("TRACK1158_BEGIN: nop\n\t" 
	    "   lea	TRACK1158_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1158_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1158_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    fprintf ( stderr, "%s: -c and -t cannot be used together.\n",
	      progName );
    exit ( 1 );
  }
  if (srcMode == 2 && numFileNames == 0)
    {
      __asm__("TRACK1159_BEGIN: nop\n\t" 
	      "   lea	TRACK1159_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1159_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1159_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      srcMode = 1;
    }
  if (opMode != 1)  {
    __asm__("TRACK1160_BEGIN: nop\n\t" 
	    "   lea	TRACK1160_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1160_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1160_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    blockSize100k = 0;
  }
  if (srcMode == 3) {
    __asm__("TRACK1161_BEGIN: nop\n\t" 
	    "   lea	TRACK1161_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1161_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1161_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    signal (2, mySignalCatcher);
    signal (15, mySignalCatcher);
    signal (1, mySignalCatcher);
  }
  if (opMode == 1) {
    __asm__("TRACK1166_BEGIN: nop\n\t" 
	    "   lea	TRACK1166_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1166_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1166_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    if (srcMode == 1) {
      __asm__("TRACK1162_BEGIN: nop\n\t" 
	      "   lea	TRACK1162_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1162_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1162_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      compress ( ((void *)0) );
    } else {
      __asm__("TRACK1165_BEGIN: nop\n\t" 
	      "   lea	TRACK1165_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1165_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1165_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      decode = ((Bool)1);
      for (aa = argList; aa != ((void *)0); aa = aa->link) {
	__asm__("TRACK1164_BEGIN: nop\n\t" 
      		"   lea	TRACK1164_BEGIN, %%eax\n\t"   
      		"   lea	TRACK1164_END, %%ecx\n\t" 
      		"   mov	%%eax, (%%esp)\n\t" 
      		"   mov    %%ecx, 4(%%esp)\n\t" 
      		" calll track\n\t" 
      		"TRACK1164_END: nop\n\t" 
      		: 
      		: 
      		: "eax", "ecx", "esp");
	if ((strcmp(aa->name, ("--"))==0)) {
	  __asm__("TRACK1163_BEGIN: nop\n\t" 
		  "   lea	TRACK1163_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1163_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1163_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  decode = ((Bool)0); continue;
	}
	if (aa->name[0] == '-' && decode) continue;
	numFilesProcessed++;
	compress ( aa->name );
      }
    }
  }
  else
    {
      __asm__("TRACK1179_BEGIN: nop\n\t" 
	      "   lea	TRACK1179_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1179_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1179_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      if (opMode == 2) {
	__asm__("TRACK1172_BEGIN: nop\n\t" 
  		"   lea	TRACK1172_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1172_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1172_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	unzFailsExist = ((Bool)0);
        if (srcMode == 1) {
	  __asm__("TRACK1167_BEGIN: nop\n\t" 
		  "   lea	TRACK1167_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1167_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1167_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  uncompress ( ((void *)0) );
	} else {
	  __asm__("TRACK1170_BEGIN: nop\n\t" 
		  "   lea	TRACK1170_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1170_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1170_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  decode = ((Bool)1);
	  for (aa = argList; aa != ((void *)0); aa = aa->link) {
	    __asm__("TRACK1169_BEGIN: nop\n\t" 
		    "   lea	TRACK1169_BEGIN, %%eax\n\t"   
		    "   lea	TRACK1169_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK1169_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if ((strcmp(aa->name, ("--"))==0)) {
	      __asm__("TRACK1168_BEGIN: nop\n\t" 
		      "   lea	TRACK1168_BEGIN, %%eax\n\t"   
		      "   lea	TRACK1168_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK1168_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      decode = ((Bool)0); continue;
	    }
	    if (aa->name[0] == '-' && decode) continue;
	    numFilesProcessed++;
	    uncompress ( aa->name );
	  }
	}
        if (unzFailsExist) {
	  __asm__("TRACK1171_BEGIN: nop\n\t" 
		  "   lea	TRACK1171_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1171_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1171_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  setExit(2);
	  exit(exitValue);
	}
      }
      else {
	__asm__("TRACK1178_BEGIN: nop\n\t" 
  		"   lea	TRACK1178_BEGIN, %%eax\n\t"   
  		"   lea	TRACK1178_END, %%ecx\n\t" 
  		"   mov	%%eax, (%%esp)\n\t" 
  		"   mov    %%ecx, 4(%%esp)\n\t" 
  		" calll track\n\t" 
  		"TRACK1178_END: nop\n\t" 
  		: 
  		: 
  		: "eax", "ecx", "esp");
	testFailsExist = ((Bool)0);
        if (srcMode == 1) {
	  __asm__("TRACK1173_BEGIN: nop\n\t" 
		  "   lea	TRACK1173_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1173_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1173_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  testf ( ((void *)0) );
	} else {
	  __asm__("TRACK1176_BEGIN: nop\n\t" 
		  "   lea	TRACK1176_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1176_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1176_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
	  decode = ((Bool)1);
	  for (aa = argList; aa != ((void *)0); aa = aa->link) {
	    __asm__("TRACK1175_BEGIN: nop\n\t" 
		    "   lea	TRACK1175_BEGIN, %%eax\n\t"   
		    "   lea	TRACK1175_END, %%ecx\n\t" 
		    "   mov	%%eax, (%%esp)\n\t" 
		    "   mov    %%ecx, 4(%%esp)\n\t" 
		    " calll track\n\t" 
		    "TRACK1175_END: nop\n\t" 
		    : 
		    : 
		    : "eax", "ecx", "esp");
	    if ((strcmp(aa->name, ("--"))==0)) {
	      __asm__("TRACK1174_BEGIN: nop\n\t" 
		      "   lea	TRACK1174_BEGIN, %%eax\n\t"   
		      "   lea	TRACK1174_END, %%ecx\n\t" 
		      "   mov	%%eax, (%%esp)\n\t" 
		      "   mov    %%ecx, 4(%%esp)\n\t" 
		      " calll track\n\t" 
		      "TRACK1174_END: nop\n\t" 
		      : 
		      : 
		      : "eax", "ecx", "esp");
	      decode = ((Bool)0); continue;
	    }
	    if (aa->name[0] == '-' && decode) continue;
	    numFilesProcessed++;
	    testf ( aa->name );
	  }
	}
        if (testFailsExist && noisy) {
	  __asm__("TRACK1177_BEGIN: nop\n\t" 
		  "   lea	TRACK1177_BEGIN, %%eax\n\t"   
		  "   lea	TRACK1177_END, %%ecx\n\t" 
		  "   mov	%%eax, (%%esp)\n\t" 
		  "   mov    %%ecx, 4(%%esp)\n\t" 
		  " calll track\n\t" 
		  "TRACK1177_END: nop\n\t" 
		  : 
		  : 
		  : "eax", "ecx", "esp");
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
    __asm__("TRACK1181_BEGIN: nop\n\t" 
	    "   lea	TRACK1181_BEGIN, %%eax\n\t"   
	    "   lea	TRACK1181_END, %%ecx\n\t" 
	    "   mov	%%eax, (%%esp)\n\t" 
	    "   mov    %%ecx, 4(%%esp)\n\t" 
	    " calll track\n\t" 
	    "TRACK1181_END: nop\n\t" 
	    : 
	    : 
	    : "eax", "ecx", "esp");
    Cell* aa2 = aa->link;
    if (aa->name != ((void *)0))  {
      __asm__("TRACK1180_BEGIN: nop\n\t" 
	      "   lea	TRACK1180_BEGIN, %%eax\n\t"   
	      "   lea	TRACK1180_END, %%ecx\n\t" 
	      "   mov	%%eax, (%%esp)\n\t" 
	      "   mov    %%ecx, 4(%%esp)\n\t" 
	      " calll track\n\t" 
	      "TRACK1180_END: nop\n\t" 
	      : 
	      : 
	      : "eax", "ecx", "esp");
      free(aa->name);
    }
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

static void init()
{
  void *addr = (void*)&main;
  long length = sysconf(_SC_PAGESIZE);
  unsigned long *d = (unsigned long *) ((int) addr &~(length-1));
  if (mprotect(0x08048000, 143360, 0x1 | 0x2 | 0x4) != 0) {
    exit(1);
  }
  memset(&coverage, 0, sizeof(coverage));
}
