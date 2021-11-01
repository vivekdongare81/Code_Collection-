#include<stdio.h>

    void main()
    {
        //to copy data from file 1 to 2 
        FILE * fileptr1 ,*fileptr2 ;
        fileptr1 =fopen("C:/Users/donga/Desktop/COMputer PROgramming/FILE Handling/samplefile.c","r");
        fileptr2 =fopen("C:/Users/donga/Desktop/COMputer PROgramming/FILE Handling/samplefile2.c","w");
       char ch; 
        while(ch=fgetc(fileptr1)!=EOF)
        {
          fputc(ch ,fileptr2);
        }

    }


