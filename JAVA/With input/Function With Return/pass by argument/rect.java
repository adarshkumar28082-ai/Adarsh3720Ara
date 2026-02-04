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
        int are=area.rect(a,b);
        IO.print("Area of Rectangle="+are);
    }
    int rect(int a, int b){
        return a*b;
    }
}