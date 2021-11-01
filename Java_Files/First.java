// package FirstPakage;
import java.util.Scanner;


public class First {
     public static int  printsum(int i,int j)
    {
     return i+j;
    }
    public static void main(String[] args) {
      
    //     int num1=2;
    //     int  num2=4;
    //     int [][] marks = new int[4][2];
    //     marks[0][1]=2;
    //     marks[1][1]=6;
    //     Scanner sc=new Scanner(System.in);
    //     marks[2][1]=sc.nextInt();
    //     marks[3][1]=1;
    //   System.out.println(marks.length);
    //   System.out.println(marks[0][1]);
    // //  Arrays.sort(marks);
    //   System.out.println(marks[0][1]);
     
    //   int result=printsum(num1,num2);
    //   System.out.println("Sum is = "+ result);
    //   int a=1;
    //   int b=6;
    //   System.out.println( printsum(1,2));
    //   while(a<b)
    //   {System.out.println("a is less");
    // a++;}
    int ran=(int)(Math.random()*100);
      Scanner sc=new Scanner(System.in);
      System.out.println("Guess The Number Between 1 to 100");
      int guess=-1;;
       while(guess!=ran)
       {   guess=sc.nextInt();
        if(guess>ran)
        {System.out.println("Make Small Guess"); }
        else if(guess<ran){
            System.out.println("Make Big Guess ");
        }
        else{
            System.out.println("Congrats you got it ");
    
        }
      
       }
      
    }
}
