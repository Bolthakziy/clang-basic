/**
    file name:  CH05/do_while_01/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    ���:        do while ����2
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///int a[20];  ///���� �迭 20�� ���� ����
    int *a; ///�迭�� ���۵Ǵ� �޸� �ּ�
    int i, total;
    float sum=0, avg;

    printf("������ � �Է��ұ��?");
    scanf("%d", &total);

    ///(int *)�� �ǹ̴� a�迭�� �ּҿ� ������ �����Ͱ� �Էµ˴ϴ�.
    ///a = (int *)malloc(total);  ///total���� ��ŭ �޸� �迭 �Ҵ�
    a = (int *)calloc(total, 4);  ///total���� ��ŭ �޸� �迭 4����Ʈ�� �Ҵ�
    i=0;
    do {
        printf("%d��° ������ �Է��ϼ���:", i+1);
        scanf("%d", &a[i]);

        sum += a[i]; ///�հ� ���
        i++;
        /**
        if (i >= 20) {
                printf("�ʰ� �Է� �Դϴ�.\n");
                break;
        }
        */
    } while (i < total);

    total = i;
    printf("�Է��� ���(����=%d):\n", total);

    for (i=0; i<total; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }

    avg = sum / total;  ///��� ���
    printf("sum=%f, avg=%f\n", sum, avg);

    free(a);    ///�迭 a�� �Ҵ�� �޸� ����

    fflush(stdin);   ///Ű���� ���� ������ ���.
    getchar();
    return 0;
}
