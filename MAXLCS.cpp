#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int b;
        cin>>b;
        string str;
        cin>>str;
        string str1=str;
        reverse(str.begin(),str.end());
        vector<vector<int>>x(b+1,vector<int>(b+1,0));
        for(int i=1;i<=b;i++)
        {
            for(int j=1;j<=b;j++)
            {
                if(str1[i-1]==str[j-1])
                x[i][j]=1+x[i-1][j-1];
                else
                x[i][j]=max(x[i-1][j],x[i][j-1]);
            }
        }
        cout<<x[b][b]/2<<endl;
    }
    return 0;
}