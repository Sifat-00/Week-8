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
        int n,q;
        cin >> n >> q;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        vector<int> sum;

        while(q--)
        {
            int val;
            cin >> val;
            if(sum.empty() || sum.back()> val)
             sum.push_back(val);
        }

        for(int i=0;i<n;i++)
        {
            for(auto val : sum)
            {
                if(ar[i] % (1 << val) == 0)
                {
                    ar[i]+=(1 << (val-1));
                }
            }
        }

            for(int i=0;i<n;i++)
            {
                cout << ar[i] << " ";
            }

        cout << endl;
    }


    return 0;
}
