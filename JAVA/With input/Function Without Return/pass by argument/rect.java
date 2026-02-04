import java .util.Scanner;
class rect{
    public static void main(String[]args){
        Scanner ada=new Scanner(System.in);
        int a,b;
        IO.print("Enter the vakue of A=");
        a=ada.nextInt();
        IO.print("Enter the value of B=");
        b=ada.nextInt();
        rect area=new rect();
        area.rect(a,b);
    }
    int rect(int a, int b){
        IO.print("Area of Rectangle="+a*b);
        return 0;
    }
}