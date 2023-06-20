#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    int Z=X+1;
    int Y=X+11;

    for(int i=Z; i<=Y; i=i+2)
    {
        printf("%d\n", i);
    }
    return 0;
}
