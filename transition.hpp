#ifndef TRANSITION_HPP
#define TRANSITION_HPP

#include <vector>
#include "token.hpp"

using namespace std;

typedef struct Transition
{
    /* data */
} Transition;

typedef struct Operation
{
    char action;
    int actionNumber;
}Operation;

vector<Transition> readTransitions(const char *fileName);

Operation seekTransition(Token token, int currentState, Token tokenStackTop);

#endif