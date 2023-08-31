#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include <utility>
#include <cmath>
#include <queue>
#include <iomanip>
#include <ios>

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

void print_vec(vector<int> v){
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
}

int bs(vector<ull> x, int k) {
    int n = x.size();
    int p = 0;
    for (int a = n; a >= 1; a /= 2) {
        while (p+a < n && x[p+a] <= k) p += a;
    }
    return p;
}


bool scomp(const pair<int, int>& a, 
                const pair<int, int>& b) 
{ 
    if (a.first != b.first) 
        return (a.first < b.first); 
    else 
       return (a.second > b.second); 
} 

int solve(){
    int a, b; cin>>a>>b;
    if(a==1){return a+b;}
    else {return a-1;}
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
    cout<<setprecision(15);
    while(t--){
        cout<<solve()<<endl;
    }
    //cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
    return 0;
}
