#include <iostream>
#include <cmath>
using namespace std;
int cnt = 0;
void move(int n, int start, int end){
    cout << start << " " << end << endl;
}
void hanoi(int n, int start, int via, int end){
    if(n == 1) {
        move(n, start, end);
        return;
    }
    hanoi(n-1, start, end, via);
    move(n, start, end);
    hanoi(n-1, via, start, end);
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1<< endl;
    hanoi(n,1,2,3);


}