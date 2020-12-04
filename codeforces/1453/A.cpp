#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
#define mod 10000007
#define N 500000
#define MOD 1337

int w[N],h[N],arr[N];


int32_t main() 
{
  
    #ifndef ONLINE_JUDGE 
    freopen("input2.txt", "r", stdin); 
    freopen("error2.txt", "w", stderr); 
    freopen("outpu2.txt", "w", stdout); 
    #endif

    int t=1;
    cin>>t;
    

    for(int i=0;i<t;i++)
    {
        int ans=0;


       int n,m;
       cin>>n>>m;
       map<int,int>mp;
       for(int i=0;i<n;i++)
       {
        int x;
        cin>>x;
        mp[x]++;

       }

       for(int i=0;i<m;i++)
       {
        int x;
        cin>>x;
        if(mp[x]!=0)
            ans++;
       }
       cout<<ans<<endl;

       


    }
    
   
        


    

        
}