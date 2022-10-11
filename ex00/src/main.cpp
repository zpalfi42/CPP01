#include <iostream>
#include "Zombie.hpp"

/*
*   In order to comprove if the zombies are stored in the heap or the stack, uncomment the following functions.
* void    *bottom_heap;
* void    bottomheap_init( void )
* {
*     bottom_heap = std::malloc(sizeof(int));
* }
* void    heap_stack(void *p)
* {
*     int bottom_stack;
*     if (p > &bottom_stack || p < bottom_heap)
*         std::cout << "Stack memory\n";
*     else
*         std::cout << "Heap memory\n";
* }
*
*   And add this lines in the main()
*       bottomheap_init(); at the start;
*       heap_stack(zombie1); after the zombie1->announce() line;
*
*   Add the following line inside the randomChump function:
*       heap_stack(zombie2);
*
*   Finally add the heap_stack() function at the header.
*/

int main()
{
    Zombie  *zombie1 = newZombie("Heap zombie");
    zombie1->announce();
    randomChump("Stack zombie");
    delete (zombie1);
    return (0);
}