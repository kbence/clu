#include "Executor.h"

namespace command
{

Executor::Executor():
    defaultCommand(nullptr)
{}

void Executor::registerCommand(Command* cmd, bool defaultCmd)
{
    commands.push_back(cmd);

    if (defaultCmd) {
        defaultCommand = cmd;
    }
}

void Executor::execute(int argc, char* argv[])
{
    if (argc < 2) {
        if (defaultCommand)
            defaultCommand->execute();
        
        return;
    }

    for (auto it = commands.begin(); it != commands.end(); it++) {
        if ((*it)->getName() == argv[1]) {
            (*it)->execute();
            return;
        }
    }
}

}
