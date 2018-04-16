/**
    file name:  ch07/function_01/main.c
    author:     Jung-JaeJoon(rgbi3307@nate.com)
    ���:        �Լ� �����
*/
#include <stdio.h>
#include <stdlib.h>

///�Լ� fn_calc�� ����ϴ�.
float fn_calc(float a, char opr, float b)
{
    float result;

    if (opr == '+') result = a + b;
    else if (opr == '-') result = a - b;
    else if (opr == '*') result = a * b;
    else if (opr == '/') result = a / b;
    else {
        printf("opr �Է��� �Ϳ� ������ �ֽ��ϴ�.\n");
        return 0;   ///���α׷� ����
    }
    return result;
}

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

    result = fn_calc(a, opr, b);

    printf("%f %c %f == %f\n", a, opr, b, result); ///�Է¹��� �������� ���

    /**
    if (result == 0) return 0;
    else goto retry;
    */
    if (result != 0) goto retry;
    return 0;
}
