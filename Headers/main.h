#include <iostream>
#include "commands.h"

#ifndef MAIN
#define MAIN

CONSOLE_COMMANDS::COMMANDS commands;

namespace CONSOLE {

    class DISPLAY_IN_CONSOLE {
    private:
        std::string message;
        std::string console_input;

    public:
        std::string print_in_terminal(std::string message) {

            if (message == "commands") commands.print_commands();
            else std::cout << "the command '" + message + "' is invalid \n" << std::endl;

            // just to go back to the 'write_in_console' function
            return message;
        }

        void write_in_console() {
            std::cin >> console_input;
            message = print_in_terminal(console_input);
            
            write_in_console();
        }

        void init_console() {
            commands.initCommands();
            write_in_console();
        }
    };
}

#endif