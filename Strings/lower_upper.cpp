// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        // your code here.
        int i, j, temp, res;
        if(s[0] >= 65 && s[0] <= 90) {
            res = 1;
        }
        else {
            res = 0;
        }
        temp = 0;
        if(res == 1) {
            transform(s.begin(), s.end(), s.begin(), ::toupper);

        }
        else if(res == 0) {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
        }
        
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}  // } Driver Code Ends