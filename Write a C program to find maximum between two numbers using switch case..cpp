/**
 * C program to find maximum between two numbers using switch case
 */

# include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    /* Input two numbers from user */
    cout<<"Enter two numbers to find maximum: "<<endl;
    cin>>num1>>num2;

    /* Expression (num1 > num2) will return either 0 or 1 */
    switch(num1 > num2)
    {   
        /* If condition (num1>num2) is false */
        case 0: 
            cout<<"Num2  is maximum : "<<" " <<num2;
            break;

        /* If condition (num1>num2) is true */
        case 1: 
            cout<<"Num1 is maximum: "<<" " <<num1;
            break;
    }

    return 0;
}
