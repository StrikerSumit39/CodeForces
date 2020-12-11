#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
// #define mod 10000007
#define N 500000
#define MOD 1337

int x[N],y[N],a[N][30];


int32_t main() 
{
    
    fastio

    #ifndef ONLINE_JUDGE 
    freopen("input2.txt", "r", stdin); 
    freopen("error2.txt", "w", stderr); 
    freopen("outpu2.txt", "w", stdout); 
    #endif

    int t=1;
    cin>>t;
    
   
    string s="abc";
    for(int i=0;i<t;i++)
    {
      
      int n;
      cin>>n;
      int k;
      cin>>k;

      for(int i=0;i<k;i++)
        cout<<'c';

        n-=k;
        int tim=n/3;

        int mod= n%3;
        cerr<<tim<<" "<<mod<<endl;
         for(int i=0;i<tim;i++)
            cout<<s;
        for(int i=0;i<mod;i++)
            cout<<s[i];
       

        cout<<endl;
     


    }
        
}