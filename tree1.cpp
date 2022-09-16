#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

int32_t main() {
    vector<int> matrix;
    for (int s=0; s<4; s++) {
        vector<int> d (4);
        for (int t=0; t<4; t++) {
            cin >> d[t];
        }
        matrix.pb(d);
    }
}
