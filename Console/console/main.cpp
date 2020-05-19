#include <iostream>

using namespace std;

string hide(){
    auto Secword = 1;
    string word;
    cout << "encrypt word";
    cin>> word;
    word[0] = 'x';
    word[2] = 'k';
    cout << word;
    return word;

};


int main()
{
    hide();

    return 0;
}
