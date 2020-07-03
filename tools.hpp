#ifndef TOOLS_HPP
#define TOOLS_HPP

#include <vector>
#include <stdio.h>
#include <string>
#include <iostream>
#include "token.hpp"

using namespace std;

vector<string> readToken();
void printLexical(vector<string> &lines);
vector<Token> lexicalToToken(vector<string> &lexical);



#endif