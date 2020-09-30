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

//========================================================================== 
int arr[500005];
//=================================================================================
int32_t  main() 
{
	fastio
	#ifndef ONLINE_JUDGE 
	freopen("input1.txt", "r", stdin); 
	freopen("error2.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 

	int t=1; 
	cin>>t; 

	for(int i=1;i<=t;i++) 
	{ 
		cerr<<"=============\n";
		// int ans=0;
		
		solve() ;
		// cout<<endl;
		//cout<<ans<<endl;
		// cerr<<"test case"<<i<<"========================================\n";
		// cout<<"Case #"<<i<<": ";
		cout<<endl;

		 
	}	 
	// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 


void solve() 
{ 
	int n,m;int ans=0;
	// map<int ,int>m;
	//int c,d; vi mark(n,0);
	cin>>n;//>>m;

	int x,sum=0,ind=-1;

	// for(int i=1;i<=n;i++)
	// {
	// 	cin>>arr[i]; m[arr[i]]++;
	// }
	// pmap(m)
	vi a(n);
	vi b(n);vi c(n);
	int pa,pb,pc,last=-1,fr=-1;

	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
		cin>>c[i];
	for(int i=0;i<n-1;i++)
	{

		pa=a[i],pb=b[i],pc=c[i];
		cerr<<last<< pa<< pb<<pc <<endl;


		if(last!=pa  )
			{
				x=pa;
				
			}
		else if(last !=pb )
			x=pb;
		else if(last != pc)
			x=pc;
	
		// cerr<<x<<" ";
		cout<<x<<" ";
		last=x;
		if(i==0) fr=x;
	}

	fr=a[0];
	pa=a[n-1],pb=b[n-1],pc=c[n-1];

	if(pa!=fr && pa!=last)
		cout<<pa<<" ";
	else if(pb!=fr && pb!=last)
		cout<<pb<<" ";
	else 
		cout<<pc;





	


	
		




	

	

} 
