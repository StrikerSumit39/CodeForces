#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
#define mod 10000007
#define N 200005

int a[N],b[N];

int32_t main() 
{
  
    // #ifndef ONLINE_JUDGE 
    // freopen("input2.txt", "r", stdin); 
    // freopen("error2.txt", "w", stderr); 
    // freopen("outpu2.txt", "w", stdout); 
    // #endif
    int t=1;
    // cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==2) c2++;
            else
                c1++;
        }

        if(c1==c2)
            cout<<c1;
        else if( c1<c2)
        {
            cout<<c1;
        }
        else
        {
            cout<<c2+ ((c1-c2)/3);
        }







    }
        
}