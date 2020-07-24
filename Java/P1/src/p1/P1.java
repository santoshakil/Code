package p1;

import P2.*;

class A {

    void Display() {
        System.out.println("This is Method Display in Class A in Package P1");
    }

    void Display2() {
        System.out.println("This is Method Display2 in Class A in Package P1");
    }
}

class A2 {

    void Dispaly3() {
        System.out.println("This is Method Display3 in Class A2 in Package P1");
    }
}

public class P1 {

    public static void main(String[] args) {

        System.out.println("This is main Class in Package P1");

        A object = new A();
        object.Display();
        object.Display2();

        A2 object2 = new A2();
        object2.Dispaly3();

        B object3 = new B();
        object3.Display4();
        object3.Display5();

    }

}
