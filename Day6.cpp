/*
#include <iostream>
#include <vector>
using namespace std;

int main(){

    string line;
    vector <bool> tab (26, false);
    vector <int> tabPart2 (26, 0);
    bool test = true;
    int count = 0;
    int countPart2 = 0;
    int person;

    while(test){

        person = 0;

        while(true){

            getline(cin, line);

            if(line.empty()){
                break;
            }

            if(line[0] == '0') {
                test = false;
                break;
            }

            person++;

            for(char c : line){

                tab[c - 'a'] = true;
                tabPart2[c - 'a'] ++;

            }

        }

        for(auto && i : tab)
            if(i)
                count++;

        for(int i : tabPart2)
            if(i == person)
                countPart2++;

        for(auto && i : tab)
            i = false;

        for(int & i : tabPart2)
            i = 0;

    }

    cout << "Part1: " << count << endl;
    cout << "Part2: " << countPart2 << endl;

    return 0;

}
*/
