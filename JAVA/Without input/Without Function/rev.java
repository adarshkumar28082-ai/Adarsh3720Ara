class rev {
public static void main(String []args){
    int n=123,r,rev=0;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    IO.print("Sum of digit="+rev);
}   
}
