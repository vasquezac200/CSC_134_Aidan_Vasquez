//@Author: Aidan Vasquez
//@Date: 8/27/2025
//@Purpose: This program divides a number by 0 purposly for an error.

//Importing a library
#include <iostream>

//use the standard namespace
using namespace std;

//define the mail() function/method
int main() 
{
    int num1 = 5;
    int num2 = 10;
    int product = num1 * num2;

    // Use the std(standard) output for the console and prints the product variable
    std::cout << product << std::endl;

    return 0;
}