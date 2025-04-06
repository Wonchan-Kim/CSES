#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m,n,k;
    cin >> m >> n >> k;
    int ans = 0;
    vector<int> applicants;
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        applicants.push_back(x);
    }
    sort(applicants.begin(), applicants.end());
    vector<int> apartments;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        apartments.push_back(x);
    }
    sort(apartments.begin(), apartments.end());

    // using pointer
    int apt_left = 0;
    int applicant_left = 0;

    while(applicant_left < applicants.size() && apt_left < apartments.size()) {

        int min = apartments[apt_left] - k;
        if(min > applicants[applicant_left]) {
            applicant_left++;
            continue;
        }
        int max = apartments[apt_left] + k;
        if (min <= applicants[applicant_left] && max >= applicants[applicant_left]) {
            ans++;
            apt_left++;
            applicant_left++;
            continue;
        }
        if(max < applicants[applicant_left])
            apt_left++;
    }
    cout << ans << endl;
}