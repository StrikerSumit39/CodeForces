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

#define N 500002
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


int32_t  main() 
{
	fastio

	vok();

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




void solve() 
{

	int h,w;
	cin>>h>>w;

	int a[h][w];

	memset(a,0,sizeof(a));


	for(int i=0;i<w;i+=2)
	{
		a[0][i]=1;
	}
	int i=0;
	if(w-2>-1)
	if(a[0][w-1]||a[0][w-2])
		 i=2;
		else
			i=1;

	for( i;i<h;i+=2)
		a[i][w-1]=1;

	if(h-2>-1 && w-3>-1)
	if(a[h-1][w-1]|| a[h-2][w-1]  )
		i=w-3;
	else
		i=w-2;

	// cerr<<i<<endl;
	for(i;i>-1;i-=2)
		a[h-1][i]=1;

	if(a[h-1][0]==1 || a[h-1][1] )
		i=h-3;
	else
		i=h-2;
	for(i;i>-1;i-=2)
		a[i][0]=1;


	if(a[1][0]==1)
		a[1][0]=0;


	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
			cout<<a[i][j];
		cout<<endl;
	}
	


	
	




} 	

// string dec_num = "9876543210";
//     cout << "dec_num = " << 
//     stol(dec_num, nullptr, 10) << "\n";