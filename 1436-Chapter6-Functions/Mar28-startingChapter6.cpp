#include <iostream>
#include <vector>


#include<algorithm>

using namespace std;

//defining a function outside of main makes it "globally accessible" 
int calculateSomeQuadraticExpression(int x)
{
    int result = pow(x, 2) + 4 * x - 2; 
    return result; 
}

void printHelloWorld() //the first word in the name of a function should be a VERB
{
    cout << "Hello world\n";
}

int main()
{
    srand(time(0)); 
    //rand() is "bad"
    vector<string> cards =
    {
        "1-diamonds", "2-diamonds","3-diamonds", "4-diamonds", "5-diamonds"
    };

    std::random_shuffle(cards.begin(), cards.end());//requires #include<algorithm>
    //"built-in" function is "pre-defined" (AKA: someone else defined the function) 
    
    for (int i = 0; i < cards.size(); i++)
    {
        cout << cards.at(i) << endl;
    }

    //cout << ceil(4.2) << endl; //ceiling 
    //cout <<ceil( - 4.2) << endl; //different "flavors" of functions are called "overloads" in programming


    //cout << cos(3.14182/2) << endl; //0? ?
   
    char letter = 'a'; 
    int someNumber = 42; 

    while (true)
    {

        cout << "Enter a lowercase: " << endl; 
        char inputChar; 
        cin >> inputChar; 

        cout << (char)toupper(inputChar) << endl; //typecast the integer returned by `toupper` to a character type 
        //this "calls" the `toupper` function
        
        //functions have a FUNCTION (they DO stuff!) 

        //if (isalpha(inputChar))
        //{
        //    cout << "That input was a letter!" << endl; 
        //}
        //else if (isdigit(inputChar))
        //{
        //    cout << "That was a DIGIT!" << endl; 
        //}

        //else
        //{
        //    cout << "That was a \"special\" character" << endl;
        //}
    }
    //cout << std::boolalpha; //this forces 0 to be displayed as "false" 

    //cout << "isalpha('a') results in: " << isalpha(letter) << endl; //returns a boolean (true or false) 
    //cout << "isalpha(42) results in: " << isalpha(someNumber) << endl;

    //cout << "Enter your password - we'll determine if it meets complexity requirements: " << endl; 
    string password; 



    //f(x) = x^2 + 4x - 2
    //x = 2
    //f(2) = 2^2 + 4(2) - 2
    //output = 4 + 8 - 2
    //output = 10 

    //"function call" (jargon) 
    //int x = 2; 
    //cout << calculateSomeQuadraticExpression(x) << endl; //"argument" (AKA: input)  


    return 0;
}