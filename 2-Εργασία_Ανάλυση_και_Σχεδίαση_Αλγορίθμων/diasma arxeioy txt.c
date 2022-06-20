#include<stdio.h>

int main()
{
char text;
int counter=0;

FILE *file;
file=fopen("input.txt", "r");
if(file){
    while ((text=getc(file))!=EOF)
    {
        putchar(text);
        counter++;
    }
    fclose(file);
}
printf("\n%d",counter);
return 0;
}
