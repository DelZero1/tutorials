#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

/*petlja Do while
znaci da ce se program unutar zagrada izvrsiti barem jedan put*/

using namespace std;

int main(int argca, char** argv)
{
    short int x = 0; // definiramo x kao 0

    do  //  kazemo programu da uradi zadatak unutar {}
    {                
        cout << x << endl;   // program ce se ispisati barem jedan put bez obzira sto uvjet unutar "while(uvjet)" nije zadovoljen
        x = x + 1;        
    }
    while(x < -5);  // petlja while i uvjet (u ovom slucaju nije zadovoljen)

    return 0;
}
