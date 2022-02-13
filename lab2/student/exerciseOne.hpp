//
//  exerciseOne.hpp
//  LabTwo
//
//  Created by Gbrigens on 1/27/22.
//

#ifndef exerciseOne_hpp
#define exerciseOne_hpp
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    int marks[3];
};

// Function prototype for getting details.
void getStudentDetails(Student* studentPointer);
void printStudentDetails(Student* studentPointer);

#endif /* exerciseOne_hpp */
