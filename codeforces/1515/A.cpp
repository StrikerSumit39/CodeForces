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
std::vector<int> a(100);
// std::vector<int> b(100);
// std::vector<int> c(N);


void solve() 
{
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


 
    sort(a.begin(),a.begin()+n);
    int sk=0;
    for(int i=0;i<n;i++)
        sk+=a[i];
    if(sk==k)
    {
        cout<<"NO";return;
    }
    else cout<<"YES"<<endl;

    int l=0;
    int ind=-1;

    for(int i=0;i<n;i++)
    {
        l+=a[i];
        if(l==k)
        {
            l-=a[i];
            ind=i;
           

        }
        else
        {
            cout<<a[i]<<" ";

        }

    }
    if(ind!=-1)
        cout<<a[ind];

   





} 
