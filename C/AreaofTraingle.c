#include<stdio.h>
#include<math.h> 

int main()
{
   
    float a, b, c, area, s;
    
    printf("\nEnter the sides of the triangle:\n");
    scanf("%f%f%f", &a, &b, &c);   
    s = (a+b+c)/2;
   
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n The area of the Triangle calculated using Heron's formula is: %f", area);

    
   return 0;
}