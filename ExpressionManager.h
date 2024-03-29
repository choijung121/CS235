#pragma once
#include "ExpressionManagerInterface.h"
#include <iostream>
#include <string>
#include <stack>

using namespace std;


class ExpressionManager: public ExpressionManagerInterface{
    public:
        ExpressionManager(){
        }
        virtual ~ExpressionManager(){
        }

bool isBalanced(string expression);

    
string postfixToInfix(string postfixExpression);
    

string infixToPostfix(string infixExpression);
    

string postfixEvaluate(string postfixExpression);


};
