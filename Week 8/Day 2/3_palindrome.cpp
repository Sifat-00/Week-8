#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 1)
    {
         cout << 'a' << endl;
         return 0;
    }
    string ans = "aa";
    n-=2;
    while(n--)
    {
        if(ans[ans.size()-1] != ans[ans.size()-2])
        {
            ans+=ans[ans.size()-1];
        }
        else if(ans[ans.size()-1] == 'a')
        {
            if(ans[ans.size()-2] == ans[ans.size()-1]) ans+='b';
        }
        else if(ans[ans.size()-1] == 'b')
        {
            if(ans[ans.size()-2] == ans[ans.size()-1]) ans+='a';
        }
    }
    cout << ans << endl;
    return 0;
}
