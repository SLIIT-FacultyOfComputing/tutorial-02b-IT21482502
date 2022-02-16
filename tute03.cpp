/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
using namespace std;

int main()
{
    int no;  //variables
    long fac;

    cout << "Enter a Number : ";  
    cin >> no;  // getting user input

   fac = 1;
 
    //loop starts
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }
    // loop end 

    cout << "Factorial of " << no << " is " << fac <<endl;  //display output
    return 0;
}
