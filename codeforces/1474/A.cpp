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
bool isrep(string s, string p)
{
    bool t=true;
     for(int i=0;i<s.length();i+=p.length())
       {
        if(s.substr(i,p.length())!=p)
            {
                t=false;break;
            }


       }

       return t;

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

        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0;
        for(int i=0;i<n;i++)
        {
            int c=s[i]-'0'+1;
            if(c==l)
            {
                cout<<0;
                l=s[i]-'0'+0;

            }
            else
                {
                    cout<<1;
                    l=s[i]-'0'+1;
                }


        } cout<<endl;
    }   
     
     cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
        
}