/**
    file name:  CH05/mod/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    ���:         ������ ������ ����
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mod1, mod2, mod3, mod4, mod5, mod6;
    int i, count = 0;

    mod1 = 1.0 / 3.0;   ///0.3333..
    mod2 = 1 % 3;   ///����1�� ����3���� ������ ���� 0, ������ 1
    mod3 = 2.0 / 3.0;   ///0.666...
    mod4 = 2 % 3;   ///����2�� ����3���� ������ ���� 0, ������ 2
    mod5 = 3.0 / 3.0;   ///1.0
    mod6 = 3 % 3;   ///����3�� ����3���� ������ ���� 1, ������ 0(3�ǹ��)

    printf("mod1=%f, mod2=%f, mod3=%f, mod4=%f, mod5=%f, mod6=%f\n"
           , mod1, mod2, mod3, mod4, mod5, mod6);

    printf("\n");
    for (i=1; i <= 20; i++) {
        mod1 = i % 5;
        printf("i = %d, mod1 = %f\n", i, mod1);
        if (mod1 == 0) {
            printf("5�� ���\n");
            count++;
        } else
            printf("5�� ����� �ƴԴϴ�.\n");

        printf("\n");
    }
    printf("count = %d\n", count);
    return 0;
}
