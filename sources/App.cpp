#include "../headers/App.h"
#include "../headers/Date.h"

// Constructor
ll int App::_count = 0;

App::App() : _name("App"), _description("description"), _serial("here"), _cost(0), _status(Status::InProgress), _deadline(Date(24, 3, 2024)){
    _count++;
}
App::App(string name, string description, string serial, long double cost, Status status, Date deadline) : _name(name), _description(description), _serial(serial), _cost(cost), _status(status), _deadline(deadline){
    _count++;
}

// Setters
void App::name(const string& name){
    _name = name;
}
void App::description(const string& description){
    _description = description;
}
void App::serial(const string& serial){
    _serial = serial;
}

void App::cost(const long double& cost){
    _cost = cost;
}
void App::status(const Status& status){
    _status = status;
}
void App::deadline(const Date& deadline){
    _deadline = deadline;
}

// Getters
string App::name(){
    return _name ;
}
string App::description(){
    return _description;
}
string App::serial(){
    return _serial;
}
long double App::cost(){
    return _cost;
}
Status App::status(){
    return _status;
}
Date App::deadline(){
    return _deadline;
}
ll int App::count(){
    return _count;
}

// Functionality
void App::show(){
    printf("App(name = %s, serial = %s, cost = $%.2lf, deadline = %s)\n", _name.c_str(), _serial.c_str(), _cost, _deadline.data().c_str());
}

// Destructor
App::~App(){
    _count--;
}
