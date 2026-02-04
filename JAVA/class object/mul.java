import java.util.Scanner;
class multi{
    int a,b;
}
class mul{
    public static void main(String[] args){
        Scanner Ad=new Scanner(System.in);
        multi g=new multi();
        System.out.print("Enter the value of A=");
         g.a=Ad.nextInt();
         System.out.print("Enter the value of B=");
         g.b=Ad.nextInt();
         System.out.print(g.a*g.b);

    }
}