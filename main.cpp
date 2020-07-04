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

    Token lastToken = {"$", "", -1};

    vector<Token> tokens = readTokens(fileTokens);
    tokens.push_back(lastToken);
    //printToken(tokens);

    vector<Rule> rules = readRules(fileRules);
    //printRule(rules);
    
    vector<Transition> transitions = readTransitions(fileTransitions);
    //printTransition(transitions);

    parser(tokens, rules, transitions);
    //Node* tree = parser(tokens);
    return 0;
}
