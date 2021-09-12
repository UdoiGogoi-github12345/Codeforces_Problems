
#define ONLINE_JUDGE

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define lb lower_bound
#define ub upper_bound

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


vector<ll> pp;
void primeFactors(int n)  
{  
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        pp.pb(2);
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            pp.pb(i);
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        pp.pb(n);
}  
void solve(){
  ll n,k;
  cin>>n>>k;
  primeFactors(n);
  if(pp.size()>k){
    fo(i,0,k-1){
    	cout<<pp[i]<<" ";
    }
    ll prod=1;
    fo(i,k-1,pp.size()){
      prod*=pp[i];
    }
    cout<<prod<<" ";
  }
  else if(pp.size()==k){
  	fo(i,0,k){
  		cout<<pp[i]<<" ";
  	}
  }
  else{
  	cout<<-1<<nl;
  }
  
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
 