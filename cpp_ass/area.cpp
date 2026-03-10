#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area not defined";
    }
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area = " << length * width;
    }
};

class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void area() {
        cout << "Area = " << 0.5 * base * height;
    }
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area = " << 3.14 * radius * radius;
    }
};

int main() {
    int type;
    cin >> type;

    Shape* s;

    if (type == 1) {
        float l, w;
        cin >> l >> w;
        s = new Rectangle(l, w);
    }
    else if (type == 2) {
        float b, h;
        cin >> b >> h;
        s = new Triangle(b, h);
    }
    else if (type == 3) {
        float r;
        cin >> r;
        s = new Circle(r);
    }

    s->area();   // runtime polymorphism

    delete s;
    return 0;
}