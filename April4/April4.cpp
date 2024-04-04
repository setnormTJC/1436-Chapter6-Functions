#include <iostream>

#include<vector>
#include "myLibraryOfFunctions.h"

using namespace std;



int main()
{
    int a = 4; 

    auto b = 123; 

    auto c = "1234";

    auto d = 123.45f; 
    auto e = 'a';

    cout << typeid(a).name() << endl; 

    doSomethingByValue(a);

    //int a = 5; 


//    //in main:
//    int a = 10;
//    int b = 5;
//    int c = a + b;
//    printNumber(c);
//
////    printNumber(a + b);
//    //a = 6; 
//
//    cout << sizeof(a) << endl; //sizeof() returns the number of Bytes allocated in RAM for a
//    cout << sizeof(int) << endl; 
//    cout << sizeof(&a) << endl; 
//    //8 Bytes for an address that is 16 digits long 
//
//    returnANumber(a);
//    cout << "The address of a in the MAIN function: " << &a << endl; 
//    cout << a << endl; 
//    //cout << returnANumber(a) << endl; 
//    //changeNumber(a); 
//    //cout << a << endl; 
//    //doSomethingByValue(a); 
//    //cout << "After calling doSomethingByValue, a is: " << a << endl; 
//
//    //doSomethingByReference(a); 
//    //cout << "After calling doSomethingByREFERENCE: " << a << endl; 
//
//   // cout << &a << endl; 
//
//
//    //int& copyOfA = a; //this is a declaration of a "reference" variable 
//
//    //cout << "Value of a: " << a << "\nValue of copyOfA: " << copyOfA << endl; 

    //a = 54; 

    //cout << "Value of a: " << a << "\nValue of copyOfA: " << copyOfA << endl;


    return 0;
}