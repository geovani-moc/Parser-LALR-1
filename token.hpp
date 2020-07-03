#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>
#include <vector>

using namespace std;

typedef struct Token
{
    string symbol;
    vector<string> content;
    bool terminalSymbol;
    int currentState;// iniciado com -1, sem estado

} Token;

vector<Token> readTokens(const char * fileName);

#endif