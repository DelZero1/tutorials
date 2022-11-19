#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>



using namespace std;

int main(int argca, char** argv)
{
    for (int i = 0; i < 5; i++)
    {
        cout << i <<endl;

    }
                            
    return 0;
}

/*uvjet unutar zagrada ce se izvrsiti samo jedan put pri pokretanju for petlje
drugi uvjet i < 5 je uvjet koji ne smije biti zadovoljen znaci i je manje od 5 i izvrsavaj dok ne dode do 4
 i++ znaci kao i = i + 1 
 i++ znaci da program nadoda 1 u sljedecoj liniji koda
 ++i -- rekli smo programu da odmah nadoda 1 
 
 primjer razlike se vidi u ispisu sa i++ / ++i 
 slucaj i++ program ce krenut od ispisivat od 0 
 slucaj ++i program ce na 0 odmah dodai 1 i pocet ce ispis od 1 */