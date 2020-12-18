#include<bits/stdc++.h> 
using namespace std; 
#define int long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(0);
#define endl "\n"
// #define mod 10000007
#define N1 500000
#define N 4000
#define MOD 1337

//int x[N1];//int y[N],a[N][N];
void qa(); void qb(); void qc(); void qd(); void qe();
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
    
    // vok();
    int t=1;
    cin>>t;
    
    for(int tk=0;tk<t;tk++)
    {     
        cerr<<"==============\n";
        qa();
        // qb();
        // qc();
        // qd();

        cout<<endl;   
    }
        
}
void qa()
{

    int n,l,m;
    cin>>l>>m;
    cin>>n;

    int sum= l+m+n;
    if(sum % 9==0 &&   min(l,min(m,n)) >= sum/9 )
        cout<<"YES";
    else
        cout<<"NO";



}