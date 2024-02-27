#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *f;
    f = fopen("fizzbuzz9.c", "w");
    if (f) {
        fprintf(f, "#include <stdio.h>\n\n");
        fprintf(f, "int main(void)\n{\n");
        for (int i = 1; i <= 100; i++) {
            int fb = 0;
            fprintf(f, "\tprintf(\"");
            if (!(i%3)) { fprintf(f, "Fizz"); fb++; }
            if (!(i%5)) { fprintf(f, "Buzz"); fb++; }
            if (!fb)    { fprintf(f, "%d", i);      }
            fprintf(f, "\\n\");\n");
        }
        fprintf(f, "\treturn 0;\n}");
        fclose(f);

        system("gcc fizzbuzz9.c -o b.exe");
#ifdef __linux__ 
        system("./b.exe");
#elif _WIN32
        system("b.exe");
#endif
        remove("b.exe");
        remove("fizzbuzz9.c");
    }
    return 0;
}
