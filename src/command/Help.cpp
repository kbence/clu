#include "Help.h"
#include <iostream>
#include <iomanip>

using namespace std;

namespace command {

Help::Help():
    Command("help")
{}

void Help::execute()
{
    const char* indent = "    ";

    cout << "CLU v" << VERSION << endl << endl;
    cout << "Usage:" << endl << endl;
    cout << indent << "clu <command> [options]" << endl << endl;
    cout << "Commands:" << endl << endl;
    cout << indent << "help            Prints this help" << endl;
    cout << endl;
}

}