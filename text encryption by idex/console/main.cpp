#include <iostream>

using namespace std;

auto secword = 1;

string hide(){
    string word;
    cout << "encrypt your word";
    cin>> word;
    word[0] = 'x';
    word[2] = 'k';
    cout << word << endl;
    return word;
};

string givenWord = hide();

string uhide(){
    int givenuncryptword;
    cout << "uncrypt your word" << endl;
    cin >> givenuncryptword;
    if (secword == givenuncryptword){
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
