#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while ((t--))
    {
        string ar;
        cin >> ar;
        int one = 0;
        int zero = 0;

        for(int i=0;i<ar.size();i++)
        {
            if(ar[i] =='0') zero++;
            else one++;
        }
        for(auto x : ar)
        {
            if(x == '1' && zero>0) zero--;
            else if(x == '0' && one >0) one--;
            else break;

        }
        cout << one+ zero << endl;
    }
    
    return 0;
}