#include "nopcov.h"

void report()
{
  printf("Branches taken: %d\n", coverage.count);
}

void track(void* start, void* end)
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

void init()
{
  void *textSegmentAddr = (void*) &__executable_start;
  size_t textSegmentLength = &etext - &__executable_start;
  long pageSize = sysconf(_SC_PAGESIZE);
  unsigned long *alignedTextSegmentAddr = (unsigned long *) ((int) textSegmentAddr &~(pageSize-1));
  if (mprotect((void*) alignedTextSegmentAddr, textSegmentLength, 0x1 | 0x2 | 0x4) != 0) {
    printf("init::mprotect error:%s\n", strerror((*__errno_location ())));
    exit(1);
  }
  memset(&coverage, 0, sizeof(coverage));
}
