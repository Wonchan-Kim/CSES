#include <iostream>
#include <vector>
using namespace std;

int main() {
    int loop;
    cin >> loop;
    while(loop--){
        long long row, col;
        cin >> row >> col;
        long long max_ = max(row,col);
        long long start = 1;
        start = max_ * max_ - max_ + 1;
        if(max_ % 2 == 1) {
            cout << start + col - row << endl;
        }
        else
            cout << start + (row - col) << endl;
    }
}