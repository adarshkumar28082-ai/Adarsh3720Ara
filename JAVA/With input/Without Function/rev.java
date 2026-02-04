// import java.util.Scanner;
class rev {
    public static void main(String[]args){
        rev num=new rev();
        num.revr(1234);
    }
     int revr(int n){
        int sum=0,r;
        // Scanner Ada=new Scanner(System.in);
        // System.out.println("Enter the value of N=");
        // n=Ada.nextInt();
        while(n>0){
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
        System.out.println("Rev of number="+sum);
        return 0;
    }
    
}
