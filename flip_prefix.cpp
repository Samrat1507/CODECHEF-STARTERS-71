#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b,ans=INT_MAX;
    cin>>a>>b;
    string s;
    cin>>s;
    int arr[a];
    int count=0;
    for(int i=1;i<a;i++)
    {
        if(s[i-1]!=s[i])
        {
            count++;
            arr[i]=count;
            
        }
        else
        arr[i]=count;
    }
    arr[0]=0;
    for(int i=a-1;i>=0;i--)
    {
        if((i-(b-1))<0)
        break;
        int check=arr[i]-arr[i-(b-1)];
        if(s[i]=='0')
        check++;
        ans=min(ans,check);
    }
    return ans;
}

string longestcommonprefix(string ar[],int n)
{
    if(n==0)
    return " ";
    if(n==1)
    return ar[0];
    sort(ar,ar+n);
    int en=min(ar[0].size(),ar[n-1].size());
    string first=ar[0],last=ar[n-1];
    int i=0;
    while(i<en&&first[i]==last[i])
    {
        i++;
    }
    string pre=first.substr(0,i);
    return pre;
}

int main(){
    int tits;
    cin>>tits;
    while(tits--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}