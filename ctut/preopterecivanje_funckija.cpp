#include <iostream>

using namespace std;

float zbrajanje(float a, float b)         // zbrajanje brojeva s ostatkom
{
    return a + b;                         // povratna virjednost je rezultat zbroja brojeva a i b
}

int zbrajanje(int a, int b)               // zbrajanje cjelih brojeva
{
    return a + b;                         // povratna virjednost je rezultat zbroja brojeva a i b
} 
                                          
int main()
{
    int a, b;                             // deklariramo a i b unutar varijable za cjele brojeve   *ne mozemo unjeti 2 put a i b kao iste paramtere
    float c, d;                           // deklariramo c i d varijable za brojeve s ostatkom     *zato unosimo c i d te ih dodajemo u () umjeto a i b 
    cin >> a >> b;                        // unos a i b za cjele brojeve                            
    cin >> c >> d;                        // unos c i d za brojeve s ostatkom
    cout << zbrajanje(a, b) << endl;      // ispis za cjele brojeve
    cout << zbrajanje(c, d) << endl;      // ispis za brojeve s ostatkom

    return 0;
}