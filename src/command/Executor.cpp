#include "Executor.h"

namespace command
{

void Executor::registerCommand(Command* cmd)
{
    commands.push_back(cmd);
}

void Executor::execute(int argc, char* argv[])
{
    if (argc < 2)
        return;

    for (auto it = commands.begin(); it != commands.end(); it++) {
        if ((*it)->getName() == argv[1]) {
            (*it)->execute();
            return;
        }
    }
}

}
