#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
// #define mod 10000007
#define N1 500
#define MOD 1337

int x[N1];//,y[N],a[N][N];

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
    
    vok();
    int t=1;
    cin>>t;
    
    for(int tk=0;tk<t;tk++)
    {
      
      cerr<<" =================\n";
        int n;
        cin>>n;
        
        string s;
        cin>>s;

        string s2="2020";

        int f=0;
       if(s.substr(0,4)==s2)
        f=1;

           
        for(int i=0;i<5;i++)
        {
            cerr<<s.substr(0,i)<<" = "<<s2.substr(0,i)<<"= "<<s.substr(n-i,4-i)<< "= "<<s2.substr(4-i,4-i)<<endl;
            if(s.substr(0,i) == s2.substr(0,i) && s.substr(n-4+i,4-i)==s2.substr(4-4+i,4-i))
                {
                    cerr<<i;
                    f=1;
                    break;
                }

        }

        if(f)
            cout<<"YES";
        else cout<<"NO";
        cout<<endl;
      



        
    }
        
}