#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;



int main(int argc, char** argv)
{
   char x; // Unosimo prvo slovo matematicke operacije
   short int a; // prvi broj
   short int b; // drugi broj
   short int c; // rezultat
   
   cout << "Odaberite matematicku operaciju\n Zbrajanje\n Oduzimanje\n Unesite prvo slovo naziva operacije" << endl; // odabir mat operacije
   cin >> x; // unos slova jer smo definirali to pod "Char" 
   switch (x) // odabir slucaja u zagradama "X" sto znaci "ovisno o unosu"
   {

    case 'z': // u slucaju unosa slova "Z"
    cout << "Odabrali ste zbrajanje\n" << endl; // ispis
    cout << "Unesite prvi broj" << endl; // unos broja
    cin >> a; // komanda za unos
    cout << "Unesite drugi broj" << endl; // ispis
    cin >> b; // komanda za drugi unos
    c = a + b; // operacija zbrajanja
    cout << "Rezultat je " << c << endl; // ispis rezultata
    break; // prekini operaciju

    case 'o':
    cout << "Odabrali ste oduzimanje\n" << endl;  // P
    cout << "Unesite prvi broj" << endl;          //   o 
    cin >> a;                                     //     n
    cout << "Unesite drugi broj" << endl;         //       a
    cin >> b;                                     //         v
    c = a - b;                                    //           lj
    cout << "Rezultat je " << c << endl;          //              a
    break;                                        //                m
                                                  //                  o
    default: //  u slucaju krivog unosa koristimo "default"
    cout << "Krivi unos" << endl; // ispis
  }

    return 0;
}