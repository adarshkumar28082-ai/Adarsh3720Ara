import java.util.Scanner;
class Binomail {
   public static void main(String[]args){
    int n,x,y;
    Scanner Ada=new Scanner(System.in);
    // IO.print("Enetr the value of n=");
    // n=Ada.nextInt();
    IO.print("Enetr the value of x=");
    x=Ada.nextInt();
    IO.print("Enetr the value of y=");
    y=Ada.nextInt();
    if(x>0){
        n=x+y;
        IO.print("N="+n);
    }
    else if(x<0){
        n=x-y;
        IO.print("N="+n);
    }
    else{
        IO.print("Conditation not defined for x=0");
    }
   }
}