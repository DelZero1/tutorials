#include <iostream>

using namespace std;

int main()
{
    int niz[3] = {10, 20, 30};   
   /* jednostavniji nacin pisanja niza
   
   umisto  * int niz[3];
                 niz[0] = "neki broj
                 
                 pišemo niz jednostavnije
                 * int niz[3] = {10, 20, 30}"*/

    int rez = niz[0] + niz[1];
    cout << rez << endl;

    return 0;
}