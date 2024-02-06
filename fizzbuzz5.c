#include <stdio.h>

int fizz(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 0;
    return (!fizz(n-1) & !fizz(n-2));
}

int buzz(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 0;
    if (n == 3) return 0;
    if (n == 4) return 0;
    return (!buzz(n-1) & !buzz(n-2) & !buzz(n-3) & !buzz(n-4));
}

int fizzbuzz(int n)
{
    return fizz(n) + 2 * buzz(n);
}

int main()
{
    char *fb[] = {"%d\n", "Fizz\n", "Buzz\n", "FizzBuzz\n"};
    for (int i = 0; i ++< 100;) {
        printf(fb[fizzbuzz(i)], i);
    }
    return 0;
}