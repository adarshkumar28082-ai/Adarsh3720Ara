import java.util.Scanner;
class calcu {
    public static void main(String[]args){
        int n;
        Scanner ro=new Scanner(System.in);
        n=ro.nextInt();
        switch(n){
            case 1:
                IO.print("Additaion=");
                int a,b,sum;
                IO.print("Enter the value of A=");
                a=ro.nextInt();
                IO.print("Enter the value of B=");
                b=ro.nextInt();
                sum=a+b;
                IO.print("Sum="+sum);
                break;
                case 2:
                IO.print("Additaion=");
                int c,d,sub;
                IO.print("Enter the value of c=");
                c=ro.nextInt();
                IO.print("Enter the value of d=");
                d=ro.nextInt();
                sub=c-d;
                IO.print("Sum="+sub);
                break;
                case 3:
                IO.print("Additaion=");
                int e,f,mult;
                IO.print("Enter the value of A=");
                e=ro.nextInt();
                IO.print("Enter the value of B=");
                f=ro.nextInt();
                mult=e*f;
                IO.print("Sum="+mult);
                break;
                case 4:
                IO.print("Additaion=");
                int g,h,div;
                IO.print("Enter the value of A=");
                g=ro.nextInt();
                IO.print("Enter the value of B=");
                h=ro.nextInt();
                div=g/h;
                IO.print("Div="+div);
                break;
        }
    }
    
}
