#include<bits/stdc++.h>

using namespace std; 
#define int long long int

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
// #define mod 10000007
#define N1 200005
#define N 4000
#define mod 1000000009
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;
#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " ";  cerr<<endl;
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//=
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;
#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " "; cerr<<endl;
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//


void vok()
{
     fastio
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("outpu2.txt","w",stdout);
        freopen("error.txt","w",stderr);
    #endif
}



// vector<int> b(N1);
vector<int> a(N1);

// int a[500][500];
int32_t main() 
{
    
    // vok();


    
    int t=1;
    cin>>t;
    map<int,int>m;
    for(int tk=0;tk<t;tk++)
    {
        m.clear();
        // cerr<<"========"<<tk+1<<"=======\n";
        
     int n,ans=0;
     cin>>n;
     for(int i=0;i<n;i++)
       {
        int x;
        cin>>x;
        if(m[x]==0)
        {
            m[x]++;ans++;
        }
        else
        {
            m[x+1]++;
        }

       } 
       // pmap(m)
       cout<<m.size();

    // sort(a.begin(),a.begin()+n);
   

    

        cout<<endl;
    }
     
     cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
        
}