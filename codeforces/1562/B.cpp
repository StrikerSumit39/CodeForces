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

std::vector<int> v;
int32_t  main() 
{
	fastio

	vok();

	// for(int i=1;i<30000;i++)
	// {
	// 	if(i%3 && (i%10) != 3)
	// 	{
	// 		v.push_back(i);
	// 	}

	// }
	// pvact(v,1000)

	// pmap(m)
	int t=1; 
	cin>>t;  

	for(int i=1;i<=t;i++) 
	{ 
		// cerr<<"========="<<"=========\n";
		solve() ;
		cout<<endl;			
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 

  


// std::vector<int> a(N);//,b(N);


void solve() 
{
	int n;
	cin>>n;

	string s;
	cin>>s;

	for(int i=0;i<s.length();i++)
	{
		if((s[i]-'0')==4||(s[i]-'0')==6||(s[i]-'0')==8||(s[i]-'0')==9||(s[i]-'0')==1)
		{
			cout<<1<<endl;
			cout<<(s[i]-'0');
			return;
		}
		
	}
	for(int i=0;i<s.length();i++)
	{
		if(((s[i]-'0')==2 || (s[i]-'0')==5) and i>0)
			{
				cout<<2<<endl;
				cout<<s[i-1]<<s[i];
				return;
			}
	
	}
	for(int i=0;i<s.length();i++)
	{	
		if(s[i]=='3' || s[i]=='6'|| s[i]=='9')
		{
			for(int j=i+1;j<s.length();j++)
			{
				if(s[j]=='3')
				{
					cout<<2<<endl;
					cout<<s[i]<<'3';
					return;
				}
			}
		}
		if(s[i]=='2' || s[i]=='5'|| s[i]=='7')
		{
			for(int j=i+1;j<s.length();j++)
			{
				if(s[j]=='7')
				{
					cout<<2<<endl;
					cout<<s[i]<<'7';
					return;
				}
			}
		}
		
	}

	cout<<-1;





	
} 
