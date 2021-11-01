#include <stdio.h>
int main()
{
    FILE *fileptr;

    fileptr = fopen("C:/Users/donga/Desktop/COMputer PROgramming/FILE Handling/samplefile.c", "r");

    while (1)
    {
        char a = fgetc(fileptr);
        if (a == EOF)
        {
            break;
        }

        printf("%c", a);
    }
    fclose(fileptr);
}