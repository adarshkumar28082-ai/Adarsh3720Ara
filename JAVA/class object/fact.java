import java.util.Scanner;
class Ada {
    int n;
}
class fact{
    public static void main(String[]args){
     Scanner obj=new Scanner(System.in);
     System.out.println("Enter the value of n=");
     int fac=1,i;
     Ada c=new Ada();
     c.n=obj.nextInt();
     for(i=1;i<=c.n;i++){
        fac=fac*i;
     }   
     System.out.println(fac);
    }
}
