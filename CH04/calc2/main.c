/**
    file name:  ch04/calc/main.c
    author:     Jung-JaeJoon(rgbi3307@nate.com)
    ���:        ���� ���α׷�(switch ���)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;   ///������ ������
    float result;
    char opr;   ///������(+, -, *, /)

retry:
    printf("ù��° ���� ���ڸ� �Է� �ϼ���:");
    scanf("%f", &a);    ///a�� ����(%d) �Է�
    fflush(stdin);      ///__fpurge(stdin); ������������, stdin�� Ű���� ��ġ��ȣ

    printf("������(+,-,*,/)�� �Է� �ϼ���:");
    scanf("%c", &opr);  ///opr�� ������ ���� �Է�

    printf("�ι�° ���� ���ڸ� �Է� �ϼ���:");
    scanf("%f", &b);

    switch (opr) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("opr �Է��� �Ϳ� ������ �ֽ��ϴ�.\n");
        return 0;   ///���α׷� ����
    }

    printf("%f %c %f == %f\n", a, opr, b, result); ///�Է¹��� �������� ���

    goto retry;

    return 0;
}
