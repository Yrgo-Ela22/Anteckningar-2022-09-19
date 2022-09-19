/********************************************************************************
* break.c: Demonstration av nyckelordet break i C, som används för att avbryta
*          loopar, oavsett ifall dessa är kontinuerliga eller inte.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Skriver ut alla heltal mellan 0 - 19 via användning av en kontinuerlig
*       while-sats. Nyckelordet break används för att avbryta while-satsen
*       efter 20 varv. Inkrementering sker av variabel num sker varje varv 
*       innan jämförelse med heltal 20 via prefixet ++num.
********************************************************************************/
int main(void)
{
   int num = 0;

   while (1)
   {
      printf("%d\n", num);
      if (++num >= 20) break;
   }

   return 0;
}