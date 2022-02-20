//
// Created by Muwaffaq Imam on 20.02.2022.
//


#include <iostream>
#include <utility>
#include <vector>

using namespace std;


class Tenant {
public:
    string name;
    int apartment;

    Tenant(string &name, int apartment) : name(name), apartment(apartment) {}
};

class Rent {
public:
    string tenantName;
    string month;
    int cost;

    Rent(string& tenant, string &month, int cost) {
        this->tenantName = tenant;
        this->month = month;
        this->cost = cost;
    }


};

class Expense {
public:
    int month;
    string category, payee;
    float amount;

    Expense(int month, string &category, string &payee, float amount) : month(month),
                                                                        category(category),
                                                                        payee(payee), amount(amount) {}
};

class Landlord {
public:
    vector<Tenant> tenants;
    vector<Rent> rents;
    vector<Expense> expenses;

    void manage();

    void registerTenant();

    void registerRent();

    void registerExpenses();

    void displayTenants();

    void displayRents();

    void displayExpenses();
};



