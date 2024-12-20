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
        int cnt =  0;
        bool flag = true;
        for(int i=n-2;i>=0;i--)
        {
            while(ar[i]>=ar[i+1]&& ar[i]>0)
                {
                    ar[i]/=2;
                    cnt++;
                }
            if(ar[i] == ar[i+1])
            {
                cout << -1 << endl;
                flag = false;
                break;
            }
        }
        if(flag)
            cout << cnt << endl;
    }
    return 0;
}