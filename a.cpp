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
    int a,b,c; cin>>a>>b>>c;
    if(a >= b){
    	// int temp = min(a,b);
    	// a = max(a,b);
    	// b = temp;
    	// cout<<a<<" "<<b;
    	string A = "1",B = "1";
    	for(int i = 0; i < a - 1; ++i){
    	    A += '0';
    	}
    	for(int i = 0; i < b - 1; ++i){
    	    B += '0';
    	}
    	for(int i = 0; i <= b - 1 - c; ++i){
    	    B[i + 1] = '1';
    	}
    	cout<<A<<" "<<B;
    }else{
    	string A = "1",B = "1";
    	for(int i = 0; i < b - 1; ++i){
    	    A += '0';
    	}
    	for(int i = 0; i < a - 1; ++i){
    	    B += '0';
    	}
    	for(int i = 0; i <= a - 1 - c; ++i){
    	    B[i + 1] = '1';
    	}
    	cout<<B<<" "<<A;
    }
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    int t = 1;
    // freopen("in","r",stdin);
    // freopen("out","w",stdout);
    cin >> t;
    // int i = 1;
    while(t--) {
    	// cout<<"Case #"<<i<<": ";
    	solve();
    	cout<<"\n";
        // cerr << "Time : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    	// ++i;
    }
}