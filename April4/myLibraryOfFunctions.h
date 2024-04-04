#pragma once

#include<iostream>

using namespace std;

//using std::cout; 

void doSomethingByValue(int a) //passing by value 
{
    cout << a << endl;
    a++;
    cout << a << endl;
}

void doSomethingByReference(int& a) //passing by reference
{
    cout << a << endl;
    a++;
    cout << a << endl;
}

int returnANumber(int a)
{
    cout << "Address of a in the `returnANumber` function: " << &a << endl;
    return a + 2;
}

void changeNumber(int& a)
{
    a = a + 414;
}

void demoPassByConstReference(const int& a)
{
    cout << "a is: " << a << endl;
    //a++;
}

void printNumber(int& number)
{
    cout << number << endl;
}