import java.util.Scanner;
class sumofeven{
    public static void main(String[]args){
        sumofeven even=new sumofeven();
        even.sumofeven();
    }
    int sumofeven(){
        int n,sum=0;
        Scanner a=new Scanner(System.in);
        n=a.nextInt();
        for(int i=1;i<=n;i++){
            if(i%2==0){
                sum=sum+i;
            }
        }
        System.out.print(sum);
        return 0;
    }
}