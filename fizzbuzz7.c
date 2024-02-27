#include <stdio.h>

int main() {
    int i;
    char *a[] = {"Fizz", "Buzz", "FizzBuzz", "%d\n"};
    for (i = 1; i <= 100; i++) {
        if (i % 15 == 0) printf(a[2]);
        else if (i % 3 == 0) printf(a[0]);
        else if (i % 5 == 0) printf(a[1]);
        else printf(a[3], i);
    }
    return 0;
}