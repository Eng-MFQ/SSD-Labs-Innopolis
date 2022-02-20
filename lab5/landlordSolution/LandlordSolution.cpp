//
// Created by Muwaffaq Imam on 20.02.2022.
//

#include "LandlordSolution.h"

char getChar()                 // get a character
{
    char ch = cin.get();
    cin.ignore(80, '\n');
    return ch;
}

void getaLine(string &inStr)    // get line of text
{
    char temp[21];
    cin.get(temp, 20, '\n');
    cin.ignore(20, '\n');
    inStr = temp;
}

void LandlordTemplate::registerTenant()       //get tenantName info
{
    string name;
    int apartment;
    cout << "Enter tenantName's name i.e (John Smith): ";
    getaLine(name);
    cout << "Enter tenantName's apartment number i.e (101): ";
    cin >> apartment;
    cin.ignore(80, '\n');
    Tenant t = Tenant(name, apartment);
    this->tenants.push_back(t);
}

void LandlordTemplate::registerRent()       //get tenantName info
{
    string name;
    cout << "Enter tenant name from following : \n";
    for (const Tenant &t: tenants) {
        cout << "Tenant : " << t.name << endl;
    }
    cin>>name;
    cout << "Tenant for " << name << endl;
    int amount;
    string month;

    cout << "Enter amount paid i.e (345.67): ";
    cin >> amount;
    cin.ignore(80, '\n');
    cout << "Enter month rent is for from 1 to 12 : ";
    cin >> month;
    cin.ignore(80, '\n');

    Rent rent = Rent(name, month, amount);
    this->rents.push_back(rent);

}

void LandlordTemplate::registerExpenses() {
    int month, day;
    string category, payee;
    float amount;

    cout << "Enter month (1-12): ";
    cin >> month;
    cin.ignore(80, '\n');
    cout << "Enter expense category i.e (Repairing, Utilities): ";
    getaLine(category);
    cout << "Enter payee i.e (Bob's Hardware, Big Electric Co): ";
    getaLine(payee);
    cout << "Enter amount i.e (39.95): ";
    cin >> amount;
    cin.ignore(80, '\n');
    Expense expense = Expense(month, category, payee, amount);
    this->expenses.push_back(expense);

}

void LandlordTemplate::displayTenants() {
    cout << "-------------- Display Tenants ------------ " <<  endl;
    for (const Tenant &t: tenants) {
        cout << "Tenant : " << t.name << ", Apt : " << t.apartment << endl;
    }
    cout << "---------------------------------------- " <<  endl;

}

void LandlordTemplate::displayRents() {
    cout << "-------------- Display Rent ------------ " <<  endl;
    for (const Rent &r: rents) {
        cout << "Tenant : " << r.tenantName << endl;
        cout << "for month : " << r.month << ", paid : " << r.cost << endl;

    }
    cout << "---------------------------------------- " <<  endl;
}

void LandlordTemplate::displayExpenses() {
    cout << "-------------- Display Expenses ------------ " <<  endl;
    for (const Expense &t: expenses) {
        cout << "Amount : " << t.amount << ", Payee : " << t.payee << endl;
        cout << " Category: " << t.category << ", Month : " << t.month << endl;
    }
    cout << "---------------------------------------- " <<  endl;
}


void LandlordTemplate::manage() {
    char ch;
    while (true) {
        cout << "Enter 'i' to input data, \n"
             << "      'd' to display a report, \n"
             << "      'q' to quit program: ";
        ch = getChar();
        if (ch == 'i')                                // enter data
        {
            cout << "Enter 't' to add tenantName, \n"
                 << "      'r' to record rent payment, \n"
                 << "      'e' to record expense: ";
            ch = getChar();
            switch (ch) {
                //input screens exist only while being used
                case 't': {
                    /// TODO add tenants
                    this->registerTenant();
                    break;
                }
                case 'r': {
                    /// TODO Add Rent record
                    this->registerRent();
                    break;
                }
                case 'e': {
                    /// TODO Add expense record
                    this->registerExpenses();
                    break;
                }
                default: {
                    cout << "Unknown input option\n";
                    break;
                }
            }  // end switch
        }  // end if
        else if (ch == 'd')                           // display data
        {
            cout << "Enter 't' to display tenants, \n"
                 << "      'r' to display rents\n"
                 << "      'e' to display expenses, \n"
                 << "      'a' to display annual report: ";
            ch = getChar();
            switch (ch) {
                case 't':
                    /// TODO display Tenants record
                    this->displayTenants();
                    break;
                case 'r':
                    /// TODO display Rent record
                    this->displayRents();
                    break;
                case 'e':
                    /// TODO display Expenses record
                    this->displayExpenses();
                    break;
                case 'a':
                    /// Homework : display Annual record
                    /// The program displays the Annual Summary, which consists of
                    /// 1. The sum of all rents paid for the year to date
                    /// 2. A list of the total expenses for each budget category
                    /// 3. The resulting balance (profit or loss for the year to date)
                    break;
                default:
                    cout << "Unknown display option\n";
                    break;
            }  // end switch
        }  // end elseif
        else if (ch == 'q')
            return;
        else
            cout << "Unknown option. Enter only 'i', 'd' or 'q'\n";
    }
}


int main() {
    LandlordTemplate landlord;
    landlord.manage();
}
