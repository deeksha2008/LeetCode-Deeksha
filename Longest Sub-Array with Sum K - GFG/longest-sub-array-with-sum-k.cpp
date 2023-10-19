//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int nums[],  int N, int k) 
    { 
        map<long long,int> presum;
long long sum=0;
int maxlength=0;

for(int i=0;i<N;i++)
{
    sum+=nums[i];
    if(sum==k)
    maxlength=max(maxlength,i+1);

    long long rem=sum-k;
    if(presum.find(rem)!=presum.end())
    {
    int length=i-presum[rem];
    maxlength=max(maxlength,length);
    }
   if(presum.find(sum)==presum.end())
   {
       presum[sum]=i;
   }
}
return maxlength;
        // Complete the function
}

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends