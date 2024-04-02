#include <iostream>

using namespace std;

void printTheTwoArgs(int x, string y) //not like pirates
{
    cout << "x is : " << x << " and y is: " << y << endl;
}

string doSomething()
{
    //cout << "Doing something!" << endl; 

    return "doing something";
}

//void bar() //stack overflow 
//{
//
//}

//void return type means you don't "return" anything to main

int main()
{
    //inside of the main function 
    //printHelloWorld(); 
    
    printTheTwoArgs(23, "aslodlkduyd");
    
    //cout << doSomething() << endl; 
    //int result = doSomething(); 

    //cout << result << endl; 

    return 0;
}