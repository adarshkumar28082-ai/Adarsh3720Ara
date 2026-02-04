import java.util.Scanner;
class pyroal{
    public static void main(String[]args){
        int bs,hra,da;
        Scanner ro=new Scanner(System.in);
        IO.print("Enter the value of bs=");
        bs=ro.nextInt();
        IO.print("Enter the hra=");
        hra=ro.nextInt();
        IO.print("Enter the da=");
        da=ro.nextInt();
        pyroal ad=new pyroal();
        ad.num(bs,hra,da);
    }
    int num(int bs,int hra,int da){
        int gs,ts;
        bs=bs-hra;
        gs=bs*da/100;
        ts=bs+gs;
        IO.print("Gross salary="+ts);
        return 0;
    }
}