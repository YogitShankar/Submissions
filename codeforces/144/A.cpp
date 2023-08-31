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

    // int t; cin>>t;
    int t=1; 
    while(t--){
        int n; cin>>n; 
        vi v;
        int max = -1; int min = 101;
        int max_pos, min_pos;
        for(int i=0;i<n;i++){
            int x; cin>>x; 
            v.push_back(x);
            if(x>max){max_pos = i+1;max =x;}
            if(x<=min){min_pos = i+1;min =x;}
        }
        if(max_pos<min_pos){cout<<n+max_pos-min_pos-1<<endl;}
        else{cout<<n+max_pos-min_pos-2<<endl;}
    }
    // cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
    return 0;
}