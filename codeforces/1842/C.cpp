#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>
//#include <sstream>
//#include <queue>
//#include <deque>
//#include <bitset>
#include <iterator>
//#include <list>
//#include <stack>
#include <map>
//#include <set>
//#include <functional>
//#include <numeric>
#include <utility>
//#include <limits>

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int,int> mpii;
typedef long int l;
typedef unsigned long int ul;
typedef long long int ll;
typedef unsigned long long int  ull;
#define all(x) (x).begin(), (x).end()

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("../../io/input.txt", "r", stdin);
    freopen("../../io/error.txt", "w", stderr);
    #endif

    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        const int inf = (int) 1e9;
        vi dp(n+1,-inf);
        dp[0]=0;
        for(int i=0;i<n;i++){
            int x = dp[v[i]];
            dp[v[i]] = max(dp[v[i]],dp[0]-i);
            dp[0] = max(dp[0],x+i+1);
        }
        cout<<dp[0]<<endl;
    }
    //cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
    return 0;
}

