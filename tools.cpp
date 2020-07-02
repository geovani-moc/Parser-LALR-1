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
    int size = (int) tokens.size();
    for (int i = 0; i < size; i++)
    {
        cout << tokens[i] << endl;
    }
    
}

