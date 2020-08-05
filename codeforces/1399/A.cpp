#include<bits/stdc++.h>
using namespace std;
//===================================tempelet=======================================
// set is array that maintain assending order
//unordered map is faster then ordered map
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define nl cout<<"/n";
#define ll long long int
#define ull unsigned long long int
#define comp bool comp(ll x, ll y){return x>y;}
void solve();
//==================================================================================
ll mod(ll x)
{

    if (x<0)
        return -1*x;
    else
        return x;
}
int main()
{

	fast


	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
void solve()
{
       ll n,flag=1;
       cin>>n;
       ll arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];

       }
       sort(arr,arr+n);
       for(int i=0;i<n-1;i++)
       {
           if(arr[i+1]-arr[i]>1)
           {
               flag=0;
               break;
           }
       }
       if(flag==1)
        cout<<"YES";
       else
        cout<<"NO";


}
