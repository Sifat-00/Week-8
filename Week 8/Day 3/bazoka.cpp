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
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }

        bool flag = true;
        vector<int> v1,v2;
        
        int pos = -1;

        int i= 0;
        while(true)
        {
            v1.push_back(ar[i]);
            if(ar[i]>ar[i+1])
            {
                pos = i;
                flag= false;
                break;
            }
            i++;
        }
        if(flag)
        {
            cout << "YES" << endl;
            continue;
        }
        for(int i=pos+1;i<n;i++)
        {
            v2.push_back(ar[i]);
        }

        vector<int> ans;
        for(auto x : v2)
        {   
            ans.push_back(x);
        }
        for(auto x : v1)
        {   
            ans.push_back(x);
        }

        bool ok = true;

        for(int i=1;i<n;i++)
        {
            if(ans[i]>=ans[i-1]) continue;
            else 
            {
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout  << "NO" << endl;
    }
    return 0;
}