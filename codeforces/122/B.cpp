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
#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " ";
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//===========================================================================  
void solve();


//==========================================================================

//========================================================================== 
int32_t  main() 
{
	fastio

	// #ifndef ONLINE_JUDGE 
	// freopen("input2.txt", "r", stdin); 
	// freopen("error2.txt", "w", stderr); 
	// freopen("outpu2.txt", "w", stdout); 
	// #endif 

	// Sieve(5000);
	int t=1; 
	// cin>>t; 
	
	


	for(int i=1;i<=t;i++) 
	{ 
		cerr<<"\n======"<<i<<"=======\n";
		// int ans=0;
			// cout<<"Case #"<<i<<": ";
			// cout<<endl;	
		solve() ;
		cout<<endl;
		//cout<<ans<<endl;
		// cerr<<"test case"<<i<<"===========================\n";
	
		
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 




void solve() 
{

	string s;
	cin>>s;

	int c4=0,c7=0;
	for(int i=0;i<s.length();i++)
		{
			if(s[i]=='4')
				c4++;
			else if(s[i]=='7')
				c7++;
		}
		if(c4==0&&c7==0)
		cout<<-1;
		else
		{
			if(c4>=c7)
				cout<<4;
			else
				cout<<7;
		}     
        

    

	





} 
