#include "tools.hpp"

vector<string> readLexical()
{
    vector<string> line;
    string buffer;
    while (getline(cin, buffer))
    {
        line.push_back(buffer);
    }
    
    return line;
}

void printLexical(vector<string> &lines)
{
    int size = (int) lines.size();
    for (int i = 0; i < size; i++)
    {
        cout << lines[i] << endl;
    }
    
}

vector<Token> lexicalToToken(vector<string> &lexical);
