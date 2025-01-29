#include <bits/stdc++.h>
using namespace std;


void sol()
{
    int a,b;
    cin>>a>>b;
    string str;
    cin>>str;
    
    vector<int> pre(a+1,0);
    for(int i=1;i<=a;i++)
    {
        pre[i] = pre[i-1] + (str[i-1] == 'Str' ? 1 : 0);
    }
    
    int N=0;
    if(a>=2){
        for(int t =1;t<a;t++)
        {
            int tem = b - pre[t] + t;
            if(tem>N){
                N = tem;
            }
        }
    }
    else
    {
        N = a;
    }
    
    int M_n = a + b - pre[a] - 1;
    int k = (M_n >= max(N,a)) ? M_n : a;
    cout<< k<<endl;
}

int main() {
	// your code goes here
	int q,x,y,z,sw;
	string lav;
	cin>>q;
	while(q--)
	{
	    cin>>x>>y;
	    cin>>lav;
	    sw=0;
	    for(z=0;z<lav.size();z++)
	    {
	        if(lav[z]=='S') sw++;
	    }
	    if(sw>=y)
	    {
	        cout<<x<<endl;
	    }
	    else
	    {
	        cout<<y-sw+x-1<<endl;
	    }
	}

}
