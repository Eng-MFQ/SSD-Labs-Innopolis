//
// Created by Muwaffaq Imam on 30.01.2022.
//
using namespace std;
#ifndef SSD_LABS_INNOPOLIS_LAB2_H
#define SSD_LABS_INNOPOLIS_LAB2_H

void exercise1();
void exercise2(int *ap, int *bp);
void exercise3(int *ap, int *bp);
void exercise6();
void exerciseStudent();
void exerciseStudent2();

int exercise4();

struct Student {
    string name;
    int id;
    int marks[3];
};

struct Student2{
    string name;
    int id;
    int* mark;
    ~Student2() {
        cout << "Destructor" << endl;
//        delete [] mark;
//        mark = nullptr; // or Null;
    }
};



#endif //SSD_LABS_INNOPOLIS_LAB2_H
