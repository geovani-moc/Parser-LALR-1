#ifndef PARSER_HPP
#define PARSER_HPP

#include <vector>
#include <string>
#include "token.hpp"
#include "rule.hpp"
#include "transition.hpp"

using namespace std;

void parser(vector<string> &tokens);
bool acceptGrammar(int currentState);
Token readToken(int position);


#endif