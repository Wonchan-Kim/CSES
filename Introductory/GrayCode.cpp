#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 1 << n;

    for (int i = 0; i < total; ++i) {
        int gray = i ^ (i >> 1);
        bitset<16> bits(gray);
        cout << bits.to_string().substr(16 - n) << "\n";
    }

    return 0;
}
