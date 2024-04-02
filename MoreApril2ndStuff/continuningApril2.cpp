#include <iostream>

using namespace std;

//return type (function type) is DOUBLE
double one(double) // function "header"/signature
{ 
    return 1.0; //function definition (body)
} //one-line function 


bool isSameStringLength(string firstString, string secondString)
{
    if (firstString.length() == secondString.length()) 
    {
        return true;
    }
    else {
        return false;
    }
}


bool isEven(int n)
{
    //if(n % 2 == 0)
    if (n == 1)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else if (n == 3)
    {
        return false;
    }//etc...this function definition is a joke
}

int a = 4; //GLOBAL variable


void doSomething()
{
    //int a = 4; 

    cout << "a is " << a << endl; 

}
int main()
{
    doSomething(); 

    cout << "From main, a is: " << a << endl; 

    //std::is
    cout << std::boolalpha; //prints true and false instead of 1 and 0
    cout << isEven(2) << endl; 

    string s1, s2; 

    cout << " Enter two strings: " << endl; 
    cin >> s1 >> s2; 

    bool isSameLength = isSameStringLength(s1, s2); 
    cout << "Are " << s1 << " and " << s2 << " the same length (number of chars)? " << endl; 
    cout << isSameLength << endl; 
    //for (double i = -10; i < 8; i++)
    //{
    //    cout << "For i = " << i << " the one function returns: " << one(i) << endl;
    //}

    
    return 0;
}