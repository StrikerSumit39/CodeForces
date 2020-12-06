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
      
        int n,s=0;
        cin>>n;
        int ma=-1;

       
       for(int i=0;i<n;i++)
       {
        int p;
        cin>>p;s+=p;

        ma=max(ma,p);

       }
      

        int x=ceil(s*1.0 / (n-1)); cerr<<x<<" ";

        int more=x*(n-1); cerr<<more<<endl;
       if(x<ma)
       {
        more= ma*(n-1);

       }
         
        cout<<more-s<<endl;


           


    }
        
    
   
        


    

        
}