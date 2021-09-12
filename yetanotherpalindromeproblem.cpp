
#define ONLINE_JUDGE

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long


#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)

#define all(a) a.begin(),a.end()

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
  ll n;
  cin>>n;
  ll a[n];
  fo(i,0,n){
  	cin>>a[i];
  }
  if(n==3){
  	if(a[0]==a[2]){
  		cout<<"YES"<<nl;
  	}
  	else{
  		cout<<"NO"<<nl;
  	}
  	return;
  }

  for(ll i=0;i<n;i++){
  	ll f=0;
  	for(ll j=i+1;j<n;j++){
  		if(j-i>=2 and a[j]==a[i]){
  			f=1;
  			break;
  		}
  	}
  	if(f==0){
  		continue;
  	}
  	else{
  		cout<<"YES"<<nl;
  		return;
  	}
  }
  cout<<"NO"<<nl;

  return;
}
int main()
{
	dairymilk6969
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	 ll t;
	 cin>>t;
	 while(t--){
	 	   solve();
	   }
}
 