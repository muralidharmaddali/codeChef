#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    int n;
	    cin>>n;
	    string n1,n2;
	    cin>>n1>>n2;
	    int a=0,b=0;
	    for(int i=0;i<n;i++)
	    {
	        if(n1[i]=='1' && n2[i]=='1')
	        {
	            a++;
	        }
	        else if((n1[i]=='1' && n2[i]=='0') || (n1[i]=='0' && n2[i]=='1'))
	        {
	            b++;
	        }
	    }
	    if(a%2==1 || b>0 )
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}
return 0;
}
