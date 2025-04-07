#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> que;
    for(int i = 0; i < n; i++){
        int j;
        cin >> j;
        que.push_back(j);
    }
    sort(que.begin(), que.end());

    int left = 0;
    int right = que.size() - 1;
    while (left < right) {
        if(que[left] + que[right] <= x) {
            n--;
            left++;
            right--;
        }
        else
            right --;
    }
    cout << n << endl;
}