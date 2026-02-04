class sumof {
    public static void main(String []args){
        int n= 123,sum=0,r;
        while(n!=0){
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        System.out.println("Sum of Each digit="+sum);
        
    }
}
