#include<bits/stdc++.h> 
using namespace std; 
// =====================note===========================
//for(auto &i:arr) cin>>i;//fast input in loop
//variable declared globally are having default value
//set is array that maintain assending order
//unordered map is faster then ordered map
//===================================tempelet=======================================
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
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
//==============================================================
int mod(int x)
{
    if(x<0)
        return -1*x;
    else return x;
}
bool isp2(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
//==========================================================================
#define mode 1000000007
//========================================================================== 
vi arr(101010);
//============================================================
int32_t main() 
{

  
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE 
    freopen("input3.txt", "r", stdin); 
    freopen("error3.txt", "w", stderr); 
    freopen("output3.txt", "w", stdout); 
    #endif

    int t=1;
    cin>>t;
    while(t--)
    {
//====================================================================
      int l,r;
      cin>>l>>r;
      if(r < 2*l)
        cout<<"YES\n";
        else
            cout<<"NO\n";
       
        

    }  
}
