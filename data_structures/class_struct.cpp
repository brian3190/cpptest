#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b);
        ~Rectangle(); 
        int getArea();
        int getPerimeter();
        void changeLength(int k);
        int getLength();
        void setLength(int l);  
};

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

void Rectangle::setLength(int l)
{
    length = l;
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getArea()
{
    return length * breadth;
}

int Rectangle::getPerimeter()
{
    return 2*(length + breadth);
}

void Rectangle::changeLength(int k)
{
    length = k;
}

Rectangle::~Rectangle()
{}

int main()
{
    Rectangle r(10, 5);
    cout << "Area of rectangle is: " << r.getArea() << endl;
    r.changeLength(20);
    cout << "New Area is: " << r.getArea() << endl;
    cout << "Perimeter of rectangle is: " << r.getPerimeter() << endl;
    r.setLength(40);
    cout << "New Length is: " << r.getLength() << endl;
};
