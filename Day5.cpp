//po wprowadzeniu danych wejsciowych wprowadzic '0' w celu zakonczenia wczytywania danych

#include <iostream>
#include <vector>
using namespace std;

int main(){

    string line;
    int maxResult = 0;
    int actualResult;
    vector<bool> tab (889, false);

    while(true){

        getline(cin, line);

        if(line[0] == '0')
            break;

        int minIndexRow = 0;
        int maxIndexRow = 127;

        for(int i = 0; i < 7; i++){

            if(line[i] == 'F'){

                maxIndexRow = maxIndexRow - 1 - (maxIndexRow - minIndexRow) / 2;

            }

            if(line[i] == 'B'){

                minIndexRow = minIndexRow + 1 + (maxIndexRow - minIndexRow) / 2;

            }

        }

        int minIndexColumn = 0;
        int maxIndexColumn = 7;

        for(int i = 7; i < 10; i++){

            if(line[i] == 'L'){

                maxIndexColumn = maxIndexColumn - 1 - (maxIndexColumn - minIndexColumn) / 2;

            }

            if(line[i] == 'R'){

                minIndexColumn = minIndexColumn + 1 + (maxIndexColumn - minIndexColumn) / 2;

            }

        }

        actualResult = 8 * minIndexRow + minIndexColumn;

        tab[actualResult] = true;

        if(actualResult > maxResult)
            maxResult = actualResult;

    }

    cout << "Part1: " << maxResult << endl;

    for(int i = 1; i < tab.size(); i++){

        if(!tab[i] && tab[i - 1] && tab[i + 1])
            cout << "Part2: " << i << " ";

    }

    return 0;

}
