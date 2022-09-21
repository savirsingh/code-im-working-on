#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);

// initialize variables and MAX
const int MAX = 10001;
int n, m, option;
int graph[MAX][MAX];
bool visited[MAX];
int times[MAX];

// driver code
bit32 main()
{
    scani(n);
    vector<int> endings;
    for (int i=1; i<=n; i++) {
        scani(m);
        for (int j=1; j<=m; j++) {
            scani(option);
            graph[i][j]=option;
        }
        if (sizeof(graph[i])==0) {
            endings.pb(i);
        }
    }
}
