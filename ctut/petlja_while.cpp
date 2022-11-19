#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(int argca, char** argv)
{
    short int x = 0; // definiramo x kao 0
    while(x != 5)    // dodajemo petlju while (ponavljaj ovaj dio koda dok se uvjet ne ispuni)
    {                // u ovom slucaju uvjet je da se x ispisuje onoliko puta dok ne bude jednak broju 5 tocnije dok ne ne bude 4 
        cout << x << endl; // ispis << x << x je 0
        x = x + 1;        // svaki put kad se ispise dodaj +1 da se povecava broj dok ne dode do broja 5
    }


    return 0;
}
