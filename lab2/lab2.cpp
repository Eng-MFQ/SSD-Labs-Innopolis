//
// Created by Muwaffaq Imam on 30.01.2022.
//
#include <iostream>
#include "lab2.h"
#include <cstring>


struct person {
    char a;
};

struct person2 {
    char a[8];
    int b[2];
    int *c;

};

struct person3 {
    char a[2]; // 8
    int x;  // 8
    int *xp; // 8
};

int main() {
    Student2 student ;
    Student2 *stPtr = new Student2();

    cout << "Enter name" << endl;
//    cin >> stPtr->name;

//    cout << stPtr->name << endl;
    int size;

    delete[] stPtr;
    cout << "xx" ;

//    cin >> size;
//    stPtr->mark = new int[size];
//    for (int i = 0; i < size; ++i) {
//        cout << "Enter Mark " << i << endl;
//        cin >> stPtr->mark[i];
//    }
//
//    for (int i = 0; i < 3; ++i) {
//        cout << stPtr->mark[i] << endl;
//
//    }


}

void exerciseStudent2() {
    Student2 student;
    Student2 *stP = &student;
    int size;
    cout << "enter id " << endl;
    cin >> stP->id;
    cout << "enter size " << endl;
    cin >> size;
    stP->mark = new int[size];

    for (int i = 0; i < size; ++i) {
        cout << "Enter Mark " << i << endl;
        cin >> stP->mark[i];
    }

    cout << "Student id is " << stP->id << endl;
    for (int i = 0; i < size; ++i) {
        cout << " Mark is " << stP->mark[i] << endl;
    }
}

void exerciseStudent() {
    Student student;
    Student *stP = &student;

    cout << "enter id " << endl;
    cin >> stP->id;

    for (int i = 0; i < 3; ++i) {
        cout << "Enter Mark " << i << endl;
        cin >> stP->marks[i];
    }

    cout << "Student id is " << stP->id << endl;
    for (int i = 0; i < 3; ++i) {
        cout << " Mark is " << stP->marks[i] << endl;
    }
}

void exercise6() {
    char buf1[100] = "Hello";
    char buf2[100] = "World";
    char *ptr1 = buf1 + 3;
    char *ptr2 = buf2 + 3;
    strcpy(ptr1, buf1);
    cout << ptr1 << endl; //
    cout << buf1 << endl; // llo
//        strcpy(ptr2, buf2);
//    cout << ptr2 << endl; // ld
//    cout << buf2 << endl; //  Worlds
//
}


void exercise1() {
    int a = 1;
    int *ap = &a;
    int b = 2;
    int *bp = &b;
    int *temp = ap;
    ap = bp;
    bp = temp;
    cout << a << *ap;
    cout << b << *bp;
}

//int a = 1, *ap = &a;
//int b = 2, *bp = &b;
//
//exercise2(ap, bp);
//
//std::cout <<a<<*ap;
//std::cout <<b<<*bp;
void exercise2(int *ap, int *bp) {
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
}

void exercise3(int *ap, int *bp) {
    int *temp = ap;
    ap = bp;
    bp = temp;

}

int exercise4() {
    int array[] = {10, 20, 30};
    int *pointer = array;
    cout << *pointer << endl; // 10
    cout << pointer << endl; // address
    cout << *array << endl; //  10
    cout << array << endl; // address
    cout << ++*pointer << endl; // 11
    cout << *++pointer << endl; // 20
    int *pointer1 = array;
    int *pointer2 = array;
    cout << *pointer1 + ++*++pointer2; // 31 32

    return 0;
}


