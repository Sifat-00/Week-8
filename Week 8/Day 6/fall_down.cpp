#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int row,col;
        cin >> row >> col;
        char ar[row][col];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin >> ar[i][j];
            }
        }
        for(int i=row-1;i>=0;i--)
        {
            for(int j=col-1;j>=0;j--)
            {
                if(ar[i][j] == '*')
                {
                    int lasti,lastj;
                    bool flag = false;
                    int tracki = i;
                    int trackj = j;
                    if(tracki+1 < row && trackj < col && ar[tracki+1][trackj] == '.')
                    {
                        flag = true;
                        ar[tracki][trackj] = '.';
                    }
                    while(tracki < row && trackj < col && ar[tracki][trackj] == '.')
                    {
                        lasti= tracki;
                        lastj = trackj;
                        ar[tracki][trackj] = '.';
                        tracki++;
                        trackj;
                    }
                    if(flag)
                    {
                        ar[lasti][lastj] = '*';
                    }
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout << ar[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}