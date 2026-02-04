import java.util.Scanner;
class prog{
    public static void main(String [] args){
        int i,j,n;
        Scanner Ad=new Scanner(System.in);
        System.out.print("Enter the number of rows:");
        n=Ad.nextInt();
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }  
}