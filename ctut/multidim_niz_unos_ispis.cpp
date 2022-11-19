#include <iostream>

using namespace std;

int main()
{
    int godine[3][3];   // varijabla godine sa 3 redka i 3 stupca

    cout << "Unesite godine " << endl;  // da znamo da je program pocea

    for (int i = 0; i < 3; i++)   // for petlja za unos 3 redka                 //   kad imamo petlju unutar petlje          
    {                                                                           //   prvo se izvršava petlja koja je najviše unutra
        for (int j = 0; j < 3; j++) // for petlja za unos 3 stupca              //   zatim vanjska petlja
        {                                                                       //   u ovom slucaju prvo se unosi "j" pa tek onda "i"
        cin >> godine[i][j];  // unos godina                                    //   "i" uvjek kaska za "j" za 1 broj
        }
    }
    for (int i = 0; i < 3; i++) // for petlja za ispis 3 redka 
    {
        for (int j = 0; j < 3; j++) // for petlja za ispis 3 stupca
        {
        cout << godine[i][j];  // ispis godina
        }
    }

    return 0;
}