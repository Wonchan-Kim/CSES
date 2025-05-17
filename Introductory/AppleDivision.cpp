#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend()); // 큰 무게부터

    long long sum1 = 0, sum2 = 0;
    for (long long x : arr) {
        if (sum1 <= sum2) sum1 += x;
        else sum2 += x;
    }

    cout << abs(sum1 - sum2) << endl;
}
