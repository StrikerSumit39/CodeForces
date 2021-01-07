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
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//===========================================================================  
void solve();

#define N 202020;
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
		// cerr<<"\n======"<<i<<"=======\n";
		solve() ;
		cout<<endl;

				
 	}	 
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 


// vector<int>a(N);//,c,d;

void solve() 
{
	
	
	string s;

	cin>>s;
	cerr<<s.length()<<"---0";
	if(s[0]=='h')
		{
			cout<< "http://";
			int i=0;
			cout<<s[4];
			for(i=5;i<s.length()-1;i++)
			{
				if(s[i]=='r'&& s[i+1]=='u')
				{
					break;
				}
				else
					cout<<s[i];
			}
			cerr<<i<<" ";
			cout<<".ru";
			i+=2;
			cerr<<i<<endl;
			if(i<s.length())
			{
				cout<<'/';
			}
				for(i;i<s.length();i++)
				{
						cout<<s[i];
				}

			
		}
	else 
		{
			cout<< "ftp://";
			int i=0;
			cout<<s[3];
			for(i=4;i<s.length()-1;i++)
			{
				if(s[i]=='r'&& s[i+1]=='u')
				{
					break;
				}
				else
					cout<<s[i];
			}
			cout<<".ru";
			i+=2;
			if(i<s.length())
			{
				cout<<'/';
			}
				for(i;i<s.length();i++)
				{
						cout<<s[i];
				}

			
		}

	
	



} 
