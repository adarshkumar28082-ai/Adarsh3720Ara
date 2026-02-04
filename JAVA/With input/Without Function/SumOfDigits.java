import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter three numbers: ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        int num3 = sc.nextInt();

        // Calculate and display sum of digits for each number
        System.out.println("Sum of digits of " + num1 + " = " + sumOfDigits(num1));
        System.out.println("Sum of digits of " + num2 + " = " + sumOfDigits(num2));
        System.out.println("Sum of digits of " + num3 + " = " + sumOfDigits(num3));
    }

    // Function to find sum of digits
    public static int sumOfDigits(int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
}