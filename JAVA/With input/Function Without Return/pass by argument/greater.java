import java.util.Scanner;
class greater{
    public static void main(String[]args){
        int n;
        Scanner ada=new Scanner(System.in);
        IO.print("Enter the value of n=");
        n=ada.nextInt();
        greater num=new greater();
        num.Ada(n);
    }
    int Ada(int n){
        if(n>0){
            System.out.println("A is greater=");
        }
        else{
            System.out.println("B is greater=");
        }
        return 0;
    }
}