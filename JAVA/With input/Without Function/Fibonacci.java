import java.util.Scanner;
class Fibonacci {
    public static void main(String[]args){
        Fibonacci fib = new Fibonacci();
        Scanner obj = new Scanner(System.in);
        IO.print("Enter the value of N=");
        int n = obj.nextInt();
        for (int i = 1; i <= n; i++) {
            IO.print(" " + fib.fibNumber(i));
        }
    }
    int fibNumber(int n){
    
        int a = 0, b = 1, c=0;
        for (int i = 2; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
    
}
