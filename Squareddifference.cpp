#include<bits/stdc++.h>
using namespace std;
int64_t t,i,a,b,p;
int main(){
for(cin>>t;t--;){
	cin>>a>>b;
	for(p=1,i=2;i<sqrt(a+b)+1;i++)
		p=p&((a+b)%i>0);
	cout<<(a-b==1&&p?"YES":"NO")<<endl;
}
}