//
// Created by Mahros on 23/03/2024.
//

#include "../headers/Client.h"

// Static
ll int Client::_count = 0;

// Constructors

Client::Client() : Person(), _id("A223106831") {
    _count++;
}
Client::Client(string name, string address, string phone, string email, string id) : Person(name, address, phone, email), _id(id) {
    _count++;
}

// Setters
// Getters

// Destructor
Client::~Client(){
    _count--;
}