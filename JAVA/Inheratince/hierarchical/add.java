package JAVA.Inheratince.hierarchical;
import java.util.Scanner;
class add{
int a,b;
void input(){
    Scanner ad=new Scanner(System.in);
    IO.print("Enter the value of A=");
    a=ad.nextInt();
    IO.print("Enter the value of B=");
    b=ad.nextInt();
}
}
class subt extends add{
    void output(){
        int c;
        c=a+b;
        IO.println("Subtra="+c);
    }
}
class mult extends add{
    void output1(){
        int d;
        d=a*b;
        IO.print("mult="+d);
    }
}
class main{
    public static void main(String[] args) {
        subt ob=new subt();
        mult ld=new mult();
        ob.input();
        ob.output();
        ld.output1();
    }
}