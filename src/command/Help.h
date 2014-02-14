#include "Command.h"

#ifndef _CLU_COMMAND_HELP_H_
#define _CLU_COMMAND_HELP_H_

namespace command {

#define VERSION "0.0.0"

class Help : public Command
{
public:
    Help();

    void execute();
};

} // namespace command

#endif // _CLU_COMMAND_HELP_H_
