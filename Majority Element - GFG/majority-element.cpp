//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
   
    int majorityElement(int v[], int size)
    {
      
    // map<int, int> mpp;
    // //storing the elements with its occurnce:
    // for (int i = 0; i < size; i++) {
    //     mpp[v[i]]++;
    // }
    // //searching for the majority element:
    // for (auto it : mpp) {
    //     if (it.second > (size/ 2)) {
    //         return it.first;
    //     }
    // }
    // return -1;
        
        int candidate=0,count=0;
        for(int i=0;i<size;i++)
        {
            if(count==0)
            {
                candidate=v[i];
            }
            if(candidate==v[i])
            {
                count++;
            }
            else count--;
        }
        //to verify
        int count2=0;
        for(int i=0;i<size;i++)
        {
            if(v[i]==candidate)
            count2++;
        }
        if(count2>(size/2))
        return candidate;
        
       else
       return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends