//
//  exersiseOne.cpp
//  LabTwo
//
//  Created by Gbrigens on 1/27/22.
//

#include "exerciseOne.hpp"

// Implement your solution.
void getStudentDetails(Student* studentPointer) {
    // Ask user for name
    cout << "Enter student name: ";
    // cin statement to use studentPointer for storing the name
    // Ask for for id
    cout << "Enter an ID: ";
    cin >> studentPointer->id; // or c style (*studentPointer).id
    
    // Ask for marks
    for(int i = 0; i < 3; i++){
        cout << "Enter marks: ";
        // cin statement to use studentPointer to store each mark in the array
        cin >> studentPointer->marks[i];
    };
    
}


void printStudentDetails(Student* studentPointer) {
    // Student information
    cout << "Here are the student information" << endl;
    //cout statement for displaying id using studentPointer
    cout << "ID: " << studentPointer->id << endl;
    
}

