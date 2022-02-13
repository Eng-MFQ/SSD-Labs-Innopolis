//
//  exerciseTwo.cpp
//  LabTwo
//
//  Created by Gbrigens on 1/27/22.
//

#include "exerciseTwo.hpp"

// Implement your solution.
void getStudentDetails(Student* studentPointer, int size) {
    
    // Dynamically allocate the marks based on the number required.
    studentPointer->mark = new int [size];
    // Ask user for name
    cout << "Enter student name: " << endl;
    
    // cin statement to use studentPointer for storing the name
    
    // Ask for id
    cout << "Enter an ID: ";
    cin >> studentPointer->id; // or c style (*studentPointer).id
    
    // Ask for marks
    for(int i = 0; i < size; i++){
        cout << "Enter an marks: ";
        
        // cin statement to use studentPointer to store each mark in the array
        cin >> studentPointer->mark[i];
    };
    
}


void printStudentDetails(Student* studentPointer, int size) {
    // Student information
    cout << "Here are the student information" << endl;
    
    //cout statement for displaying id using studentPointer
    cout << "ID: " << studentPointer->id << endl;
    
    // For loops to display each marks
    
}

