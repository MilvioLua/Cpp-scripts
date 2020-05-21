#include <bits/stdc++.h>

using namespace std;


class Movie {
    private:
        string rating;
    public:
        string name;
        string major;

        Movie(string aName, string aMajor, string aRating){
            name = aName;
            major = aMajor;
            setRating(aRating);
        };
        void setRating( string aRating){
            if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "NR" ){
                  rating = aRating;
            } else {
                rating = "NR";
                }
        }

        string getrating() {
            return rating;
        }
};

class Chef {
    public:
        void makechicken(){
            cout << "the chefe makes chicken" << endl;
        }
        void makesalad(){
            cout << "the chefe makes salad" <<endl;
        }
        void makeespecialfood(){
            cout << "the chefe makes food" <<endl;
        }
    };

class Italianchef : public Chef {

};

int main()
{



    return 0;
}
