#include <string>

#ifndef _CLU_COMMAND_COMMAND_H_
#define _CLU_COMMAND_COMMAND_H_

namespace command {

class Command
{
    std::string name;

public:
    Command(std::string name) : name(name) {}

    virtual void execute() = 0;

    std::string getName() { return name; }
};

}

#endif // _CLU_COMMAND_COMMAND_H_
