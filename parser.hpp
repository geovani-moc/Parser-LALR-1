#ifndef PARSER_HPP
#define PARSER_HPP

#include <vector>
#include <string>
#include "token.hpp"

using namespace std;

typedef struct Operation
{
    char action;
    int actionNumber;
}Operation;


void parser(vector<string> &tokens);
bool acceptGrammar(int currentState);
Token readToken(int position);




#endif