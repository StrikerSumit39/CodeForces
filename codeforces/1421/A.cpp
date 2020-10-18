#include <bits/stdc++.h>
using namespace std;


//======================debug===============================================
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;

#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " ";
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//======

int main() {

  
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // #ifndef ONLINE_JUDGE 
    // freopen("input3.txt", "r", stdin); 
    // freopen("error2.txt", "w", stderr); 
    // freopen("outpu3.txt", "w", stdout); 
    // #endif

    int t=1;
    cin>>t;
    while(t)
    {
        t--;

        int a,b;
        cin>>a>>b;

        int c= a^b;
        cout<<c<<endl;
    }
    
}