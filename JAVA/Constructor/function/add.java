class box {
  double a;
  double b;
  double c;

  box() {
    System.out.println("Constructor called");
    a = 10;
    b = 5;
    c = 6;
  }

  void Sum() {
    double d = a + b + c;
    System.out.println("Sum=" + d);
  }
}

class add {
  public static void main(String[] args) {
    box k = new box();
    k.Sum();
  }
}