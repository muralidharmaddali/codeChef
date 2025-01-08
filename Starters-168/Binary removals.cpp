#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int q;
    cin>>q;
    
    while(q--){
        long long n, y, z;
        long long a=0,b=0;
        cin>>n>>y>>z;
        string str;
        cin>>str;
        for(long long i=0;i<n;i++)
        {
            if(str[i]=='1')
            {
                a++;
            }
            else
            {
                b+=a;
            }
        }
        cout<<((b<=y && b%z==0)? 1 :2)<<endl;
    }
    return 0;
}
