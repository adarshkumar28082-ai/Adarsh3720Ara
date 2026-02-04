package JAVA.Inheratince.Single;

import java.util.Scanner;

class Add {
    int a, b;
    
    void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        a = sc.nextInt();
        System.out.print("Enter second number: ");
        b = sc.nextInt();
    }
}

class Addition extends Add {
    void display() {
        int sum = a + b;
        System.out.println("Sum of " + a + " and " + b + " is: " + sum);
    }
}

class Main {
    public static void main(String[] args) {
        Addition obj = new Addition();
        obj.input();
        obj.display();
    }
}