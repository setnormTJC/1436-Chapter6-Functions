#include <iostream>

using namespace std;

bool isValidDate(int month, int day, int year)
{
    if (month > 12 || month < 1)
    {
        return false; 
    }
    if (day > 31 || day < 1)
    {
        return false; 
    }

    //add other stuff here (
    else
    {
        return true; 
    }
}

int calculateAge(int birthMonth, int birthDay, int birthYear, 
                int currentMonth, int currentDay, int currentYear)
{
    int age = currentYear - birthYear; 
    //...
}


int main()
{
    cout << "Enter your birth date: " << endl; 
    int birthDay, birthMonth, birthYear; 

    cin >> birthMonth >> birthDay >> birthYear; 

    cout << "You entered month = " << birthMonth << " day = " << birthDay <<
        " and year = " << birthYear << endl; 

    cout << std::boolalpha; //displays true instead of 1 (and false instead of 0)
    cout <<"Was that a valid date? " << isValidDate(birthMonth, birthDay, birthYear) << endl;

    return 0;
}