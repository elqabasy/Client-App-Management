#include "../headers/Person.h"

// Constructor
Person::Person() : _name("Mahros"), _address("Desouk"), _phone("+201015888272"), _email("mahros.elqabasy@hotmail.com"){
}
Person::Person(string name, string address, string phone, string email) : _name(name), _address(address), _phone(phone), _email(email){
}

// Setters
void Person::name(const string& name){
    _name = name;
}
void Person::phone(const string& phone){
    _phone = phone;
}
void Person::address(const string& address){
    _address = address;
}
void Person::email(const string& email){
    _email = email;
}

// Getters
string Person::name(){
    return _name;
}
string Person::phone(){
    return _phone;
}
string Person::address(){
    return _address;
}
string Person::email(){
    return _email;
}

// Functionality
void Person::show(){
    printf("Person(name = %s, address = %s, phone = %s)\n", _name.c_str(), _address.c_str(), _phone.c_str());
}

// Destructor
Person::~Person(){

}