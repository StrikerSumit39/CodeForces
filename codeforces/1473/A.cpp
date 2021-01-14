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

std::vector<int> a(N);
int32_t main() 
{
    
    // vok();


    
    int t=1;
    cin>>t;
    map<int,int>m;
    
    for(int tk=0;tk<t;tk++)
    {
        int f=0,l=0;
        int n,d;
        cin>>n>>d;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];


        }
       
         for(int i=0;i<n;i++)
        {
            if(a[i]>d)
            {
                l=1;
                break;
            }

            

        }
        if(l==0)
        {
             
           cout<<"YES";

        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(a[i]+a[j]<=d && i!=j)
                    {
                        f=1;break;
                    }
                }
            }
            if(f==1)
                cout<<"YES";
            else
                cout<<"NO";
        }






       
        cout<<endl;

    }   
     
     cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
        
}