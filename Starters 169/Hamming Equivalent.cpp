#include <bits/stdc++.h>
using namespace std;

int cnt(int n)
	{
	    int Cnt=0;
	    while(n)
	    {
	        Cnt+=(n & 1);
	        n>>=1;
	    }
	   return Cnt;
	}
	
bool isSorted(vector<int> & vc)
{
    map<int,vector<int>> bit;
    for(int i=0;i<vc.size();i++)
    {
        int bitss = cnt(vc[i]);
        bit[bitss].push_back(i);
    }
    
    for(auto & [bitss,ind] : bit)
    {
        vector<int> val;
        for(int i:ind)
        {
            val.push_back(vc[i]);
        }
        
        sort(val.begin(),val.end());
        
        for(int i=0;i<ind.size();++i)
        {
            vc[ind[i]]=val[i];
        }
    }
    
    for(int i=1;i<vc.size();++i)
    {
        if(vc[i]<vc[i-1])
        {
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    int N;
	    cin>>N;
	    vector<int> vc(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>vc[i];
	    }
	    cout<<(isSorted(vc) ? "YES" : "NO") << endl;
	}
   
return 0;
}
