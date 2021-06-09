// src.cpp : Defines the functions for the static library.
//

#include <stdio.h>
#include "ghost.h"
#include "ghost_timer.cpp"

// TODO: This is an example of a library function
void ghost_init()
{
  ghosttimer_init() ;
  printf( "ghost initialized\n");
} // :: ghost_init

void ghost_shutdown()
{
  printf("ghost shutdown\n");
} // :: ghost_shutdown
