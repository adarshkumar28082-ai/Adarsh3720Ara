class pailndrome{
    public static void main(String[]args){
        int n=121;
        pailndrome num=new pailndrome();
        num.pailndrome(n);
    }
    int pailndrome(int n){
        int orig=0,r,dig;
        r=n;
        while(n!=0){
            dig=n%10;
            orig=orig*10+dig;
            n=n/10;
        } 
        if(orig==r){
            System.out.println("Pailndrome number=");

        }
        else{
            System.out.println("Not pailndrome Number=");
        }
        return 0;
    }
    
}
