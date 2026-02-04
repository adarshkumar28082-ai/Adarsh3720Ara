class odd{
    public static void main(String[]args){
        int i,n=10,sum=0;
        IO.print("Enter the value of N=");
       
        for(i=1;i<= n;i++){
            if(i%2!=0){
               // IO.print("Odd no:-");
                sum=sum+i;
            }
        }
         IO.print("Sum of Odd Number "+n+"="+sum);
        
    }
}

