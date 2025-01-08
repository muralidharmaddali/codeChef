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
	    vector<int> vc(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>vc[i];
	    }
	    int maxi = INT_MIN;
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    {
	        if(vc[i]>maxi)
	        {
	           v[i] = 1;
	           maxi = vc[i];
	        }
	        else
	        {
	            v[i] = 0;
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
return 0;
}
