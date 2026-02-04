import java.util.Scanner;
class add{
    public static void main(String[]args){
        int a[][]=new int[2][2];
        int b[][]=new int[2][2];
        int c[][]=new int[2][2];
        int i,j;
        Scanner ad=new Scanner(System.in);
        System.out.println("Enter the 1st matrix=");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                a[i][j]=ad.nextInt();
            }
        }
        System.out.println("Enter the 2nd matrix=");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                b[i][j]=ad.nextInt();
            }
        }
        System.out.println("Add of two Matrix=");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        System.out.println("Result of Matrix=");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
    }
}