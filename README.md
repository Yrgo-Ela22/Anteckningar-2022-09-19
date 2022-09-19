# Anteckningar-2022-09-19
Mer villkorssatser, arrayer och pekare. Nyckelord break och continue demonstreras via var sitt exempel.

Filen repetition.c utgör ett program för att repetera if-else satsen. Här ombeds användaren mata in sin 
ålder och utefter angivet heltal sker utskrift av en matchande kommentar.

Filen array.c demonstrerar funktionsanrop med arrayer som ingående argument samt iteration genom arrayer via index och pekare. 
I C passeras automatiskt en pekare till det första elementet i arrayen, vilket är fördelaktigt, då det är mycket effektivare än att kopiera
hela arrayen och sedan passera en kopia. Dessutom krävs varken adressoperator & via funktionsanropet eller dereferensoperator * för att
komma åt arrayens innehåll (detta kan nås via index).

Filen break.c demonstrerar hur nyckelordet break.c kan användas för att avbryta loopar i C, oavsett om de är kontinuerliga eller inte.
I detta fall sker utskrift av heltal 0 - 19 genom att räkna upp en variabel num i en while-sats via prefix ++num. 
Efter 20 varv avbryts while-satsen via nyckelordet break.

Filen continue.c demonstrerar hur nyckelordet continue kan användas för att avbryta resten av ett varv i en loop i C. Loopen avbryts
alltså inte såsom när nyckelordet break används, utan bara resten av aktuellt varv i loopen. I detta fall skrivs samtliga udda heltal
mellan 0 - 19 ut, där nyckelordet continue används för att avbryta aktuellt varv innan utskrift vid jämna heltal i.


