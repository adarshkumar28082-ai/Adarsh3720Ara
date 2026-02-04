class calcu{
public static void main(String[]args){
    int choice=5;
    for(choice=1;choice<=5;choice++){
    switch(choice){
        case 1:
        IO.print("Additation");
        int a=5,b=6,c;
        c=a+b;
        IO.print("Sum is="+c);
        break;
        case 2:
        IO.print("Subtraction");
        int d=50,e=6,f;
        f=e-d;
        IO.print("Sub is="+f);
        break;
        case 3:
        IO.print("Multiplication");
        int g=50,h =16,i;
        i=g*h;
        IO.print("Mult is="+i);
        break;
        case 4:
        IO.print("Division=");
        int s=55,u=5,r;
        r=s/u;
        IO.print("Div is="+r);
        break;
        default:
        IO.print("Not a valid choice");
        break;
    }
}
}
}