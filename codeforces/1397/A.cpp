#include<bits/stdc++.h> 
using namespace std; 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL); 
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
int main() 
{
	fastio
	// #ifndef ONLINE_JUDGE 
	// freopen("input1.txt", "r", stdin); 
	// freopen("error.txt", "w", stderr); 
	// freopen("output.txt", "w", stdout); 
	// #endif 

	int t=1; 
	cin>>t; 
	for(int i=1;i<=t;i++) 
	{ 
		int n,f=0;
		cin>>n;
		int arr[26];
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			for(int i=0;i<s.length();i++)
			{
				arr[s[i]-'a']++;
			}

		}
		for(int j=0;j<26;j++)
		{
			if(arr[j]%n!=0)
			{
				f=1;break;
			}
		}
		if(f)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}	 
	//cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 

