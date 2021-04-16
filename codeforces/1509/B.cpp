// J6Y4FQS 1a,
#include<bits/stdc++.h>

using namespace std; 
#define int long long int

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
// #define endl "\n"
#define mod 10000007
#define N 200002
#define N1 4000
// #define mod 1000000009
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
        // cerr<<"\n======"<<i<<"=======\n";
        // cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;         
    }    
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
} 


// vector<pair<int,int>>a(N);

// string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
std::vector<int> a(N);

void solve() 
{
    int n;
    cin>>n;

  string s;
  cin>>s;
  int ct=0,cm=0;

  for(int i=0;i<n;i++)
  {
    if(s[i]=='T')
        ct++;
    else cm++;

  }

  std::vector<int>lm(n,-1),lt(n,-1),pft(n,0),sft(n,0),pfm(n,0),sfm(n,0);

  for(int i=1;i<n;i++)
  {
    if(s[i-1]=='T')
        lt[i]=i-1;
    else
        lt[i]=lt[i-1];

    if(s[i-1]=='M')
        lm[i]=i-1;
    else
        lm[i]=lm[i-1];

    if(s[i-1]=='T')
        pft[i]=pft[i-1]+1;
    else
        pft[i]=pft[i-1];

    if(s[i-1]=='M')
        pfm[i]=pfm[i-1]+1;
    else
        pfm[i]=pfm[i-1];
  }
  for(int i=n-2;i>-1;i--)
  {
    if(s[i+1]=='T')
        sft[i]=sft[i+1]+1;
    else
        sft[i]=sft[i+1];

    if(s[i+1]=='M')
        sfm[i]=sfm[i+1]+1;
    else
        sfm[i]=sfm[i+1];
  }

       // pvact(lt,n)
       // pvact(lm,n)
       // pvact(sft,n)
       // pvact(sfm,n)
       // pvact(pft,n)
       // pvact(pfm,n) 


  if(cm*2!=ct || s[0]=='M'||s[n-1]=='M')
    {
        cout<<"NO";
    }
  else
  {
    for(int i=1;i<n-1;i++)
    {
        if(s[i]=='M')
        {
           if (pft[i]>=pfm[i]+1 && sft[i]>=sfm[i]+1)
           {

           }
           else
           {
            cerr<<-1<<endl;
            cout<<"NO";return;
           }
        }
    }
    cout<<"YES";
  }




     


    

} 
