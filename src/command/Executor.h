#include <vector>
#include "Command.h"

#ifndef _CLU_COMMAND_EXECUTOR_H_
#define _CLU_COMMAND_EXECUTOR_H_

namespace command {

class Executor
{
    std::vector<Command*> commands;
    Command *defaultCommand;

public:
    Executor();

    void registerCommand(Command* cmd, bool defaultCmd = false);
    void execute(int argc, char* argv[]);
};

}

#endif // _CLU_COMMAND_EXECUTOR_H_