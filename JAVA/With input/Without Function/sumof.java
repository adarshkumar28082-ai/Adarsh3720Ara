import java.util.Scanner;
class sumof{
    public static void main(String[]args){
        int n,sum=0,d;
        Scanner Ada=new Scanner(System.in);
        System.out.println("Enter the Value of n=");
        n=Ada.nextInt();
       while(n!=0){
        d=n%10;
        sum=sum+d;
        n=n/10;
       } 
       System.out.println("Sum of didgit="+sum);
    }
}