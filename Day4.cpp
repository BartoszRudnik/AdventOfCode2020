#include <iostream>
#include <string>
using namespace std;

/*
int main(){

    string s;
    int result = 0;
    int result2 = 0;
    int tmpResult = 0;
    int tmpResult2 = 0;
    bool test = true;

    while(test){

        tmpResult = 0;
        tmpResult2 = 0;

        while(true){

            getline(cin, s);

            if (s.empty())
                break;

            if (s[0] == '0') {
                test = false;
                break;
            }

            for(int i = 0; i < s.size() - 2; i++){

                string subS = s.substr(i, 3);

                if(subS == "byr"){

                    string check = s.substr(i + 4, 4);
                    int number = stoi(check);

                    if(number >= 1920 && number <= 2002 && !isdigit(s[i + 8]) && !isalpha(s[i + 8])) {
                        tmpResult2++;
                        cout << "byr" << endl;
                    }

                }

                if(subS == "iyr"){

                    string check = s.substr(i + 4, 4);
                    int number = stoi(check);

                    if(number >= 2010 && number <= 2020 && !isdigit(s[i + 8]) && !isalpha(s[i + 8])) {
                        tmpResult2++;
                        cout << "iyr" << endl;
                    }

                }

                if(subS == "eyr"){

                    string check = s.substr(i + 4, 4);
                    int number = stoi(check);

                    if(number >= 2020 && number <= 2030 && !isdigit(s[i + 8]) && !isalpha(s[i + 8])) {
                        tmpResult2++;
                        cout << "eyr" << endl;
                    }

                }

                if(subS == "hgt"){

                    if(i + 8 < s.size() || i + 7 < s.size()) {

                        string check = s.substr(i + 7, 2);
                        string check3 = s.substr(i + 6, 2);

                        if (check == "cm") {

                            string check2 = s.substr(i + 4, 3);
                            int number = stoi(check2);

                            if (number >= 150 && number <= 193 && !isdigit(s[i + 9]) && !isalpha(s[i + 9])) {
                                tmpResult2++;
                                cout << "hgt_cm" << endl;
                            }

                        }
                        else if (check3 == "in"){

                            string check2 = s.substr(i + 4, 2);
                            int number = stoi(check2);

                            if (number >= 59 && number <= 76 && !isdigit(s[i + 8]) && !isalpha(s[i + 8])) {
                                tmpResult2++;
                                cout << "hgt_in" << endl;
                            }

                        }

                    }

                }

                if (subS == "hcl"){

                    int tmp = 0;

                    if(s[i + 4] == '#'){

                        string check = s.substr(i + 5, 6);

                        for(int j = 0; j < check.size(); j++){

                            if((check[j] >= '0' && check[j] <= '9') || (check[j] >= 'a' && check[j] <= 'f'))
                                tmp++;

                        }

                        if(tmp == 6 && !isdigit(s[i + 11]) && !isalpha(s[i + 11])) {
                            tmpResult2++;
                            cout << "hcl" << endl;
                        }

                    }

                }

                if(subS == "ecl"){

                    string check = s.substr(i + 4, 3);

                    if(check == "amb" || check == "blu" || check == "brn" || check == "gry" || check == "grn" || check == "hzl" || check == "oth") {

                        if(!isdigit(s[i + 7]) && !isalpha(s[i + 7])) {
                            tmpResult2++;
                            cout << "ecl" << endl;
                        }

                    }

                }

                if(subS == "pid" ){

                    int tmp = 0;
                    string check = s.substr(i + 4, 9);

                    for(int j = 0; j < check.size(); j++){

                        if (check[j] >= '0' && check[j] <= '9')
                            tmp++;

                    }

                    if(tmp == 9 && !isdigit(s[i + 13]) && !isalpha(s[i + 13])) {
                        tmpResult2++;
                        cout << "pid" << endl;
                    }

                }

                if(subS == "byr" || subS == "iyr" || subS == "eyr" || subS == "hgt" || subS == "hcl" || subS == "ecl" || subS == "pid")
                    tmpResult++;

            }

        }

        if (tmpResult == 7)
            result++;

        if(tmpResult2 == 7)
            result2++;

    }

    cout << result << endl << result2;

    return 0;

}*/
