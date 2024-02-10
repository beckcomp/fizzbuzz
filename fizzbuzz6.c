#include <stdio.h>

int main(void)
{
    int c = 810092048;
    for (int i = 0; i ++< 100; c = (c>>2)|((c&3)<<28)) {
        char o[10] = "%d\n"; void *p = o;
        if (c&1) sprintf(p-4, "Fizz\n", p+=4);
        if (c&2) sprintf(p, "Buzz\n");
        printf(o, i);
    }
    return 0;
}