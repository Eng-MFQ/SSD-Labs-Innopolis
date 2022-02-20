//
// Created by Muwaffaq Imam on 13.02.2022.
//

#ifndef SSD_LABS_INNOPOLIS_LAB4_H
#define SSD_LABS_INNOPOLIS_LAB4_H

#endif //SSD_LABS_INNOPOLIS_LAB4_H

#include <iostream>
#include <vector>
using namespace std;

class A {
protected:
    int x;
public:
    A() {x = 0; }
    void increment() { x++; }
    virtual void decrement() { x--; }
     void print() {
        cout << "Hi Im A" << endl;
//        cout << "x = " << x << endl;
    }
};
class B : public A {
protected:
    int y;
public:
    B(int y) { y = 0; }
    B() {}
    void increment()  { x = x + 2; }
    virtual void decrement() override { x = x - 2; }
     void print()  {
        cout << "Hi Im B" << endl;
//        cout << "x = " << x << endl;
//        cout << "y = " << y << endl;
    }
};

/// For exercise 8
class Polygon {
protected:
    int width, height;
public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }

};
class Output1 {
public :
    void output(int i) {
        cout << i << endl;
    }
};

class Rectangle : public Polygon, public Output1 {
public: int area() { return (width * height); }
};

class Triangle : public Polygon, public Output1 {
public: int area() { return (width * height / 2); }
};

/// For exercise 9
class Student {
public:
    int rno, m1, m2;
    void get() { rno = 15, m1 = 10, m2 = 10; }
};
class Sports {
public:
    int sm;
    void getsm() { sm = 10; }
};
class Statement : public Student, public Sports {
    int tot, avg;
public:
    void display() {
        tot = (m1 + m2 + sm);
        avg = tot / 3;
        cout << tot << endl;
        cout << avg << endl;
    }
};


/// Write exercise
class Area {
public:
    int getArea(int l, int w) {
        return l * w;
    }
};

class Perimeter {
public:
    int getPerimeter(int l, int w) {
        return 2 * (l + w);
    }
};

class Rectangle2 : public Area, public Perimeter {
};


void exercise1();
void exercise2();
void exercise3();
void exercise4();
void exercise5();
void exercise6(A);
void exercise7();
void exercise8();
void exercise9();
void exercise10();