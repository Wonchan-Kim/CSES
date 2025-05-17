#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void result(int n, int a, int b) {
    if (a + b > n || a + b == 1 || (a == 0 && b != 0) || (a != 0 && b == 0)) {
        cout << "NO\n";
        return;
    }
    cout << "YES" << endl;
    vector<int> a_vec, b_vec;

    int draw = abs(n - b-a);

    for(int i = 0; i < draw; i++){
        a_vec.push_back(n - i);
        b_vec.push_back(n - i);
    }
    n -= draw;
    vector<bool> search(n+1,true);
    for(int i= 1; i <= n; i++){
        a_vec.push_back(n - (i-1));
    }

    for(int i = 0; i < a; i++){
        search[n - i] = false;
    }

    sort(a_vec.begin() +draw + a, a_vec.end());

    int idx = draw;
    for(int i = a; i > 0; i--){
        b_vec.push_back(a_vec[idx] - (n - a));
        search[a_vec[idx] - (n - a)] = false;
        idx++;
    }

    for(int i = b; i > 0; i--){
        b_vec.push_back(a_vec[idx] + (n-b));
        search[a_vec[idx] + (n-b)] = false;
        idx++;
    }
    //for draw
    for(int i = 1; i <= n; i++){
        if(search[i])
            b_vec.push_back(i);
    }
    for(auto i : a_vec)
        cout << i << ' ';
    cout << endl;
    for(auto i : b_vec)
        cout << i << ' ';
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        result(n,a,b);
    }
}