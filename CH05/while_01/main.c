/**
    file name:  CH05/while_01/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    ���:        while ����1
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20];
    int i, total;
    float sum=0, avg;

_retry:
    printf("������ � �Է��ұ��?");
    scanf("%d", &total);

    if (total > 20) {
        printf("ó���� �� �ִ� ���� �ʰ�, �ٽ� �Է� �ϼ���.\n");
        ///return 0;
        goto _retry;
    }

    i=0;
    while (i < total)
    {
        printf("%d��° ������ �Է��ϼ���:", i+1);
        scanf("%d", &a[i]);

        sum += a[i]; ///�հ� ���
        i++;
        if (i >= 20) {
            printf("�ʰ� �Է� �Դϴ�.\n");
            break;
        }
    }

    total = i;
    printf("�Է��� ���(����=%d):\n", total);

    for (i=0; i<total; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }

    avg = sum / total;  ///��� ���
    printf("sum=%f, avg=%f\n", sum, avg);

    fflush(stdin);   ///Ű���� ���� ������ ���.
    getchar();

    return 0;
}
