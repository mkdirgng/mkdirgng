#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("hello_world.txt", "w");
    if (fp == NULL) return -1;

    int c;
    while ((c = getc(stdin)) != EOF && c != '\n')
        fputc(c, fp);

    fclose(fp);
    return 0;
}
