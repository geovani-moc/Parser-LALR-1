#include "parser.hpp"

void parser(vector<string> &tokens)
{
    int position = 0;
    int currentState = 0;
    vector<Token> stack;

    Operation operation;
    Rule currentRule;
    Token token;

    while (!acceptGrammar(currentState))
    {
        token = readToken(position);// modificar isso, acessar posicao do vetor de tokens
        operation = seekTransition(token, currentState, stack.back());

        switch (operation.action)
        {
        case 's':
            stack.push_back(token);
            position++;
            currentState = operation.actionNumber;
            stack.back().currentState = currentState;
            break;

        case 'r':
            currentRule = seekRule(operation.actionNumber);

            for (int i = 0; i < currentRule.unstackQuantity; i++)
            {
                stack.pop_back();
                // adicionar elemento na estrutura em memoria aqui
            }

            currentState = stack.back().currentState;
            stack.push_back(currentRule.symbol);

            break;

        case 'g':
            currentState = operation.actionNumber;
            stack.back().currentState = currentState;
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