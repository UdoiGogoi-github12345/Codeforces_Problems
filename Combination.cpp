
#define ONLINE_JUDGE

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define lb lower_bound
#define ub upper_bound

#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define ff first
#define ss second
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define sp(x,y)         fixed<<setprecision(y)<<x
#define nl '\n'
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
 
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
   ll n;
   cin>>n;
   vpll v;
   fo(i,0,n){
   	ll x,y;
   	cin>>x>>y;
   	v.pb({y,x});
   }
   sort(all(v));
   reverse(all(v));
   ll sum=0;
   ll counter=1;//counter
   for(ll i=0;i<n;i++){
   	sum+=(v[i].ss);
   	counter--;
   	counter+=(v[i].ff);
   	if(counter<=0){
       break;
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
 