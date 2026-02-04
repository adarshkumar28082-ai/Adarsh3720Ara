import java.util.Scanner;
class Ad{
    public static void main(String[]args){
        int a,b,c,d;
        Scanner obj=new Scanner(System.in);
        IO.print("Enter the Value of A=");
        a=obj.nextInt();
        IO.print("Enter the Value of B=");
        b=obj.nextInt();
        IO.print("Enter the value of C=");
        c=obj.nextInt();
        d=a+b+c;
        IO.print("Sum=" +d);
    }
}