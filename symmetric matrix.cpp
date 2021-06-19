#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    string ans="NO";
    int a,b,c,d;
     for(int i=0;i<n;i++)
     {
            cin>>a>>b>>c>>d;
            if(b==c)
                ans="YES";
      }
      if(m%2!=0)
    {
        ans="NO";
    }
     cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
            solve();
          }
}
