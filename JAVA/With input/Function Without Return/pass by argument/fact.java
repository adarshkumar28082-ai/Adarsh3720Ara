import java.util.Scanner;
class fact{
    public static void main(String[]args){
        int n;
        Scanner ob=new Scanner(System.in);
        IO.print("Enter the value of N=");
        n=ob.nextInt();
        fact ada=new fact();
        ada.NUM(n);
    }
    int NUM(int n){
        int fac=1,i;
        for(i=1;i<=n;i++){
            fac=fac*i;
            //i++;
        }
        IO.print("Fact="+fac);
        return 0;
    }
}