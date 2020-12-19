#include <iostream>
using namespace std;

/*
int main(){

    int result31 = 0;
    int result11 = 0;
    int result51 = 0;
    int result71 = 0;
    int result12 = 0;

    int index31 = 0;
    int index11 = 0;
    int index51 = 0;
    int index71 = 0;
    int index12 = 0;
    int helper12 = 0;

    string line;

    while(true){

        getline(cin, line);

        if(line[0] == '1')
            break;

        if (line[index31] == '#')
            result31++;
        if (line[index11] == '#')
            result11++;
        if (line[index51] == '#')
            result51++;
        if (line[index71] == '#')
            result71++;
        if (line[index12] == '#' && helper12 % 2 == 0) {
            result12++;
        }
        if(helper12 % 2 == 0)
            index12++;

        index31 += 3;
        index11 += 1;
        index51 += 5;
        index71 += 7;
        helper12 += 1;

        if (index31 >= line.size())
            index31 = index31 % line.size();
        if (index11 >= line.size())
            index11 = index11 % line.size();
        if (index51 >= line.size())
            index51 = index51 % line.size();
        if (index71 >= line.size())
            index71 = index71 % line.size();
        if (index12 >= line.size())
            index12 = index12 % line.size();


    }

    cout << result11 << " " << result31 << " " << result51 << " " << result71 << " " << result12 << endl;

    return 0;

}*/
