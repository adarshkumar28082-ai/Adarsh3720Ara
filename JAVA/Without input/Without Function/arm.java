class arm{
    public static void main(String[]args){
        int n=153,orig,temp=0,remi;
        orig=n;
     while(n>0){
        remi=n%10;
        temp=temp+(remi*remi*remi);
        n=n/10;
    }
    if(orig==temp){
        IO.print("Armstrong Number");
    }
    else{
        IO.print("Not Armstrong Number");
    }
    }
}