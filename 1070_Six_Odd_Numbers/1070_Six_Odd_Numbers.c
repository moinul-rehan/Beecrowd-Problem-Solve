#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    int Y=X+11;

    if(X%2==0)
    {
        int Z=X+1;

        for(int i=Z; i<=Y; i=i+2)
        {
            printf("%d\n", i);
        }
    }
    else if(X%2!=0)
    {
        for(int j=X; j<Y; j=j+2)
        {
            printf("%d\n", j);
        }
    }
    return 0;
}
