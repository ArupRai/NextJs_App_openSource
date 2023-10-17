#include<bits/stdc++.h>
using namespace std;

void subsets(string str,int index=0,string curr=" ")
{
    int n=str.length();
    cout<<curr<<endl;
    if(index==n)return;
    
    subsets(str,index+1,curr+str[index]);
    subsets(str,index+1,curr);
}
int main()
{
    string str="Geeks";
    subsets(str);
    return 0;
}