#ifndef CLIENT_APP_MANAGEMENT_CLIENT_H
#define CLIENT_APP_MANAGEMENT_CLIENT_H
#include <iostream>
using namespace std;
#define ll long long

#include "Person.h"

class Client : public Person {
    private:
        string _id;
        static ll int _count;
    public:
        // Constructors
        Client();
        Client(string, string, string, string, string);

        // Client() : Person(), _id("A223106831") {    }
        // Client(string name, string address, string phone, string email, string id) : Person(name, address, phone, email), _id(id) {}

        // Setters
        void id(const string& id) {
            _id = id;
        }

        // Getters
        string id() {
            return _id;
        }
        ll int count(){
            return _count;
        }

        // Overriding
        void show() {
            printf("Client(name = %s, id = %s, email = %s)\n", name().c_str(), _id.c_str(), email().c_str());
        }

        // Destructor
        ~Client();
};

#endif //CLIENT_APP_MANAGEMENT_CLIENT_H
