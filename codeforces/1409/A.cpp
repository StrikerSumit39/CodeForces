#include<bits/stdc++.h> 
using namespace std; 
//===================================tempelet=======================================
// set is array that maintain assending order
//unordered map is faster then ordered map
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define comp bool comp(ll x, ll y){return x>y;}
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
//for(auto &i:arr) cin>>i;//fast input in loop
#define mode 1000000007

//======================debug======================================================
#define parr (arr) for(auto &i:arr) cerr<<i<<" ";
#define pvar(a) cerr<<a<<endl;
#define pvact(v)  for (ll x : v) cerr << x << " ";
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it.first <<"->"<<it.second <<endl;
//=================================================================================
void solve();
int mod(int x)
{
	if(x>=0)
		return x;
	else return -1*x;
}
//=================================================================================
int main() 
{
	fastio
	// #ifndef ONLINE_JUDGE 
	// freopen("input1.txt", "r", stdin); 
	// freopen("error.txt", "w", stderr); 
	// freopen("output.txt", "w", stdout); 
	// #endif 

	int t=1; 
	cin>>t; 
	for(int i=1;i<=t;i++) 
	{ 
		//ll ans=0;
		//test case

		solve() ;
		cout<<endl;
		
		//cout<<ans<<endl;
		//cout<<"Case #"<<i<<": "<< ans; 
	}	 
	// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 
void solve() 
{ 
	int ans=0;
	int a,b;
	cin>>a>>b;
	ans= (mod(a-b))/10;
	if((mod(a-b))%10 !=0)
		ans++;
	cout<<ans;
	
	
	


	//cout<<ans;

} 
