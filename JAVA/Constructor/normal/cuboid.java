class box{
    double l,b,h;
    box(){
        System.out.println("Constructor called");
        l=20;
        b=10;
        h=5;
        double volume=l*b*h;
        System.out.println(volume);
    }
}

class cuboid{
    public static void main(String[] args){
        box ob=new box();
    }
}
