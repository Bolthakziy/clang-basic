/**
    file name:  CH05/for01/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    ���:         for�� ���� 01 (1���� 10���� �ݺ��ؼ� ����)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;  ///-21�� ~ 21��
    ///unsigned int i; ///0 ~ 42��
    ///long i;         ///1800��(64��Ʈ)
    int sum = 0;

    for (i=1; i <= 10; i++)
    {
        printf("i=%d\n", i);
        sum = sum + i;
    }

    printf("sum = %d\n", sum);

    return 0;
}
