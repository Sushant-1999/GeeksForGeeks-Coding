// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here.
        vector<string>res;
        char ch;
        int i, j, len1, len2;
        len1 = string1.size();
        len2 = string2.size();
        
        for(i = 0; i < len1; i++) {
            ch = string1[i];
            if(string2.find(ch) == string::npos) {
                res.push_back(string1[i])
            }
        }
        
        return res;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}
  // } Driver Code Ends