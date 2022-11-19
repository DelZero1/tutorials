#include <iostream>

using namespace std;

void ispis (int broj)  // void funkcija ne vraca nikakvu vrijednost, unutar () unosimo parametar int za cjeli broj
{  
    cout << " Ja imam " << broj << " godina " << endl; // ispis koji ce se dogoditi nakon pozivanja funkcije "ispis"
}

int main() // glavna funkcija main
{
    /* int x;
    cout << "unesite broj" << endl;
    cin >> x;
    dodati unutar parametara ispis(x) */

    ispis(30); // pozivamo funkciju ispis a unutar () unosimo cjeli broj koji poprima int koji je unesen u "void ispis (int broj)" 
    return 0;
}

/*Rezultat je "Ja imam 30 godina"*/

/* Takodjer je moguce deklarirati unos u funckiju ispis()

int main() 
{
    int x; // deklariramo x kao unos
    cin >> x; // unosimo x
    ispis(x); // pozivamo funkciju "ispis" sa (x) parametrom x koji ovisi o unosu korisnika 
    return 0;

}*/