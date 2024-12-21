#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<char> ans;
        bool flag = false;
        char v[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin >> v[i][j];
            }
        }
        for(int i=0;i<8;i++)
        {
            bool track = true;
            for(int j=0;j<8;j++)
            {
                if(v[i][j]!='R')
                {
                    track = false;
                }
            }
            if(track) flag = true;
        }
        if(flag) cout << 'R' << endl;
        else cout << 'B' << endl;
    }
    return 0;
}