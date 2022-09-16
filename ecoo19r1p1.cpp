#include <bits/stdc++.h>
#define int long long
#define del erase
#define pb push_back
using namespace std;

int32_t main()
{
    for (int z=0; z<10; z++) {
        int n, m, d;
        cin >> n >> m >> d;
        vector<int> event_days (m);
        vector<int> laundry_days;
        int total_shirts = n;
        for (int i=0; i<m; i++) {
            cin >> event_days[i];
        }
        for (int j=1; j<=d; j++) {
            if (n==0) {
                n=total_shirts;
                laundry_days.pb(j);
            }
            if (find(event_days.begin(), event_days.end(), j)!=event_days.end()) {
                total_shirts++;
                n++;
            }
            n--;
        }
        cout << laundry_days.size() << "\n";
    }
}
