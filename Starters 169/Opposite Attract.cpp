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
	    string str;
	    cin>>str;
	    
	    string tem;
	    for(char ch:str)
	    {
	        tem+=(ch=='0'?'1':'0');
	    }
	    cout<<tem<<endl;
	}
	return 0;

}
