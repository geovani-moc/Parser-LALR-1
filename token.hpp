#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

typedef struct Token
{
    string symbol;
    string content;
    int currentState;// iniciado com -1, sem estado

} Token;

vector<Token> readTokens(const char * fileName);
Token stringToToken(string &line);
void printToken(vector<Token> &tokens);

#endif