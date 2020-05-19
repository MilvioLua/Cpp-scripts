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
    cout << gerMAx(40, 5, 8);


    return 0;
}

