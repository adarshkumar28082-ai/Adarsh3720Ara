package JAVA.Inheratince.Single;

class Animal
{
    void eat()
    {
        System.out.println("The animal is Eating:-");

    }
}
class Dog extends Animal
{
    void bark(){
        System.out.println("The dog is Barking:-");
    }
}
class Main 
{
    public static void main(String[] args)
    {
        Dog obj=new Dog();
        obj.eat();
        obj.bark();
    }
}