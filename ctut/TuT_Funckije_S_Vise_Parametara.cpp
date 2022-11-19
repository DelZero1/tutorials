#include <iostream>

using namespace std;

int zbrajanje(int a, int b) // deklariramo varijablu zbrajanje u () dodajemo parametre jedan ili vise
{
    int rezultat = a + b; // deklariramo rezultat da uradi zbrajanje a + b
    return rezultat; // returna rezulatat, znaci da varijabla u pozivu preuzima oblik rezultata znaci ona je rezultat 2 broja u slucaju da je pod "return"
}

int main() // glavna funkcija main
{
    cout << zbrajanje(10, 10) << endl; // sa cout ispisujemo vrijednost funkcije zbrajanja u () dodajemo 2 broja koja ce biti zbrojena
    return 0;
}

/* 
********************************************
Moze i ovako pod "void (ne vraca nista ali ispisuje)
********************************************

void zbrajanje (int a, int b)
{
    int rezultat = a + b;
    cout << rezultat << endl; // ispisuje rezultat unutar funkcije "zbrajanje
    
    moze i samo return (a + b) bez ovog svega
}

int main()
{
    zbrajanje(10, 10); // u ovom slucaju pozivanja varijable "rezultat" rezultat ce se ispisati na ekranu
    return 0;
}*/