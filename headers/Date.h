#ifndef CLIENT_APP_MANAGEMENT_DATE_H
#define CLIENT_APP_MANAGEMENT_DATE_H
#include <iostream>
using namespace std;

#include <sstream>

#define usi unsigned short int
#define ulli unsigned long long int

class Date{
    private:
        usi _day, _month, _year;
        ulli _timestamp; // by days
    public:
        // Constructor
        Date();
        Date(usi, usi, usi);

        // Setters
        void day(usi const&);
        void year(usi const&);
        void month(usi const&);

        // Getters
        usi day();
        usi year();
        usi month();
        string data();
        ulli timestamp();

        // Operators
        Date operator++();
        Date operator--();
        Date operator++(int);
        Date operator--(int);

        bool operator>(Date);
        bool operator<(Date);
        bool operator>=(Date);
        bool operator<=(Date);
        bool operator==(Date);

        // Date operator=(Date);
        // Date operator+(Date);
        // Date operator-(Date);

        // Functionality
        void show();

        // Destructor
        ~Date();
};
#endif //CLIENT_APP_MANAGEMENT_DATE_H
