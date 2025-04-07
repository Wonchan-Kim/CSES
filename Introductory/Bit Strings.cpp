#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long mypow(int base, int n){
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) result = (result * base) % MOD;
        base = (1LL * base * base) % MOD;
        n /= 2;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << mypow(2, n) << endl;
}
