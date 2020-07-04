#include "token.hpp"

vector<Token> readTokens(const char * fileName)
{
    vector<Token> tokens;

    ifstream file(fileName);
    string buffer;
    while (true)
    {
        getline(file, buffer);
        if(file.eof())  break;

        tokens.push_back(stringToToken(buffer));
    }

    file.close();
    return tokens;
}

Token stringToToken(string &line)
{
    Token token;
    //printf("a");

    istringstream tokenStream(line);
    //tokenStream >> token.symbol >> token.content;
    getline(tokenStream, token.symbol,' ');
    if (!tokenStream.eof())
    {
        getline(tokenStream, token.content);
    }
    token.currentState = -1;

    return token;
}

void printToken(vector<Token> &tokens)
{
    int size = (int)tokens.size();
    //printf("%d\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("[%6s] [%6s] [%4d]\n", tokens[i].symbol.c_str(), tokens[i].content.c_str(), tokens[i].currentState);
    }
    
}