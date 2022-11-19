#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(int argca, char** argv)
{
    char x;
    cout << "Koje je prvo slovo vaseg imena" << endl;
    cin >> x;
    switch (x)
    {
         case 'k':
         cout << "Zovete se Kristijan" << endl;
         break;
         case 'a':
         cout << "Zovete se Ante" << endl;
         break;
         default:
         cout << "ne znam" << endl;

    }


    return 0;
}
