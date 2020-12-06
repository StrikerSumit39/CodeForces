#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
// #define mod 10000007
#define N 5000
#define MOD 1337

int a[N],h[N],arr[N][N];


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
      
       int n;
       cin>>n;
       char s[n];
       string st;
       cin>>st;
       for(int i=0;i<n;i++)
       s[i]=st[i];
        sort(s,s+n);
        for(int i=0;i<n;i++)
            cout<<s[i];
        cout<<endl;
   

    }
        
}