#ifndef TRANSITION_HPP
#define TRANSITION_HPP

#include <vector>
#include <fstream>
#include "token.hpp"

using namespace std;

typedef struct Transition
{
    int state;
    string token;
    char action;
    int actionNumber;
} Transition;

typedef struct Operation
{
    char action;
    int actionNumber;
}Operation;

vector<Transition> readTransitions(const char *fileName);
Operation seekTransition(Token token, int currentState, Token tokenStackTop);
void printTransition(vector<Transition> &transitions);

#endif