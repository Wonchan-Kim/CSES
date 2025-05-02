#include <iostream>

using namespace std;

int countFive(int x, int res){
    if(x/5 == 0)
        return res;
    else {
        x /= 5;
        res += x;
        return countFive(x,res);
    }
}
int main() {
    int n;
    cin >> n;
    cout << countFive(n, 0);
}