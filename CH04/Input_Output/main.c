/**
    file name: Input_Output/main.c
    author: JungJaeJoon(rgbi3307@naver.com)
    ���: �Է°� ��¿� ���ؼ� �����Ѵ�.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    ///1.�Է��Ѵ�
    printf("Input a:");
    scanf("%d", &a);
    ///2.ó���Ѵ�
    a = a + 1;
    a++;    ///��������(a=a+1)
    a = a - 1;
    a--;    ///���ҿ���(a=a-1)
    printf("a=%d\n", a);

    a = a + 2;
    a += 2;     ///a = a + 2;
    a = a - 2;
    a -= 2;
    printf("a=%d\n", a);

    a = a * 10;
    a *= 10;
    printf("a=%d\n", a);

    a = a / 10;
    a /= 10;

    ///3.����Ѵ�.
    printf("a=%d\n", a);
    return 0;
}
