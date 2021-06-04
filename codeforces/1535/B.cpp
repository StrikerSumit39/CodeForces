#include<bits/stdc++.h> 
using namespace std; 
//===================================tempelet=======================================
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
#define int long long int

#define ll long long int
#define ull unsigned long long int
#define db double
#define comp bool comp(ll x, ll y){return x>y;}
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
//======================debug===============================================
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;
#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " "; cerr<<endl;  
#define pmap(m)  for(auto it=m.begin();it!=	m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;


//===========================================================================  
void solve();

#define N 300002
#define N1 1001
#define  mod 998244353
//==========================================================================
void vok()
{
	#ifndef ONLINE_JUDGE 
	freopen("input2.txt", "r", stdin); 
	freopen("error2.txt", "w", stderr); 
	freopen("outpu2.txt", "w", stdout); 
	#endif 
}

 
int32_t  main() 
{
	fastio

	// vok();

	
	
	// pmap(m)
	int t=1; 
	cin>>t;  
	for(int i=1;i<=t;i++) 
	{ 
		// cerr<<"\n======"<<i<<"=======\n";
		// cout<<"Case #"<<i<<": ";
		solve() ;
		cout<<endl;			
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 





// #define  b s.begin() 
void solve() 
{
	int n;
	cin>>n;

	// map<int,int>m;
	std::vector<int> a;

	int e=0;
	for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x%2==0)
				e++;
			else
			{
				a.push_back(x);
			}
			
			
		}

	int ans=0;

	ans+= e*(n-e);
	// pvar(ans)
	if(e>1)
		ans+= (e*(e-1))/2;
	// pvar(ans)


	int k=a.size();
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(__gcd(a[i],2*a[j])>1  && (a[i]%2 && a[j]%2))
				ans++;
				// pvar(ans)

		}
	}
	


	cout<<ans;




} 
