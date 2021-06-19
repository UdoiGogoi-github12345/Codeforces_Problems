#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int n1;
    int n2;
};
int main()
{
    //include these 2 lines to handle runtime error
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    
    struct node v[n]; //this struct node array will store the pairs.
    
    for(int i=1;i<=n/2;i++)
    {
       v[i-1].n1=i;
       v[i-1].n2=n/2+i;  //pairing the numbers with others having difference of n/2
    }
    for(int i=0;i<n/2;i++)
    {
        if(s[v[i].n1-1]!=s[v[i].n2-1])  //checking whether persons with different handedness  are paired together
        {
            if(s[v[i].n1-1]=='R' && s[v[i].n2-1]=='L')//if the order of pairing violates the 2nd constriant reverse the order of printing
            {
                cout<<v[i].n2<<" "<<v[i].n1<<endl;
            }
            else
            {
                cout<<v[i].n1<<" "<<v[i].n2<<endl;  //else print normally
            }
        }
        else
        {
            cout<<v[i].n1<<" "<<v[i].n2<<endl;//if the pairs are similar handed ,print them
        }
    }
    //cout<<"0"<<endl;
    return 0;
}