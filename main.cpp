#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include "tools.hpp"

int position = 0;

int main()
{
    std::vector<std::string> tokens = readTokens();
    printTokens(tokens);
    return 0;
}
