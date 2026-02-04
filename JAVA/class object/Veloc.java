import java.util.Scanner;
class Ada{
    double u,a,t;
}
class Veloc{
    public static void main(String[]args){
        double s;
        Scanner r=new Scanner(System.in);
        Ada obj=new Ada();
        IO.print("Enter the value of U=");
        obj.u=r.nextDouble();
        IO.print("Enter the value of A=");
        obj.a=r.nextDouble();
        IO.print("Enyter the value of T=");
        obj.t=r.nextDouble();
        s=obj.u *obj.a +0.5 *obj.a *obj.t *obj.t;
        System.out.println(s);

    }

}
