#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <ctype.h>
#include <array>
using namespace std;

// openP and closeP indicate parethesis
const string operations[] = {"add", "sub", "multiply", "divide", "openP", "closeP", "powerTo"};

struct equationData
{
    // Only one of these should be used at once.

    // Floats would have inaccuracy which normally might be fine, but as this is a calculator I want to try a different method of addition.
    int value;
    int powerOfTen;

    // will be filled with values from operations array.
    string operation;
};

class Equation
{
public:
    // public so that the renderer will be able to see.
    equationData equationArray[1];

    void stringInput(string input)
    {
        char inputStringArray[input.length() + 1];
        strcpy(inputStringArray, input.c_str());

        string  *numberCache = new string[0];

        for (char letter : inputStringArray)
        {
            if(isdigit(letter)){
                array<char, sizeof(numberCache) + 1> tempCache;
                tempCache[sizeof(numberCache)] = letter;
                delete[] numberCache;

                int powerOfTen = 0;
                double output;
                for(int i = sizeof(tempCache); i != 0; i--){
                                                                                                  
                }
            }else{
                //flush number cache
                //push number to data
            }
        }
    }

    // return data in base ten notation.
    equationData solve()
    {
    }

private:
    

    void addData(int insertIndex, equationData data)
    {
        equationData tempArray[sizeof(equationArray) + 1];

        int equationCounter = 0;
        for (int i = 0; i < sizeof(tempArray); i++)
        {
            if (i == insertIndex)
            {
                tempArray[i] = data;
            }
            else
            {
                tempArray[i] = equationArray[equationCounter];
                equationCounter++;
            }
        }
    }

    void delData(int delIndex)
    {
        equationData tempArray[sizeof(equationArray) - 1];

        int equationCounter = 0;
        for (int i = 0; i < sizeof(tempArray); i++)
        {
            if (i != delIndex)
            {
                tempArray[i] = equationArray[equationCounter];
                equationCounter++;
            }
        }
    }
};

int main()
{
    bool complete = false;
    string rawInput;
    Equation unsolvedData;

    cout << "Calculator App" << endl;

    do
    {
        cout << "What is your equation?: ";
        cin >> rawInput;

        unsolvedData.stringInput(rawInput);
    } while (!complete);

    return 0;
}
