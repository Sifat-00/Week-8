#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }

        if(a == b) 
        {

            cout << "YES" << endl;
            continue;
        }

        vector<int> ans;

        bool flag= true;

        for(int i=0;i<n;i++)
        {
            ans.push_back(a[i] - b[i]);
        }
        int val = INT_MIN;
        for(int i=0;i<n;i++)
        {
            val = max(val,ans[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(val>=0)
            {
                
                if(ans[i]==val)
                {
                    flag = true;
                }
                else if(ans[i]<val && b[i]==0)
                {
                    flag = true;
                } 
                else
                {
                     flag = false;
                     break;
                }
            }
            else 
            {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
