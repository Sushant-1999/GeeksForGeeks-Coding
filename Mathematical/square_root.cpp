// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int isPerfectSquare(long long int n){
        // code here.
        //find square root of a number
        long long int i, j, temp;
        temp = sqrt(n);
        if((temp * temp) == n) {
            return 1;
        }
        else {
            return 0;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.isPerfectSquare(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends