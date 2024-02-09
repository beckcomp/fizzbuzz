#include <stdio.h>
#define c(x) *(int*)&x
int main(void)
{
    float c = 7.31319893532e-10;
    for (int i = 0; i ++< 100; c(c) = (c(c)>>2)|((c(c)&3)<<28)) {
        char o[10] = "%d\n"; void *p = o;
        if (c(c)&1) sprintf(p-4, "Fizz\n", p+=4);
        if (c(c)&2) sprintf(p, "Buzz\n");
        printf(o, i);
    }
    return 0;
}
