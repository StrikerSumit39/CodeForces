#include<bits/stdc++.h>

using namespace std; 
#define int long long int

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
// #define mod 10000007
#define N1 200000
#define N 4000
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
        freopen("input2.txt","r",stdin);
        freopen("outpu2.txt","w",stdout);
        freopen("error.txt","w",stderr);
    #endif
}



vector<int> b(10);
vector<int >a;
int32_t main() 
{
    
    // vok();

    
    int t=1;
    cin>>t;
    
    for(int tk=0;tk<t;tk++)
    { 

        a.clear();  
       
      int n;
      cin>>n;
      if(n>45)
        cout<<-1<<endl;
    else
    {
      int c=9;


        if(n<10)
        cout<<n;
        else
        {
            int c=9;
            while(n-c>0)
               {
                 a.push_back(c);

                 n-=c;
                 c--;
                 // pvact(a,a.size())
               }
               a.push_back(n);
               sort(a.begin(),a.end());
               for(int i=0;i<a.size();i++)
               cout<<a[i];

        }
        cout<<endl;

    }
     

      

         
    }
        
}