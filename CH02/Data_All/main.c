#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'A';   ///65
    int b = 300;
    float c = 3.14;
    long d = 20180228;  ///2õ��
    unsigned long d2 = 4200000000;  ///42��
    double e = 3.141592;

    printf("char a = %c, %d\n", a, a);
    printf("int b = %d\n", b);
    printf("float c = %f\n", c);
    printf("long d = %ld\n", d);    ///long digit
    printf("long d2 = %lu\n", d2);    ///long unsigned
    printf("double e = %1.6f\n", e);

    printf("size a = %d\n", sizeof(a)); ///a�������� ũ�⸦ ����Ʈ ������ ���
    printf("size b = %d\n", sizeof(b)); ///b�������� ũ�⸦ ����Ʈ ������ ���
    printf("size c = %d\n", sizeof(c)); ///c�������� ũ�⸦ ����Ʈ ������ ���
    printf("size d = %d\n", sizeof(d)); ///d�������� ũ�⸦ ����Ʈ ������ ���
    printf("size d2 = %d\n", sizeof(d2)); ///d2�������� ũ�⸦ ����Ʈ ������ ���
    printf("size e = %d\n", sizeof(e)); ///e�������� ũ�⸦ ����Ʈ ������ ���

    return 0;
}
