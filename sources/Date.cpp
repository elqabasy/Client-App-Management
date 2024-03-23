//
// Created by Mahros on 23/03/2024.
//

#include "../headers/Date.h"
// Constructor
Date::Date() : _day(0), _month(0), _year(0), _timestamp(0){
}
Date::Date(usi day, usi month, usi year) : _day(day), _month(month), _year(year), _timestamp(day + month * 30 + year * 365){
}

// Setters
void Date::day(usi const& day){
    _day = day;
}
void Date::month(usi const& month){
    _month = month;
}
void Date::year(usi const& year){
    _year = year;
}

// Getters
usi Date::day(){
    return _day;
}
usi Date::month(){
    return _month;
}
usi Date::year(){
    return _year;
}
ulli Date::timestamp(){
    return _timestamp;
}
string Date::data(){
    ostringstream text;
    text << _day; text << "/"; text << _month; text << "/"; text << _year;
    return text.str();
}

// Operators
Date Date::operator++(){
    return *this;
}
Date Date::operator--(){
    return *this;
}
Date Date::operator++(int){
    return *this;
}
Date Date::operator--(int){
    return *this;
}
bool Date::operator>(Date date){
    return this->_timestamp > date.timestamp();
}
bool Date::operator<(Date date){
    return this->_timestamp < date.timestamp();
}
bool Date::operator>=(Date date){
    return this->_timestamp >= date.timestamp();
}
bool Date::operator<=(Date date){
    return this->_timestamp <= date.timestamp();
}
bool Date::operator==(Date date){
    return this->_timestamp == date.timestamp();
}
// Date Date::operator=(Date date){
//     return this->_timestamp = date.timestamp();
// }
// Date Date::operator+(Date date){
//     return this->_timestamp + date.timestamp();
// }
// Date Date::operator-(Date date){
//     return this->_timestamp - date.timestamp();
// }

// Functionality
void Date::show(){
    printf("Date(day = %i, month = %i, year = %i)\n", _day, _month, _year);
}

// Destructor
Date::~Date(){

}