#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.length();
    string ans(N, ' ');
    int freq[26] = {};
    for (int i = 0; i < N; i++) {
        freq[S[i] - 'A'] += 1;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            cnt += 1;
        }
    }
    if (cnt > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    int left = 0, right = N - 1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            ans[N / 2] = (char)(i + 'A');
            freq[i]--;
        }
        while (freq[i] > 0) {
            ans[left++] = (char)(i + 'A');
            ans[right--] = (char)(i + 'A');
            freq[i] -= 2;
        }
    }
    cout << ans << endl;
    return 0;
}
