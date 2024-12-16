#include<bits/stdc++.h>
using namespace std;
void possibility_check(int n, string ar)
{
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[ar[i]]++;
    }

    int ans = INT_MAX;
    auto it = mp.begin();
    while(it!=mp.end())
    {
        char val = it->first;
        int cnt = 0;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(ar[i] == ar[j])
            {
                i++;
                j--;
            }
            else if(ar[i] == val)
            {
                i++;
                cnt++;
            }
            else if(ar[j] == val)
            {
                j--;
                cnt++;
            }
            else
            {
                cnt = INT_MAX;
                break;
            }
        }
        ans = min(ans,cnt);
        it++;
    }
    if(ans == INT_MAX) cout << - 1 << endl;
    else cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string ar;
        cin >> ar;
        possibility_check(n,ar);
    }
    return 0;
}
