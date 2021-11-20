#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    unsigned char flag = 16;
    unsigned char num1, num2;

    scanf("%hhu %hhu", &num1, &num2);

    flag |= num1 << 3;
    flag &= ~(num2 >> 2);
    flag ^= 1 << 7;
    //flag가 unsigned char 형이므로 크기가 8비트(1바이트)이다. 
    //따라서 1 << 7과 같이 1을 일곱 번 왼쪽으로 이동시키면 첫 번째 비트로 간다. 
    //이 값으로 비트 토글을 하려면 flag ^= 1 << 7;과 같이 작성하면 된다.

    printf("%u\n", flag);

    return 0;
}