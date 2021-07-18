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



std::vector<int> a(N),b(N),c(N),d(N),e(N);

void solve() 
{
	int n;
	cin>>n;

	int s=0;
	e[0]=0;
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
			e[i+1]=e[i]+a[i];
		}


		d[0]=0;
	for(int i=0;i<n;i++)
		{
			cin>>b[i];
			s-=b[i];
			d[i+1]=b[i]+d[i];
		}

	sort(a.begin(),a.begin()+n);
	sort(b.begin(),b.begin()+n);
	
	for(int i=0;i<n;i++)
		{
			e[i+1]=e[i]+a[i];
		}
	for(int i=0;i<n;i++)
		{
			d[i+1]=b[i]+d[i];
		}



	c[0]=0;
	for(int i=1;i<n+1;i++)
	{
		c[i]=c[i-1]+(a[i-1]-b[i-1]);
	}


	// pvact(e,n+1)
	// pvact(d,n+1)
	// s-=c[n/4];
	// cerr<<s<<endl;
	if(e[n]-e[(n)/4]>=d[n]-d[n/4])
		cout<<0;
	else
	{
		for(int i=0;i<=n;i++)
		{

			int in,de;
			in=e[n]+i*100-e[(i+n)/4];
			de=d[n];
			// cerr<<(i+n)/4<<" "<<i<<" "<<d[((i+n)/4)-i]<<endl;
			if((i+n)/4 > i)
			de-=d[((i+n)/4)-i];
			
			int k= in-de;

			// int k=e[n]-d[n]+i*100-c[(i+n)/4];
			// cerr<<in<<" "<<de<<" "<<k<<endl;
			if(k>=0)
			{
				cout<<i;
				break;
			}
		}

	}


	
	




} 	

// string dec_num = "9876543210";
//     cout << "dec_num = " << 
//     stol(dec_num, nullptr, 10) << "\n";