#include <stdio.h>

int main()
{
    unsigned long long num1;
    scanf("%lld",&num1);
    printf("%llu",num1<<20>>4);
}