#include<bits/stdc++.h>
using namespace std;


// class Add
// {
// public:
//     // x, y, two int addition
//     int sum(int x, int y)
//     {
//         return x + y;
//     }

//     // x, y, z, three int addition
//     int sum(int x, int y, int z)
//     {
//         return x + y + z;
//     }

//     // double add
//     double sum(double x, double y)
//     {
//         return x + y;
//     }
// };

// int main()
// {
//     int x = 5, y = 5;
//     int z = 2;

//     Add add;

//     cout << add.sum(x, y) << endl;
//     cout << add.sum(x, y, z) << endl;

//     cout << add.sum(5.4, 2.3) << endl;

//     return 0;
// }


// This is complie time polymorphism and also function overloading



// class Complex
// {
// public:
//     int real;
//     int imag;

//     Complex()
//     {
//         real = imag = -1;
//     }

//     Complex(int r, int i) : real(r), imag(i) {}

    
//     // syntax
//     // Ret_type operator <op> (args){
//     //     // mlkdmk
//     //     return <>
//     // }

//     Complex operator+(const Complex &B)
//     {
//         /// this -> A instance
//         Complex temp;

//         temp.real = this->real + B.real;
//         temp.imag = this->imag + B.imag;

//         return temp;
//     }

//     void print()
//     {
//         printf("%d + i%d\n", this->real, this->imag);
//     }
// };


#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void draw()           // virtual keyword helps to do Late binding else early biding happen
    {
        cout << "Generic drawing..." << endl;
    }
};


class Circle : public Shape
{
public:
    void draw()  override    
    {
        cout << "Circle drawing..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()  override    
    {
        cout << "Rectangle drawing..." << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()  override    
    {
        cout << "triangle drawing..." << endl;
    }
};

void ShapeDrawing(Shape *s)    // upcasting
    {
        s->draw();
}

//int main(){
    // Complex A(2, 5);
    // A.print();

    // Complex B(3, 3);
    // B.print();

    // Complex C = A + B;
    // C.print();
//}

int main()
{
    // Circle c;
    // Rectangle r;

    // ShapeDrawing(&c);
    // ShapeDrawing(&r);

    // Triangle *t = new Triangle();
    // ShapeDrawing(t);

    // return 0;


    // w/o virtual keyword       // jiska bhi class ka object hoga usi class ke method call hoga
    Shape *s = new Shape();
    s->draw();

    // UPCASTING
    Shape *s3 = new Circle();
    s3->draw();

    Circle *c = new Circle();
    c->draw();

    // DOWNCASTING
    Shape *s2 = new Shape();
    Circle *c2 = (Circle *)s2;
    c2->draw();
}

// this is function overriding 




// Final Keyword

// 1. In C++, the final specifier is used in two main contexts:
//    with classes and with virtual member functions.

// 2. Prevents Class Inheritance:
//    When you declare a class as final, it means that no other class can
//    inherit from it.

// 3. Preventing Virtual Function Overriding:
//    The final specifier can also be used with virtual functions to prevent
//    them from being overridden in derived classes.