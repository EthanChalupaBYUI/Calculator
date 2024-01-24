#include <iostream>
#include <string>
using namespace std;

//openP and closeP indicate parethesis
const string operations[] = {"add", "sub", "multiply", "divide","openP","closeP","powerTo"};


struct equationData {
    // Only one of these should be used at once.

    // Floats would have inaccuracy which normally might be fine, but as this is a calculator I want to try a different method of addition.
    int value;
    int powerOfTen;

    // will be filled with values from operations array.
    string operation;
};

int main(){
    bool complete = false;

    do{

    }while(!complete);
}

class equation {
    public:
        //public so that the renderer will be able to see.
        equationData equationArray[1];

        // if there is exisitng data, use that. If not make an empty equation
        equation(equationData things[]){
            
        }


        void addData(int insertIndex, equationData data){
            equationData tempArray[sizeof(equationArray) + 1];

            int equationCounter = 0;
            for(int i = 0; i < sizeof(tempArray); i++){
                if(i == insertIndex){
                    tempArray[i] = data;
                }
                else{
                    tempArray[i] = equationArray[equationCounter];
                    equationCounter++;
                }
            }
        }

        void delData(int delIndex){
            equationData tempArray[sizeof(equationArray) - 1];

            int equationCounter = 0;
            for(int i = 0; i < sizeof(tempArray); i++){
                if(i != delIndex){
                    tempArray[i] = equationArray[equationCounter];
                    equationCounter++;
                }
            }
        }

        //return data in base ten notation.
        equationData solve(){

        }
    private:
        //Because the compiler needs to allocate memory on the stack, I can't let this equation be of variable length like in python.
};