#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    while(a>=1200)
    {
        a-=1200;
        printf("%d\n",a);
    }
}