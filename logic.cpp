#include <iostream>
#include <string>
using namespace std;

const int MAX_EQUATION_SIZE = 999;


struct equationData {
    // Only one of these should be used at once.

    // Floats would have inaccuracy which normally might be fine, but as this is a calculator I want to try a different method of addition.
    int value;
    int powerOfTen;

    //
    string operation;
};

int main(){

}

class equation {
    public:
        // if there is exisitng data, use that. If not make an empty equation
        equation(equationData things[]){
            
        }

        //function overloading :D
        equation(){

        }
        //return data in base ten notation.
        equationData solve(){

        }
    private:
        //Because the compiler needs to allocate memory on the stack, I can't let this equation be of variable length like in python.
        equationData equationArray[MAX_EQUATION_SIZE];
};