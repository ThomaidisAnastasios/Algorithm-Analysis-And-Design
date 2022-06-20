#include<stdio.h>

int main()
{
int text;
FILE *file;
file = fopen("input.txt", "r");
if (file) {
    while ((text = getc(file)) != EOF)
        putchar(text);
    fclose(file);
}
return 0;
}
