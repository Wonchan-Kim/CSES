//
// https://vjudge.net/contest/700984#problem/A
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int size;
    cin >> size;
    int stone;
    cin >> stone;
    vector<int> option(size);
    for(int i = 0; i < size; i++){
        cin >> option[i];
    }
    vector<bool> dp(stone+1, false);

    for(int i = 1; i <= stone; i++){
        for(auto j:option){
            if(i-j >= 0 && !dp[i-j] ){
                dp[i] = true;
            }
        }
    }
    cout << (dp[stone] ? "First" : "Second");
}