#include<stdio.h>
int main()
{
    int ar[5]={15,12,10,7,4};
    float s, NS, RG;

    scanf("%f", &s);

    if(s>0 && s<400.01)
    {
        RG = s * ar[0]/100;
        NS = s + RG;

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", NS, RG, ar[0]);
    }
    else if(s>400.00 && s<800.01)
    {
        RG = s * ar[1]/100;
        NS = s + RG;

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", NS, RG, ar[1]);
    }
    else if(s>800.00 && s<1200.01)
    {
        RG = s * ar[2]/100;
        NS = s + RG;

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", NS, RG, ar[2]);
    }
    else if(s>1200.00 && s<2000.01)
    {
        RG = s * ar[3]/100;
        NS = s + RG;

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", NS, RG, ar[3]);
    }
    else if(s>2000.00)
    {
        RG = s * ar[4]/100;
        NS = s + RG;

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", NS, RG, ar[4]);
    }

    return 0;
}


