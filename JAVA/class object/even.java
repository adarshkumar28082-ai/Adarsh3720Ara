class Ada {
    int i;
}
class even{
    public static void main(String[]args){
        Ada obj=new Ada();
        obj.i=1000;
        for(obj.i=1000;obj.i<=2000;obj.i++){
        if(obj.i%2!=0){
            System.out.println(obj.i);

        }
    }
}
}