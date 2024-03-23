#include "../headers/Console.h"


#include <iostream>
using namespace std;
#include "../headers/Console.h"

// Source
// Constructor
Console::Console(){

}
Console::Console(string title) : _title(title){

}

// Setters
void Console::title(string title){
    _title = title;
}
void Console::command(string command){
    _command = command;
}
void Console::status(bool status){
    _status = status;
}

// Getters
string Console::title(){
    return _title;
}
string Console::command(){
    return _command;
}
bool Console::status(){
    return _status;
}

// Functionality
void Console::run(){
    _status = true;
    while (_status){
        printf("%s> ", _title.c_str());
        getline(cin, _command);
        handle();
    }
}

void Console::handle(){
    if (_command == "exit"){
        _status = false;
    }else if(_command == "cls" || _command == "clear"){
        system("cls");
    }
}

// Destructor
Console::~Console(){
    // nothing
}