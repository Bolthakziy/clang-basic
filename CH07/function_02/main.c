#include <stdio.h>
#include <stdlib.h>

void fn1(void)
{
    printf("�Լ� fn1 �Դϴ�.\n");
}

void fn2(void)
{
    printf("�Լ� fn2 �Դϴ�.\n");
}

void fn3(void)
{
    printf("�Լ� fn3 �Դϴ�.\n");
}

int main()
{
    fn3();
    fn2();
    fn1();
    return 0;
}
