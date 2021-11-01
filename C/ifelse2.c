
#include<stdio.h>
      
      
       int main()
    {
      int gender, experience, qualification ,salary ;
      int salary1= 10000,salary2=15000, salary3=6000, salary4=9000 ;
    printf("Enter your Gender\n 1.Male 2.Female");
    scanf("%d",&gender);
    printf("Enter your year of experience :");
    scanf("%d",& experience);
    printf("Choose your qualification \n 1.Graduation 2.Post Graduation ");
    scanf("%d", &qualification); 
    if(gender==1 && experience<10 && qualification==2)
 
    printf("You are eligible and your salary will be %d",salary1);
   
   else  if(gender==1 && experience>10 && qualification==2)
 
   printf("You are eligible and your salary will be %d",salary2);
   
      else if(gender==2 && experience<10 && qualification==1)

    printf("You are eligible and your salary will be %d",salary3);

    
    else if(gender==2 && experience>10 && qualification==1)
 
    printf("You are eligible and your salary will be %d",salary4);
 
    else 
    
    printf("You are not eligible ");
   
    return 0;
    
    }
   