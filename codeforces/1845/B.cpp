#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include <utility>

//#include <list>
//#include <stack>
//#include <limits>
//#include <algorithm>
//#include <sstream>
//#include <queue>
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


void solve(){

        vvi v(3,vi(2));
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cin>>v[i][j];
            }
        }
    ll ans =1;
    if((v[1][0]<v[0][0] && v[2][0]<v[0][0]) || (v[1][0]>v[0][0] && v[2][0]>v[0][0])){
        ans += min(abs(v[1][0]-v[0][0]),abs(v[2][0]-v[0][0]));
    }
    if((v[1][1]<v[0][1] && v[2][1]<v[0][1]) || (v[1][1]>v[0][1] && v[2][1]>v[0][1])){
        ans += min(abs(v[1][1]-v[0][1]),abs(v[2][1]-v[0][1]));
    }
    cout<<ans<<endl;
    return;
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
    while(t--){
        solve();
    }
    //cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
    return 0;
}

