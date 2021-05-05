// J6Y4FQS 1a,
#include<bits/stdc++.h>

using namespace std; 
#define int long long int

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
// #define mod 1000000000
#define N 100002
#define N1 4000
#define mod 1000000007
//============
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;
#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " ";  cerr<<endl;
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//=============
void solve();


void vok()
{
    #ifndef ONLINE_JUDGE 
    freopen("input1.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
    #endif 
}

int32_t  main() 
{
    fastio

    // vok();

    // pmap(m)
    int t=1; 
    cin>>t;  
    for(int i=1;i<=t;i++) 
    { 
        cerr<<"\n======"<<i<<"=======\n";
        // cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;         
    }    
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
} 


// vector<pair<int,int>>a(N);

// string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// std::vector<int> b(100);
// std::vector<int> c(N);


void solve() 
{
    std::vector<int> a(28,0);
    int n;
    cin>>n;
    string s;

    cin>>s;
    string l="";

    l.push_back(s[0]);
   
    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1])
            l.push_back(s[i]);

    }
    cerr<<l<<endl;

    for(int i=0;i<l.length();i++)
    {
        if(a[l[i]-'A']==0)
        {
           a[l[i]-'A']=1;
        }
        else
           {
            cerr<<i<<" "<<endl;
            cout<<"NO";
            return;
           }
    }
    cout<<"YES";

    
    


} 
