/**
 * C program to check vowel or consonant using switch case
 */

#include <iostream>
using namespace std;
int main()
{
    char ch;

    /* Input an alphabet from user */
    cout<<"Enter any alphabet: ";
    cin>>ch;

    /* Switch value of ch */
    switch(ch)
    {
        case 'a': 
            cout<<"Vowel";
            break;
        case 'e': 
            cout<<"Vowel";
            break;
        case 'i': 
            cout<<"Vowel";
            break;
        case 'o': 
            cout<<"Vowel";
            break;
        case 'u': 
            cout<<"Vowel";
            break;
        case 'A': 
           cout<<"Vowel";
            break;
        case 'E': 
            cout<<"Vowel";
            break;
        case 'I': 
            cout<<"Vowel";
            break;
        case 'O': 
            cout<<"Vowel";
            break;
        case 'U': 
           cout<<"Vowel";
            break;
        default: 
            cout<<"Consonant";
    }

    return 0;
}
