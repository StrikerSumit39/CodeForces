// J6Y4FQS 1a,
#include<bits/stdc++.h>

using namespace std; 
#define int long long int

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
// #define endl "\n"
#define mod 10000007
#define N 200002
#define N1 4000
// #define mod 1000000009
//============
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;
#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " ";  cerr<<endl;
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//=============
void solve();


void vok()
{
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("outpu2.txt","w",stdout);
        freopen("error.txt","w",stderr);
    #endif
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
        cerr<<"\n======"<<i<<"=======\n";
        solve() ;
        cout<<endl;         
    }    
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
} 





vector<pair<int,int>>a(N);
vector <int > t(N);



// string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void solve() 
{
    
    int n;
    int c=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    for(int i=0;i<n;i++)
        cin>>t[i];

   


   c=a[0].first+t[0];
   if(n==1)
    {
        cout<<c;
        return;
    }
   // cerr<<c<<endl;
   for(int i=1;i<n;i++)
   {
    int d;
    d=c+ceil((double)(a[i-1].second-a[i-1].first)/2);
    if(d<a[i-1].second)
        c=a[i].first+t[i];
    else
        c=a[i].first-a[i-1].second+t[i]+d;

    // cerr<<c<<" "<<d<<endl;
   }

   cout<<c;


} 
