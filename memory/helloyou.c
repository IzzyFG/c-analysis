#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[16];

    printf("what's your name?\n");
    gets(name);
    printf("hello, %s\n", name);
    return 0;
}
