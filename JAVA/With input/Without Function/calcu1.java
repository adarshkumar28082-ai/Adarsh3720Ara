import java.util.Scanner;
class calcu1 {
    public static void main(String[]args){
        int choice;
        Scanner obj=new Scanner(System.in);
        IO.print("Enter your Choice=");
        choice=obj.nextInt();
        switch(choice){
            case 1:
            IO.print("Addition=");
            int a,b,c;
            IO.print("Enter the value of A=");
            a=obj.nextInt();
            IO.print("Enter the value of B=");
            b=obj.nextInt();
            c=a+b;
            IO.print("Sum is ="+c);
            break;
            case 2:
            IO.print("Subtraction=");
            int d,e,f;
            IO.print("Enter the value of D=");
            d=obj.nextInt();
            IO.print("Enter the value of E=");
            e=obj.nextInt();
            f=d-e;
            IO.print("Sub is ="+d);
            break;
            case 3:
            IO.print("Multipaction=");
            int g,h,i;
            IO.print("Enter the value of G=");
            g=obj.nextInt();
            IO.print("Enter the value of H=");
            h=obj.nextInt();
            i=g*h;
            IO.print("Mult is ="+i);
            break;
            case 4:
            IO.print("Division=");
            int j,k,l;
            IO.print("Enter the value of J=");
            j=obj.nextInt();
            IO.print("Enter the value of K=");
            k=obj.nextInt();
            l=j/k;
            IO.print("Div is ="+l);
             break;
            default :
            IO.print("Not A valid Choice");
            break;
        }
    }
}