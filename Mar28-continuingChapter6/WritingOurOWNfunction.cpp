#include <iostream>

using namespace std;

void printTheTwoArgs(int x, string y) //not like pirates
{
    cout << "x is : " << x << " and y is: " << y << endl;
}

void doSomething()
{
    cout << "Doing something!" << endl; 
}

//void bar() //stack overflow 
//{
//
//}

//void return type means you don't "return" anything to main

int main()
{
    //printHelloWorld(); 
    
    printTheTwoArgs(23, "aslodlkduyd");
    
    doSomething(); 

    return 0;
}