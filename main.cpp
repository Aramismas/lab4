#include <iostream>
#include <math.h>
#include "base.hpp"
#include "op.hpp"
#include "add.h"
#include "sub.h"
#include "mult.h"
#include "div.h"
#include "pow.h"

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* add = new Add(three, seven);
    std:: cout << add->stringify() << " = " << add->evaluate() << std::endl;
    Base* sub = new Sub(add, four);

    
    std:: cout << sub->stringify() << " = " << sub->evaluate() << std::endl;
    Base* mult = new Mult(seven, four);
    
    Base* minus = new Sub(add, two);
    Base* div = new Div(three, seven); 
 
    // std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    return 0; 

}   
