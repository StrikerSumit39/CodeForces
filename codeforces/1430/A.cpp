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



// vector<int> b(N1);
vector<int> a(N1);
int can7(int n)
{
 if(n%7==0)
     return true;
 else 
    return false;  
}
int can5(int n)
{
 if(n%5==0)
     return true;
 else 
    return false;  
}
bool can3(int n)
{
    if(n%3==0)
     return true;
 else 
    return false;   
}

int32_t main() 
{
    
    // vok();


    
    int t=1;
    cin>>t;
    
    for(int tk=0;tk<t;tk++)
    { 
        // cerr<<"===============\n";
        int n=0,q=0,s=0;
        cin>>n;
        
        if(can3(n))
            cout<<n/3<<" 0 0";
        else if(can5(n))
            cout<<"0 "<< n/5<<" 0";
        else if(can7(n))
            cout<<"0 0 "<<n/7;
        else if(n<3||n==4)
            cout<<-1;
        else
        {
            if(can5(n-3))
                cout<< 1<<" "<<(n-3) / 5<<" 0";
            else if(can7(n-3))
                cout<< 1<<" 0 "<<(n-3) /7;
            else if(can3(n-5))
                cout<< (n-5) /3<<" 1 0";
            else if(can7(n-5))
                cout<<"0 1 "<< (n-5) /7;
            else if(can3(n-7))
                cout<<(n-7)/3<<" 0 1";
            else if(can5(n-7))
                cout<< 0<<" "<<(n-7)/5<<" 1";
            else
            {
                cout<<-1;
            }

        }
        

        

       
        cout<<endl;

    }
     

      

         
    
        
}