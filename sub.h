#ifndef sub_h
#define sub_h

#include "base.hpp"
#include "op.hpp"

class Sub : public Base {
    private: 
        Op* exp1;
        Op* exp2;
    public:
        Add(Op* v1, Op* v2) : exp1(v1), exp2(v2), Base() { }
        virtual double evaluate() { return exp1->evaluate() -  exp2->evaluate() ; }
        virtual std::string stringify() { return exp1->stringify() + "-" + exp2->stringify(); }
};

#endif //Sub_h
