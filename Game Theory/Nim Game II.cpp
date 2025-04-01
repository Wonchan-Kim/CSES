#include <iostream>
#include <vector>
using namespace std;

int main() {
    int loop;
    cin >> loop;
    while(loop--){
        int size;
        cin >> size;
        vector<int> heap(size);
        int binary;
        for(int i = 0; i < size; i++){
            cin >> heap[i];
            heap[i] %= 4;
            if(i == 0)
                binary = heap[0];
            else
                binary ^= heap[i];
        }
        if (!binary){
            cout << "second\n";
        }
        else
            cout << "first\n";
    }
}