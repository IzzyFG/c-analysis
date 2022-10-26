#include <stdio.h>

int bar(int a, int b)
{
    int c = a + b;
    return c;
}

int foo(int a)
{
    int b = a + 1;
    if (a > 0) {
        return bar(a, 10);
    } else {
        return foo(b);
    }
}

int main(int argc, char *argv[]) {
    printf("%d\n", foo(-1));
}
