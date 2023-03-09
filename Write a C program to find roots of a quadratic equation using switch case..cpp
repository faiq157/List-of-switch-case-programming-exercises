/**
 * C program to find all roots of a quadratic equation using switch case
 */

#include <iostream>
#include <math.h> /* Used for sqrt() */
using namespace std;
int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    cout<<"Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ";
    cin>>a>>b>>c;

    /* Calculate discriminant */
    discriminant = (b * b) - (4 * a * c);


    /* Compute roots of quadratic equation based on the nature of discriminant */
    switch(discriminant > 0)
    {
        case 1:
            /* If discriminant is positive */
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

           cout<<"Two distinct and real roots exists: root1 and root2"<< 
                    root1<< root2;
            break;

        case 0:
            /* If discriminant is not positive */
            switch(discriminant < 0)
            {
                case 1:
                    /* If discriminant is negative */
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);

                    cout<<"Two distinct complex roots exists: \n"<<endl<<root1<< imaginary<< root2<< imaginary;
                    break;

                case 0:
                    /* If discriminant is zero */
                    root1 = root2 = -b / (2 * a);

                    cout<<"Two equal and real roots exists: \n"<<endl<< root1<< root2;

                    break;
            }
    }

    return 0;
}
