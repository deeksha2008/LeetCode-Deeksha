class Solution {
public:
    int maxProfit(vector<int>& arr) {
          int minprice=INT_MAX;
        int profit=0;
    for(int i=0;i<arr.size();i++)
    {
      
        if(arr[i]<minprice)
        {
            minprice=arr[i];
        }
        else if(arr[i]-minprice>profit)
        {
            profit=max(profit,arr[i]-minprice);
        }
    }
    return profit;  
    }
};