#include <iostream>

using namespace std;

double zbrajanje (int a, int b);
double oduzimanje (int a, int b);


int main()
{
    int odabir;
    cout << "Odaberite broj uz matematicku operaciju\n (1) Zbrajanje\n (2) Oduzimanje\n" << endl;
    cin >> odabir;
    if (odabir == 1)
    {
        int a;
        int b;
        cout << "Unesite prvi broj" << endl;
        cin >> a;
        cout << "Unesite drugi broj" << endl;
        cin >> b;
        zbrajanje(a, b);
    }
    else if (odabir == 2)
    {
        int a;
        int b;
        cout << "Unesite prvi broj" << endl;
        cin >> a;
        cout << "Unesite drugi broj" << endl;
        cin >> b;
        oduzimanje(a, b);
    }
    else 
    {
        cout << "Odabrali ste nepostojecu opciju" << endl;

    }
  
  return main(); // vrati me na pocetak
}


/* ----------     Zbrajanje i oduzimanje ----------- */
double zbrajanje (int a, int b)
{
    int rezultat = a + b;  
    cout << "Rezultat je " << rezultat << endl;

    return 0;  

}
double oduzimanje (int a, int b)
{
    int rezultat = a - b;  
    cout << "Rezultat je " << rezultat << endl ;
    

    return 0;  

}
/* ----------     KRAJ   ----------- */