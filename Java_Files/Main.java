import java.util.Scanner;



public class Main {
   
static int sum(int ...v)
{
 return 1;
}
 
static boolean isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
   
    public static void main(String[]args ) {
     int num=11;
     boolean  result=isprime(num);
   System.out.println(result);


        // int []arr={2,3,45,5};
        // sum(2,3,45,5);    sum(int...v)
    
    //  int x=5;
    //   summ();
    //   System.out.println(x);
    //   System.out.println(sum());
  

    // } 
   

    // static String sum()
    // {   Scanner sc=new Scanner(System.in);
    //     System.out.println("Hello Java");
      
    //     int temp=sc.nextInt();
    //     System.out.println("Hello Java");
    //     sc.close();
    //   return Integer.toString(temp);
 
    // }

}
}
