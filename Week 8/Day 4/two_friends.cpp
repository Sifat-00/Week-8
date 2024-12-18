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
        int ar[n+1];
        for(int i=1;i<=n;i++)
        {
            cin >> ar[i];
        }
        int cnt = 3;
        for(int i=1;i<=n;i++)
        {
            if(ar[ar[i]] == i)
            {
                cnt=2;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}