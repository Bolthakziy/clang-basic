/**
    file name: if01/main.c
    author: JungJaeJoon(rgbi3307@naver.com)
    ���: if ���ǹ��� ���ؼ� �����Ѵ�.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Input your age:");
    scanf("%d", &age);

    if (age > 29)
        printf("You are office worker.");   ///if ������ ��(True)
    else if (age > 19)
        printf("You are university student.");   ///if ������ ��(True)
    else
        printf("Your are child.");  ///if ������ ����(False)

    return 0;
}
