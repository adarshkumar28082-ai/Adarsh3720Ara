class fact{
    public static void main(String[]args){
        int a;
        fact New=new fact();
        a=New.num(5);
        IO.print("Factroil="+a);
    }
    int num(int n){
        int Fact=1,i;
        for(i=1;i<=n;i++){
            Fact=Fact*i;
        }
        return Fact;
    }
}