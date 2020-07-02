#include "parser.hpp"

void parser(vector<string> &tokens)
{
    int position = 0;
    int currentState = 0;
    vector<Token> stack;
    Operation operation;

    Token token;

    while (!acceptGrammar(currentState))
    {
        token = readToken(position);
        operation = checkOperationTable(token, currentState, stack.back());

        switch (operation.action)
        {
        case 's':
            stack.push_back(token);
            position++;
            currentState = operation.actionNumber;
            break;

        case 'r':

            break;

        case 'g':
            currentState = operation.actionNumber;
            break;

        default:
            fprintf(stderr, "Erro da gramatica: entrada nao acaita\n");
            exit(EXIT_FAILURE);
        }
    }
    //return estrutura em memoria(arvore de parser)
}

bool acceptGrammar(int currentState)
{
    return true;
}

Token readToken(int position)
{
    Token token;
    return token;
}

Operation checkOperationTable(Token token, int currentState, Token tokenStackTop)
{
    Operation operation;
    return operation;
}