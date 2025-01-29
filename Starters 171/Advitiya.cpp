#include <bits/stdc++.h>
using namespace std;

const string ans = "ADVITIYA";

int mindif(const string &str)
{
    int cnt = 0;
    for(int i=0;i<8;++i)
    {
        int pres = str[i] - 'A';
        int res = ans[i] - 'A';
        int diff = (res - pres + 26) % 26;
        cnt+=diff;
    }
    return cnt;
}

int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    string stri;
	    cin>>stri;
	    cout<<mindif(stri)<<endl;
	}
	return 0;
    
}
