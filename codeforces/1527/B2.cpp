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

// std::vector<int> a(	200000);
// int dp[200000][4];

// #define  b s.begin() 
void solve() 
{
	int n;
	string s;
	cin>>n>>s;

	int ans[2]={0};
	int d=0,so=0,f=0;

	int a=0;
	   


	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1])
			d++;
		else
		{
			if(s[i]=='0')
				so++;
		}
	}


	if(n==1)
	{
		if(s[0]=='1')
			cout<<"DRAW";
		else
			cout<<"BOB";

		return;
	}


	if(d>0)
	a^=1;

	if(n%2 && d>0)
	{
		if(so>0)
		{
			if( s[n/2]=='0')
			{
				ans[a]+=d;
				a^=1;


				ans[a]++;
				a^=1;
			}
			else
			{	
				ans[a]+=d-1;
				a^=1;

				ans[a]++;
				a^=1;		
			}
		}
		else
		{	
			if( s[n/2]=='0')
			{
				ans[a]+=d;
				a^=1;


				ans[a]++;
				a^=1;
			}
			else
			{	
				cout<<"ALICE";
				return;		
			}

		}
		
		
	}
	else if(n%2==0     && d>0)
	{
		if(so>0)
			{
				ans[a]+=d-1;
				a^=1;

				ans[a]++;
				a^=1;
			}
			else{
				cout<<"ALICE";
				return;
			}
	}

	if(n%2 && s[n/2]=='0' && d==0)
	{
		ans[a]++;
		a^=1;
	}
	if(so)
	{
		ans[a]+=so+1;
		a^=1;
		ans[a]+=so-1;
	}


	

	cerr<<ans[0]<<" "<<ans[1]<<endl;

	if(ans[0]==ans[1])
		cout<<"DRAW";
	else
	{
		if(ans[0]<ans[1])
			cout<<"ALICE";
		else
			cout<<"BOB";
	}




} 
