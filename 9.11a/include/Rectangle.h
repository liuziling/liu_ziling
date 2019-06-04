#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

class Rectangle
{
    public:
        Rectangle(double=1.0,double=1.0);

        void setLength(double);
        double getLength() const;

        void setWidth(double);
        double getWidth() const;

        double perimeter();
        double area();
        void print();
    private:
        double length;
        double width;
};

#endif // RECTANGLE_H
