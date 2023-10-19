class Solution {
public:
    int majorityElement(vector<int>& v) {
         int candidate=0,count=0;
        
        for(int i=0;i<v.size();i++)
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
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==candidate)
            count2++;
        }
        if(count2>(v.size()/2))
        return candidate;
        
       else
       return -1;
    }
};