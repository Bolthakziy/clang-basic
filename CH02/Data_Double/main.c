#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;   ///64��Ʈ(8����Ʈ) �Ǽ�(�Ҽ���)
    double big_data = 900000000000000000; ///900��

    d = 3.14159265358979;
    printf("dobule d = %f\n", d);
    printf("dobule d = %1.14f\n", d);
    printf("double big_data = %f\n", big_data);
    return 0;
}
