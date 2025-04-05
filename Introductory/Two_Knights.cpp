#include <iostream>

using namespace std;

long long pow(int n, int x){
    x--;
    while(x--){
        n *= n;
    }
    return n;
}

long long combination(int n) {
    return pow(n,2) * (pow(n,2) - 1) / 2;
}

int main() {
    int n;
    cin >> n;
    int start = 1;
    while(start <= n){
        if(start == 1){
            cout << 0 << endl;
            start ++;
            continue;
        }
        cout << combination(start) - 4 * (start-1)*(start-2);
        start++;
        cout << endl;
    }
}

/*
 * 1 * 1 chess board no knight
 * 2 * 2 chess board
 * a b
 * c d   4C2
 * 3 * 3
 * a b c 9C2 - 8
 * d e f
 * g h i
 *
 * 4 * 4
 * a b c d 16 C 2 = 120 in horizontal, n - 1 n-2 blocks * 2 * 2
 * e f g h  - 24
 * i j k l
 * w x y z
 *
 * 5 * 5 25 C 2 = 300 - 48
 * abcde
 * 6 * 6 36 C 2 = 18 * 35 = 630  - 80
 *
 */