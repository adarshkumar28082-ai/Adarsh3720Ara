import java.util.Scanner;
class Ada{
    public static void main(String[]args){
        Ada rect=new Ada();
        rect.rec();
        //Scanner obj=new Scanner(System.in);
    }
    int rec(){
        int l,b;
        Scanner obj=new Scanner(System.in);
        l=obj.nextInt();
        b=obj.nextInt();
        IO.print(l*b);
        return 0;
    }
}