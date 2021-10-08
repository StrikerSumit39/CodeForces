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
// ----------------------print stack------->
typedef ptrdiff_t   Size;
typedef Size        Index;

template< class Elem >
Size nElements( stack< Elem > const& c )
{
    return c.size();
}

void display( stack<int> const& numbers )
{
    struct Hack
        : public stack<int>
    {
        static int item( Index const i, stack<int> const& numbers )
        {
            return (numbers.*&Hack::c)[i];
        }
    };

    wcerr << numbers.size() << " numbers." << endl;
    for( Index i = 0;  i < nElements( numbers );  ++i )
    {
        wcerr << "  " << Hack::item( i, numbers ) << endl;
    }
}

//===========================================================================  
void solve();

#define N 1000000
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

bool comp(pair<int, int>& a, pair<int, int>& b)
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
		// cerr<<"========="<<i<<"=========\n";
		// cout<<"Case #"<<i<<": ";
		solve() ;
		cout<<endl;			
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

 void solve() 
{
	int n,k;
	cin>>n>>k;

	int c=0;
	int ans=0;
	while(k)
	{
		if((k&1))
		ans= (ans%mod+binpow(n,c,mod))%mod;
		c++;
		k= k>>1;
	}

	cout<<ans;









} 



