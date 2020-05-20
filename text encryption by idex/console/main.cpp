#include <iostream>

using namespace std;

auto secword = 1;

// encrypt fucntion
string hide(){
    string word;
    cout << "encrypt your word";
    cin>> word;

    cout << &word << endl;
    return word;
};

string givenWord = hide();

// uncript function
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
