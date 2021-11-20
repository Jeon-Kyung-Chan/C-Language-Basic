#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < (2 * count); j++)
        {
            if (j >= count - i && j <= count + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}