import java.util.Scanner;

class leapa {
  

   public static void main(String[] var0) {
      Scanner obj = new Scanner(System.in);
      IO.print("Enter the year=");
      int year;
      year = obj.nextInt();
      int result = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 1 : 0;
      IO.print(result == 1 ? "Leap Year" : "Not a Leap Year");
      
    //   switch (year) {
    //      case 0:
    //         IO.print("Not a Leap Year");
    //         break;
    //      case 1:
    //         IO.print("Leap year");
    //   }

   }
}
