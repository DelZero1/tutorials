#include <iostream>

using namespace std;

int main()
{
   int godine[11];                          // deklariramo niz "godine [11 nizova u indeksu]"

   cout << "Unesite godine" << endl;       // ispis (da znamo da je program izvrsen)

   for(int i = 0; i < 11; i++)            // petlja for (i jednako 0; i je manje od 11; i++ dodaj niz za 1 kad se unese broj)
   {
    cin >> godine[i];                    // unos godina u niz [i]
   }
   cout << "Godine koje ste unjeli su " << endl;
   for(int i = 0; i < 11; i++)         //  for petlja opet za ispis godina
   {
      cout << godine[i] << endl;              //  ispis godina iz niza "godine [i]"
   }

   return 0;
}

/* Obrnuti nacin ispisa od 10 prema 0 je
petlja for (i jednako 10; i je vece od -1; i-- oduzmi)*/