#include <iostream>

using namespace std;

auto secword = 1;

string hide(){
    string word;
    cout << "encrypt word" <<endl;
    cin>> word;
    word[0] = 'x';
    word[2] = 'k';
    cout << word;
    return word;
};

string givenWord = hide();

string uhide(){
    if (secword ==1){
            cout << givenWord << endl;
    }
    else {
            cout << "wrong password try again"<< endl;
        }

  }

int main()
{
    hide();
    uhide();
    return 0;
}
