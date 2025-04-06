#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long input;
    cin >> input;
    long long size = input;

    long long sum = input * (input + 1) / 2;
    if(sum % 2) {
        cout << "NO" << endl;
        return 0;
    }
    else {
        cout << "YES" << endl;
        sum /= 2;
        vector<long long> set1;
        vector<bool> check(size + 1, false);
        while(sum > input){
            check[input] = true;

            set1.push_back(input);
            sum -= input;
            input--;
        }
        set1.push_back(sum);
        check[sum] = true;
        cout << set1.size() << endl;
        for(long long i : set1) {
            cout << i << " ";
        }
        cout << endl;
        cout << size - set1.size() << endl;
        for(int i = 1; i <= size; i++){
            if(check[i] == false){
                cout << i << " ";
            }
        }

    }
}