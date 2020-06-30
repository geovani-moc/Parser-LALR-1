#ifndef TREE_HPP
#define TREE_HPP

#define E ("E")
#define STRING ("STRING")
#define NUM ("NUM")
#define ID ("ID")
#define RESTO ("%")
#define DIVISAO ("/")
#define MULTIPICACAO ("*")
#define SOMA ("+")
#define SUBTRACAO ("-")
#define MENOR ("<")
#define DIFERENTE ("!=")
#define IGUAL ("==")
#define AND ("&&")
#define OR ("||")

#define ATRIBUICAO ("=")
#define PREFIXO_INT ("long")

#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    string symbol;
    vector<Node*> children;
};

Node* newNode(string &symbol)
{
    Node* temporary = new Node;
    temporary->symbol = symbol;
    return temporary;
}


#endif