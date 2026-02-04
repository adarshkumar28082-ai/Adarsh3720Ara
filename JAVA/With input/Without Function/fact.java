import java.util.Scanner;

public class fact {
    public static void main(String[] args) {
        int n,fact=1,i;
        Scanner obj = new Scanner(System.in);
        IO.print("Enter a number: ");
         n = obj.nextInt();
        for ( i = 1; i <= n; i++) {
            fact = fact * i;
        }

        IO.print("Factorial of =: " + fact);
    }
} 
