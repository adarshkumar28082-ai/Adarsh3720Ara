import java.util.Scanner;
public class LeapYearTernary {
    public static void main(String[] args) {
        int year ;
        Scanner obj=new Scanner(System.in);
        IO.print("Enter yaer=");
year=obj.nextInt();
        // Using ternary operator to check leap year
        int result = ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) )
                        ? 1
                        : 0;

        System.out.println(result == 1 ? " is a Leap Year" : " is NOT a Leap Year");
    }
}