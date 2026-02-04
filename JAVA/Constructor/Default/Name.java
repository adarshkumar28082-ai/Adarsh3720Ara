class A {
    int a;
    String name;
    boolean b;

    A() {
        a = 100;
        name = "Hello";
        b = false;
    }

    void show() {
        System.out.println(a + "   " + name + "   " + b);
    }
}

class Name {
    public static void main(String[] args) {
        A obj = new A();
        obj.show();
    }
}