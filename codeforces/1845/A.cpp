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
    int n,k,x;
    cin>>n>>k>>x;
    vi v;
    if(x!=1){
        cout<<"Yes"<<endl;
        for(int i=1;i<=n;i++){
            v.push_back(1);
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(n==1 || k==1){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2==0){
        cout<<"Yes"<<endl;
        for(int i=2;i<=n;i+=2){
            v.push_back(2);
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(k>2)
    {
        cout<<"YES"<<endl;
        cout<<(n - 3)/2+1<<endl;
        for(int i=1; i<=(n - 3)/2;i++)
            cout << 2 << " ";
        cout << 3<<endl;
        return;
    }
    cout<<"NO"<<endl;
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

