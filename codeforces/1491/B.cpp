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

#define N 502020;
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

bool isp2(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int lis(vector<int> a,int n)
{
        multiset < int > s;
        multiset < int > :: iterator it;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);

            // pset(s)
            
            it = s.upper_bound(a[i]);
            
            if(it != s.end())
                s.erase(it);
            // pset(s)
        }
        return s.size();

}

// std::vector<bool> prime(1000001,true);

// void seive(int n)
// {
// 	prime[0]=false;
// 	    // prime[1]=false;
// 	for (int p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == true) 
//         {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
// }
// ========================================================================== 

// int dp[1000001];
// unordered_map<int,bool>m;
std::vector<int> v;
int32_t  main() 
{
	fastio

	// vok();


	
	
	

	

	// pmap(m)
	int t=1; 
	cin>>t; 
	for(int i=1;i<=t;i++) 
	{ 
		cerr<<"\n======"<<i<<"=======\n";
		solve() ;
		cout<<endl;			
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 





vector<int>a(40000);



string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void solve() 
{

	int u,v,n;
	cin>>n>>u>>v;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxdif=-1;
	for(int  i=0;i<n-1;i++)
	{
		maxdif=max(maxdif, abs(a[i+1]-a[i]));

	}
	if(maxdif>=2)
		cout<<0;
	else if(maxdif==1)
	{
		cout<<min(u,v);
	}
	else
		{
			cout<<min(u+v,v+v);
		}
	

	
		

	
} 
