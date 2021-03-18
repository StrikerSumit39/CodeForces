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

#define N 202020
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
		solve() ;
		cout<<endl;			
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 


vector<int>a(101);

	


void solve() 
{
	int n;
	cin>>n;
	map<int,int>m;
	for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a[x]++;
		}
		// pmap(m)
		pvact(a,101)

		for(int i=0;i<101;i++)
		{
			
				if(a[i]>0)
				{
					cout<<i<<" ";
					a[i]--;
				}
			
		}

		for(int i=0;i<101;i++)
		{
			
				while(a[i]>0)
				{
					cout<<i<<" ";
					a[i]--;
				}
			
		}
		





	
	// sort(a.begin(),a.begin()+n);

	// // int mex=0;
	// for(int i=0;i<n;i++)
	// {
		
	// }
	// // cout<< ((mex*(mex+1))/2)+mex*(n-mex+1);
		


} 
