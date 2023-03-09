/**
 * C++ program to create Simple Calculator using switch case
 */

#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2, result=0.0;

    /* Print welcome message */
    cout<<"WELCOME TO SIMPLE CALCULATOR\n";
    cout<<"----------------------------\n";
    cout<<"Enter [number 1] [+ - * /] [number 2]\n";

    /* Input two number and operator from user */
    cin>> num1>>op>>num2;

    /* Switch the value and perform action based on operator*/
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }

    /* Prints the result */
    cout<<num1<< op<< num2<<"= "<< result;

    return 0;
}
