#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 1;
    int max_length = 1;
    int length = 1;
    while(s[i]){
        bool flag = false;
        if(s[i] == s[i-1]){
            flag = true;
            length++;
        }
        else {
            flag = false;

            length = 1;
        }
        i++;
        if(max_length < length)
            max_length = length;
    }
    cout << max_length;
}