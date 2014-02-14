#include <vector>
#include "Command.h"

#ifndef _CLU_COMMAND_EXECUTOR_H_
#define _CLU_COMMAND_EXECUTOR_H_

namespace command {

class Executor
{
    std::vector<Command*> commands;
public:
    void registerCommand(Command* cmd);
    void execute(int argc, char* argv[]);
};

}

#endif // _CLU_COMMAND_EXECUTOR_H_