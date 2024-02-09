#include <stdio.h>
#define z *(int*)&
int main(void)
{
    float c = 7.31319893532e-10;
    for (int i = 0; i ++< 100; z c = (z c >>2)|((z c &3)<<28)) {
        char o[10] = "%d\n"; void *p = o;
        if (z c &1) sprintf(p-4, "Fizz\n", p+=4);
        if (z c &2) sprintf(p, "Buzz\n");
        printf(o, i);
    }
    return 0;
}
