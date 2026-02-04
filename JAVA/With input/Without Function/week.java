import java.util.Scanner;
class week {
    public static void main(String[]args){
        Scanner obj=new Scanner(System.in);
        IO.print("enter the day number=");
        int day;
        day=obj.nextInt();
        switch(day){
            case 1: IO.print("sunday");
            break;
            case 2: IO.print("monday");
            break;
            case 3: IO.print("tuesday");
            break;
            case 4: IO.print("wednesday");
            break;
            case 5: IO.print("Thrusday");
            break;
            case 6: IO.print("Friday");
            break;
            case 7: IO.print("Saturday");
            break;
            
        }
    }
    }
    
