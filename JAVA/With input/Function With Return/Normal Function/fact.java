import java.util.Scanner;
class fact{
    public static void main(String[]args){
        int a;
        fact New=new fact();
        a=New.num();
        IO.print("Factroil="+a);
    }
    int num(){
        int n,Fact=1,i;
        Scanner obj=new Scanner(System.in);
        IO.print("Enter the value of N=");
        n=obj.nextInt();
        for(i=1;i<=n;i++){
            Fact=Fact*i;
        }
        return Fact;
    }
}