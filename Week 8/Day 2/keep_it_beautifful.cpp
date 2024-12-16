#include<bits/stdc++.h>
using namespace std;
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
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i];
        vector<int> ans;

        bool flag = true;
        ans.push_back(1);
        vector<int> dq;
        dq.push_back(ar[0]);
        for(int i=1;i<n;i++)
        {
            if(flag && ar[i]>= ar[i-1])
            {
                ans.push_back(1);
                dq.push_back(ar[i]);
            }
            else if(dq[0]>=ar[i])
            {
                flag = false;
                bool track = true;
                int val = dq[0];
                // for(auto x : dq)
                // {
                //     if(x<val && x>ar[i])
                //     {
                //         ans.push_back(0);
                //         track = false;
                //         break;
                //     }
                //     val = x;
                // }
                // if(track)
                // {
                //     ans.push_back(1);
                //     dq.push_back(ar[i]);
                // }
                for(int j=1;j<dq.size();j++)
                {
                    // cout << dq[i]  <<" " << ar[i] << endl;
                    if(dq[j]<dq[j-1] && dq[j]>=ar[i])
                    {
                        //cout << 9 << endl;
                        track = false;
                        ans.push_back(0);
                        break;
                    }
                }
                if(track)
                {
                    ans.push_back(1);
                    dq.push_back(ar[i]);
                }
            }
            
            else
            {
               flag = false;
                ans.push_back(0);
            }
        }
        for(auto x : ans) cout << x;
        cout << endl;
    }
    return 0;
}
