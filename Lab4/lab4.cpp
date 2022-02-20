//
// Created by Muwaffaq Imam on 13.02.2022.
//

#include "lab4.h"


int main() {
    exercise9();
}

/// What will be printed on The screen
void exercise1() {
    A a;
    A *ptr;
    ptr = &a;
    ptr->increment();
    ptr->print();
    ptr->decrement();
    ptr->print();
}

/// What will be printed on The screen
void exercise2() {
    B b;
    B *ptr;
    ptr = &b;
    ptr->increment();
    ptr->print();
    ptr->decrement();
    ptr->print();
}

/// What will be printed on The screen
void exercise3() {
    B b;
    A a;
    A *ptr;
    ptr = &a;
    a.print();
    ptr->print();
}

/// What will be printed on The screen
void exercise4() {
    B b;
    A a;
    B *ptr;
    ptr = &b;
    a.print();
    ptr->print();
}

/// What will be printed on The screen
void exercise5() {
    B b;
    b.A::print();
    b.print();
}

/// Q : Question 6. Write a function that takes an object of class A and returns it.
/// Can you pass an object of a class B to this function?

/// Q:Write a function that takes an object of class A and prints it
/// Can you pass an object of a class B to this function?

/// B b ;
/// exercise6(b);
void exercise6(A& a) {
    a.print();
}

/// Question 7. What happens if you change B inheritance to Private
/// which of the following code will give an error
////
/**
 * Solution
 * @param a
 */
void exercise7() {
//    B b;
//    A a;
//    B *ptr;
//    ptr = &b;
//    a=b;
//    exercise6(b);
//    b.A::print();
//    a.print();
//    b=a;
//    ptr ->print();
//    ptr->increment();

}

/// Look at Polygon and Output class in lab4.h
/// what will be the output on the screen
void exercise8() {
    Rectangle rect;
    Triangle trgl;
    rect.set_values(4, 5);
    trgl.set_values(4, 5);
    rect.output(rect.area()); //
    trgl.output(trgl.area());//
}

/// What will be the output? And WHY?
void exercise9() {
    Statement obj;
    obj.get();
    obj.getsm();
    obj.display();
}


/// Use Multiple inheritance Concept to calculate the Perimeter and Area of Rectangle.
void exercise10() {
    Rectangle2 rect;
    cout << "Area = " << rect.getArea(3, 5) << endl;
    cout << "Perimeter = " << rect.getPerimeter(3, 5) << endl;
}


