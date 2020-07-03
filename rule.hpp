#ifndef RULE_HPP
#define RULE_HPP

#include <string>
#include <vector>
#include "token.hpp"

using namespace std;

typedef struct Rule
{
    Token symbol;
    vector<Token> symbolDerivation;
    int unstackQuantity;
}Rule;

Rule seekRule(int number);


#endif