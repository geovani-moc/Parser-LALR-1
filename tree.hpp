#include <string>
#include "token.hpp"

class S {
    public:
        virtual string getClassName() = 0;
};

class V {
    public:
        virtual string getClassName() = 0;
};

class D {
    public:
        virtual string getClassName() = 0;
};

class O {
    public:
        virtual string getClassName() = 0;
};

class A {
    public:
        virtual string getClassName() = 0;
};

class T {
    public:
        virtual string getClassName() = 0;
};

class E {
    public:
        virtual string getClassName() = 0;
};

// S -> VT
class S_vt: public S {
    V *pointerV;
    T *pointerT;
    string getClassName(){ return "S_vt"; }
}

// V -> DV
class V_dv: public V {
    D *pointerD;
    V *pointerV;
    string getClassName(){ return "V_dv"; }
};

// V -> D
class V_d: public V {
    D *pointerD;
    string getClassName(){ return "V_d"; }
};

// D -> int ID;
class D_int: public D {
    Token tokenInt;
    Token tokenId;
    Token tokenSemicolon;
    string getClassName(){ return "D_int"; }
};

// D -> long long int ID;
class D_long: public D {
    Token tokenLong1;
    Token tokenLong2;
    Token tokenInt;
    Token tokenId;
    Token tokenSemicolon;
    string getClassName(){ return "D_long"; }
};

// T -> AT
class T_at: public T {
    A *pointerA;
    T *pointerT;
    string getClassName(){ return "T_at"; }
};

// T -> A
class T_a: public T {
    A *pointerA;
    string getClassName(){ return "T_a"; }
};

// A -> ID = E
class A_rule: public A {
    Token tokenId;
    Token tokenEquals;
    E *pointerE;
    Token tokenSemicolon;
    string getClassName(){ return "A_rule"; }
};

// O -> ?E
class O_rule: public O{
    public:
        Token tokenOperator;
        E *pointerE;
        string getClassName(){ return "O_rule"; }
};

// E -> ( E )
class E_paren: public E {
    public:
        Token leftParen;
        E *pointerE;
        Token rightParen;
        string getClassName() {return "E_paren";}
};

// E -> ID, NUM or STRING
class E_terminal: public E {
    public:
        Token symbol;
        string getClassName() {return "E_terminal";}
};

// E -> EO
class E_eo: public E {
    public:
        E *pointerE;
        O *pointerO;
        string getClassName() {return "E_nonTerminal";}
};