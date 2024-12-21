#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<string> v;

        map<string,int> mp;

        map<char,int> mp1,mp2;

        for(int i=0;i<n;i++)
        {
            string st;
            cin >> st;
            v.push_back(st);
            mp[st]++;
            mp1[st[0]]++;
            mp2[st[1]]++;
        }

        long long ans = 0;
        for(string x:v)
        {
            long long a = mp1[x[0]] - mp[x];

            ans+=a;
            x = mp2[x[1]] - mp[x];

            ans+=a;

            if(mp[x]>0) mp[x]--;
            if(mp1[x[0]]>0) mp1[x[0]]--;
            if(mp2[x[1]]>0) mp2[x[1]]--;
        }
        cout << ans << endl;
    }
    return 0;
}