/**
 * C program to print day of week using switch case
 */

# include <iostream>
using namespace std;

int main()
{
    int week;
    
    /* Input week number from user */
    cout<<"Enter week number: 1 to 7: ";
    cin>>week;
    
    switch(week)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            cout<<"Invalid input! Please enter week number between 1-7.";
    }

    return 0;
}
