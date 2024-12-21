#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int ar[n+1];
        for(int i=1;i<=n;i++)
        {
            cin >> ar[i];
        }
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            ans.push_back(ar[i] - i);
        }
        int cnt = 0;
        for(auto x : ans)
        {
            if(x%k != 0)
            {
                cnt++;
            }
        }
        if(cnt == 0) cout << 0 << endl;
        else if(cnt == 2) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}