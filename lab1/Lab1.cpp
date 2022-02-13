#include <iostream>
using namespace std;
#include "Lab1Header.h"


void printSize() {
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
    cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;
    cout << "Size of unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of char : " << sizeof(char) << " byte" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
}


void daysConverter() {
    int days, y, m, d;
    cout << "Enter number of days you want to convert : ";
    cin >> days;
    y = days / 365;
    days = days % 365;
    m = days / 30;
    d = days % 30;
    cout << "Years : " << y << "\nMonths : " << m << "\nDays : " << d << endl;
    cout << "______________ " << endl;
}

namespace SecondNameSpace{
    void swapNumbers(int x, int y) {
        cout << "I don't swap " << x << endl;
    }
}


int test(int a) ;
int main() {
   double x = 33.768;
    cout << x << endl;
    return 0;
}

int test(int a) {
    if (a > 0)
        cout << "a is bigger than zero" << endl;
    else
        cout << "3" + 5 << endl;
    return 0;
}


void swapNumbers(int x, int y) {
    cout << "before swapping x = " << x << endl;
    cout << "before swapping y = " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "after swapping x = " << x << endl;
    cout << "after swapping y = " << y << endl;
}





