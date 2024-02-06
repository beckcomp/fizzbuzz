#include <Windows.h>

int main(void)
{
    char *b = "FizzBuzz\0\0\0\0";
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD d;
    void *p;
    int a = 4;

    for (int i=0; i ++< 100; p=b) {
        int x = ((p=i%3?p+4:p)==b) | ((a=i%5?4:8)==8);
        char n[4] = {'0'+i/10%10,'0'+i%10,'\0','\0'};
        void *q[2] = {n, p};
        WriteConsole(h, q[x], a, &d, NULL);
        WriteConsole(h, "\n", 1, &d, NULL);
    }
    return 0;
}