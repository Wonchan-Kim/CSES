#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--){
        int size;
        cin >> size;
        int first;
        cin >> first;
        for(int i = 1; i < size; i++){
            int second;
            cin >> second;
            first ^= second;
        }
        if(first != 0)
            cout << "first\n";
        else
            cout << "second\n";
    }
}