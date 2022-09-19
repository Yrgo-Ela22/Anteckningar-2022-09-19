/********************************************************************************
* repetition.c: Repetition av if-else satsen via l�mplig utskrift utefter
*               anv�ndarens �lder.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Ber anv�ndaren mata in sin �lder. Utefter inmatad �lder genomf�rs en
*       utskrift g�llande anv�ndarens �lder:
* 
*       - Vid en �lder p� 100 �r eller mer anses anv�ndaren vara ur�ldrig.
*       - Vid en �lder mellan 65 - 99 anses anv�ndaren vara gammal.
*       - Vid en �lder mellan 18 - 64 anses anv�ndaren vara vuxen.
*       - Vid en �lder mellan 0 - 17 anses anv�ndaren vara ett barn.
*       - F�r �vriga �ldrar skrivs ett felmeddelande ut.
********************************************************************************/
int main(void)
{
   int age = 0;

   printf("Enter your age:\n");
   scanf_s("%d", &age);

   if (age >= 100)
   {
      printf("You are ancient!\n");
   }
   else if (age >= 65 && age <= 99)
   {
      printf("You are old!\n");
   }
   else if (age >= 18 && age <= 64)
   {
      printf("You are an adult!\n");
   }
   else if (age >= 0 && age <= 17)
   {
      printf("You are a child!\n");
   }
   else
   {
      printf("Invalid age!\n");
   }
   
   return 0;
}