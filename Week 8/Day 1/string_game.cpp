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
        string ar;
        cin >> ar;

        int cnt = 0;

        bool flag = true;
        
        for(int i=0;i<n-1;i++)
        {
            if(ar[i] != ar[i+1]) cnt++; i++;
        }  
            if(cnt%2==0)
            {
                cout << "Ramos" << endl;
            }
            else cout << "Zlatan" << endl;  
    }
}