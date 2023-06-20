#include<stdio.h>
int main()
{
    float a, b, c, Peri, Tap;
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && b+c>a && c+a>b)
    {
        Peri=a+b+c;

        printf("Perimetro = %.1f\n", Peri);
    }
    else
    {
        Tap=((a+b)/2)*c;
        printf("Area = %.1f\n", Tap);
    }
    return 0;
}
