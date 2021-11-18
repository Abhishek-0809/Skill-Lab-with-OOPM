import java.util.*;

abstract class Shape {
    int length, breadth, base, height,radius;
    Scanner sc = new Scanner(System.in);

    abstract void printArea();
}

class Rectangle extends Shape {
    void printArea() {
        System.out.print("Enter length & breadth: ");
        length = sc.nextInt();
        breadth = sc.nextInt();
        System.out.println("Area of Rectangle is: " + length * breadth);
    }
}

class Triangle extends Shape {
    void printArea() {
        System.out.print("\nEnter Base And Height: ");
        base = sc.nextInt();
        height = sc.nextInt();
        System.out.println("Area of Triangle is: " + ((base * height) / 2));
    }
}

class Circle extends Shape {
    void printArea() {
        System.out.print("\nEnter Radius: ");
        radius = sc.nextInt();
        System.out.println("Area of Circle is: " + 3.14 * radius * radius);
    }
}

public class AREA {
    public static void main(String[] args) {
        Shape rec = new Rectangle();
        rec.printArea();

        Shape tri = new Triangle();
        tri.printArea();

        Shape cri = new Circle();
        cri.printArea();
    }
}