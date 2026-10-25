#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "* * * * *" << endl;
        cout << "*       *" << endl;
        cout << "*       *" << endl;
        cout << "* * * * *" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "   ***   " << endl;
        cout << " *     * " << endl;
        cout << "*       *" << endl;
        cout << " *     * " << endl;
        cout << "   ***   " << endl;
    }
};

int main() {
    Shape *s;

    Rectangle r;
    Circle c;

    cout << "Rectangle:" << endl;
    s = &r;
    s->draw();

    cout << "\nCircle:" << endl;
    s = &c;
    s->draw();

    return 0;
}
