#include <stdio.h>

int main()
{
    char c1;
    scanf("%c",&c1);
    if(c1 != 'k')
        printf("참\n");
    else if(c1 == 'k')
        printf("거짓\n");
    if(c1>'h')
        printf("참\n");
    else if(c1<='h')
        printf("거짓\n");
    if(c1<='o')
        printf("참\n");
    else if(c1>'o')
        printf("거짓\n");
}