#ifndef CLIENT_APP_MANAGEMENT_CONSOLE_H
#define CLIENT_APP_MANAGEMENT_CONSOLE_H
#include <iostream>
using namespace std;

class Console{
    private:
        bool _status;
        string _command, _title;
    public:
        // Constructor
        Console();
        Console(string);

        // Setters
        void status(bool);
        void title(string);
        void command(string);

        // Getter
        bool status();
        string title();
        string command();

        // Functionality
        void run();
        void handle();

        // Destructor
        ~Console();
};
#endif //CLIENT_APP_MANAGEMENT_CONSOLE_H
