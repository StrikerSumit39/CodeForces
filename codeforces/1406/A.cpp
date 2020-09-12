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
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;

#define pvact(v)  for (ll x : v) cerr << x << " ";
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//=================================================================================
void solve();
ll mod(ll x)
{
	if(x<0)
		return -1*x;
	else return x;
}

//=================================================================================
int main() 
{
	fastio
	// #ifndef ONLINE_JUDGE 
	// freopen("input1.txt", "r", stdin); 
	// freopen("error2.txt", "w", stderr); 
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
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 
void solve() 
{ 
	cerr<<"============\n";
	ll n,ans=0;
	cin>>n;
	
	int arr[n];
	for(auto &i:arr) cin>>i;
	sort(arr,arr+n);
	parr(arr)
	map<int,int>a,b;
	int i=0;
	while(i<n)
	{
		if(arr[i]==arr[i+1])
		{
			a[arr[i]]++;
			b[arr[i+1]]++;
			i+=2;

		}
		else
		{
			a[arr[i]]++;
			i++;
		}
	}
	pmap(a)
	
	pmap(b)

	int sa,sb;
	if(a.empty())
		sa=0;
	else
	{
		for(int i=0;i<101;i++)
		{
			if(a[i]==0)
			{
				sa=i;
				break;
			}
		}


	}
	if(b.empty())
		sb=0;
	else
	{
		for(int i=0;i<101;i++)
		{
			if(b[i]==0)
			{
				sb=i;
				break;
			}
		}


	}
	
	

	cout<<sa+sb;

} 
