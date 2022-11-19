#include <iostream>

using namespace std;

int main()
{
    int godine[3]; // "int" je tio niza, "godine" ime niza, [] indeks ili broj elemenata koliko emo koristiti, pocetna vrijednost je od 0 a krajnja je -1
    godine[0] = 25; // kreiramo niz "godine" [broj niza] i vrijenost
    godine[1] = 24;
    godine[2] = 22;
    cout << godine[2] << endl; // primjer ispisa godina pod indeksom "2"

    /*int x = godine[2] + godine[1];
    dakle mozemo se igrati kako god zelimo s nizovima*/

    return 0;

}