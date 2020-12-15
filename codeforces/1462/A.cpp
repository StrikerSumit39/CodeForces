#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
// #define mod 10000007
#define N 500
#define MOD 1337

int x[N],y[N],a[N][N];

void vok()
{
    fastio
    #ifndef ONLINE_JUDGE
        freopen("input2.txt","r",stdin);
        freopen("outpu2.txt","w",stdout);
        freopen("error.txt","w",stderr);
    #endif
}


int32_t main() 
{
    
    // vok();
    int t=1;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
      
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>x[i];
        
       for(int i=0,j=n-1;i<j;i++,j--)
        cout<<x[i]<<" "<<x[j]<<" ";
        if(n%2)
        {
            cout<< x[n/2];
        }


        cout<<endl;



        
    }
        
}