#ifndef CLIENT_APP_MANAGEMENT_APP_H
#define CLIENT_APP_MANAGEMENT_APP_H
#include <iostream>
using namespace std;

#include "Date.h"

#define l long
#define ll long long

enum Status{
    InProgress, Done, Canceled
};

class App{
    private:
        Date _deadline; // NOTE: you stopped here, then create a new data type for (Date) #1
        Status _status;
        long double _cost;
        static ll int _count; // count all applications has been created
        string _name, _serial, _description;
    public:
        // Constructor
        App();
        App(string, string, string, long double, Status, Date);

        // Setters
        void name(const string&);
        void serial(const string&);
        void status(const Status&);
        void deadline(const Date&);
        void cost(const long double&);
        void description(const string&);

        // Getters
        string name();
        ll int count();
        string serial();
        Status status();
        Date deadline();
        long double cost();
        string description();


        // Functionality
        void show();

        // Destructor
        ~App();
};
#endif //CLIENT_APP_MANAGEMENT_APP_H
