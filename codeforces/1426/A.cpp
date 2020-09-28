#include<bits/stdc++.h> 
using namespace std; 
//===================================tempelet=======================================
// set is array that maintain assending order
//unordered map is faster then ordered map
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define endl "\n"
#define int long long int
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
//variable declared globally are having default value


//======================debug======================================================
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;

#define pvact(v)  for (int x : v) cerr << x << " ";
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//=================================================================================
void solve();
int mod(int x)
{
	if(x<0)
		return -1*x;
	else return x;
}

//============================================================
#define mode 1000000007
//=================graph=====================================
//============= adjecency list input==========

// inline void adjecencylist_input()
// {
// 	int n,m;
// 	vector<int > g[n+1];
// 	while(m--)
// 	{
// 		int a,b;
// 		cin>>a>>b;
// 		g[a].push_back(b);
// 		g[b].push_back(a);
// 	}

// }
//======================dfs===================================
// void dfs(int v)
// {
// 	vis[v]=1;//vis is array of visited node
// 	cout<<v<<"->";
// 	for(int child: ar[v]) //arr[v] array of vector of each vertices
// 	{
// 		if(vis[child]==0)
// 			dfs(child);
// 	}
// }
//=======================counding no of connected component=====

// inline void connected_compo()
// {
// 	for(int i=1;i<=n;i++)
// 	{
// 		if(vis[i]==0)
// 			dfs(i) , cc_count++;
// 	}
// 	cout<< cc_count<<endl;
// }

int arr[50005];
//=================================================================================
int32_t  main() 
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
		// cerr<<"=============\n";
		int ans=0;
		
		solve() ;
		// cout<<endl;
		//cout<<ans<<endl;
		// cerr<<"test case"<<i<<"========================================\n";
		// cout<<"Case #"<<i<<": ";
		cout<<endl;

		 
	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 


void solve() 
{ 
	int n,k;
	map<int ,int>m;//,c,d; vi mark(n,0);
	cin>>n>>k;
	int x,sum=0,ind=-1;

	// for(int i=1;i<=n;i++)
	// {
	// 	cin>>arr[i]; m[arr[i]]++;
	// }
	// pmap(m)



	if(n==1||n==2)
		cout<<1;
	else
	{
		int a,b;
		int l=( n-2)/k;
		
		b=  (l* k)+2;;
		if(b<n)
			cout<< l+2;
		else
			cout<< l+1;

	}
		




	

	

} 
