package abstractclass;

abstract class Bank {

    double p, amt;

    Bank(double a) {
        p = a;
    }

    void display() {
        System.out.println("\nAMOUNT = " + p);
    }

    abstract void calc();
}

class DBBL extends Bank {

    DBBL(double a) {
        super(a);
    }

    @Override
    void calc() {
        amt = (p * 0.08);
        System.out.println("DBBL Interest=" + amt);
    }
}

class EBL extends Bank {

    EBL(double a) {
        super(a);
    }

    @Override
    void calc() {
        amt = (p * 0.09);
        System.out.println("EBL Interest=" + amt);
    }
}

public class AbstractClass {

    public static void main(String[] args) {
        Bank i;
        DBBL d = new DBBL(25000);
        EBL e = new EBL(25000);
        i = d;
        i.display();
        i.calc();
        i = e;
        i.display();
        i.calc();
    }
}
