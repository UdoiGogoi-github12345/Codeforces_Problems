#define ONLINE_JUDGE

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define ll long long
#define str string
#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,n) for(ll i=a;i<n;i++)

void solve(){
   str s;
   cin>>s;
   ll cta=0;
   fo(i,0,s.length()){
   	if(s[i]=='a'){
   		cta++;
   	}
   }
   ll kp=(s.length()-cta)/2;
   str tt1;str tt2;
   reverse(s.begin(),s.end());
   fo(i,0,kp){
   	tt1.push_back(s[i]);
   }
   fo(i,kp,s.length()){
   	 tt2.push_back(s[i]);
   }
   reverse(tt1.begin(),tt1.end());
   reverse(tt2.begin(),tt2.end());
   
   string tt3;
   fo(i,0,tt2.length()){
   	if(tt2[i]!='a'){
       tt3.push_back(tt2[i]);
   	}
   }
  
   if(tt3!=tt1){
     cout<<":("<<endl;
     return;
   }
   cout<<tt2<<endl;
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
 