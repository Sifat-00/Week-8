#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        
        int mn = INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            int mx = INT_MIN;
            if(i>0)
            {
                mx = max(mx,abs(ar[i]- ar[i-1]));
            }
            if(i< n-1)
            {
                mx = max(mx,abs(ar[i]- ar[i+1]));
            }
            mn = min(mn,mx);
        }
        
        cout << mn << endl;
    }
}