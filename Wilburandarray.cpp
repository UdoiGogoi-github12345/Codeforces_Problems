
#define ONLINE_JUDGE

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define ll long long
#define ld long double


#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define eb emplace_back
#define pq priority_queue
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define ff first
#define ss second
#define pb push_back


#define nl '\n'

typedef map<ll, ll> mll;
typedef map<char, int> mci;
typedef vector<long long> vll;
typedef pair<ll, ll> pll;
typedef map<pll, int> mpll;
typedef vector<pll> vpll;
typedef vector<vector<ll> > vv;
 
const ll N = 2e5 + 7;
const ll mod = 1e9 + 7;
const ll INF = 9223372036854775807 ;
 



void solve(){
   ll n;cin>>n;
   ll a[n];
   fo(i,0,n){
   	cin>>a[i];
   }
   ll sum=0;
   fo(i,0,n){
   	if(i==0){
   		sum+=abs(a[i]);
   	}else{
       	sum+=abs(a[i]-a[i-1]);
   	}
   
   }
   cout<<sum<<nl;
}
int main()
{
	dairymilk6969
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 ll t=1;
	 //cin>>t;
	 while(t--){
	 	   solve();
	   }
}
 
 