#include "tools.hpp"

vector<string> readTokens()
{
    vector<string> tokens;
    string buffer;
    while (getline(cin, buffer))
    {
        tokens.push_back(buffer);
    }
    
    return tokens;
}

void printTokens(vector<string> &tokens)
{
    for (int i = 0; i < tokens.size(); i++)
    {
        cout << tokens[i] << endl;
    }
    
}

