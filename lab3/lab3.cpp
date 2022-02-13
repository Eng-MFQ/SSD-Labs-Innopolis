//
// Created by Muwaffaq Imam on 06.02.2022.
//
#include <iostream>

using namespace std;

#include "lab3.h"

void test(int& x) {
    ++x;
    cout << x << endl;

}

int main() {
    int x = 5;
    test(x);
    cout << x << endl;
    return 0;
}


//for (int i = 0; i < 10; ++i) {
//cout << numbersData[i] << ",";
//}
//
//cout << "" << endl;
//bubbleSort();
//
//for (int i = 0; i < 10; ++i) {
//cout << numbersData[i] << ",";
//}
void bubbleSort() {
    size_t arrayLength = sizeof(numbersData) / sizeof(int);
    cout << "the Length of the data to sort is = " << arrayLength << endl;
    for (int i = 0; i < arrayLength; i++) {
        for (int j = i; j < arrayLength; j++)
            if (numbersData[i] > numbersData[j])
                swap(numbersData[i], numbersData[j]);
    }

}


void fibonacci(int n) {
    long t1 = 0, t2 = 1, nextTerm, i = 3;
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    nextTerm = t1 + t2;
    while (i <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        i++;
    }
}


void buildPyramid(int height) {
    cout << "This program prints a 'pyramid' shape of\n";
    cout << "a specified height on the screen.\n\n";
    int line;
    int const MARGIN = 20;
    cout << "\n\n";
    for (line = 1; line <= height; line++) {
        int count;
        int total_no_of_spaces = MARGIN + height - line;
        for (count = 1; count <= total_no_of_spaces; count++)
            cout << ' ';
        for (count = 1; count <= line * 2; count++)
            cout << '*';
        cout << '\n';
    }
    cout << "\n\n";
}





