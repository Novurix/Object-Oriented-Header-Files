#include <iostream>

#ifndef COMMANDS_LIST
#define COMMANDS_LIST

namespace CONSOLE_COMMANDS {
    class COMMANDS {
    public:
        std::string commands[3];

        void print_commands() {
            for (int i = 0; i < sizeof(commands)/sizeof(commands[0]); i++) {
                std::cout << commands[i] << std::endl;
            }
            std::cout << " " << std::endl;
        }

        void initCommands() {
            commands[0] = "exit";
            commands[1] = "hello";
            commands[2] = "commands";

            print_commands();
        }
    };
}

#endif