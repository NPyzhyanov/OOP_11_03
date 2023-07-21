#include <string>

#include "leaver.h"

Leaver::Leaver()
{
}

std::string Leaver::leave(std::string input_name)
{
    return "Goodbue, " + input_name + "!";
}
