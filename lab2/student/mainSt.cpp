//
//  main.cpp
//  LabTwo
//
//  Created by Gbrigens on 1/26/22.
//

//#include "exerciseOne.hpp"
#include "exerciseTwo.hpp"

int main() {
    
//    // Exercise One
//    Student studentModel; // instantiating a student obj.
//    Student* studentPointer = &studentModel; // Define a pointer for the student obj.
//
//    // Note: You can send either studentPointer or &studentModel. They both refer to same address.
//    getStudentDetails(studentPointer); // Get data from the keyboard to instance
//    printStudentDetails(studentPointer); // Print the object.
//
        // Exercise Two
        Student studentModel; // instantiating a student obj.
        Student* studentPointer = &studentModel; // Define a pointer for the student obj.
        int markSize;

        cout << "How many marks are there? ";
        cin >> markSize;

        // Note: You can send either studentPointer or &studentModel. They both refer to same address.
        getStudentDetails(studentPointer, markSize); // Get data from the keyboard to instance
        printStudentDetails(studentPointer, markSize); // Print the object.
    
    return 0;
}
