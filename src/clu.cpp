#include "command/Help.h"
#include "command/Executor.h"

int main(int argc, char* argv[])
{
    command::Executor exec;
    command::Help helpCommand;

    exec.registerCommand(&helpCommand);
    exec.execute(argc, argv);

    return 0;
}
