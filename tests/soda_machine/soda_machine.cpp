// soda_machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ghost/ghost.h>

int main()
{
  ghost_init() ;
  std::cout << "Hello World!\n";
  ghost_shutdown() ;
}

