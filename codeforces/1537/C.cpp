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

	vok();

	
	
	// pmap(m)
	int t=1; 
	cin>>t;  
	for(int i=1;i<=t;i++) 
	{ 
		cerr<<"\n======"<<i<<"=======\n";
		// cout<<"Case #"<<i<<": ";
		solve() ;
		cout<<endl;			
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 



std::vector<int> a(N);
void solve() 
{

	int n;
	cin>>n;
	// map<int,int>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];

	}

	sort(a.begin(),a.begin()+n);

	int m=INT_MAX;
	int p=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]<m)
		{
			p=i;
			m=a[i+1]-a[i];
		}

	}
	// pvact(a,n)
	// cerr<<p<<" "<<m<<endl;

	// int x=a[p];
	// int y= a[p+1];

	// a[p]=a[p+1]=-1;

	// cout<<x<<" ";

	// if(a[p]==a[p+1])
	// {
	// 	for(int i=p+1;i<n;i++)
	// 	{
			
	// 		cout<<a[i]<<" ";
	// 	}
	// 	for(int i=0;i<=p;i++)
	// 		cout<<a[i]<<" ";
	// }
	// else
		{
			cout<<a[p]<<" ";

			for(int i=p+2;i<n;i++)
				cout<<a[i]<<" ";
			

			for(int i=0;i<p;i++)
				cout<<a[i]<<" ";

				cout<<a[p+1]<<" ";

		}
	

	// cout<<y;




	






	

		
} 
