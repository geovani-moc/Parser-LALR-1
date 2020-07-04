#include "parser.hpp"

void parser(vector<Token> &tokens, vector<Rule> &rules, vector<Transition> &transitions)
{
    int position = 0;
    int currentState = 0;
    vector<Token> stack;

    Operation operation;
    Rule currentRule;
    Token token;

    while (!acceptGrammar(currentState, position, stack))
    {
        //token = readToken(position);// modificar isso, acessar posicao do vetor de tokens
        token = tokens[position];
        operation = seekTransition(transitions, token, currentState);

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
                Token temporaryToken = stack.back();
                stack.pop_back();
                // adicionar elemento na estrutura em memoria aqui
                printf("Reducao: ");
                printToken(temporaryToken);
            }

            currentState = stack.back().currentState;
            stack.push_back(currentRule.symbol);

            printToken(currentRule.symbol);

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

bool acceptGrammar(int currentState, int position, vector<Token> &stack)
{
    int acceptState = 5;
    if ((currentState == acceptState) && (stack[position].symbol.compare("$") == 0)) return true;

    return false;
}

Token readToken(int position)
{
    Token token;
    return token;
}