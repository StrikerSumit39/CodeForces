/*#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t>0)
    {
        t--;


        ll n,count=0;
        string s="abacaba";
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int j=0;



        for(int i=0;i<n;i++)
        {


            if(a[i]==s[j])
            {
               // cout<<i<<"v"<<j<<endl;

                j++;
                if(j==7)
                {
                    i-=3;
                    j=0;
                    count++;
                 //   cout<<count<<endl;
                }

            }
            else{
                j=0;
            }

        }
        //========sec check?
        if (count==1){
                cout<<"Yes"<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]!='?')
                cout<<a[i];
                else
                    cout<<'d';

            }
            cout<<endl;
        }
        else if(count>1)
        {
            cout<<"No"<<endl;
        }
        else{
        for(int i=0;i<n;i++)
        {


            if(a[i]==s[j]|| a[i]=='?')
            {
                if(count<1)
                {
               // cout<<i<<"v"<<j<<endl;
                if(a[i]=='?'&& count<=1)
                    a[i]=s[j];
                else if(a[i]=='?'&& count>1){
                    a[i]='d';
                }
                j++;
                if(j==7)
                {
                    i-=3;
                    j=0;
                    count++;
                  //  cout<<count<<endl;
                }
                }
                else{
                        if(a[i]=='?')
                         a[i]='d';
                }
            }
            else{
                j=0;
            }

        }
        if(count==1)
            {
                cout<<"Yes"<<endl;
            for(int i=0;i<n;i++)
                cout<<a[i];
            cout<<endl;
            }
        else
             cout<<"No"<<endl;

        }





    }
}
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t>0)
    {
        t--;
        ll a,b;
        int flag=0,ans=-1;
        map <ll,ll>m,n;
        cin>>a>>b;
        for(int i=0;i<a;i++)
        {
            int x;
            cin>>x;
            m[x]=1;
        }
        for(int i=0;i<b;i++)
        {
            int x;
            cin>>x;
            n[x]=1;

        }

            for(auto i:m)
            {
                if(n[i.first]==1)
                {
                    flag=1;
                    ans=i.first;
                    break;
                }
            }
        if(ans==-1)
            cout<<"NO"<<endl;
        else
        {

            cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }




    }
}






























