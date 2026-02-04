class ada {
    int num;
    
}
class sumofdigit{
    public static void main(String[]args){
        ada obj=new ada();
        int sum=0,digit;
        obj.num=1234;
        while(obj.num>0){
            digit=obj.num%10;
            sum=sum+digit;
            obj.num=obj.num/10;
        }
        System.out.println("Sum of digits="+sum);
    }
}   
