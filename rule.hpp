#ifndef RULE_HPP
#define RULE_HPP

#include <string>
#include <vector>
#include <sstream>
#include "token.hpp"

using namespace std;

typedef struct Rule
{
    int number;
    Token symbol;
    vector<Token> symbolDerivation;
    int unstackQuantity;
    bool terminal;
}Rule;

Rule seekRule(int number);

vector<Rule> readRules(const char* fileName);
Rule stringToRule(string &line);
void printRule(vector<Rule> &rules);


#endif