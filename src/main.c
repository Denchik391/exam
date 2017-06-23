#include <stdio.h>
#include <math.h>
int main()
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
	    float  x = -c / b;
            printf ("x = %g", x);
        }
    }
    else
    {
        float d, x, x1, x2;
        d = b * b - 4 * a * c;
        if(d < 0)
        {
            printf("kornei net");
        } 
        else
        {
            if(d == 0)
            {
		x = -b / (2 * a);
                printf("x= %g", x);
            }
            else
            {
		x1 = (-b + sqrtf(d)) / (2 * a);
		x2 = (-b - sqrtf(d)) / (2 * a);
                printf("x1= %g, x2= %g", x1, x2 );
            }
        }
    }
    return 0;
}
