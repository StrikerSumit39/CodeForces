// J6Y4FQS 1a,
#include<bits/stdc++.h>

using namespace std; 
#define int long long int

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
// #define mod 10000007
#define N 200002
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

// bool isp2(int n)
// {
//    if(n==0)
//    return false;
 
//    return (ceil(log2(n)) == floor(log2(n)));
// }
// int lis(vector<int> a,int n)
// {
//         multiset < int > s;
//         multiset < int > :: iterator it;
//         for(int i=0;i<n;i++)
//         {
//             s.insert(a[i]);

//             // pset(s)
            
//             it = s.upper_bound(a[i]);
            
//             if(it != s.end())
//                 s.erase(it);
//             // pset(s)
//         }
//         return s.size();

// }
// double intlog(double base, double x) {
//     double p=(log(x));
//         double q=log(base);
//         cerr<<p<<" "<<q<<endl;
//     return (p*1.0)/(1.0*q);
// }


// int m[10000][10000];

// int a[600][600];

// bool prime[500001];
//  void seive(int n)
// {
//  prime[0]=false;
//      // prime[1]=false;
//  for (int p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == true) 
//         {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
// }


std::vector<int> v(100000);
int32_t main() 
{
    // vok();
// 
    // seive()

    int n;
    cin>>n;
    int t=1;
    cin>>t;
    int n1=0;
   
    for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i])
            n1++;

        }
    // string w="abcdefghijklmnopqrstuvwxyz";
    
     


    for(int tk=0;tk<t;tk++)
    { 
        int q,x;
        cin>>q>>x;

        if(q==1)
            {
                if(!v[x-1])
                    n1++;
                else
                    n1--;
                v[x-1]= 1-v[x-1];
                cerr<<n1<<endl;
            }

        else
        {
          if(x<=n1)
            cout<<1;
        else cout<<0;
        cout<<endl;
           
            
        }
        

       
       



      
      
     


       
      
        // cout<<endl;
       
    }

}   

