/********************************************************************************
* break.c: Demonstration av nyckelordet break i C, som anv�nds f�r att avbryta
*          loopar, oavsett ifall dessa �r kontinuerliga eller inte.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Skriver ut alla heltal mellan 0 - 19 via anv�ndning av en kontinuerlig
*       while-sats. Nyckelordet break anv�nds f�r att avbryta while-satsen
*       efter 20 varv. Inkrementering sker av variabel num sker varje varv 
*       innan j�mf�relse med heltal 20 via prefixet ++num.
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