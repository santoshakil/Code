package area;

class Area {

    double h;
    double d;

    Area() {
        h = 20;
        d = 15;
    }

    void volume() {
        System.out.println(h * d / 2);
    }

    public static void main(String[] args) {
        Area obj1 = new Area();
        obj1.volume();
    }
}
