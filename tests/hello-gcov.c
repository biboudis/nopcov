#define __attribute__(x)

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

//Declare a static coverage var
static coverage_t coverage;

int main() {
  void* lol  = &track; 	//
  int cond1 = 5;
  int i = 0;
  init(); 		//
  if (cond1 > 0) {
	
  }

  for(i = 0; i<1000000;i++) {
    if (i==5){
    }
  }

  while(cond1<1000000) {
   
    cond1++;
  }

  report(); 		//
  return 0;
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
  void *addr  = (void*)&main;
  long length = sysconf(_SC_PAGESIZE);
  unsigned long *d = (unsigned long *) ((int) addr &~(length-1));
  
  if (mprotect(d, length, PROT_READ | PROT_WRITE | PROT_EXEC) != 0) {
    exit(EXIT_FAILURE);
  }

  memset(&coverage, 0, sizeof(coverage));
}
