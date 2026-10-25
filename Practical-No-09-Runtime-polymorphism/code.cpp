
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Rectangle" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

int main()
{
    Shape *s;

    Rectangle r;
    Circle c;

    s = &r;
    s->draw();

    s = &c;
    s->draw();

    return 0;
}
