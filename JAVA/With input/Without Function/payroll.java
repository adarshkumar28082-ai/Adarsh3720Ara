import java.util.Scanner;
public class payroll {
    public static void main(String[] args){
        double bs,hra,da,gs;
        Scanner as=new Scanner(System.in);
        IO.println("enter base salary");
        bs=as.nextInt();
        IO.println("enetr the hra");
        hra=as.nextInt();
        IO.println("enter the da");
        da=as.nextInt();

            if(bs<1500) {
                hra = bs * hra/100;
                da = bs * da/100;
                gs = bs + hra + da;
                IO.println(gs);
            }
            else if(bs>=1500) {
                hra = bs * hra/100;
                da = bs * da/100;
                gs = bs + hra + da;
                IO.println("gross salary=");
                IO.println(gs);
            }
            else {
                IO.println("not more detailed");
            }
    }
}
