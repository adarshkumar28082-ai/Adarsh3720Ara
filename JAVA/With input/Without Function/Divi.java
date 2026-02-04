import java.util.Scanner; 
class Divi {
    public static void main(String [] args){
        int n;
        Scanner obj=new Scanner(System.in);
        IO.print("enter the Number=");
        n= obj.nextInt();
        if(n%50==0){
            System.out.print("Divisible by 50");
        }
            else{
                System.out.print("not divisole by 50");
            }
        }

    }
