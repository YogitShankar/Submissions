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

bool binary_search(int x[], int n, int k) {
    int l =-1,r=n;
    while(r-l>1){
        int m = (l+r)/2;
        if(x[m]<k) l=m;
        else r=m;  
    }
    return r!=n && x[r]==k;
}

int bs(vi x, int k) {
    int n = x.size();
    int pos = -1;
    for (int i = n; i >= 1; i /= 2) {
        while (pos+i < n && x[pos+i] <= k) pos+=i;
    }
    return pos;
}


void solve(){
    int n; cin>>n;
    vi v;
    for(int i=0;i<n;i++){
        int x; cin>>x; v.push_back(x);
    }
    int check = v[0];
    for(int i=1;i<n;i++){
        check &= v[i];
    }
    if(check!=0){
        cout<<1<<endl;
        return;
    }
    check = v[0];
    ll count=0;
    for(int i=1;i<=n;i++){
        check &=v[i-1];
        if(check==0){
            count++;
            if(i!=n){
                check = v[i];
            }
        }
    }
    cout<<count<<endl;
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