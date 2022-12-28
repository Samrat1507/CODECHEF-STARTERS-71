#include<iostream>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int s=0;
        int ms=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0&&b[i]>0)
            {
                s++;
                ms=max(s,ms);
            }
            else
            {
                s=0;
            }

        }
        cout<<ms<<endl;
    }
}
int main()
{
    solve();
    return 0;
}