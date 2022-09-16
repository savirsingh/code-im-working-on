#include <bits/stdc++.h>
// macros
#define int long long
#define del erase
#define pb push_back
using namespace std;

int32_t main()
{
    // go through 10 times
    for (int z=0; z<10; z++) {
        // map to hold all the event days
        map<int, int> events;
        // all variables (initial and dirty are not used)
        int n, m, d, initial, dirty=0;
        cin >> n >> m >> d;
        vector<int> laundry_days;
        int total_shirts=n;
        // get all the events input
        for (int i=0; i<m; i++) {
            int a;
            cin >> a;
            if (events.find(a)==events.end()) {
                events[a]=1;
            }
            else {
                events[a]++;
            }
        }
        // actually working through the d days
        for (int j=1; j<=d; j++) {
            if (n<1) {
                n=total_shirts;
                laundry_days.pb(j);
            }
            if (events.find(j)!=events.end()) {
                total_shirts+=events[j];
            }
            n--;
        }
        // outputting number of laundry days
        cout << laundry_days.size() << "\n";
    }
}
