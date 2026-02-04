class Ada {
    int gs,da,hra,ta;
}

class payrol{
    public static void main(String[]args){
        Ada obj=new Ada();
        obj.gs=50000;
        obj.da=(obj.gs*10)/100; 
        obj.hra=(obj.gs*20)/100;
        obj.ta=(obj.gs*30)/100;
        int total_salary=obj.gs+obj.da+obj.hra+obj.ta;
        System.out.println("DA="+obj.da);
        System.out.println("HRA="+obj.hra);
        System.out.println("TA="+obj.ta);
            System.out.println("Total Salary="+total_salary);
    }
}