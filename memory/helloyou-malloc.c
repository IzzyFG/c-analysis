#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *name = malloc(16);

    printf("what's your name?\n");
    gets(name);
    printf("hello, %s\n", name);

    free(name);
    return 0;
}
