#include "token.hpp"

#include<iostream>

vector<Token> readTokens(const char * fileName)
{
    vector<Token> tokens;

    ifstream file(fileName);
    string buffer;
    while (true)
    {
        getline(file, buffer);
        if(file.eof())break;
        cout << buffer << endl;
        //tokens.push_back(buffer);
    }

    file.close();
    return tokens;
}

Token stringToToken(string &line)
{
    Token token;

    return token;
}