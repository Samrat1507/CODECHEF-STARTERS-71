#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,X,Y;
	cin>>n;
	while(n--)
	{
	    cin>>X>>Y;
	    if(X<=(10*Y))
	    cout<<"NO\n";
	    else
	    cout<<"YES\n";
	}
	return 0;
}
