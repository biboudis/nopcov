#define __attribute__(x)
#define __inline__
#include <stdio.h>

//Include files for page unprotection

#include <errno.h>
#include <string.h>
#include <sys/mman.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


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

static void setExit(int exit);

//Declare a static coverage var
static coverage_t coverage;

int main() {
  void* lol  = &track; 	//
  int cond1 = 5;
  int i = 0;
  init(); 		//
  
  setExit(0); 		//

  return 0;
} 

static void setExit(int exit)
{
   if (exit==0)
      report();
}
[NotInstrumented]
static void report()
{
  printf("Branches taken: %d\n", coverage.count);
}
[NotInstrumented]
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
  void *addr  = (void*)&main;
  long length = sysconf(_SC_PAGESIZE);
  unsigned long *d = (unsigned long *) ((int) addr &~(length-1));
  
  if (mprotect(d, length, PROT_READ | PROT_WRITE | PROT_EXEC) != 0) {
    exit(EXIT_FAILURE);
  }

  memset(&coverage, 0, sizeof(coverage));
}
