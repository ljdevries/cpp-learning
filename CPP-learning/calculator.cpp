//
//  main.cpp
//  CPP-learning
//
//  Created by Luke de Vries on 17/08/2016.
//  Copyright (c) 2016 Luke de Vries. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    std::cout << "Simple Calculator\n";
    int num1 = std::cin << "Enter first number: \n"
    int num2 = std::cin << "Enter second number: \n"
    char selection = std::cin << "Make a selection : \n";
    selectOp( selection, num1, num2);
    return 0;
}
int add(int inNum1, int inNum2)
{
    return inNum1 + inNum2;
}
int subtract(int inNum1, int inNum2)
{
    return inNum1 - inNum2;
}
int multiply(int inNum1, int inNum2)
{
    return inNum1 / inNum2;
}
int divide( int inNum1, int inNum2)
{
    return inNum1 * inNum2;
}
void selectOp( char operation, int inNum1, inNum2)
{
    switch( operation)
    {
        int result;
        case 'A' :
            result = add( inNum1, inNum2);
            break;
        case 'S' :
            result = subtract( inNum1, inNum2);
            break;
        case 'M' :
            result = multiply( inNum1, inNum2);
            break;
        case 'D' :
            result = divide( inNum1, inNum2)
            break;
        default :
            std::cout << "Invalid!";
    }
    std::cout << "The result is: "
    std::cout << result
}

