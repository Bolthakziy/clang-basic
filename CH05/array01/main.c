/**
    file name:  CH05/array01/main.c
    author:     Jung-JaeJoon (rgbi3307@nate.com)
    ���:        �迭����
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20] = {
        80, 100, 90, 60, 40,
        80,  70, 88, 65, 50,
        70,  85, 92, 55, 66,
        80,  95, 75, 87, 80
     };
    int i;
    float sum=0, avg;

    for (i=0; i < 20; i++) {
        ///�հ� ���
        sum = sum + a[i];   ///sum += a[i];
    }
    avg = sum / 20;  ///��� ���

    printf("sum=%f, avg=%f\n", sum, avg);
    return 0;
}
