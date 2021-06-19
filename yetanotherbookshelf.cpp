#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            int count=0;
            int a[n];
            for(int i=1;i<=n;i++)
            {
                cin>>a[i];
            }
            int j=1;
            int k=n;
            while(a[j]!=1&&j<=n){
                j++;
            }
            while(a[k]!=1&&k>=0){
                k--;
            }
            for(int l=j;l<=k;l++)
            {
                if(a[l]==0)
                    count++;
            }
        cout<<count<<"\n";
    }
    return 0;
}
