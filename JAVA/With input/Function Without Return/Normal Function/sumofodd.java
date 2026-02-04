import java.util.Scanner;
class sumofodd{
    public static void main(){
        sumofodd odd=new sumofodd();
        odd.sumofodd();

    }
    int sumofodd(){
        int n,sum=0;
        Scanner obj=new Scanner(System.in);
        System.out.print("Enter a number:=");
        n=obj.nextInt();
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                sum=sum+i;
            }
        }
        IO.print(sum);
        return 0;
    }
}