#include "transition.hpp"

vector<Transition> readTransitions(const char *fileName)
{
    vector<Transition> transition;

    ifstream transitionFile(fileName);
    
    Transition buffer;
    while (true)
    {
        transitionFile  >> buffer.state >> buffer.token >> buffer.action >> buffer.actionNumber;
        if(transitionFile.eof())break;
        transition.push_back(buffer);
    }
    transitionFile.close();
    return transition;
}


void printTransition(vector<Transition> &transitions)
{
    int size = (int) transitions.size();
    for (int i = 0; i < size; i++)
    {
        printf("%d %s %c %d\n", 
        transitions[i].state, transitions[i].token.c_str(), 
        transitions[i].action, transitions[i].actionNumber);
    }
    
}

Operation seekTransition(Token token, int currentState, Token tokenStackTop)
{
    Operation operation;
    
    operation.actionNumber = -2;

    return operation;
}