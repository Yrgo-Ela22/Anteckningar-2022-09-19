/********************************************************************************
* repetition.c: Repetition av if-else satsen via lämplig utskrift utefter
*               användarens ålder.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* main: Ber användaren mata in sin ålder. Utefter inmatad ålder genomförs en
*       utskrift gällande användarens ålder:
* 
*       - Vid en ålder på 100 år eller mer anses användaren vara uråldrig.
*       - Vid en ålder mellan 65 - 99 anses användaren vara gammal.
*       - Vid en ålder mellan 18 - 64 anses användaren vara vuxen.
*       - Vid en ålder mellan 0 - 17 anses användaren vara ett barn.
*       - För övriga åldrar skrivs ett felmeddelande ut.
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