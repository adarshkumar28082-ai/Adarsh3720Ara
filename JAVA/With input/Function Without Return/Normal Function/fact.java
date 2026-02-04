import java.util.Scanner;
class fact{
    public static void main(String[] args) {
        fact num=new fact();
        num.Fac();
    }
    int Fac(){
        int n,Fact=1,i;
        Scanner ob=new Scanner(System.in);
        IO.print("Enter the value of N=");
        n=ob.nextInt();
        for(i=1;i<=n;i++){
            Fact=Fact*i;
        }
        IO.print("FAct="+Fact);
        return 0;
    }
}