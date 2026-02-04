import java.util.Scanner;
class sumeven{
    public static void main(String[]args){
        int a;
        sumeven even=new sumeven();
        a=even.Add();
        IO.print("Sum of Even Number is="+a);
    }
    int Add(){
        int n,sum=0;
        Scanner Ada=new Scanner(System.in);
        IO.print("Enter the value of n=");
        n=Ada.nextInt();
        for(int i=1;i<=n;i++){
            if(i%2==0){
                sum=sum+i;
            }
        }
        return sum;
    }
}