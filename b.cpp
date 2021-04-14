#include<bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define double long double
#define int long long
#define minn(a,b,c) min(a, min(b,c))
#define maxx(a,b,c) max(a, max(b,c))
#define mxvt(a) max_element(a.begin(),a.end())
#define mnvt(a) min_element(a.begin(),a.end())
string Y = "YES";
string N = "NO";
int M = 1e9 + 7;
void solve(){
    int n,q; cin>>n>>q;
    map<int,int> A;
    map<int,int> B;
    // vector<pair<int,int>> B(q);
    for(int i = 0; i < n; ++i){
        int h; cin>>h;
        if(A[h] == 0){
            A[h] = i + 1;
        }
        B[h] = -1;
    }
    for(int i = 0; i < q; ++i){
        int C; cin>>C;
        if(B[C] != -1){
            B[C] = i - B[C];
        }else{
            cout<<A[C]<<" ";
            A[C] = 1;
            B[C] = i;
            continue;
        }
        cout<<A[C] + B[C]<<" ";
        B[C] = i;
    }

}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    int t = 1;
    // freopen("in","r",stdin);
    // freopen("out","w",stdout);
    // cin >> t;
    // int i = 1;
    while(t--) {
    	// cout<<"Case #"<<i<<": ";
    	solve();
    	cout<<"\n";
        // cerr << "Time : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    	// ++i;
    }
}