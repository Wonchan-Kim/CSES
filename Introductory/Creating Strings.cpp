#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

vector<bool> used;
string ans;
set<string> answer_set;

void permutation(int n, string s){
    if(ans.length() == n){
        answer_set.insert(ans);
        return;
    }
    for(int i = 0; i < n; i++){
        if(used[i]) continue;
        ans += s[i];
        used[i] = true;
        permutation(n, s);
        ans.pop_back();
        used[i] = false;
    }
}

int main(){
    string s;
    cin >> s;
    used.resize(s.length(), false);
    permutation(s.length(), s);
    cout << answer_set.size() << endl;
    for(auto s: answer_set){
        cout << s << endl;
    }
}