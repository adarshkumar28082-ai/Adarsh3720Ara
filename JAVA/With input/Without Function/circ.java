import java.util.Scanner;
class circ{
    public static void main(String[]args){
        int r,area;
        Scanner obj=new Scanner(System.in);
        IO.print("Enter the Radius=");
         r=obj.nextInt();
         area=22/7*r*r;
         IO.print("Area is=" +area);
}
}