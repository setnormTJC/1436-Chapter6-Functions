#include <iostream>
#include<iomanip>
#include "myFunctions.h"

using namespace std;


double mySqrt(double input)
{
    cout << fixed << setprecision(5); 

    cout << "Sqrt to 5 decimal places is: " << sqrt(input) << endl; 
    return sqrt(input); 
}

void viewDirectMessages()
{
    cout << "Hi, this is so and so" << endl;
    cout << "I love your music." << endl;
    cout << "Etc." << endl;
 
}
                        //6 and 5
int returnLargerOfTwo(int firstNumber, int secondNumber)
{
    if (firstNumber >= secondNumber)
    {
        return firstNumber; 
    }

    else
    {
        return secondNumber; 
    }
}

                        //1             2       3
int returnLargestOfThree(int first, int second, int third)
{
    int largestOfAll3; 

    int largerOfFirst2 = returnLargerOfTwo(first, second); 

    largestOfAll3 = returnLargerOfTwo(largerOfFirst2, third); 

    return largestOfAll3; 
}

//comparative -> ends in "er"
//superlative -> ends in "est" 

int main()
{
    //int a; 
    //int a; 
    while (true)
    {

        cout << "Enter THREE numbers: " << endl; 
        int firstNumber, secondNumber, thirdNumber; //does NOT conflict with variable names in external function 
        cin >> firstNumber >> secondNumber >> thirdNumber; 
        //1, 2, and 3

        
        int theLargeSTNumber = returnLargestOfThree(firstNumber, secondNumber, thirdNumber);
        
        theLargeSTNumber = returnLargerOfTwo(firstNumber,
                            returnLargerOfTwo(secondNumber, thirdNumber));

        cout << "The largest number is: " << theLargeSTNumber << endl; 


    }

    //int aNumber = 5; 

    //int doubleA = return2x(aNumber); 

   // cout << doubleA << endl; 

    //char upperCaseM = toupper('m'); 

    //cout << upperCaseM << endl;

    return 0;
}