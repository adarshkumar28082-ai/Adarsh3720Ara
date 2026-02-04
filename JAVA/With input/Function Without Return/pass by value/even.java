class even{
    public static void main(String[]args){
    even New=new even();
    New.num(10,20);
    }
    int num(int i,int n){
        int sum=0;
        for(i=1;i<=n;i++){
            if(i%2==0){
                sum=sum+i;
            }
        }
        IO.print("Even="+sum);
        return 0;
    }
}