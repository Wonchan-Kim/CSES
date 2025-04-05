#include <iostream>
#include <set>

using namespace std;

int main(){

    int n;
    cin >> n;
    set<int> no_dup;
    while(n--){
        int input;
        cin >> input;
        no_dup.insert(input);
    }
    cout << no_dup.size() << endl;
}