class rect{
    public static void main(String[]args){
       rect area=new rect();
       int a;
       a=area.rect(5,6);
       IO.print("Area of Rectangle="+a); 
    }
    int rect(int l,int b){
        return l*b;
    }
}