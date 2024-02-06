#include <stdio.h>

int main(void)
{
    char *fb[] = {"%d\n", "Fizz\n", "Buzz\n", "FizzBuzz\n"};
    int c = 0x30490610;
    for (int i = 0; i ++< 100; c = (c>>2)|((c&3)<<28)) {
        printf(fb[c&3], i);
    }
    return 0;
}