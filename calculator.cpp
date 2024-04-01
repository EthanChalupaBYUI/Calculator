#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

struct EquationData
{
    int value;
    int powerOfTen;
    string operation;
};

class EquationParser
{
public:
    vector<EquationData> equationArray;

   void parse(string input) {
    string numberCache;
    for (char letter : input) {
        if (isdigit(letter)) {
            numberCache += letter;
        } else {
            if (!numberCache.empty()) {
                int number = stoi(numberCache);
                equationArray.push_back({number, 0, ""});
                numberCache.clear();
            }
            if (letter != ' ') {
                equationArray.push_back({0, 0, string(1, letter)});
            }
        }
    }
    if (!numberCache.empty()) {
        int number = stoi(numberCache);
        equationArray.push_back({number, 0, ""});
    }
}
};

class Calculator
{
public:
    static int calculate(vector<EquationData> &equationArray)
    {
        int result = 0;
        char op = '+';

        for (const auto &data : equationArray)
        {
            if (data.operation.empty())
            {
                if (op == '+')
                {
                    result += data.value;
                }
                else if (op == '-')
                {
                    result -= data.value;
                }
                // c++ counts "*" as a char array, so I cant switch op to * without typecasting everything to a char array

            }
            else
            {
                op = data.operation[0];
            }
        }
        return result;
    }
};

int main()
{
    bool exitProgram = false;
    while (exitProgram == false)
    {
        string input;
        cout << "Calculator App" << endl;
        cout << "Enter an addition or subtracion equation: ";
        getline(cin, input);

        if (input == "q")
        {
            exitProgram = true;
        }
        else
        {
            EquationParser parser;
            parser.parse(input);

            int result = Calculator::calculate(parser.equationArray);
            cout << "Result: " << result << endl;
        }
    }

    return 0;
}