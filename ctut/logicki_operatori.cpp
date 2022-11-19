

#include <iostream>

using namespace std;

int main()
{
    int x;                                         // varijabla x kao unos 
    cout << "Unesite broj" << endl;                // pocetni ispis
    cin >> x;                                      // unos broja
    if ((x < 2 && x !=0) || (x > 5 && x != 10))    // logicki operator && sto znaci "i" 
    {                                              // logicki operator || sto znaci "ili"
        cout << "X je manji od 2 ili X je razlicit od nula" << endl; // ispis ukoliko je uvjet zadovoljen
    }
    else(x);                       // ili ako uvjet nije zadovoljen u () je definirana varijabla unosa X
    {
        cout << "Ko zna" << endl;  // ispis ukoliko uvjet nije zadovoljen
    }

    return 0;
}