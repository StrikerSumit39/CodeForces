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

// std::vector<string> a(101);
bool comp(pair<string, int>& a,
         pair<string, int>& b)
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
void solve() 
{

	vector<pair<string,int>>a;

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;

			a.push_back({s,0});
		}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i].first.find(a[j].first)!=-1 && i!=j)
				(a[i].second)++;
		}
	}
	sort(a.begin(),a.end(),comp);

	// for(auto it: a)
	// {
	// 	cerr<< it.first<<" "<<it.second<<endl;
	// }
	
	int ct=0;
	for( int i=0;i<n;i++)
	{
		if(a[i].second <ct)
		{
			cout<<"NO";return;
		}
		ct++;
	}
	cout<<"YES\n";
	for(auto it: a)
	{
		cout<< it.first<<endl;
	}
		


  









} 

//================q1
// int n,x,t;
// 	cin>>n>>x>>t;

// 	if(t<x || n==1)
// 		cout<<0;
// 	else
// 	{
// 		if(n>1)
// 		{

// 			int k=t/x;
// 			if(x*k!=t)
// 				k--;

// 			cerr<<k<<endl;
// 			int v= (k*(k+1))/2;
// 			cout<<(n-(k+1))*k;
// 		}
// 	}
	


//======qd=
// int n;
// 	cin>>n;

// 	int t=0;
// 	std::vector<int> v,k;
// 	for(int i=0;i<n;i++)
// 	{
// 		int x,y;
// 		cin>>x>>y;

// 		k.push_back(x);
// 		v.push_back(y);

// 		t+=x;
// 	}

// 	// sort(v.begin(),v.end());

// 	int c=0;
// 	for(int i=0;i<v.size();i++)
// 	{
// 		if(v[i]+1<=t)
// 			c+= k[i]*(t/(v[i]+1));
// 	}

// 	cout<< c+2*(t-c);


