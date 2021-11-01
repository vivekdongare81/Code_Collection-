#include <stdio.h>
 /*
 int main()
{
    FILE *fileptr;
    char string[20];
    fileptr = fopen("C:/Users/donga/Desktop/COMputer PROgramming/FILE Handling/samplefile.c", "w");
    scanf("%s",string);
    fprintf(fileptr,"%s",string);
    fclose(fileptr); 
} 
*/
 int main()
{
    FILE *fileptr , *fileptr2;
    char string[20];
    fileptr = fopen("C:/Users/donga/Desktop/COMputer PROgramming/FILE Handling/samplefile.c", "w");
    fileptr2 = fopen("C:/Users/donga/Desktop/COMputer PROgramming/FILE Handling/samplefile.c", "r");
    
    while(1)
    {
         char  ch = getchar(string[20]);
        fputc=(ch,fileptr);
    } 
    
}
 