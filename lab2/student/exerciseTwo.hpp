//
//  exerciseTwo.hpp
//  LabTwo
//
//  Created by Gbrigens on 1/27/22.
//

#ifndef exerciseTwo_hpp
#define exerciseTwo_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    int* mark;
    ~Student() {
        delete [] mark;
        mark = nullptr; // or Null;
    }
};

// Function prototype for getting details.
void getStudentDetails(Student* studentPointer, int size);
void printStudentDetails(Student* studentPointer, int size);

#endif /* exerciseTwo_hpp */
