import java.util.Scanner;

public class Season {
    public static void main(String[] args) {
        int month;
        String season;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter month number (1-12): ");
         month = sc.nextInt();


        if(month == 12 || month == 1 || month == 2) {
            season = "Winter";
        } 
        else if(month >= 3 && month <= 5) {
            season = "Spring";
        } 
        else if(month >= 6 && month <= 8) {
            season = "Summer";
        } 
        else if(month >= 9 && month <= 11) {
            season = "Autumn";
        } 
        else {
            season = "Invalid Month!";
        }

        System.out.println("Season: " + season);
    }
}
