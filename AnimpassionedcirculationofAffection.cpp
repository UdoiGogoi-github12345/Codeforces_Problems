#define ONLINE_JUDGE
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define ll long long
#define ld long double

#define str string
#define UdoiGogoi ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)
#define forr(i,n,a) for(ll i=n;i>=a;i--)

#define nl '\n'


 /*Explanation:
 We can use two pointers to denote the start and the end of the largest Koyomity. 
 Using the idea of a sliding window, we keep a “count” (denoted by changed, current amount allowed to move) and
  a maximum count (greatest). If the right pointer is not favorite char, or the right pointer value 
  needs to be replaced, we subtract one from changed. However, when we are stuck 
  (aka changed is < 0, or the right cannot move any longer) we need to move the left pointer. 
  Thus, if the left side was replaced (or was not originally favoriteChar), we add one to change and 
  increment the left pointer.
 */

/*Normally for wo pointers we need to write two conditions: 
  a>the condition for which your right pointer will go on moving forward
  b>the condition for which you will be stuck at the rightmost pointer position and you wont be able to move further
   and start the left pointer move:I call it the case of disappointment*/


void solve(){
  ll n,q;
  str s;
  cin>>n>>s>>q;
  while(q--){
  	ll ans=0,l=0,r=0;
  	ll x;char c;
  	cin>>x>>c;  //sliding window with two pointer
    while(r<s.length()){
        if(x>=0){
        	if(s[r]!=c){
        		x--;
        	}
        	r++;
        }
        if(x<0){
        	if(s[l]!=c){
        		x++;
        	}
        	l++;
        }
        ans=max(ans,r-l);
    }
    cout<<ans<<nl;
  }
}
int main()
{
	UdoiGogoi
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	 ll t=1;
	 //cin>>t;
	 while(t--){
	 	   solve();
	   }
}
 