/**
 * C program to check Even or Odd number using switch case
 */

#include <iostream>
using namespace std;
int main()
{
    int num;

    /* Input a number from user */
    cout<<"Enter any number to check even or odd: ";
    cin>>num;

    switch(num % 2)
    {
        /* If n%2 == 0 */
        case 0: 
            cout<<"Number is Even";
            break;

        /* Else if n%2 == 1 */
        case 1: 
            cout<<"Number is Odd";
            break;
    }

    return 0;
}
