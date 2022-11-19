#include <iostream>

using namespace std;

int main()
{
    int godine[3][3];  // varijabla godine sa 2 uglate [], prva je redak druga je stupac
    godine[0][0] = 1;  // upisujemo broj u redak i stupac
    godine[0][1] = 2;
    godine[0][2] = 3;

    cout << godine[0][2] << endl; // ispisujemo godine iz redka i stupca kojeg zelimo


}

/* 
   0  1  2  

0  1  2  3

1

2

 prve [] su uvjek redak a druge [] stupac*/