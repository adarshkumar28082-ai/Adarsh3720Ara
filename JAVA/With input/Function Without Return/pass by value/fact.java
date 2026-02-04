import java.util.Scanner;
class fact{
    public static void main(String[]args){
        fact New= new fact();
        New.num(5);
    }
    int num(int n){
        int Fact=1,i;
        for(i=1;i<=n;i++){
            Fact=Fact*i;
        }
        IO.print("Fact="+Fact);
        return 0;
    }
}