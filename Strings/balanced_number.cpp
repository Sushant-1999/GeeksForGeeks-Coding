// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    // code here.
	    int i, j, len, temp, left_sum = 0, right_sum = 0;
	    bool result;
	    len = N.size();
	    for(i = 0; i < (len/2); i++) {
	        temp = N[i] - '0';
	        left_sum = left_sum + temp;
	    }
	    
	    for(i = (len/2)+1; i < len; i++) {
	        temp = N[i] - '0';
	        right_sum = right_sum + temp;
	    }
	    
	    if(left_sum == right_sum) {
	        result = true;
	    }
	    else {
	        result = false;
	    }
	    
	    return result;
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends