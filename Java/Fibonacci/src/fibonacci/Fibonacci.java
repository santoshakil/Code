package fibonacci;

import java.util.Scanner;

public class Fibonacci {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        long a = 0;
        long b = 1;
        for (int i = 1; i < number; i++) {
            long c = a + b;
            a = b;
            b = c;
            System.out.println(c);
        }
    }
}
