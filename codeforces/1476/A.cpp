#include<bits/stdc++.h>

using namespace std; 
#define int long long int

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
// #define mod 10000007
#define N 500005
#define N1 4000
#define mod 1000000009
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;
#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " ";  cerr<<endl;
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//=

void vok()
{
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("outpu2.txt","w",stdout);
        freopen("error.txt","w",stderr);
    #endif
}
bool isp2(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}


int32_t main() 
{
    
    // vok();
  
    int t=1;
    cin>>t;
     
   std::vector<int> a(N);
    for(int tk=0;tk<t;tk++)
    {
       int n,k;
       cin>>n>>k;
      
      
        if(n>k)
        {
            int d=n/k;
            int r=n%k;
            if(r!=0)
                k= k*(d+1);


        }
        
        if(k%n==0)
                cout<<k/n;
            else
                cout<<1+(k/n);
       

        cout<<endl;



    }
}   

