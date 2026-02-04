//package JAVA.Constructor;

import java.util.Scanner;

public class Average {
    int[] mat = new int[10];
    double avg;
    Average() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 10 numbers:");
        int sum = 0,i;

        for (i = 0; i < 10; i++) {
            mat[i] = sc.nextInt();
            sum = sum+ mat[i];    
        }

        avg = sum / 10.0;
    }

    void display() {
        System.out.println("Average = " + avg);
    }

    public static void main(String[] args) {
        Average a = new Average();
        a.display();
    }
}

