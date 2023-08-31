 #include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include <utility>
#include <queue>

//#include <list>
//#include <stack>
//#include <limits>
//#include <algorithm>
//#include <sstream>
//#include <deque>
//#include <bitset>
//#include <set>
//#include <functional>
//#include <numeric>

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

void print_vec(vi v){
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
}

void solve(){
    int n; cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y; 
        if(x>y) ans++;
    }
    cout<<ans<<endl;
}

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
    // int t=1;
    while(t--){
        solve();
    }
    //cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
    return 0;
}

