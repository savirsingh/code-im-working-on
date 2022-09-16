#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main() {
    int one_count=0, zero_count=0;
    for (int i=0; i<16; i++) {
        int a;
        cin >> a;
        if (a==1) {
            one_count++;
        }
        else {
            zero_count++;
        }
    }
    if (one_count>=zero_count) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
}
