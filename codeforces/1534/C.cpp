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

#define N 400002
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




int lcm(int a , int b)
{
	return (a*b)/__gcd(a,b);
}



std::vector<int> parent(N);


void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
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
std::vector<int> a(N),b(N);
void solve() 
{

	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		make_set(i);
		cin>>a[i];
	}

	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=b[i])
		union_sets(a[i],b[i]);
	}

	set<int>ans;

	for(int i=1;i<=n;i++)
	{
		ans.insert(find_set(i));
	}

	cout<<binpow(2,ans.size(),mod);
	

	// pvact(parent,n)
	parent.clear();


} 