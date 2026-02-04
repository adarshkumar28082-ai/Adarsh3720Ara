import java.util.Scanner;
class Arm{
    public static void main(String[]args){
        int n,temp,remi,orig=0;
        Scanner obj=new Scanner(System.in);
        IO.print("Enter the value of N=");
        n=obj.nextInt();
        temp=n;
        while(n>0){
            remi=n%10;
            orig=orig+(remi*remi*remi);
            n=n/10;
        }
        if(temp==orig){
            IO.print("Armstrong Number=");
        }
        else{
            IO.print("Not Armstrong Number");
        }
    }
}