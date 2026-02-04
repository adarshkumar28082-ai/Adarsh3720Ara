package JAVA.Inheratince.Single;
import java.util.Scanner;
class sub{
    int a,b;

void input(){
    Scanner obj=new Scanner(System.in);
    IO.print("Enter the value of A=");
    a=obj.nextInt();
    IO.print("Enter the value of B=");
    b=obj.nextInt();
}
}
class Subtar extends sub{
    void output(){
        int su;
        su=a-b;
        IO.print("Sum of two NUmber="+su);
    }
}
class main{
    public static void main(String[]args){
        Subtar ad=new Subtar();
        ad.input();
        ad.output();
    }
}