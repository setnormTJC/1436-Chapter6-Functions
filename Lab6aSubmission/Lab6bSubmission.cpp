#include <iostream>
#include "diceRolling.h"

using namespace std;



int main()
{
    srand(time(0));

    int d4Result = -1;
    int d20Result = -1;

    int rollCount = 0;

    //double averageRollCount = 0;
    //double totalRollCount = 0; 
    //for (int i = 0; i < 100; i++)
    //{
        while (d4Result != 1 || d20Result != 1)
        {
            d4Result = rollD4();
            d20Result = rollD20();

            rollCount = rollCount + 1;

            cout << "4-sided dice rolled: " << d4Result << endl;
            cout << "20-sided dice rolled: " << d20Result << endl;


            cout << "\n\n";
        }

        cout << "Total number of rolls: " << rollCount << endl; //theoretically should ~= 80
    //    totalRollCount += rollCount; 
    //}
    //cout << "Average roll count: " << totalRollCount / 100 << endl; 
    return 0;
}