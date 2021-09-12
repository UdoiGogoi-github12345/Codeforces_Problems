#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define ONLINE_JUDGE

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define db1(x)                cout<<#x<<": "<<x<<"\n"
#define db2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<"\n"
#define db3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<"\n"
#define db4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define fbo(a) find_by_order(a) //will give a-th largest element
#define ook(a) order_of_key(a) //will give no. of elements strictly lesser than a
#define setbits(x)      __builtin_popcountll(x)
#define str string
#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define eb emplace_back
#define pq priority_queue
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define ff first
#define ss second
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define sp(x,y)         fixed<<setprecision(y)<<x
#define nl '\n'
#define sz(x) ((int)(x).size())
 
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
 
template <class T> T chmax(T &a, const T &b) { return a = max(a, b); }
template <class T> T chmin(T &a, const T &b) { return a = min(a, b); }

/*bool cmp(const pair<ll, ll>& a, const pair<ll, ll>& b)
{
 
	return a.ff < b.ff;
}*/

 /***************End of Template****************/
 /***************KEEP CODING*******************/
 


void solve(){
  ll n;
  cin>>n;
  string s;
  cin>>s;
  if(n==1){
  	if(s[0]=='0')
  	  cout<<"No"<<nl;
  	else{
  		cout<<"Yes"<<nl;
  	}
  	return;
  }
  if(n==2){
  	if(s[0]=='0' and s[1]=='0'){
  		cout<<"No"<<nl;
  		return;
  	}
  	if(s[0]=='1' and s[1]=='1'){
  		cout<<"No"<<nl;return;
  	}
  	cout<<"Yes"<<nl;
  	return;
  }
  for(ll i=1;i<=n-2;i++){
  	if(s[i]=='1'){  //occupied
  		if(s[i-1]=='1' or s[i+1]=='1'){
           cout<<"No"<<nl;
           return;
  		}
  	}
  	else{ //unoccupied
       //check if we can place a 1 here
  			if(s[i-1]=='0' and s[i+1]=='0'){ //that means we can place a 1 here and the given one is not optimal 
  				cout<<"No"<<nl;return;
  			}
  	}
  }
  
  //for the last string character
  if(n>=3 and s[n-1]=='0'){
    if(s[n-2]=='0' and s[n-3]=='1'){
    	cout<<"No"<<nl;
    	return;
    }
  }
  //for the first string character
  if(n>=3 and s[0]=='0'){
    if(s[1]=='0' and s[2]=='1'){
    	cout<<"No"<<nl;
    	return;
    }
  }
  cout<<"Yes"<<nl;
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
 