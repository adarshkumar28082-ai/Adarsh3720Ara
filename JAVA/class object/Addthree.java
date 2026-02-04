import java.util.Scanner;
class Add{
int a,b,c;    
}
class Addthree{
    public static void main(String[]args){
        Scanner r=new Scanner(System.in);
        Add k=new Add();
        System.out.print("Enter the value of A=");
        k.a=r.nextInt();
        System.out.print("Enter the value of b=");
        k.b=r.nextInt();
        System.out.print("Enter the value of c=");
        k.c=r.nextInt();
        int d=k.a+k.b+k.c;
        System.out.print("Add three number="+d);
    }
}
