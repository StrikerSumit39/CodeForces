#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
// #define mod 10000007
#define N 500
#define MOD 1337

int x[N],y[N],a[N][N];


int32_t main() 
{
  
    // #ifndef ONLINE_JUDGE 
    // freopen("input2.txt", "r", stdin); 
    // freopen("error2.txt", "w", stderr); 
    // freopen("outpu2.txt", "w", stdout); 
    // #endif

    int t=1;
    cin>>t;
    

    for(int i=0;i<t;i++)
    {
      
       int n,k;
       cin>>n>>k;
       
        
        std::vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));

        }
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            int f=0;
            for(int j=0;j<n;j++)
            {
                
                a[i][j]=abs(v[i].first -v[j].first)+abs(v[i].second - v[j].second);
                if(a[i][j] > k)
                    f=1;
                

            }
            if(!f)
                {
                    ans=1;break;
                }
        }
        cout<<ans<<endl;

    }
        
}