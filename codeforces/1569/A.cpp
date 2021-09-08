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

#define N 600002
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
bool comp(pair<int, int>& a,
         pair<int, int>& b)
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
	cin>>t;  

	for(int i=1;i<=t;i++) 
	{ 
		// cerr<<"========="<<"=========\n";
		// cout<<"Case #"<<i<<": ";
		solve() ;
		cout<<endl;			
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 


// std::vector<int> a(15);

 void solve() 
{
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	s='#'+s;
	n++;

	// int n=s.length()+1;
	std::vector<int> a(n,0),b(n,0);


	for(int i=1;i<n;i++)
	{
		if(s[i]=='a')
		{
			a[i]=a[i-1]+1;
		}
		else
			a[i]=a[i-1];

		if(s[i]=='b')
		{
			b[i]=b[i-1]+1;
		}
		else
			b[i]=b[i-1];

		

	}
	// pvact(a,n)
	// pvact(b,n)

	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]-a[i-1] == b[j]-b[i-1])
			{
				cout<<i<<" "<<j;
				return;
			}
		}
	}


	cout<<-1<<" "<<-1;







} 