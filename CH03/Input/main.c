#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float pi;

    printf("Please Input Digit: ");
    scanf("%d", &a);    ///Input:�Է���ġ(Ű����)�κ��� ������ �Է� --> a

    printf("Please Input Float: ");
    scanf("%f", &pi);

    printf("You input the digit a = %d\n", a);  ///Output
    printf("You input the float pi = %f\n", pi);  ///Output

    return 0;
}
