#include<stdio.h>
//......Find greatest from 3 numbers using if else

/*
int main (){
  int num1,num2,num3;
  printf(" Input any 3 numbers to compare largest among them ");
  scanf("%d%d\n%d",&num1,&num2,&num3);
  if (num1>num2 && num1>num3)
  {
    printf("The greatest number is %d",num1);
  }
  else if (num2>num1 && num2>num3)
  {
    printf("The greatest number is %d",num2);
  }
  else if (num3>num1 && num3>num2)
  {
    printf("The greatest number is %d",num3);
  }
  return 0;
  } 
  
  
  *\
  



//..... Find greatest no.from 3 no.using nested if else
/*
int main ()
  int num1,num2,num3;
  printf(" Input any 3 numbers to compare largest among them ");
  scanf("%d%d\n%d",&num1,&num2,&num3);
  if (num1>num2 )
  {
     if ( num1>num3)
      {
    printf("The greatest number is %d",num1);
      }
  }
  else if (num2>num1 )
  {
    if(num2>num3)
       {
    printf("The greatest number is %d",num2);
       }
  }
  else if (num3>num1)
  {
     if(num3>num2)
       {
    printf("The greatest number is %d",num3);
       }
  }
  return 0;
  
  }*/
    
 
 
 //........Calculator using Switch Statement

    
  /*  int main ()
    {
      int a ,b ;
      int x ;
      printf ("Enter value or a and b ");
      scanf("%d%d",&a,&b);
     printf(" Choose which operation to operate\n 1.sum \n2.sub\n3.mult\n 4.div\n 5.mod");
     scanf("%d",&x);
     switch (x)
     {
        case 1:
              printf("a + b = %d",a+b);
              break;
        case 2:
              printf("a - b = %d",a-b);
              break;
        case 3:
              printf("a * b = %d",a*b); 
              break; 
        case 4:
              printf("a / b = %d",a/b);
              break;
        case 5:
               printf("a % b = %d",a%b);
               break;
        default :
             printf("Sorry ,can not calculated");
     }
    
    } *\
  
   
    
     
//....... Check entered year is leap or not 
     
  /*  int main ()
 {
   int year ;
   printf("Enter year to check it is leap or not");
   scanf("%d",&year);
   
    if (year%4==0 )
   {
     printf("year u entered %d is Leap ",year );
    } 
   else 
   {
     printf("year u entered %d is not leap ",year);
   }
      
     
     return 0;
     }*/
       
       
   
 //..,....Salary of person by its experience, qualifications ,gender

       
      
 /*   int main ()
   
    int s1=10000,s2=15000,s3=6000,s3=9000;
   int a =1 ,b=2 ,gender, service ,qualification;
   printf("Enter your Gender 1.Male 2.Female");
   scanf("%d",&gender);
   
if ( gender==1)
{
  printf("How much year of service have u done 1.Less than 10 years 2. Greater than 10 years "); 
  scanf("%d",&service);
     if (service==1)
  {
       printf("what is your Qualification 1.Graduation 2.Post Graduation " );
  
        scanf("%d", &qualification)
            if(qualification==2)
           {
              printf("Your Salary will be %d " ,s1);
            }
    }
        else (service==1)
    {
        printf("sorry you are not eligible ");
    }
  
  
}
else (gender==2)
{
  
  
}
   */
     
 /*    int main()
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
    
    }*/
   
   
   
      
      
 //..........Grade by marking for 0to 100
 
 
/*

int main ()
{
  int arr[50] ,n ,i =0;
  int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
  printf("Enter no of all students ");
  scanf("%d",&n);
  for (i =0 ; i <n ; i++)
  {
    printf("Enter Marks of %d student",i);
    scanf("%d",&arr[i]);
    
  }
  for (i=0 ; i<n ; i++)
  {
  
  if (arr[i]>80)
  {
    a++;
  }
  if (arr[i]> 60)
  {
    b++;
  }
  if(arr[i]>40)
  {
  c++;
  }
  if( arr[i]<=40)
  {
   d++; 
  }
  if(81<arr[i]>100)
  {
    e++;
  }
  if(61<arr[i]>80)
  {
    f++;
  }
  if(41<arr[i]>60)
  {
    g++;
  }
  if(0<arr[i]>40)
  {
    h++;
  }
   }
  
  printf("Number of Students having grade A is %d\n",a);
  printf("Number of Students having grade B is %d\n",b);
  printf("Number of Students having grade C is %d\n",c);
  printf("Number of Students having grade D is %d\n",d);
   printf("Number of Students having grade E is %d\n",e);
   printf("Number of Students having grade F is %d\n",f);
   printf("Number of Students having grade G is %d\n",g);
   printf("Number of Students having grade H is %d\n",h);
  
  return 0;
}

*/
  
  
  
  
  
  
  
  
/*  
 int  main ()
    {
      float a ,b ;
      char operator ;
      printf ("Enter value of a and b ");
      scanf("%f%f",&a,&b);
     printf(" Enter operator you want to Operate\n");
     scanf("%c",&operator);
     switch (operator)
     {
        case'+':
              printf("a + b = %f",a+b);
              break;
        case '-':
              printf("a - b = %f",a-b);
              break;
        case '*':
              printf("a * b = %f",a*b); 
              break; 
        case '/':
              printf("a / b = %f",a/b);
              break;
        
        default :
             printf("Sorry ,can not calculated");
     }
    
    } */
      
      
      
      
      
      
 //....,.,... Calculator using switch
      
      
 /*  


int main()
{
    char op;
    float num1, num2;

    printf("Enter operator either + or - or * or /: ");
    scanf("%c",&op);

    printf("Enter two operands: ");
    scanf("%f%f",&num1,&num2);

    switch(op)
    {
        case '+':
            printf(" For Addition=%f", num1+num2);
            break;

        case '-':
            printf(" For Sub=%f", num1-num2);
             break;

        case '*':
            printf(" For Mul=%f", num1*num2);
            break;
              
         default:
           printf("Calculation not performed");
           }      
        } 
*/
  
  
  
  
  
  
  
  
  
    
      
   //  Calculator using Menu Driven program



/*
int main()
{
  int a,b,c;
  
  
  while (a!=0)
  {
  
 
    printf(" \n Select which Operation you want to Perform \n1:addtion \n2:substraction\n3:multipication\n4:division\n5:Mod\n6:Exit ");
  scanf("%d",&a);
  
    printf("Enter the value of 2 Numbers");
  scanf("%d%d",&b,&c);
  

    switch(a)
    {
      case 1:printf("The add is %d",b+c);
      break;
      case 2:printf("The sub is %d",b-c);
      break;
      case 3:printf("The mul is %d",b*c);
      break;
      case 4:printf("The div is %d",b/c);
      break;
      case 5:printf("The mod is %d",b%c);
      break;
      case 6: break;
    
     default:
          printf("Error operations not available");
      
    }
     break;
  }
 
  return 0;
} 
  
  */
  
  
  
  
  
  
  
  
  
   
   
   
      
 // .........grace marks using this if else in switch
      
      
     /* 
    
      int main()
      
      {
        int failedsub;
        int class;
        printf("Enter class you Obtained .");
        scanf("%d",&class);
        printf("Enter no.of Subjects in which you got Failed ");
        scanf("%d",&failedsub);
       
       switch (class)
      
       {
         case 1:
           
              if (failedsub>3)
              {
                printf("you will not get graced marks");
              }
              else
              {
                printf("Grace is of 5 marks ");
              }
              break;
              
         case 2:
           
           if (failedsub>2)
             {
               printf("you will not get grace");
              }
              else
              {
                printf("Grace is of 4 marks ");
              }
              break;
          case 3:
             if (failedsub >1)
             {
               printf("You will not get grace ");
              } 
              else
              {
               printf("Grace is of 5 marks ");
              }
              break;
           default:
                
               printf("Non valid class entered");
             
         }
         return 0;
      }
  
 
*/
  
  
// ....,.....Program to first sumof n term of series


// .....BY RECURSION
  
 /*   int main()
  {
    int j ,i ;
    float r=0 ,sum=0;
    printf("Enter a number upto which you have to calculate sum in series ");
    scanf("%d",&j);
    for ( i =1 ; i <= j;i++)
    {
      r=  fraction ( i);
     
      float ratio =i/r ;
     
      sum = sum + ratio;
    }
    printf("Sum of Series upto %d is %f",j,sum);
    
  return 0;
  }
  int  fraction(int i)
  {  int  factor =1;  
   
   if(i==0)
   {
     return 1;
   }
 else   {
      factor= i *(fraction(i-1));
    }
  
   
    return factor;
    
  }   */
     
  
  // ...OR BY SIMPLE METHOD
  
 /*int main()
 {
   int n ,i,j;
   float factorial =1;
   float sum= 0;
   printf("Enter upto which no.u have to find sum in series");
   scanf("%d",&n);
     for ( i=1;i <= n ; i++)
   { float fact =1;
     for(j=1;j<=i ;j++)
     { 
       fact=fact *j;
     }
    float ratio = i/fact ;

    sum=sum+ratio;
   }
   printf( "Value of sum is %f",sum);
   return 0;
   
  
  }*/
  
  
  
  
  
 //........Form fibonacii series



/*    int main()
    {
      int a ,b ,c,n ,i;
      a=0 ,b=1;
      printf("Enter upto how many no.of Fibonacii series you want ");
      scanf("%d",&n);
     
      for (i=1 ;i<=n; i++)
      {
         
        printf("%d\n",a);
        
     c=a+b;
      a=b;
      b=c; 
   
     }
    }
      */
        
  // using RECURSION 
  
 /*   int main()
{
  
  int a =0 ,b =1 ,n ;
  printf("Enter how many First No.of Fabonci series you want ");
 scanf("%d",&n);
 printf("%d\n%d\n",a ,b );
// for (int i =1 ; i<=n ;i++)
 
 fibioncii(n,a,b);
 
 
 // 25 & 1,2,3,4,5,....25
  }
  
  int fibioncii(int n , int a ,int b)
  { int c;
    
    if (n==0)
    {
      return 0;
    }
    else
    { 
      c=a+b;
      a=b;
      b=c;
      printf("%d\n",c);
      fibioncii(n-1,a,b);   
    }
  } */     
        
        //Or 
 /*    int main()
{
  
  int a =0 ,b =1 ,n ;
  printf("Enter how many First No.of Fabonci series you want ");
 scanf("%d",&n);
 printf("%d\n%d\n",a ,b);
for (int i =1 ; i<=n ;i++)
{
    printf("%d\n", fibioncii(i));
 }
 
// 25 & 1,2,3,4,5,....25
  }
  
  int fibioncii(int n )
  { int c;
    
    if (n<=1)
    {
      return 1;
    }
    else
    {
      return fibioncii(n-1) + fibioncii(n-2) ;
    }
  }
  */
      
      
      
      
 //..,.......Calculate Area of triangle
      
      
      
 /*     
   
#include<math.h> 

int main()
{
   
    double a, b, c, area, s;
    
    printf("\nEnter the sides of the triangle:\n");
    scanf("%lf%lf%lf", &a, &b, &c);   
    s = (a+b+c)/2;
   
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n The area of the Triangle calculated using Heron's formula is: %lf", area);

    
   return 0;
}
      */
      
      
      
 //......Use of Structure 


 /* struct Students 
{
  char name[10];
  int rollno;
  int marks[4]; // marks in 5 subs
};
 int main ()
 {int i ;
   struct Students S1;
   printf("Enter your Name ,Roll no ,Marks in 5 subs");
   scanf("%s\n%d\n",&S1.name,&S1.rollno);
   for (i =0;i<=4 ;i++)
   {
     scanf("%d",&S1.marks[i]);
   }
   printf("Name is %s and roll no is %d\n",S1.name,S1.rollno);
   i=0;
   for (i =0;i<=4 ;i++)
   {
     printf("Marks in %d subs is  %d\n",i+1,S1.marks[i]);
   }
   
 }
      */
      
    
    
    
// .......USE OF FUNCTIONS (Rules )



/*  Types - Predefined & User defined


Rules of User-defined Functions

1) Function without aurgument & withoutreturn value
               //declaration 
  int main ()
  {
    printf("add in capital is ");
    add();
  }
               //Definition
void add()
{
  printf(" ADD ");
}

2) Function without aurgument & with  return value
                //declaration
  int main()
  {
    int c=add();
    printf("Sum of 2 Numbers is %d ",c );
  }
                //Definition
int add()
{
  int a , b ,c;
  printf("Enter a and b =");
  scanf("%d%d",&a ,&b);
  c=a+b;
  return c ;
}

3) Function with aurgument & without return value

             // Declaration
int main()
 {
   printf("Enter 2 numbers to add");
   int a ,b ;
   scanf("%d%d",&a,&b);
   add(a,b);
 }         
            //Definition

void add (int a ,int b )
{
 int  c = a+b ;
  printf("Sum is = %d ",c );
}
        

4) Function with aurgument & with return value 
             //Declaration
int main ()
{
  int a ,b ;
  printf("Enter 2 num to add");
  scanf("%d%d",&a,&b);
 int  c= add (a,b);
  printf("Sum of 2 numbers are is %d ",c);
}
             //Definition
int add(int a ,int b )
{
  int c=a+b ;
  return c; 
}


*/ 
  
   
   
   
   
   
   
   // ......  Factorial using RECURSION
 
 
 
/*  
   int main()
{
  int n ;
  printf("Enter No.to calculate Its Factorial");
  scanf("%d",&n);
  printf("%d", factorial (n));
  
 
}
int factorial ( int n )
{
  if(n==0)
  {
    return 1;
  }
  else 
  { 
    return n*factorial (n-1);
  }
  
} */
  
  
  
  
 
  
//. ..Sum of each digit in 5 digit no. by RECURSION

 
 /*
 int main()
{
  int sum =0 ;
    int n =0;
  printf("Enter the Number For calculating its sum of digits ");
  scanf("%d",&n);
  sum=each( n);
  printf("Sum of each digits is %d",sum);
 return 0; 
  
}
int each(int n)
{ int sum ;
  int r=n%10;
   
  if (n==0)
  {
    r=0; 
  }
  else 
  { 
    sum = r + each(n/10);
  }
  return  sum ;
}
  */      
               
       // By simple method

/*

int main()
{
  int sum=0 ,r , n ;
  printf("Enter the 5 digit Number ");
  scanf("%d",&n);
  int temp = n ;
  for(int i=1; i<=5;i++)
  {
    r=n%10;
    sum =sum+r;
    n=n/10;
  }

  printf("The Sum of all digits of %d is %d",temp,sum);

return 0;
}
    */    
      
      
  
   
    
 // ...... Find PRIME FACTORS For Entered Number


  /*
int main ()
{
  int n ,i ;
  printf("Enter the Number for calculating its Prime factors ");
  scanf("%d",&n);
  for(int i =2; n!=1; i++)
  {
  while(n%i==0)
  {
    printf("%d ",i);
    n=n/i;   
  }
 }
  
} */
  
  
 //....with RECURSION
 
/*  int main ()
{
  int n ,i ;
  printf("Enter the Number for calculating its Prime factors ");
  scanf("%d",&n);
  primefact(n ,2);
  
  
}
int primefact(int n,int count)
{
  if(n==1)
  { return 0;
  }
  else if (n%count==0)
     {
         printf("%d ",count );
     primefact(n/count,count);
     
     }
   
  else 
  {
    primefact(n , count +1);
  }   
     
}
    */

 
 

//..... Find largest in array

/*
int main()
  {
    int arr[5] ={2,5,10,70,8};
    int largest = arr[0] ;
   
    for(int i=0; i<=4 ;i++)
    {
      if(arr[i]>largest)    //2. 5
                            // 5. 10
                            // 10 7
                            //7  8 
                             
      {
        largest=arr[i];
      }
    
    
    }
    printf("Largest element is %d", largest);
    return 0;
  }
  */



