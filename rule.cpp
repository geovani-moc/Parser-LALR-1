#include "rule.hpp"

vector<Rule> readRules(const char *fileName)
{
    vector<Rule> rules;

    ifstream file(fileName);
    string buffer;
    while (true)
    {
        getline(file, buffer);
        if(file.eof())break;
        //rules.push_back(buffer);
    }

    file.close();
    return rules;
}
