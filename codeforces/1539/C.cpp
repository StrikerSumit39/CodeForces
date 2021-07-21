#include<bits/stdc++.h> 
using namespace std; 
//===================================tempelet=======================================
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
#define int long long int
enum alp{S};
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



// std::vector<int> a(N),b(N),c(N),d(N),e(N);

std::vector<int>a[N];
std::vector<int> b(N);
void solve() 
{

	int n,x,k;
	cin>>n>>k>>x;

	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}

	sort(b.begin(),b.begin()+n);

	int c=0;
	// pvact(b,n)
	std::vector<int> d;
	a[0].push_back(b[0]);
	for(int i=1;i<n;i++)
	{
		if(b[i]-b[i-1]>x)
			{
				c++;
				d.push_back(ceil(((b[i]-b[i-1])*1.0)/x)-1);

				// pvact(d,d.size()) cerr<<endl;

			}

		a[c].push_back(b[i]);
	}
	c++;
	// cerr<<c<<endl;
	sort(d.begin(),d.end());
	int s=0;

	for(int i=0;i<d.size();i++)
	{
		s+=d[i];
		if(s>k)
			break;
		else
		{
			c--;
		}
	}


	cout<<c;


} 	

// string dec_num = "9876543210";
//     cout << "dec_num = " << 
//     stol(dec_num, nullptr, 10) << "\n";