#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[16];

    printf("what's your name?\n");
    fgets(name, 16, stdin);
    printf("hello, %s\n", name);
    return 0;
}
