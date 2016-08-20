//
//  test.cpp
//  
//
//  Created by Luke de Vries on 19/08/2016.
//
//

#include "test.h"
#include <iostream>
#include <string>

using namespace std;

// function declaration
int max(int num1, int num2);
string genTestStr( string str1);

int main ()
{
    // local variable declaration:
    int a = 100;
    int b = 200;
    int ret;
    
    // calling a function to get max value.
    ret = max(a, b);
    
    cout << "Max value is : " << ret << endl;
    
    string testStr = genTestStr("Hello String!");
    
    return 0;
}

// function returning the max between two numbers
int max(int num1, int num2)
{
    // local variable declaration
    int result;
    
    if (num1 > num2)
        result = num1;
    else
        result = num2;
    
    return result; 
}

string genTestStr( string str1)
{
    string testStr;
    testStr = "Woah! ";
    testStr = testStr + str1;
    return testStr;
}
