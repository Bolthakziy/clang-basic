/**
    file name:  CH05/for06/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    ���:         for�� ���� 06
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float div3, mod;
    int count = 0;
    int digit;

    for (i=1; i <= 20; i++) {
        div3 = (float)i / 3;    ///�Ǽ�
        digit = div3;           ///����
        printf("i = %d, div3 = %f\n", i, div3);
        printf("digit = %d\n", digit);
        mod = div3 - (float)digit;
        if (mod == 0) {
            printf("3�� ���\n");
            count++;
        } else
            printf("3�� ����� �ƴԴϴ�.\n");

        printf("\n");
    }
    printf("count = %d\n", count);
    return 0;
}
