#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <iterator>
#include <map>
#include <utility>
#include <complex>
#include <iomanip>
//#include <set>
//#include <functional>
//#include <numeric>
//#include <limits>
//#include <algorithm>
//#include <sstream>
//#include <queue>
//#include <deque>
//#include <bitset>
//#include <list>
//#include <stack>

using namespace std;
using cd = complex<double>;
double PI = acos(-1);

void fft(vector<cd> &a,bool invert){
    int n = a.size();
    if(n==1){
        return;
    }
    vector<cd> a_odd(n/2),a_even(n/2);
    for(int i=0;2*i<n;i++){
        a_even[i] = a[2*i];
        a_odd[i]  = a[2*i+1];
    }
    fft(a_odd,invert);
    fft(a_even,invert);

    double angle;
    if(invert){angle = (-2)*PI/n;}
    else{angle = (2)*PI/n;}

    cd w(1),wn(cos(angle),sin(angle));
    for(int i=0;2*i<n;i++){
        a[i] = a_even[i] + w*a_odd[i];
        a[i+n/2] = a_even[i] - w*a_odd[i];

        if(invert){
            a[i]/=2;
            a[i+n/2]/=2;
        }
        w*=wn;
    }
}


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
#define whatis(x) cerr << #x << " is " << x << endl;
 

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
        double sum=0;
        for(int i=0;i<n;i++){
            int x; cin>>x; 
            sum+=x;
        }
        double avg; 
        avg = sum/n;
        cout<<setprecision(10)<<avg;
    }
    // cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
    return 0;
}