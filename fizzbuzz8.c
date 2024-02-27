#include <stdio.h>
#include <Windows.h>

int main() 
{
    FILE *f;
    f = fopen("fizzbuzz9.c", "w");
    if (f) {
        fprintf(f, "#include <stdio.h>\n\n");
        fprintf(f, "int main(void)\n{\n");
        for (int i = 1; i <= 100; i++) {
            if (!(i%15)) {
                fprintf(f, "\tprintf(\"FizzBuzz\\n\");\n");
            } else if (!(i%3)) {
                fprintf(f, "\tprintf(\"Fizz\\n\");\n");
            } else if (!(i%5)) {
                fprintf(f, "\tprintf(\"Buzz\\n\");\n");
            } else {
                fprintf(f, "\tprintf(\"%d\\n\");\n", i);
            }
        }
        fprintf(f, "\treturn 0;\n}");
        fclose(f);
        system("gcc fizzbuzz9.c -o b.exe && b.exe");
        remove("b.exe");
        remove("fizzbuzz9.c");
    }
    return 0;
}