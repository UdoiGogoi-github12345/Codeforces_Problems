#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int k=(x%10);
        int count=0;
        while(x!=0){
                count++;
                x=x/10;
            }
        if(k==1)
        {
            cout<<(count*(count +1))/2<<endl;
        }
        if(k!=1){
            cout<<(10*(k-1))+((count*(count +1))/2)<<endl;
        }

        }
    return 0;
}



