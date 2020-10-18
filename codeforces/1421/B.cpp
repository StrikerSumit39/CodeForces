#include <bits/stdc++.h>
using namespace std;


//======================debug===============================================
#define parr(arr) for(auto &i:arr) cerr<<i<<" "; cerr<<endl;
#define pvar(a) cerr<<a<<endl;
#define pset(time) for(auto it=time.begin(); it!=time.end();it++) cerr<< *it <<" "; cerr<<endl;

#define pvact(v,n)  for (int x=0;x<n;x++) cerr << v[x] << " ";
#define pmap(m)  for(auto it=m.begin();it!=m.end();it++) cerr<< it->first <<"->"<<it->second <<endl;
//======

char arr[201][201];
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
        cerr<<"=======\n";
        // cout<<"======\n";

        int a,b;
        cin>>a;//>>b;

       for(int i=1;i<=a;i++)
       {
        for(int j=1;j<=a;j++)
            cin>>arr[i][j];
       }
       // for(int i=1;i<=a;i++)
       // {
       //  for(int j=1;j<=a;j++)
       //      cerr<<arr[i][j]<<" ";
       //  cerr<<endl;
       // }

        if(arr[2][1]=='0'&& arr[1][2]=='0')
            {
                int x=0;
                if(arr[a-1][a]=='0' )
                    x++;
                if(arr[a][a-1]=='0')
                    x++;
                cout<<x<<endl;
                if(arr[a-1][a]=='0' )
                   cout<<a-1<<" "<<a<<endl;
                if(arr[a][a-1]=='0')
                   cout<<a<<" "<<a-1<<endl;

                   
            }
        else if(arr[2][1]=='1'&& arr[1][2]=='1')
        {
             int x=0;
                if(arr[a-1][a]=='1' )
                    x++;
                if(arr[a][a-1]=='1')
                    x++;
                cout<<x<<endl;
                if(arr[a-1][a]=='1' )
                   cout<<a-1<<" "<<a<<endl;
                if(arr[a][a-1]=='1')
                   cout<<a<<" "<<a-1<<endl;

        }
        else //if(arr[2][1]=='0'&& arr[1][2]=='1' || arr[2][1]=='1'&& arr[1][2]=='0')
        {
             int x=0,y=0;//x=1,y=0;
                if(arr[a-1][a]=='1' )
                    x++;
                else y++;
                if(arr[a][a-1]=='1')
                    x++;
                else
                    y++;

                cerr<<x<<" "<<y<<endl;
                cerr<<arr[1][2]<<" ===="<<arr[2][1]<<endl;

                if(x>y)
                {
                   cout<<1<<endl;
                    if(arr[1][2]=='1' )
                   cout<<1<<" "<<2<<endl;
                    if(arr[2][1]=='1')
                   cout<<2<<" "<<1<<endl;
                    
                }
                else if(x<y)
                {
                     cout<<1<<endl;
                    if(arr[1][2]=='0' )
                   cout<<1<<" "<<2<<endl;
                    if(arr[2][1]=='0')
                   cout<<2<<" "<<1<<endl;

                }
                else
                {
                    cout<<2<<endl;
                   if(arr[1][2]=='1' )
                   cout<<1<<" "<<2<<endl;
                    if(arr[2][1]=='1')
                   cout<<2<<" "<<1<<endl;
                   if(arr[a-1][a]=='0' )
                       cout<<a-1<<" "<<a<<endl;
                    if(arr[a][a-1]=='0')
                       cout<<a<<" "<<a-1<<endl;
                }




        }
                
    }
    
}