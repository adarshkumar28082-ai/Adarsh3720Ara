import java.util.Scanner; 
class box{
    int a,b;
    box(){
        IO.println("Constructor called=");
        Scanner obj=new Scanner(System.in);
        IO.print("Enter the value of A=");
        a=obj.nextInt();
        IO.print("Enter the value of B=");
        b=obj.nextInt();
        int c=a-b;
        IO.print("Subtract="+c);
    }
}
class sub{
    public static void main(String[]args){
        box ad=new box();
    }
}