		/********Start of Template*******/

#define ONLINE_JUDGE
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define db(x)                   cout<<#x<<"="<<x<<'\n'
#define db2(x,y)                 cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define ll long long
#define ld long double
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define ull unsigned long long
#define setbits(x)      __builtin_popcountll(x)
#define str string
#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define forr(i,n,a) for(ll i=n;i>=a;i--)
#define cases   long long t;cin>>t;while(t--)
#define eb emplace_back
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define ff first
#define ss second
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define sp(x,y)         fixed<<setprecision(y)<<x
#define nl '\n'
#define sz(x) ((int)(x).size())
// const int MOD = (int) 998244353 ;
const ll INF = 1e18 ;
#define printall(a) fo(i,0,a.size()) cout<<a[i]<<" "; cout<<endl;
 
 
 
typedef vector<int> vi;
typedef map<ll, ll> mll;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef map<ll, int> mli;
typedef map<char, int> mci;
typedef vector<long long> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef vector<vector<int> > vv;
 
const ll N = 2e5 + 7;
const int mod = 1e9 + 7;
 
template <class T> T chmax(T &a, const T &b) { return a = max(a, b); }
template <class T> T chmin(T &a, const T &b) { return a = min(a, b); }

/*bool cmp(const pair<ll, ll>& a, const pair<ll, ll>& b)
{
 
	return a.ff < b.ff;
}*/

 /***************End of Template****************/
 


void solve(){
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  string s;
  cin>>s;  //rps
  map<char,int> m;
  for(int i=0;i<s.size();i++){
  	m[s[i]]++;
  } 

  string ans;
  int battles=min(m['R'],b)+min(m['S'],a)+min(m['P'],c);
  if(battles<ceil(n/2.0)){
  	cout<<"NO"<<nl;
  }
  else{
  	cout<<"YES"<<nl;
  	for(int i=0;i<s.length();i++){
  		if(s[i]=='R' and b>0){
           ans+='P';
           b--;
  		}
  		else if(s[i]=='P' and c>0){
  			ans+='S';
  			c--;
  		}
  		else if(s[i]=='S' and a>0){
            ans+='R';
  			a--;
  		}
  		else{
  			ans+='_';
  		}
  	}
     for(int i=0;i<n;i++){
       if(ans[i]!='_'){
       	continue;
       }
       else if(a){
          ans[i]='R';
          a--;
       }
       else if(b){
       	ans[i]='P';
       	b--;
       }
       else if(c){
       	ans[i]='S';
       	c--;
       }
     }
     cout<<ans<<nl;
  }

  /*for(int i=0;i<s.length();i++){
  	if(s[i]=='R'){
  		if(b>0){
  			b--;
  			ans+='P';
  			battles++;
  		}
  		else{
  			ans+=s[i];
  		}
  	}
  	else if(s[i]=='P'){
  		if(c>0){
  			c--;
  			ans+='S';
  			battles++;
  		}
  		else{
  			ans+=s[i];
  		}
  	}
  	else if(s[i]=='S'){
  		if(a>0){
  			a--;
  			ans+='R';
  			battles++;
  		}
  		else{
  			ans+=s[i];
  		}
  	}
  }
  if(battles>=(ceil(n/2.0))){
    cout<<"YES"<<nl;
    cout<<ans<<nl;
  }
  else{
  	cout<<"NO"<<nl;
  }*/
 
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
 