#include "pch.h"
#include <iostream>
#include <string>

using namespace System;
using namespace std;

int calculate(int num1, int num2) {
    int result = 1;
    for (int i = 0; i < num2; i++)
    {
        result *= num1; 
    }
    return result;
}   


int main()
{
    int varNum1;
    int varNum2;
    cout << "enter number";
    cin >> varNum1;
    cout << "enter porwed";
    cin >> varNum2;
    cout << "your result is " << calculate(varNum1, varNum2);


    

    

}
