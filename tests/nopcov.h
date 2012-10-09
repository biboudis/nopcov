#define __attribute__(x)
#define __inline__

#ifndef NOP_COV_H
#define NOP_COV_H

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/mman.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

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

#endif
