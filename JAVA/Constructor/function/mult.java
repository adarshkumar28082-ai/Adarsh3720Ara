class box{
    double a;
    double b;

box(){
    IO.print("Constructor called");
    a=2.5;
    b=2.6;
}

void sum(){
    double e=a*b;
    System.out.println("Multi="+e);
}
}
class mult{
    public static void main(String[]args){
        box r=new box();
        r.sum();
    }
}