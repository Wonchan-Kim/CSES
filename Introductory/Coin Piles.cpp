#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int loop;
    cin >> loop;
    while(loop--){
        int left, right;
        cin >> left >> right;
        if((left + right) % 3 == 0 && max(left,right) <= 2 * min(left,right)){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}