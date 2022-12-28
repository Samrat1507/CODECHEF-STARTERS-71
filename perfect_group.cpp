#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n,A,B,C;
    cin>>n;
    while(n--)
    {
        cin>>A>>B>>C;
        if(A==(B+C))
        cout<<"YES\n";
        else if(B==(A+C))
        cout<<"YES\n";
        else if(C==(A+B))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
	return 0;
}
