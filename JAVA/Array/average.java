import java.util.Scanner;

public class average {
    public static void main(String[] args) {
        int arr[] = new int[10];
        int sum = 0;
        double avg;
        Scanner sc = new Scanner(System.in);
        
        // Input 10 numbers
        System.out.println("Enter 10 numbers:");
        for(int i = 0; i < 10; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            arr[i] = sc.nextInt();
            sum += arr[i];
        }
        
        // Calculate average
        avg = sum / 10.0;
        
        // Display result
        System.out.println("\nSum of all numbers: " + sum);
        System.out.println("Average of 10 numbers: " + avg);
    }
}
