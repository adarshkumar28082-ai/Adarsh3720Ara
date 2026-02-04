class greater{
    public static void main(String[]args){
        int n=7;
        greater num=new greater();
        num.greater(n);
    }
    int greater(int n){
        if(n>0){
            System.out.println("A is greater=");
        }
        else{
            System.out.println("B is greater=");
        }
        return 0;
    }
}