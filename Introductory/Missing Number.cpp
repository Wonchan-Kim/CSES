#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<bool> check(n+1,false);

    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
        check[arr[i]] = true;
    }
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            cout << i << endl;
            break;
        }
    }
}