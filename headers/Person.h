//
// Created by Mahros on 23/03/2024.
//

#ifndef CLIENT_APP_MANAGEMENT_PERSON_H
#define CLIENT_APP_MANAGEMENT_PERSON_H
#include <iostream>
using namespace std;
class Person{
private:
    string _name, _address, _phone, _email;
public:
    // Constructor
    Person();
    Person(string, string, string, string);

    // Setters
    void name(const string&);
    void phone(const string&);
    void address(const string&);
    void email(const string&);

    // Getters
    string name();
    string phone();
    string email();
    string address();

    // Functionality
    void show();

    // Destructor
    ~Person();
};
#endif //CLIENT_APP_MANAGEMENT_PERSON_H
