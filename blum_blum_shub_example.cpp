#include<iostream>
#include "bbs.h"

using namespace std;

int main()
{
    const int P = 7;
    const int Q = 19;
    const int seed = 6;
    
    BBS numberGen(P, Q, seed);
    
    //generate 6 random numbers
    for (int i = 0; i < 6; i++)
    {
        cout << numberGen.getRandNum() << " ";
    }
    
    cout << endl;
    
    //generate 6 random bits
    for (int i = 0; i < 6; i++)
    {
        cout << numberGen.getRandBit() << " ";
    }

    return 0;
}
