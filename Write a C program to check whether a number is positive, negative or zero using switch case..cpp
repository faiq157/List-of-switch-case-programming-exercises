/**
 * C program to check positive negative or zero using switch case
 */ 
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter any number: ";
    cin>>num;

    switch (num > 0)
    {
        // Num is positive
        case 1:
            cout<<"Number is positive."<< num;
        break;

        // Num is either negative or zero
        case 0:
            switch (num < 0)
            {
                case 1: 
                    cout<<"Number is negative."<<num;
                    break;
                case 0:
                    cout<<"Number is zero."<< num;
                    break;
            }
        break;
    }

    return 0;
}
