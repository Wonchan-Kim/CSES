#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;
    long long total = 0;

    vector<int> input(size);
    for(int i = 0; i < size; i++){
        cin >> input[i];
    }
    int max = input[0];
    for(int i = 0; i < size; i++){
        if(input[i] < max) {
            total += max - input[i];
        }
        else
            max = input[i];
    }
    cout << total;
}