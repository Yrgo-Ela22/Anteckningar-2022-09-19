/********************************************************************************
* array.c: Demonstration av flyttalsarray i C.
********************************************************************************/
#include <stdio.h>

/********************************************************************************
* print: Skriver ut inneh�llet ur en flyttalsarray av angiven storlek.
*        F�r iterationen anv�nds index f�r elementen i arrayen. Det g�r lika
*        bra att itererara med pekare och skriva ut varje element via dereferens
*        genom att anv�nda f�ljande for-sats:
* 
*        for (const double* i = data; i < data + size; ++i) 
*        {
*           printf("%lg\n", *i);
*        }
* 
*        - data: Pekare till arrayen vars inneh�ll skall skrivas ut.
*        - size: Arrayens storlek, dvs. antalet element denna rymmer.
********************************************************************************/
void print(const double* data, const int size)
{
   for (int i = 0; i < size; ++i)
   {
      printf("%lg\n", data[i]);
   }
   return;
}

/********************************************************************************
* main: Deklarerar och initierar en flyttalsarray som rymmer fem element.
*       Arrayens inneh�ll skrivs ut i terminalen, f�ljt av att programmet
*       avslutas.
********************************************************************************/
int main(void)
{
   const double data[] = { 10, 20, 30, 40, 50 };
   const size_t size = sizeof(data) / sizeof(double);

   print(data, size);
   return 0;
}