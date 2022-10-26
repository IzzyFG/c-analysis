#include <stdio.h>

char name[16];

int main(int argc, char *argv[])
{
    printf("what's your name?\n");
    gets(name);
    printf("hello, %s\n", name);
    return 0;
}
