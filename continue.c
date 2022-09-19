/********************************************************************************
* continue.c: Demonstration av nyckelordet continue i C, som används för att
*             avbryta resten av ett varv i en loop.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Skriver ut alla udda heltal mellan 0 - 19 via en loop, där varje varv
*       med ett jämnt heltal i avbryts innan utskrift via nyckelordet continue.
********************************************************************************/
int main(void)
{
   for (int i = 0; i < 20; ++i)
   {
      if (i % 2 == 0) continue;
      printf("The number %d is uneven!\n", i);
   }

   return 0;
}