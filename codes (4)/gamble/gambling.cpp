#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;


void main()
{
    int dados[5], bigwin[5], i;
    srand(time(0));
    for (i = 0; i < 5; i++)
    {
        cout << rand() % 50+1 << " \n";
    }

    for (i = 0; i < 5; i++)
    {
        cout << "qual numero é?";
        cin >> dados[i];
    }
   

}