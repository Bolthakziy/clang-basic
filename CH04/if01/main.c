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

input_age:

    printf("Input your age:");
    scanf("%d", &age);

    if (age == 0) {
        printf("GoodBye~~\n");
        return 0;
    }

    if (age < 10) {
        printf("You are baby!");
        return 0;
    }

    if (age >= 40) {    ///age > 39
        printf("You are adult.\n");
    } else if (age >= 30) { ///age > 29
        printf("You are office worker.\n");   ///if ������ ��(True)
    } else if (age >= 20) { ///age > 19
        printf("You are university student.\n");   ///if ������ ��(True)
    } else {
        printf("Your are child.\n");  ///if ������ ����(False)
    }
    printf("Your age is %d\n", age);

    goto input_age;

    return 0;
}
