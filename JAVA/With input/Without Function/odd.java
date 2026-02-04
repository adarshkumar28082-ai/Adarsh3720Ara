import java.util.Scanner;
 class odd{
    public static void main(String[]args){
        int i,n,sum=0;
        Scanner obj=new Scanner(System.in);
        IO.print("Enter the value of N=");
        n=obj.nextInt();
        for(i=1;i<= n;i++){
            if(i%2!=0){
               // IO.print("Odd no:-");
                sum=sum+i;
            }
        }
         IO.print("Sum of Odd Number "+n+"="+sum);
        
    }
}
