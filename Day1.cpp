#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;

int binarySearch(vector <int> input, int left, int right, int sum);
unsigned long findProduct_2numbers(vector <int> input);
unsigned long findProduct_3numbers(vector <int> input);

int main() {

    vector<int> input;
    int tmpInput;

    while(cin >> tmpInput) {

        if(tmpInput == - 1)
            break;

        input.push_back(tmpInput);

    }

    cout << findProduct_2numbers(input) << endl;
    cout << findProduct_3numbers(input);

    return 0;
}

int binarySearch(vector <int> input, int left, int right, int sum){

    if(right >= left){

        int middleIndex = left + (right - left) / 2;

        if(input[middleIndex] == sum)
            return middleIndex;

        if(input[middleIndex] > sum)
            return binarySearch(input, left, middleIndex - 1, sum);

        if(input[middleIndex] < sum)
            return binarySearch(input, middleIndex + 1, right, sum);

    }

    return -1;

}

unsigned long findProduct_2numbers(vector <int> input){

    long result = 0;

    sort(input.begin(), input.end());


    for(int i = 0; i < input.size(); i++){

        int index = binarySearch(input, 0, input.size(), 2020 - input[i]);

        if(index != -1){

            result = input[i] * input[index];

            break;

        }

    }

    return result;

}

unsigned long findProduct_3numbers(vector <int> input){

    unsigned long result = 0;

    sort(input.begin(), input.end());

    for(int i = 0; i < input.size() - 2; i++){

        int left = i;
        int right = input.size() - 1;
        bool check = false;

        while(left != right){

            if(input[i] + input[left] + input[right] == 2020){

                check = true;
                break;

            }
            else if(input[i] + input[left] + input[right] > 2020)
                right --;
            else if(input[i] + input[left] + input[right] < 2020)
                left ++;

        }

        if(check) {

            result = input[i] * input[left] * input[right];
            break;

        }

    }

    return result;

}