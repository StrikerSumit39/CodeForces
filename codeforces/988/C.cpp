#include<bits/stdc++.h> 
using namespace std; 
//===================================tempelet=======================================
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
#define int long long int

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
	// cin>>t;  
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


// bool comp(pair<string, int>& a,
//          pair<string, int>& b)
// {
// 	if(a.second < b.second)
//     return a.second < b.second;
// 	else if(a.second == b.second)
// 	{
// 		return a.first < b.first;
// 	}
// 	else
// 		return a.second < b.second;


// }
void solve() 
{

	int n;
	cin>>n;
	std::vector<int> a[n];

	std::vector<int> s;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;

		int c=0;
		for(int j=0;j<k;j++)
		{
			int x;
			cin>>x;
			c+=x;

			a[i].push_back(x);
		}
		s.push_back(c);
	}

	// pvact(s,n)
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j:a[i])
	// 	{
	// 		cerr<<j<<" ";
	// 	}
	// 	cerr<<endl;
	// }

	vector<set<pair<pair<int,int>,int>>>k(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
			k[i].insert({{(s[i]-a[i][j]),i+1},j+1});

		}
	}
	set<pair<pair<int,int>,int>>nm;
	for(int i=0;i<n;i++)
	{
		for(auto j:k[i])
		{
			nm.insert({{j.first.first,j.first.second},j.second});
		}
		// cerr<<endl;
	}

	int f=-1,g=-1,h=-1;
	for(auto x: nm)
	{
		if(x.first.first==f && x.first.second!=g)
		{
			cout<<"YES\n";
			cout<<g<<" "<<h<<endl<<x.first.second<<" "<<x.second;
			return;

		}
		else
		{
			f=x.first.first,g=x.first.second,h=x.second;
		}
	}
	cout<<"NO";






} 
