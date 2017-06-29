#include "quadratic_equation.h"
#include <math.h>

float findX1(float a, float b, float d)
{
	return (-b + sqrtf(d) ) / (2 * a);
	//return a;
}

float findX2(float a, float b, float d)
{
	return (-b - sqrtf(d)) / (2 * a);
	//return a; 
}

float findX(float a, float b)
{
	return -b / (2 * a);
}

float discriminant(float a, float b, float c)
{
	return  ((b * b) - (4 * a * c));	
}

float coefficientCB(float b, float c)
{
	return (-c / b);
}

void quadratic_equation()
{
    float a,b,c;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                printf("x - any number");
            }
            else
            {
                printf("no roots");
            }
        }
        else
        {
            printf ("x = %g", coefficientCB(b, c));
        }
    }
    else
    {
        float d;
        d = discriminant(a, b, c);
        if(d < 0)
        {
            printf("kornei net");
        } 
        else
        {
            if(d == 0)
            {
                printf("x= %g", findX(a, b));
            }
            else
            {
                printf("x1= %g, x2= %g", findX1(a, b, d), findX2(a, b, d) );
            }
        }
    }
}
