/*
#include <iostream>
#include <string>
using namespace std;

int checkPassword(const string& password, char c, int min, int max);
int checkPasswordPart2(const string& password, char c, int firstPosition, int secondPosition);

int main(){

    int min, max;
    char c;
    string password;
    int resultPart1 = 0;
    int resultPart2 = 0;

    while(true){

        cin >> min;

        if(min == -1)
            break;

        cin.get();
        cin >> max;
        cin.get();
        c = cin.get();
        cin.get();
        cin.get();
        getline(cin, password);

        resultPart1 += checkPassword(password, c, min, max);
        resultPart2 += checkPasswordPart2(password, c, min, max);

    }

    cout << "Part1: " << resultPart1 << endl;
    cout << "Part2: " << resultPart2;

    return 0;

}

int checkPassword(const string& password, char c, int min, int max){

    int countChar = 0;
    bool test = true;

    for(char i : password){

        if (i == c)
            countChar++;

        if (countChar > max){
            test = false;
            break;
        }

    }

    if (!test)
        return 0;
    else if (test && countChar >= min && countChar <= max)
        return 1;
    else
        return 0;

}

int checkPasswordPart2(const string& password, char c, int firstPosition, int secondPosition){

    if (password[firstPosition - 1] == c && password[secondPosition - 1] != c)
        return 1;
    else if (password[firstPosition - 1] != c && password[secondPosition - 1] == c)
        return 1;
    else
        return 0;

}
*/
