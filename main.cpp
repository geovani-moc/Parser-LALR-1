#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include "tools.hpp"
#include "parser.hpp"
#include "transition.hpp"

using namespace std;

int main()
{
    const char *fileTokens = "tokens.txt";
    const char *fileRules = "rules.txt";
    const char *fileTransitions = "transitions.txt";

    vector<Token> tokens = readTokens(fileTokens);
    vector<Rule> rules = readRules(fileRules);
    vector<Transition> transitions = readTransitions(fileTransitions);

    //Node* tree = parser(tokens);
    return 0;
}
