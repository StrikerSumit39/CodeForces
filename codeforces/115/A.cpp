#include<bits/stdc++.h> 
using namespace std; 
//===================================tempelet=======================================
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
#define int long long int
// enum alp{S};
#define ll long long int
#define ull unsigned long long int
#define db double
// #define comp bool comp(ll x, ll y){return x>y;}
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll> 
#define vvi vector<vi>
#define pii pair<int,int>
#define vvc vector<vc>
#define umap unordered_ map
//======================debug===============================================
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;
#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " "; cerr<<endl;  
#define pmap(m)  for(auto it=m.begin();it!=	m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;


//===========================================================================  
void solve();

#define N 1000000
#define N1 400001
#define  mod 1000000007
//==========================================================================
void vok()
{
	#ifndef ONLINE_JUDGE 
	freopen("input2.txt", "r", stdin); 
	freopen("error2.txt", "w", stderr); 
	freopen("outpu2.txt", "w", stdout); 
	#endif 
}

bool comp(pair<int, int>& a, pair<int, int>& b)
{
	if(a.second < b.second)
    return a.second < b.second;
	else if(a.second == b.second)
	{
		return a.first < b.first;
	}
	else
		return a.second < b.second;

}


int32_t  main() 
{
	fastio

	vok();
	
	int t=1; 
	// cin>>t;  

		
	for(int i=1;i<=t;i++) 
	{ 

		// cerr<<"========="<<i<<"=========\n";
		// cout<<"Case #"<<i<<": ";
		solve() ;
		cout<<endl;			
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 
std::vector<int> g[2001];

int mh=0;

std::vector<int> vis(2001,0), ht(2001,0);
int dfs(int x)
{
	// cerr<<x<<"=========";
	int h=0;
	if(vis[x])
		return ht[x];
	else{	
	if(!g[x].size())
		{
			vis[x]=1;
			ht[x]=0;
			// cerr<<"h"<<x<<"=>"<<h<<endl;
			return 0;
		}
	else
	{

		for(int k: g[x])
		{

			h=max(h,dfs(k)+1);  

			// if(x==1)
			// 	cerr<<h<<" ";
			ht[x]= max(h,ht[x]);
		}
	}

	// if(x==1)
	// cerr<<"h"<<x<<"=>"<<h<<endl;
	vis[x]=1;
	return h;
	}
} 


 void solve() 
{
	int n;
	cin>>n;
	std::vector<int> a(n+1);
	for(int i=0;i<=n;i++)
		vis[i]=0;

	
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;

		if(x==-1)
			x++;
		a[i]=x;
		g[x].push_back(i);
		// g[i].push_back(x);
		
	}
	// pvact(a,n+1)

	// for(int i=0;i<n+1;i++)
	// {
	// 	cerr<<i<<"->";
	// 	for(int x: g[i])
	// 	{
	// 		cerr<<" "<<x;
	// 	}
	// 	cerr<<endl;
	// }

	for(int i=1;i<=n;i++)
	{


		if( a[i]==0)
			{
				dfs(i);
				// cerr<<"mh "<<mh<<endl;				
			}
	}
	for(int i=1;i<=n;i++)
	{
		if( !a[i])
			{
				mh= max(ht[i],mh);				
			}
	}
	

	// pvact(ht,n+1)




	cout<<mh+1;
	

} 
