#ifndef PARSER_HPP
#define PARSER_HPP

#include <vector>
#include <string>
#include "token.hpp"
#include "rule.hpp"
#include "transition.hpp"

using namespace std;

void parser(vector<Token> &tokens);
bool acceptGrammar(int currentState, int position, vector<Token> &stack);
Token readToken(int position);


#endif