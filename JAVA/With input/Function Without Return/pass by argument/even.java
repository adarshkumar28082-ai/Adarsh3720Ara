import java.util.Scanner;
class even{
    public static void main(String[]args){
    int i,n;
    Scanner obj=new Scanner(System.in);
       System.out.print("Enter the value of i=");
        i=obj.nextInt();
        IO.print("Enter the value of N=");
        n=obj.nextInt();
        even New=new even();
        New.num(n,i);  
    }
    int num(int n,int i){
        int sum=0;
        for(i=i;i<=n;i++){
            if(i%2==0){
                sum+=i;
            }
        }
        IO.print("Sum of even="+sum);
        return 0;
    }
}