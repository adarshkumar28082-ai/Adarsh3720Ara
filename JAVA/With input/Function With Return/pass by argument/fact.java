import java.util.Scanner;
class fact {
    public static void main(String[]args){
        int n,a;
        Scanner obj=new Scanner(System.in);
        IO.print("Enter the value of N=");
        n=obj.nextInt();
        fact New=new fact();
        a=New.num(n);
        IO.print("Factorial="+a);
    }
    int num(int n){
        int Fact=1,i;
        for(i=1;i<=n;i++){
            Fact=Fact*i;
        }
        return Fact;
    }
}