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

 struct Interval {
     int start;
     int end;
     Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
};

bool static cmp(Interval i1, Interval i2){
    return i1.start< i2.start;
}
vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end(),cmp);
    vector<Interval> ans;
    
    int curr_start = intervals[0].start;
    int curr_end = intervals[0].end;
    
    for(int i=1;i<intervals.size();i++){
        int new_start = intervals[i].start;
        int new_end = intervals[i].end;
        
        if(new_start <=curr_end){
            curr_end = max(new_end,curr_end);
        }
        else{
            Interval I;
            I.start = curr_start;
            I.end = curr_end;
            ans.push_back(I);
            
            curr_start = new_start;
            curr_end = new_end;
        }
    }
    Interval I; 
    I.start = curr_start;
    I.end = curr_end;
    ans.push_back(I);
    return ans;
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
        int n,x; cin>>n>>x;
        vi a(n),b(n),c(n); 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        
        int ans =0;
        for(int i=0;i<n;i++){
            if((x&a[i])==a[i]){ans = ans|a[i];}
            else{break;}
        }
        for(int i=0;i<n;i++){
            if((x&b[i])==b[i]){ans = ans|b[i];}
            else{break;}
        }
        for(int i=0;i<n;i++){
            if((x&c[i])==c[i]){ans = ans|c[i];}
            else{break;}
        }
        ans == x ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
    //cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
    return 0;
}

