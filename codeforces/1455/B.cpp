#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
#define mod 10000007
#define N 200005

int a[N],b[N];

int32_t main() 
{
  
    #ifndef ONLINE_JUDGE 
    freopen("input2.txt", "r", stdin); 
    freopen("error2.txt", "w", stderr); 
    freopen("outpu2.txt", "w", stdout); 
    #endif




    int t=1;
    cin>>t;
    
    while(t--)
    {
      int x;
      cin>>x;
      int n=(( sqrt(8*x+1)-1)/2); cerr<<n<<" ";
        
        int s=(n*(n+1))/2; cerr<<s<<endl;

        if(s==x)
            cout<<n<<endl;
        else
        {
            if(s+n+1==x)
           cout<<n+1<<endl;
            else if(s+n==x)
                cout<<n+2<<endl;
            else
                cout<<n+1<<endl;

        }






    }
        
}