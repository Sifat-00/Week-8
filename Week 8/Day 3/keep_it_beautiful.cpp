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

        vector<int>track;
        
        ans.push_back(1);
        track.push_back(ar[0]);

        bool flag = false;

        for(int i=1;i<n;i++)
        {
            if(flag)
            {
                if(ar[i]<track[track.size()-1])
                {
                    ans.push_back(0);
                }
                else
                {
                    if(ar[i]<=track[0])
                {
                    track.push_back(ar[i]);
                    ans.push_back(1);
                }
                else
                {
                    ans.push_back(0);
                }
                }
            }
            else
            {
                if(ar[i]>=track[track.size()-1])
                {
                    track.push_back(ar[i]);
                    ans.push_back(1);
                }
                else if(ar[i]<=track[0])
                {
                    flag = true;
                    track.push_back(ar[i]);
                    ans.push_back(1);
                }
                else
                {
                    ans.push_back(0);
                }
            }
        }

       for(auto x : ans) cout << x ;
       cout << endl;
    }
    return 0;
}
