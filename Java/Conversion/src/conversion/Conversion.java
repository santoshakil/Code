package conversion;

class Temp {

    double c, f;

    double volume() {
        f = 1.8 * c + 32;
        return f;
    }
}

public class Conversion {

    public static void main(String[] args) {
        Temp obj1 = new Temp();
        obj1.c = 10;
        double v = obj1.volume();
        System.out.println(v);

    }
}
