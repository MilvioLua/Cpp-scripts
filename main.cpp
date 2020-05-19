#include <iostream>
#include <cmath>

using namespace std;

double cube (double num){

}


int gerMAx(int num1, int num2, int num3) {
    int result;

    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if ( num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }

    return result;
}




int main()
{
    int num1, num2;
    char op;

    cout << " enter first number: ";
    cin >> num1;

    cout << " enter operator: ";
    cin >> op;

    cout << " enter second number  number: ";
    cin >> op;

    int result;

    if (op == '+'){
        cout << num1 + num2 ;
    } else if (op =='-'){
        cout << num1 - num2;
    } else if (op =='*'){
        cout << num1 * num2;
    } else if (op =='/'){
        cout << num1 / num2;
    } else {
        cout << "invalid operator";
    }

    cout << result;
    return 0;
}

